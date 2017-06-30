using UnityEngine;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using Owlies.Core;

public enum ConnectionState
{
	NotConnected,
	AttemptingConnect,
	Connected
}

public class TCPClient : Singleton<TCPClient> {

	public APIManager api;
	public ConnectionState connectState;
	Socket m_clientSocket;
	byte[] m_readBuffer;

	private TCPClient()
	{
		connectState = ConnectionState.NotConnected;
		m_readBuffer = new byte[1024];
	}

	public void StartConnect(string ip = "127.0.0.1", int port = 8888)
	{
		m_clientSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		try
		{
			connectState = ConnectionState.AttemptingConnect;
			System.IAsyncResult result = m_clientSocket.BeginConnect(ip, port, EndConnect, null);
			bool connectSuccess = result.AsyncWaitHandle.WaitOne(System.TimeSpan.FromSeconds(10));
			if (!connectSuccess)
			{
				Debug.LogError(string.Format("Client unable to connect. Failed"));
                CloseConnection();

            }
		}
		catch (System.Exception ex)
		{
			connectState = ConnectionState.NotConnected;
			Debug.LogError(string.Format("Client exception on beginconnect: {0}", ex.Message));
		}

	}

	void EndConnect(System.IAsyncResult iar)
	{
		m_clientSocket.EndConnect(iar);
		m_clientSocket.NoDelay = true;
		connectState = ConnectionState.Connected;
		Debug.Log("Client connected");
		BeginReceiveData();
	}

	void OnDestroy()
	{
		if (m_clientSocket != null)
		{
			m_clientSocket.Close();
			m_clientSocket = null;
		}
	}

	void BeginReceiveData()
	{
		m_clientSocket.BeginReceive(m_readBuffer, 0, m_readBuffer.Length, SocketFlags.None, EndReceiveData, null);
	}

	void EndReceiveData(System.IAsyncResult iar)
	{
		int numBytesReceived = m_clientSocket.EndReceive(iar);
		ProcessData(numBytesReceived);
		BeginReceiveData();
	}

	void ProcessData(int numBytesRecv)
	{
		string temp = CompileBytesIntoString(m_readBuffer, numBytesRecv);

		Debug.Log(string.Format("Client recv: '{0}'", temp));
		byte[] replyMsg = new byte[m_readBuffer.Length];
		System.Buffer.BlockCopy(m_readBuffer, 0, replyMsg, 0, numBytesRecv);

		api.ProcessData(m_readBuffer, numBytesRecv);
	}

	public void SendMessageToServer(byte[] msgArray, int len)
	{
		if(connectState == ConnectionState.Connected)
		{
			string temp = CompileBytesIntoString(msgArray, len);
			Debug.Log(string.Format("tcp Client sending: len: {1} '{0}'", temp, len));
			m_clientSocket.BeginSend(msgArray, 0, len, SocketFlags.None, EndSend, m_clientSocket);
		}
	}

	void EndSend(System.IAsyncResult iar)
	{
		m_clientSocket.EndSend(iar);
		byte[] msg = (iar.AsyncState as byte[]);
		string temp = CompileBytesIntoString(msg, msg.Length);
		Debug.Log(string.Format("Client sent: '{0}'", temp));
	}

	public void CloseConnection()
	{
		m_clientSocket.Close();
		connectState = ConnectionState.NotConnected;
	}

	public static string CompileBytesIntoString(byte[] msg, int len = -1)
	{
		string temp = "";
		int count = len;
		if (count < 1)
		{
			count = msg.Length;
		}
		for (int i = 0; i < count; i++)
		{
			temp += string.Format("{0} ", msg[i]);
		}
		return temp;
	}
}