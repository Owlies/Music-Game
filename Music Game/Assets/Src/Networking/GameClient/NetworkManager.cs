using UnityEngine;
using System;
using System.IO;
using System.Net.Sockets;
using System.Threading;
using System.Collections.Generic;
using Sproto;
using Owlies.Core;

public delegate void PacketHandle(int msgid, object msgpara);
public class NetworkManager
{
    private TcpClient mClient;
    private NetworkStream mStream;

    private static NetworkManager instance;

    private Thread mRecvThread;
    private Thread mSendThread;
    private bool mThreadRunning;
  
    private const int BUFF_SIZE = 1024;
	private const int RECEIVE_BUFFER_SIZE = 0xFFFF;
    private CircularBuffer<Protocol> mSendBuffer;
    private CircularBuffer<Protocol> mRecvBuffer;
    public Dictionary<int, PacketHadleInfo> _packetHandleDic = new Dictionary<int, PacketHadleInfo>();

    private NetworkManager()
    {
        mSendBuffer = new CircularBuffer<Protocol>(BUFF_SIZE);
        mRecvBuffer = new CircularBuffer<Protocol>(BUFF_SIZE);
    }

    public static NetworkManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = new NetworkManager();
            }

            return instance;
        }        
    }

    public struct PacketHadleInfo
    {
        public PacketHandle packetHandle;
        public int interstResult;

        public PacketHadleInfo(PacketHandle handle, int interest)
        {
            packetHandle = handle;
            interstResult = interest;
        }
    }

    public bool Connect(string ip, int port)
    {
        try
        {
            mClient = new TcpClient(ip, port);
            mStream = mClient.GetStream();
            
            return true;
        }
        catch
        {
            return false;
        }
    }

    public void StartNetThread()
    {
        mThreadRunning = true;

        mSendThread = new Thread(SendFunc);
        mSendThread.Start();

        mRecvThread = new Thread(RecvFunc);
        mRecvThread.Start();
    }

    public void Disconnect()
    {
        mStream.Close();
        mClient.Close();

        mThreadRunning = false;
        mRecvThread.Join(500);
        mSendThread.Join(500);
    }

    public void Send(int msgno, SprotoTypeBase obj, eMessageRequestType messageType)
    {
        MemoryStream stream = new MemoryStream(ConnectionManager.Instance.serialize(obj, messageType));
        Protocol protocol = new Protocol();
        protocol.msgno = msgno;
        protocol.stream = stream;
        mSendBuffer.PushBack(protocol);
    }

    public Protocol GetRecvMessage()
    {
        if(mRecvBuffer.IsEmpty)
        {
            return null;
        }
        Protocol protocol = mRecvBuffer.Front();
        mRecvBuffer.PopFront();
        return protocol;
    }

    private void RecvFunc()
    {
        byte[] buf = new byte[RECEIVE_BUFFER_SIZE];
        while (mThreadRunning)
        {
            int len = mStream.Read(buf, 0, buf.Length);
            if (len >= 6)
            {
                short size = (short)(buf[0] << 8 | buf[1]);
                int msgno = (int)(buf[2] << 24 | buf[3] << 16 | buf[4] << 8 | buf[5]);
                Debug.Log("recv msg: " + size + ", " + msgno);
                //int module = msgno >> 16;
                //int opcode = msgno & 0x0000FFFF;

                MemoryStream stream = new MemoryStream(buf, 6, len - 6);
                Protocol protocol = new Protocol();
                protocol.msgno = msgno;
                protocol.stream = stream;

                mRecvBuffer.PushBack(protocol);
            }         
        }        
    }  
    
    private void SendFunc()
    {
        while(mThreadRunning)
        {
            if(!mSendBuffer.IsEmpty)
            {
                Protocol protocol = mSendBuffer.Front();
                Debug.Log("send msg: " + protocol.msgno);
                SendMessageToServer(protocol.msgno, protocol.stream);
                mSendBuffer.PopFront();
            }
        }
    }      

    private void SendMessageToServer(int msgno, MemoryStream stream)
    {
        //总长度=数据包长度所占字节+消息号长度+消息体长度
        byte[] msgBody = stream.ToArray();
        short msgBodySize = Convert.ToInt16(msgBody.Length);
        int pkgSize = 2 + 4 + msgBodySize;
        byte[] msgByte = new byte[pkgSize];

        int avaliableSize = pkgSize - 2;
        msgByte[0] = (byte)(avaliableSize >> 8);
        msgByte[1] = (byte)(avaliableSize);

        msgByte[2] = (byte)(msgno >> 24);
        msgByte[3] = (byte)(msgno >> 16);
        msgByte[4] = (byte)(msgno >> 8);
        msgByte[5] = (byte)(msgno);

		Debug.Log("pkgSize " + pkgSize);

		System.Buffer.BlockCopy(msgBody, 0, msgByte, 6, msgBodySize);

        mStream.Write(msgByte, 0, msgByte.Length);
        mStream.Flush();
    }

    public void RegisterProtoHandler(int msgID, PacketHandle handler, int interestResult = -1)
    {
        if (_packetHandleDic.ContainsKey(msgID))
        {

            Debug.Log("Already register msg " + msgID + " handler");
            return;
        }

        PacketHadleInfo info = new PacketHadleInfo(handler, interestResult);
        _packetHandleDic.Add(msgID, info);
    }
}
