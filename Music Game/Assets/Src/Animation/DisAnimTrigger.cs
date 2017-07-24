using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisAnimTrigger : MonoBehaviour {

    public float distanceToTrigger = 1.0f;
    public string triggerType = "ScaleUp";

    GameObject player;
    Animator animator;
    bool triggered = false;

	// Use this for initialization
	void Start () {
        player = GameObject.FindGameObjectWithTag("Player");
        animator = gameObject.GetComponent<Animator>();

    }
	
	// Update is called once per frame
	void Update () {
        if (triggered)
            return;

        float realDistance = Vector3.Distance(player.transform.position, gameObject.transform.position);
        if (realDistance < distanceToTrigger)
        {
            triggered = true;
            animator.SetTrigger(triggerType);
        }
        

    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = new Color(1, 1, 0, 0.75F);
        Gizmos.DrawWireSphere(transform.position, distanceToTrigger);
    }
}
