using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimTrigger : MonoBehaviour {
    
    public float timeToTrigger = 1.0f;
    public string triggerEvent = "ScaleUp";
    
    Animator animator;
    MusicController musicCtrl;
    PlayerController playerCtrl;
    GameObject player;
    
    public enum Layer
    {
        NONE_LAYER,
        STATIC_LAYER,
        BACK_LAYER,
        GAME_LAYER
    };
    public Layer layer = Layer.GAME_LAYER;
    public float backLayerSpeed = -1.0f;

    bool triggered = false;

	// Use this for initialization
	void Start () {
        animator = gameObject.GetComponent<Animator>();
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        player = GameObject.FindGameObjectWithTag("Player");
        playerCtrl = player.GetComponent<PlayerController>();
    }
	
	// Update is called once per frame
	void Update () {
        if (triggered)
        {
            if (layer == Layer.BACK_LAYER)
            {
                Vector3 pos = transform.parent.position;
                transform.parent.position = new Vector3(pos.x + backLayerSpeed * Time.deltaTime,pos.y,pos.z);
            }
            return;
        }

        float disToTrigger = (musicCtrl.startDelay + timeToTrigger) * playerCtrl.horizontalSpeed;

        float realDistance = player.transform.position.x;
        if (realDistance > disToTrigger)
        {
            SpriteRenderer spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
            if (layer == Layer.NONE_LAYER)
            {
                gameObject.SetActive(false);
            }
            if (layer == Layer.STATIC_LAYER)
            {
                spriteRenderer.sortingLayerName = "Static";
                Transform t = GameObject.FindGameObjectWithTag("MainCamera").transform;
                Vector3 pos = t.position;
                GameObject go = new GameObject("ref obj");
                go.transform.position = new Vector3( 0, 0, 0);
                go.transform.parent = t;
                transform.parent = go.transform;
            }
            else if (layer == Layer.BACK_LAYER)
            {
                spriteRenderer.sortingLayerName = "Back";
                Transform t = GameObject.FindGameObjectWithTag("MainCamera").transform;
                Vector3 pos = t.position;
                GameObject go = new GameObject("ref obj");
                go.transform.position = new Vector3(0, 0, 0);
                go.transform.parent = t;
                transform.parent = go.transform;
            }
            triggered = true;
            animator.SetTrigger(triggerEvent);
        }


    }

    void OnDrawGizmosSelected()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        playerCtrl = player.GetComponent<PlayerController>();
        musicCtrl = GameObject.FindGameObjectWithTag("MusicController").GetComponent<MusicController>();
        float disToTrigger = (musicCtrl.startDelay + timeToTrigger) * playerCtrl.horizontalSpeed; 
        Gizmos.color = new Color(1, 1, 0, 0.75F);
        Gizmos.DrawLine(new Vector3(disToTrigger, 10000, 0), new Vector3(disToTrigger, -10000, 0));
    }
}
