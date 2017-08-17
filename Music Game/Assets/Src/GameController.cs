using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

    private PlayerController playerCtrl;
    private MusicController musicCtrl;
    private GameObject debugInfo;

    // Use this for initialization
    void Start ()
    {
        playerCtrl = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        debugInfo = GameObject.FindGameObjectWithTag("EditorOnly");
        debugInfo.SetActive(false);
    }
	
	// Update is called once per frame
	void Update () {

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
        StartCoroutine(reloadAfterTime(0.5f));
    }
}
