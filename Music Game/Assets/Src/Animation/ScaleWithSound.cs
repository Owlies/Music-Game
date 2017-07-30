using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleWithSound : MonoBehaviour {

    private AudioSource audioSource;
    // Use this for initialization
    void Start ()
    {
        audioSource = GameObject.FindGameObjectWithTag("MusicController").GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update ()
    {
        float[] spectrum = new float[64];
        AudioListener.GetSpectrumData(spectrum, 0, FFTWindow.Rectangular);
        float count = 0;
        for (int i = 0; i < 64; i++)
            count += spectrum[i];
        gameObject.transform.localScale = new Vector3(0.6f + 0.5f * count, 0.6f + 0.5f * count, 1);
    }
}
