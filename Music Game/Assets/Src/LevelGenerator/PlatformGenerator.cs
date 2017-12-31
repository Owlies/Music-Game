using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Owlies.Core;
using System;

public class PlatformGenerator : Singleton<PlatformGenerator> {
    public List<GeneratorConfig> configs;
    private string PLATFORM_TAG = "Platform";

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
            prefabObj = GetRandomPlatformPrefab(curConfig.platformPrefabs);
            if (prefabObj == null) {
                return;
            }
            GenerateGameObject(x, y, prefabObj, greenPlatformParent);
            return;
        }

        prefabObj = GetRandomPlatformPrefab(curConfig.platformPrefabs);
        if (prefabObj == null) {
            return;
        }
        GenerateGameObject(x, y, prefabObj, redPlatformParent);
    }

    public float GetMinDeltaTime()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        PlayerController playerCtrl = player.GetComponent<PlayerController>();
        Rigidbody2D rigidBody = player.GetComponent<Rigidbody2D>();

        float vy = playerCtrl.verticalForce / rigidBody.mass;
        float g = Physics.gravity.y * rigidBody.gravityScale;

        return 1.5f * Mathf.Abs(vy / g);
    }
    public float GetMaxDeltaTime(float lastY)
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        PlayerController playerCtrl = player.GetComponent<PlayerController>();
        Rigidbody2D rigidBody = player.GetComponent<Rigidbody2D>();

        float vy = playerCtrl.verticalForce / rigidBody.mass;
        float g = Physics.gravity.y * rigidBody.gravityScale;

        return - (Mathf.Sqrt(vy * vy - 2 * g * lastY) + vy) / g;
    }

    public float calculateDeltaY(float deltaT)
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        PlayerController playerCtrl = player.GetComponent<PlayerController>();
        Rigidbody2D rigidBody = player.GetComponent<Rigidbody2D>();

        float vy = playerCtrl.verticalForce / rigidBody.mass;
        float g = Physics.gravity.y * rigidBody.gravityScale;

        return vy * deltaT + 0.5f * g * deltaT * deltaT;
    }

    public void GeneratePlatform() {
        DeleteObjectWithTag(PLATFORM_TAG);

        float lastY = 0.0f;
        float lastX = -5.0f;

        float minTime = GetMinDeltaTime();

        GameObject platforms = new GameObject(PLATFORM_TAG);
        platforms.tag = PLATFORM_TAG;
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        PlayerController playerCtrl = player.GetComponent<PlayerController>();

        for (int i = 0; i < GameController.Instance.onsetList.Count; i++)
        {
            float curX = GameController.Instance.onsetList[i].positionX;
            Nullable<GeneratorConfig> curConfig = GetCurrentConfig(curX);

            float randomNumber = UnityEngine.Random.Range(0, 1.0f);
            if (curConfig == null || randomNumber > curConfig.Value.generateRate)
                continue;

            float maxTime = GetMaxDeltaTime(lastY);
            float deltaTime = (curX - lastX) / playerCtrl.horizontalSpeed;
            if (deltaTime < minTime)
                continue;

            float t = UnityEngine.Random.Range(minTime, Mathf.Min(maxTime,deltaTime));
            float curY = lastY + calculateDeltaY(t);

            GameObject prefab = GetRandomPlatformPrefab(curConfig.Value.platformPrefabs);
            GameObject obj = GameObject.Instantiate(prefab) as GameObject;
            obj.transform.parent = platforms.transform;
            GameObject hint = GameObject.Instantiate(Resources.Load("Prefabs/Hint")) as GameObject;
            hint.transform.SetParent(platforms.transform);

            obj.transform.position = new Vector3(lastX, curY, 0);
            hint.transform.position = new Vector3(curX, curY + 0.5f, 0);
            PadController ctrl = obj.GetComponentInChildren<PadController>();
            SpriteRenderer sprite = ctrl.GetComponent<SpriteRenderer>();
            ctrl.transform.localPosition = new Vector3((curX - lastX) / 2 + 1.1f, - sprite.size.y / 2, 0);
            sprite.size = new Vector2((curX - lastX) - 1.1f, sprite.size.y);


            lastX = curX;
            lastY = curY;
        }
    }
}