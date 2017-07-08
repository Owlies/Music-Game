using UnityEngine;
using System;
using Owlies.Core;
using Sproto;
using SprotoType;
using System.Collections;

public class APIManager : Singleton<APIManager> {
    // TODO(Huayu): Move to Config
    // private String serverIpAddress = "192.168.1.96";
	private String serverIpAddress = "127.0.0.1";
    private int port = 8888;
    private int session = 0;

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
        NetworkManager.Instance.Connect(serverIpAddress, port);
        NetworkManager.Instance.StartNetThread();
        LoginRequest loginRequest = dummyLoginRequest();
        NetworkManager.Instance.Send(session++, loginRequest, eMessageRequestType.ChangeEvent);
    }

    private void Update() {
        Protocol protocol = NetworkManager.Instance.GetRecvMessage();
        if (protocol != null) {
            SprotoTypeBase sproto = ConnectionManager.Instance.deserialize(protocol.stream.ToArray(), Convert.ToInt32(protocol.stream.Length));
            Debug.Log(sproto.GetType());
        }
        
    }

}