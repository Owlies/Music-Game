using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

    private PlayerController playerCtrl;
    private MusicController musicCtrl;

    // Use this for initialization
    void Start ()
    {
        playerCtrl = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
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
        StartCoroutine(reloadAfterTime(2.0f));
    }
}
