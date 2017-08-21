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
    void Awake() {
        DontDestroyOnLoad(transform.gameObject);
    }
    private LoginRequest dummyLoginRequest() {
        LoginRequest loginRequest = new LoginRequest();
        loginRequest.client_app_name = AppConstant.Instance.APP_NAME;
        loginRequest.client_version = AppConstant.Instance.APP_VERSION;
        loginRequest.device_identifier = SystemInfo.deviceUniqueIdentifier;
        loginRequest.timestamp = DateTime.UtcNow.ToLongTimeString();
        loginRequest.user_id = UserInfo.Instance.userId;
        loginRequest.user_account = UserInfo.Instance.userAccount;
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
            Debug.Log("Receievd: " + sproto.GetType());
        }
        
    }

}