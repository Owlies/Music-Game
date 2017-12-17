using UnityEngine;
using System.Collections.Generic;

[System.Serializable]
public struct GeneratorConfig {
    public int startX;
    public int endX;
    public float verticalDifference;

    public float generateRate;

    public List<GameObject> platformPrefabs;

    public int skipThreshold;
    public int verticalUpThreshold;
    public int verticalKeepThreshold;

};