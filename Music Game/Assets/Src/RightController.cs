using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RightController : MonoBehaviour {

    private bool jumpEnabled = false;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}   

    void OnCollisionEnter2D(Collision2D other){
        if (!other.collider.CompareTag("Player"))
        {
            return;
        }

        if (!jumpEnabled)
        {
            other.collider.SendMessageUpwards("EnableRightJump", true);
            jumpEnabled = true;
        }
    }

    void OnCollisionExit2D(Collision2D other)
    {
        if (!other.collider.CompareTag("Player"))
        {
            return;
        }

        if (jumpEnabled)
        {
            other.collider.SendMessageUpwards("EnableRightJump", false);
            jumpEnabled = false;
        }
    }
}
