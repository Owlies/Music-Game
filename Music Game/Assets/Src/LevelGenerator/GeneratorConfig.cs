using UnityEngine;
using System.Collections.Generic;

[System.Serializable]
public struct GeneratorConfig {
    public int startX;
    public int endX;
    public float verticalDifference;

    public int platfomGenerateInterval;

    public List<GameObject> greenPlatformPrefbs;
    public List<GameObject> redPlatformPrefbs;

    public int skipThreshold;
    public int verticalUpThreshold;
    public int verticalKeepThreshold;

};