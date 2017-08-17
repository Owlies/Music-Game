using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimTrigger : MonoBehaviour {
    
    public float timeToTrigger = 1.0f;
    public string triggerEvent = "ScaleUp";

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

        //float realDistance = Vector3.Distance(player.transform.position, gameObject.transform.position);
        //if (realDistance < timeToTrigger)
        //{
        //    triggered = true;
        //    animator.SetTrigger(triggerEvent);
        //}


    }

    void OnDrawGizmosSelected()
    {
        //Gizmos.color = new Color(1, 1, 0, 0.75F);
        //if (triggerType == TriggerType.Sphere)
        //    Gizmos.DrawWireSphere(transform.position, distanceToTrigger);
        //else if (triggerType == TriggerType.X_Axis)
        //    Gizmos.DrawLine(new Vector3(transform.position.x - distanceToTrigger, 10000, 0), new Vector3(transform.position.x - distanceToTrigger, -10000, 0));
        //else if (triggerType == TriggerType.Y_Axis)
        //    Gizmos.DrawLine(new Vector3(10000, transform.position.y + distanceToTrigger, 0), new Vector3(-10000, transform.position.y + distanceToTrigger, 0));
    }
}
