using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour {
	public float startDelay = 0.0f;
    AudioSource mAudioSource;
    // Use this for initialization
    void Start () {
        mAudioSource = GetComponent<AudioSource>();
        mAudioSource.PlayDelayed(startDelay);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void StopLevelMusic()
    {
        mAudioSource.Stop();
    }

}
