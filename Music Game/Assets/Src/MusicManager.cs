using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicManager : MonoBehaviour {
	public float startDelay = 0.0f;
	// Use this for initialization
	void Start () {
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.PlayDelayed(startDelay);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
