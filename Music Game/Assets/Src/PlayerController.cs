using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

    private Rigidbody2D mRigidbody;
    public float horizontalSpeed = 0.0f;
    public float verticalForce = 0.0f;
    int isLeftJumpEnabled = 0;
    int isRightJumpEnabled = 0;
    bool isDead = false;
    bool isGrounded = false;
    public Transform groundCheck;
    public Vector2 groundCheckBoxSize;
    public float groundCheckLength = 0.01f;
    public LayerMask groundLayer;
    private bool jumpPressed = false;

    // Use this for initialization
    void Start () {
        mRigidbody = this.GetComponent<Rigidbody2D>();
        mRigidbody.velocity = new Vector2(horizontalSpeed, 0.0f);
    }

    void EnableLeftJump(bool enable) {
        isLeftJumpEnabled += enable ? 1 : -1;
    }

    void EnableRightJump(bool enable) {
        isRightJumpEnabled += enable ? 1 : -1;
    }

    void checkGrounded() {
        RaycastHit2D hit = Physics2D.BoxCast(groundCheck.position, groundCheckBoxSize, 0.0f, Vector2.down, groundCheckLength, groundLayer, 0.0f);
        isGrounded = hit.collider != null ? true : false;
    }
    
    /// <summary>
    /// This function is called every fixed framerate frame, if the MonoBehaviour is enabled.
    /// </summary>
    void FixedUpdate() {
        checkGrounded();

        #if UNITY_EDITOR || UNITY_STANDALONE
            handleKeyBoardInput();
        #endif

        if (mRigidbody.velocity.x > 0 && mRigidbody.velocity.x != horizontalSpeed) {
            mRigidbody.velocity = new Vector2(horizontalSpeed, 0.0f);
        }

        Jump();
    }

    public void handleKeyBoardInput() {
        if ( (isLeftJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.Z) || Input.GetKey(KeyCode.Z))) ||
            (isRightJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.X) || Input.GetKey(KeyCode.X))) ) {
                jumpPressed = true;
        } else {
            jumpPressed = false;
        } 
    }

    public void handleGreenTouchStart() {
        if (isLeftJumpEnabled <= 0) {
            return;
        }

        jumpPressed = true;
    }

    public void handleRedTouchStart() {
        if (isRightJumpEnabled <= 0) {
            return;
        }

        jumpPressed = true;
    }

    public void handleTouchEnd() {
        jumpPressed = false;
    }
    void Jump() {
        if (jumpPressed && isGrounded) {
            mRigidbody.AddForce(new Vector2(0, verticalForce), ForceMode2D.Impulse);
        }
    }

    public bool checkDeath() {
        return mRigidbody.velocity.x == 0;
    }
    public void Dead() {
        isDead = true;
        mRigidbody.velocity = new Vector2(0, 0);
        mRigidbody.Sleep();
    }

}
