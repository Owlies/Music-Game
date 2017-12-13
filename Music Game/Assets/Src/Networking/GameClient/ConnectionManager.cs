using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Sproto;
using SprotoType;

namespace Owlies.Core {
    public enum eMessageRequestType {
        ChangeEvent = 1, // No Server Response
        ApiCall = 2, // Server Response
    }

    public class ConnectionManager : Singleton<ConnectionManager> {
        void Awake() {
            DontDestroyOnLoad(transform.gameObject);
        }

        public byte[] serialize(SprotoTypeBase sprotoObject, eMessageRequestType messageType) {
            string messageName = sprotoObject.GetType().Name;
            int messageNameLen = messageName.Length + 1;
            byte [] encodedMessage = sprotoObject.encode();
            byte [] messageNameBytes = Encoding.ASCII.GetBytes(messageName.ToCharArray());
            int totalSize = 3 + messageNameLen + encodedMessage.Length;
            byte [] sendBuffer = new byte[totalSize];

            sendBuffer[0] = (byte)messageType;
            sendBuffer[1] = (byte)(messageNameLen >> 8);
            sendBuffer[2] = (byte)(messageNameLen);
            
            System.Buffer.BlockCopy(messageNameBytes, 0, sendBuffer, 3, messageName.Length);
            // Append an extra '\0'
            sendBuffer[3 + messageName.Length] = 0;
            System.Buffer.BlockCopy(encodedMessage, 0, sendBuffer, 4 + messageName.Length, encodedMessage.Length);

            return sendBuffer;
        }

        public SprotoTypeBase deserialize(byte[] package, int packageSize) {
            int messageNameSize = package[0] << 8 | package[1];
     
            char [] chars = new char[messageNameSize];
            for(int i = 0; i < messageNameSize; ++i) {
                chars[i] = (char)package[i + 2];
            }
            string messageName = new string(chars);
      
            int messageSize = packageSize - 2 - messageNameSize;
            byte [] message = new byte[messageSize];
            Array.Copy(package, 2 + messageNameSize, message, 0, messageSize);

            // Move this to a hash map
            if (messageName == "Person") {
                Person person = new Person(message);
                return person;
            } else if (messageName == "LoginResponse") {
                LoginResponse response = new LoginResponse(message);
                return response;
            }

            return null;
        }
        
    }
}