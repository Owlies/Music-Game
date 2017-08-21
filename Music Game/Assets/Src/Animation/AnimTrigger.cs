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
            return;

        float disToTrigger = (musicCtrl.startDelay + timeToTrigger) * playerCtrl.horizontalSpeed;

        float realDistance = player.transform.position.x;
        if (realDistance > disToTrigger)
        {
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
