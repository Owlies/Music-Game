using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using Owlies.Core;

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
        GameController.Instance.onsetList.Clear();

        MusicController musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        PlayerController playerCtrl = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();

        while ((str = sr.ReadLine()) != null)
        {
            string[] strs = str.Split(',');
            float time = float.Parse(strs[0]);
            
            GameObject a = GameObject.Instantiate(Resources.Load("Prefabs/Hint")) as GameObject;
            a.transform.parent = hint.transform;

            float offset = (musicCtrl.startDelay + time) * playerCtrl.horizontalSpeed;

            a.transform.position = new Vector3(offset, 0.2f, 0);
            GameController.Instance.AddToOnsetList(offset, strs[1]);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
