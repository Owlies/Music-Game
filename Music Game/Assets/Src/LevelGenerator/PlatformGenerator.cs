using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using Owlies.Core;

public class PlatformGenerator : Singleton<PlatformGenerator> {
    private static string GREEN_PLATFORM_1_TAG = "GreenPlatform_1";
    private static string RED_PLATFORM_1_TAG = "RedPlatform_1";
    public float differenceY;
    public float platformOffsetX;
    public int platfomGenerateInterval;
    private GameObject greenPlatforms;
    private GameObject redPlatforms;
    private float lastY;
    private int skipThreshold = 10;
    private int upThreshold = 50;
    private int keepThreshold = 75;
    public List<GeneratorConfig> config;


    void Start() {
        // GeneratePlatform();
    }

    void DeleteObjectWithTag(string tag) {
        GameObject existingObjects = GameObject.FindGameObjectWithTag(tag);
        if(existingObjects)
            GameObject.DestroyImmediate(existingObjects);
    }

    void GenerateGameObject(float x, float y, string resourcePath, GameObject parent) {
        GameObject obj = GameObject.Instantiate(Resources.Load(resourcePath)) as GameObject;
        obj.transform.parent = parent.transform;
        obj.transform.position = new Vector3(x, y, 0);
    }

    void GenerateGreenPlatform1(float x, float y, GameObject parent) {
        GenerateGameObject(x, y, "Prefabs/GreenPlatform_1", parent);
    }

    void GenerateRedPlatform1(float x, float y, GameObject parent) {
        GenerateGameObject(x, y, "Prefabs/RedPlatform_1", parent);
    }

    float GenerateNextYPosition(float curX, float lastY) {
        // TODO: Use curX to determine random factors
         
         //1 - 100
        int randomNumber = Random.Range(1, 101);
        if (randomNumber <= skipThreshold) {
            return 0;
        }

        if (randomNumber <= upThreshold) {
            return lastY + differenceY;
        }

        if (randomNumber <= keepThreshold) {
            return lastY;
        }

        if (lastY >= differenceY) {
            return lastY - differenceY;
        }

        return lastY;
    }

    void GenerateNextPlatform1(float x, float y) {
        int randomNumber = Random.Range(0, 2);
        if (y == 0) {
            return;
        }

        // Generate Green Platform
        if (randomNumber == 1) {
            GenerateGreenPlatform1(x, y, greenPlatforms);
            return;
        }

        GenerateRedPlatform1(x, y, redPlatforms);
    }

    public void GeneratePlatform() {
        DeleteObjectWithTag(GREEN_PLATFORM_1_TAG);
        DeleteObjectWithTag(RED_PLATFORM_1_TAG);

        greenPlatforms = new GameObject("GreenPlatforms_1");
        redPlatforms = new GameObject("RedPlatforms_1");
        greenPlatforms.tag = GREEN_PLATFORM_1_TAG;
        redPlatforms.tag = RED_PLATFORM_1_TAG;

        lastY = 0.0f;

        if (GameController.Instance.onsetList.Count <= 0) {
            return;
        }

        for (int i = 0; i < GameController.Instance.onsetList.Count; i++) {
            if (i % platfomGenerateInterval != 0) {
                continue;
            }
            float x = GameController.Instance.onsetList[i];
            lastY = GenerateNextYPosition(x, lastY);

            GenerateNextPlatform1(x + platformOffsetX, lastY);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}