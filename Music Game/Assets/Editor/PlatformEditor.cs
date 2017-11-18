using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using Owlies.Core;

public class PlatformEditor {


    [MenuItem("Music/Create Platforms")]
	// Use this for initialization
	static void Start ()
    {
        PlatformGenerator.Instance.GeneratePlatform();
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
