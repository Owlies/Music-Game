using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadController : MonoBehaviour {

    public enum ControlType
    {
        RIGHT_PAD,
        LEFT_PAD,
        NONE_PAD
    };

    public ControlType controlType = ControlType.RIGHT_PAD;

    private bool jumpEnabled = false;

    void OnCollisionEnter2D(Collision2D other)
    {
        if (!other.collider.CompareTag("Player"))
        {
            return;
        }

        if (!jumpEnabled)
        {
            if (controlType == ControlType.RIGHT_PAD)
                other.collider.SendMessageUpwards("EnableRightJump", true);
            else if (controlType == ControlType.LEFT_PAD)
                other.collider.SendMessageUpwards("EnableLeftJump", true);
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
            if (controlType == ControlType.RIGHT_PAD)
                other.collider.SendMessageUpwards("EnableRightJump", false);
            else if (controlType == ControlType.LEFT_PAD)
                other.collider.SendMessageUpwards("EnableLeftJump", false);
            jumpEnabled = false;
        }
    }
}
