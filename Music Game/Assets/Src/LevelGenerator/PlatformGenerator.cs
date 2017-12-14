using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Owlies.Core;
using System;

public class PlatformGenerator : Singleton<PlatformGenerator> {
    public List<GeneratorConfig> configs;
    private string GREEN_PLATFORM_TAG = "GreenPlatforms";
    private string RED_PLATFORM_TAG = "RedPlatforms";

    private Nullable<GeneratorConfig> GetCurrentConfig(float curX) {
        for(int i = 0; i < configs.Count; i++) {
            if (configs[i].startX <= curX && curX < configs[i].endX) {
                return configs[i];
            }
        }

        return null;
    }

    void DeleteObjectWithTag(string tag) {
        GameObject existingObjects = GameObject.FindGameObjectWithTag(tag);
        if(existingObjects)
            GameObject.DestroyImmediate(existingObjects);
    }

    private float GenerateNextYPosition(GeneratorConfig curConfig, float curX, float lastY) {
         //1 - 100
        int randomNumber = UnityEngine.Random.Range(1, 101);
        if (randomNumber <= curConfig.skipThreshold) {
            return 0;
        }

        if (randomNumber <= curConfig.verticalUpThreshold) {
            return lastY + curConfig.verticalDifference;
        }

        if (randomNumber <= curConfig.verticalKeepThreshold) {
            return lastY;
        }

        if (lastY >= curConfig.verticalDifference) {
            return lastY - curConfig.verticalDifference;
        }

        return lastY;
    }

    GameObject GetRandomPlatformPrefab(List<GameObject> prefabs) {
        if (prefabs.Count == 0) {
            return null;
        }

        int randomIndex = UnityEngine.Random.Range(0, prefabs.Count);
        return prefabs[randomIndex];
    }

    void GenerateGameObject(float x, float y, GameObject prefab, GameObject parent) {
        GameObject obj = GameObject.Instantiate(prefab) as GameObject;
        obj.transform.parent = parent.transform;
        obj.transform.position = new Vector3(x, y, 0);
    }

    void GenerateNextPlatform(GeneratorConfig curConfig, float x, float y, GameObject greenPlatformParent, GameObject redPlatformParent) {
        int randomNumber = UnityEngine.Random.Range(0, 2);
        if (y == 0) {
            return;
        }
        
        GameObject prefabObj = null;

        // Generate Green Platform
        if (randomNumber == 1) {
            prefabObj = GetRandomPlatformPrefab(curConfig.greenPlatformPrefbs);
            if (prefabObj == null) {
                return;
            }
            GenerateGameObject(x, y, prefabObj, greenPlatformParent);
            return;
        }

        prefabObj = GetRandomPlatformPrefab(curConfig.redPlatformPrefbs);
        if (prefabObj == null) {
            return;
        }
        GenerateGameObject(x, y, prefabObj, redPlatformParent);
    }

    public void GeneratePlatform() {
        DeleteObjectWithTag(GREEN_PLATFORM_TAG);
        DeleteObjectWithTag(RED_PLATFORM_TAG);

        float lastY = 0.0f;

        GameObject greenPlatforms = new GameObject(GREEN_PLATFORM_TAG);
        GameObject redPlatforms = new GameObject(RED_PLATFORM_TAG);
        greenPlatforms.tag = GREEN_PLATFORM_TAG;
        redPlatforms.tag = RED_PLATFORM_TAG;

        for (int i = 0; i < GameController.Instance.onsetList.Count; i++) {
            float curX = GameController.Instance.onsetList[i];
            Nullable<GeneratorConfig> curConfig = GetCurrentConfig(curX);
            if (curConfig == null || (i % curConfig.Value.platfomGenerateInterval == 0) && curConfig.Value.platfomGenerateInterval > 0) {
                continue;
            }
            
            lastY = GenerateNextYPosition(curConfig.Value, curX, lastY);
            GenerateNextPlatform(curConfig.Value, curX, lastY, greenPlatforms, redPlatforms);
        }
    }
}