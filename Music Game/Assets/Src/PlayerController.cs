using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

    private Rigidbody2D mRigidbody;
    public float horizontalSpeed = 0.0f;
    public float verticalSpeed = 0.0f;
    int isLeftJumpEnabled = 0;
    int isRightJumpEnabled = 0;
    bool isJumping = false;
    bool isDead = false;
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
    
    // Update is called once per frame
    void Update () {
        #if UNITY_EDITOR || UNITY_STANDALONE
            handleKeyBoardInput();
        #endif

        if (mRigidbody.velocity.y == 0) {
            isJumping = false;
        }
    }

    public void handleKeyBoardInput() {
        if ( (isLeftJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.Z) || Input.GetKey(KeyCode.Z))) ||
            (isRightJumpEnabled > 0 && (Input.GetKeyDown(KeyCode.X) || Input.GetKey(KeyCode.X))) ) {
                Jump();
            }       
    }

    public void handleGreenTouchInput() {
        if (isLeftJumpEnabled <= 0) {
            return;
        }

        Jump();
    }

    public void handleRedTouchInput() {
        if (isRightJumpEnabled <= 0) {
            return;
        }

        Jump();
    }

    void Jump() {
        if (!isJumping) {
            mRigidbody.AddForce(new Vector2(0, verticalSpeed), ForceMode2D.Impulse);
            isJumping = true;
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
