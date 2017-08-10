using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[ExecuteInEditMode]
public class DebugInfo : MonoBehaviour {


    private AudioSource audioSource;
    private MusicController musicCtrl;
    private PlayerController playerCtrl;

    // Use this for initialization
    void Start ()
    {
        audioSource = GameObject.FindGameObjectWithTag("MusicController").GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update ()
    {
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        playerCtrl = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        int channels = audioSource.clip.channels;
        int sampleCount = audioSource.clip.samples * channels;
        int frequency = audioSource.clip.frequency;
        float length = audioSource.clip.length;
        float[] allValue = new float[sampleCount];
        audioSource.clip.GetData(allValue, 0);
        int totalLength = Mathf.CeilToInt(length * 100) * channels;
        float[] actualValue = new float[totalLength];
        int step = frequency / 100;

        float offset = musicCtrl.startDelay * playerCtrl.horizontalSpeed;

        for (int i =0; i < totalLength; i++)
        {
            int count = 0;
            float value = 0;

            for(int j =0; j< step; j++)
            {
                int index = i * step + j;
                if (index < sampleCount)
                {
                    value += Mathf.Abs(allValue[index]);
                    count++;
                }
            }
            actualValue[i] = value / count;
            if (i > 0)
                Debug.DrawLine(new Vector3(((i - 1) / 25f) + offset, actualValue[i - 1] * 50, 0), new Vector3((i / 25f)+ offset, actualValue[i] * 50, 0));
        }
    }
}
