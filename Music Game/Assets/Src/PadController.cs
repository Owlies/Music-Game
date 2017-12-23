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
}
