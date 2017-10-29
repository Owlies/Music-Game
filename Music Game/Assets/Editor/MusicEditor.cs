using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;

public class MusicEditor {


    [MenuItem("Music/Create Hints")]
	// Use this for initialization
	static void Start ()
    {
        GameObject anchor = GameObject.FindGameObjectWithTag("Hint");
        if(anchor)
            GameObject.DestroyImmediate(anchor);
        GameObject hint = new GameObject("Hints");
        hint.tag = "Hint";

        string path = EditorUtility.OpenFilePanel("Load onSet file", "", "");

        StreamReader sr = File.OpenText(path);
        string str;
        while ((str = sr.ReadLine()) != null)
        {
            float time = float.Parse(str);
            GameObject a = GameObject.Instantiate(Resources.Load("Prefabs/Hint")) as GameObject;
            a.transform.parent = hint.transform;


            MusicController musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
            PlayerController playerCtrl = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();

            float offset = (musicCtrl.startDelay + time) * playerCtrl.horizontalSpeed + 1.5f;

            a.transform.position = new Vector3(offset, 0, 0);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
