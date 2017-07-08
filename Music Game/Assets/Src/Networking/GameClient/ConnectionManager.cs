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
        private int session;
        public byte[] sendBuffer;

        public int sendBufferSize;
        private const int MAX_BUFFER_SIZE = 1 << 16;

        void Start() {
            
        }

        ConnectionManager() {
            this.session = 300;
            this.sendBuffer = new byte[MAX_BUFFER_SIZE];
        }

        public void serialize(SprotoTypeBase sprotoObject, eMessageRequestType messageType) {
            string messageName = sprotoObject.GetType().Name;
            int totalSize = 3 + messageName.Length;

            this.sendBuffer[0] = (byte)messageType;

            this.sendBuffer[1] = (byte)(messageName.Length >> 8);
            this.sendBuffer[2] = (byte)(messageName.Length);

            byte [] messageNameBytes = Encoding.ASCII.GetBytes(messageName.ToCharArray());
            System.Buffer.BlockCopy(messageNameBytes, 0, this.sendBuffer, 3, messageName.Length);

            byte [] encodedMessage = sprotoObject.encode();

            System.Buffer.BlockCopy(encodedMessage, 0, this.sendBuffer, totalSize, encodedMessage.Length);
            totalSize += encodedMessage.Length;

            this.sendBufferSize = totalSize + 6;
        }

        public SprotoTypeBase deserialize(byte[] package, int packageSize) {
            int session = package[0] << 24 | package[1] << 16 | package[2] << 8 | package[3];
            int messageNameSize = package[4] << 8 | package[5];
            char [] chars = new char[messageNameSize];
            for(int i = 0; i < messageNameSize; ++i) {
                chars[i] = (char)package[i + 6];
            }
            string messageName = new string(chars);
            int messageSize = packageSize - 6 - messageNameSize;
            byte [] message = new byte[messageSize];
            Array.Copy(package, 6 + messageNameSize, message, 0, messageSize);
            if (messageName == "Person") {
                Person person = new Person(message);
                return person;
            }

            return null;
        }
        
    }
}