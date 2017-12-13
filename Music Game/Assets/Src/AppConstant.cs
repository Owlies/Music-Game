using UnityEngine;
using System;
using Owlies.Core;
public class AppConstant : Singleton<AppConstant> {
    void Awake() {
        DontDestroyOnLoad(transform.gameObject);
    }
    public String APP_NAME = "MUSIC_RUN";
    public String APP_VERSION = "1.0";
};