using UnityEngine;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

public class MessageDispatcher
{
    private static MessageDispatcher instance = null;

    public static MessageDispatcher Instance
    {
        get
        {
            if(instance == null)
            {
                instance = new MessageDispatcher();
            }
            return instance;
        }
    }

    public void DispatchMessage()
    {
        Protocol protocol = NetworkManager.Instance.GetRecvMessage();
        if (protocol == null)
        {
            return;
        }

        MemoryStream stream = protocol.stream;
        int msgno = protocol.msgno;//消息号
        if(NetworkManager.Instance._packetHandleDic.ContainsKey(msgno))
        {
            //Type type = MsgIDDef.Instance().GetMsgType(msgno);
            //object obj = Serializer.NonGeneric.Deserialize(type, stream);
            //NetworkManager.PacketHadleInfo info = NetworkManager.Instance._packetHandleDic[msgno];
            //info.packetHandle(msgno,obj);
        }

    }
}

