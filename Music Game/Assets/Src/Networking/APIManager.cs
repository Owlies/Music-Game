using UnityEngine;
using GameSocket;
using System;
using Owlies.Core;
using Sproto;
using SprotoType;

public class APIManager : MonoBehaviour {
    private SocketClient socketClient;
    byte[] dataToSend;
    NetworkRequest pendingRequest;

    // TODO(Huayu): Move to Config
    private String serverIpAddress = "127.0.0.1";
	private int port = 8888;

    private void tryConnect() {
        if (socketClient == null) {
            socketClient = new SocketClient();
        }

        if (!socketClient.isConnected()) {
            Debug.Log("Connecting to " + serverIpAddress + ":" + port);
            socketClient.CreateConnection(serverIpAddress, port);
        }
    }

    private LoginRequest dummyLoginRequest() {
        LoginRequest loginRequest = new LoginRequest();
        loginRequest.client_app_name = "MUSIC_RUN";
        loginRequest.client_version = "1.0";
        loginRequest.device_identifier = "test_device_123456";
        loginRequest.timestamp = DateTime.UtcNow.ToLongTimeString();
        loginRequest.user_id = "1";
        loginRequest.user_account = "1234567";
        return loginRequest;
    }

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
    void Start(){
        tryConnect();
        LoginRequest loginRequest = dummyLoginRequest();
        
        ConnectionManager.Instance.serialize(loginRequest, eMessageRequestType.ChangeEvent);
        this.dataToSend = new byte[ConnectionManager.Instance.sendBufferSize];
		System.Buffer.BlockCopy(ConnectionManager.Instance.sendBuffer, 0, this.dataToSend, 0, ConnectionManager.Instance.sendBufferSize);
        socketClient.SendMessageToServer(this.dataToSend);
    }


	public void ProcessData(byte[] data, int size)
	{
		Person person = (Person)ConnectionManager.Instance.deserialize(data, size);
		Debug.Log("Received Person Name: " + person.name);
	}

	public void SendRequest(NetworkRequest request)
	{
		pendingRequest = request;
		this.socketClient.SendMessageToServer(request.mRequestData);
	}

	void GetResponse(byte[] response, int packageSize)
	{
		if (pendingRequest != null) {
			pendingRequest.SetResponse(response, true);
		}
	}
}