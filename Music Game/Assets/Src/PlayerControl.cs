using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour {

    private Rigidbody2D mRigidbody;
    public float horizontalSpeed = 2.5f;
    // Use this for initialization
    void Start ()
    {
        mRigidbody = this.GetComponent<Rigidbody2D>();
        mRigidbody.velocity = new Vector2(horizontalSpeed, 0.0f);
    }
	
	// Update is called once per frame
	void Update () {

        handleKeyBoardInput();
    }
    public void handleKeyBoardInput()
    {
        //if (Input.GetKeyDown(KeyCode.UpArrow))
        //{
        //    playerJump();
        //}

        //if (Input.GetKeyDown(KeyCode.R))
        //{
        //    playerRestart();
        //}

        //if (leftTapJumpEnabled && (Input.GetKeyDown(KeyCode.Z) || Input.GetKey(KeyCode.Z)))
        //{
        //    playerJump();
        //}

        //if (rightTapJumpEnabled && (Input.GetKeyDown(KeyCode.X) || Input.GetKey(KeyCode.X)))
        //{
        //    playerJumpDown();
        //}
    }
}
