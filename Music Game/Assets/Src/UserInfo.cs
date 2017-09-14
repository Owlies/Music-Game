using UnityEngine;
using Owlies.Core;

public class UserInfo : Singleton<UserInfo> {
    public string userId;
    public string userAccount;

    void Awake() {
        DontDestroyOnLoad(transform.gameObject);
    }
    public UserInfo() {
        // TODO(Huayu):
        userId = "1";
        userAccount = "123456"; 
    }
};