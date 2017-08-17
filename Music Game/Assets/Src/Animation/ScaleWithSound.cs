using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleWithSound : MonoBehaviour {

    private AudioSource audioSource;
    // Use this for initialization
    void Start ()
    {
        //audioSource = GameObject.FindGameObjectWithTag("MusicController").GetComponent<AudioSource>();
        //Debug.Log(audioSource.clip.samples);
        //Debug.Log(audioSource.clip.frequency);
        //Debug.Log(audioSource.clip.length);
    }
	
	// Update is called once per frame
	void Update ()
    {
        //int count = audioSource.clip.samples;
        //float[] spectrum = new float[count];
        //audioSource.clip.GetData(spectrum, 0);
        ////gameObject.transform.localScale = new Vector3(0.6f + 0.5f * count, 0.6f + 0.5f * count, 1);
    }
}
