using UnityEngine;
using UnityEditor;

[System.Serializable]
public class GeneratorConfig : ScriptableObject {
    public int startX;
    public int endX;
    public string GREEN_PLATFORM_TAG = "GreenPlatform";
    public string RED_PLATFORM_TAG = "RedPlatform";
    public float verticalDifference;

    public int platfomGenerateInterval;

    public GameObject greenPlatformPrefb;
    public GameObject RedPlatformPrefb;

    public int skipProbability = 10;
    public int verticalUpProbability = 50;
    public int verticalKeepProbability = 75;

    private float lastY;

};