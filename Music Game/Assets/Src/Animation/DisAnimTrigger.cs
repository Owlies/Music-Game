using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisAnimTrigger : MonoBehaviour {

    public enum TriggerType
    {
        X_Axis,
        Y_Axis,
        Sphere,
        Custom,
    }
    public TriggerType triggerType = TriggerType.X_Axis;
    public float distanceToTrigger = 1.0f;
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
        if (triggerType == TriggerType.Sphere)
        {
            float realDistance = Vector3.Distance(player.transform.position, gameObject.transform.position);
            if (realDistance < distanceToTrigger)
            {
                triggered = true;
                animator.SetTrigger(triggerEvent);
            }
        }
        else if (triggerType == TriggerType.X_Axis)
        {
            float realDistance = -(player.transform.position.x - gameObject.transform.position.x);
            if (realDistance < distanceToTrigger)
            {
                triggered = true;
                animator.SetTrigger(triggerEvent);
            }
        }
        else if (triggerType == TriggerType.Y_Axis)
        {
            float realDistance = -(player.transform.position.y - gameObject.transform.position.y);
            if (realDistance < distanceToTrigger)
            {
                triggered = true;
                animator.SetTrigger(triggerEvent);
            }
        }


    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = new Color(1, 1, 0, 0.75F);
        if (triggerType == TriggerType.Sphere)
            Gizmos.DrawWireSphere(transform.position, distanceToTrigger);
        else if (triggerType == TriggerType.X_Axis)
            Gizmos.DrawLine(new Vector3(transform.position.x - distanceToTrigger, 10000, 0), new Vector3(transform.position.x - distanceToTrigger, -10000, 0));
        else if (triggerType == TriggerType.Y_Axis)
            Gizmos.DrawLine(new Vector3(10000, transform.position.y + distanceToTrigger, 0), new Vector3(-10000, transform.position.y + distanceToTrigger, 0));
    }
}
