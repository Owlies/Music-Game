﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Owlies.Core;

public class GameController : Singleton<GameController> {
    private GameObject player;
    private PlayerController playerCtrl;
    private MusicController musicCtrl;
    private GameObject debugInfo;
    public List<float> onsetList;

    // Use this for initialization
    void Start ()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        playerCtrl = player.GetComponent<PlayerController>();
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        debugInfo = GameObject.FindGameObjectWithTag("EditorOnly");
        debugInfo.SetActive(false);
        onsetList = new List<float>();
    }
	
	// Update is called once per frame
	void Update () {
        if (playerCtrl.checkDeath()) {
            PlayerDead();
        }
    }
    
    IEnumerator reloadAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        Scene loadedLevel = SceneManager.GetActiveScene();
        SceneManager.LoadScene(loadedLevel.buildIndex);
    }

    public void PlayerDead()
    {
        musicCtrl.StopLevelMusic();
        playerCtrl.Dead();
        StartCoroutine(reloadAfterTime(0.0f));
    }
}
