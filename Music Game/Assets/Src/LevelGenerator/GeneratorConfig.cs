using UnityEngine;

[System.Serializable]
public struct GeneratorConfig {
    public int startX;
    public int endX;
    public float verticalDifference;

    public int platfomGenerateInterval;

    public GameObject greenPlatformPrefb;
    public GameObject RedPlatformPrefb;

    public int skipThreshold;
    public int verticalUpThreshold;
    public int verticalKeepThreshold;

};