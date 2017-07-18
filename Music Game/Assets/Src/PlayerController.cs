using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    private Rigidbody2D mRigidbody;
    public float horizontalSpeed = 2.5f;
    public float verticalSpeed = 0.1f;
    int isLeftJumpEnabled = 0;
    int isRightJumpEnabled = 0;
    bool isJumping = false;
    // Use this for initialization
    void Start ()
    {
        mRigidbody = this.GetComponent<Rigidbody2D>();
        mRigidbody.velocity = new Vector2(horizontalSpeed, 0.0f);
    }

    void EnableLeftJump(bool enable)
    {
        isLeftJumpEnabled += enable ? 1 : -1;
    }

    void EnableRightJump(bool enable)
    {
        isRightJumpEnabled += enable ? 1 : -1;
    }

    // Update is called once per frame
    void Update ()
    {

        handleKeyBoardInput();
        if (mRigidbody.velocity.y == 0)
            isJumping = false;
    }

    public void handleKeyBoardInput()
    {
        if ( (isLeftJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.Z) || Input.GetKey(KeyCode.Z))) ||
            (isRightJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.X) || Input.GetKey(KeyCode.X))) )
            Jump();
    }

    void Jump()
    {
        if (!isJumping)
        {
            mRigidbody.AddForce(new Vector2(0, verticalSpeed), ForceMode2D.Impulse);
            isJumping = true;
        }
    }

}
