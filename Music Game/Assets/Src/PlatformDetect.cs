using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformDetect : MonoBehaviour {
	public GameObject player;
	private PlayerController playerController;

	// Use this for initialization
	void Start () {
		playerController = player.GetComponent<PlayerController>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D other)
    {
        if (!other.CompareTag("Pad"))
        {
            return;
        }

        PadController controller = other.gameObject.GetComponent<PadController>();
        if (controller == null) {
            return;
        }

        if (controller.controlType == PadController.ControlType.RIGHT_PAD) {
			playerController.SendMessage("EnableRightJump", true);
			// controller.EnableRightJump(true);
        } else if (controller.controlType == PadController.ControlType.LEFT_PAD) {
            playerController.SendMessage("EnableLeftJump", true);
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (!other.CompareTag("Pad"))
        {
            return;
        }

        PadController controller = other.gameObject.GetComponent<PadController>();
        if (controller == null) {
            return;
        }

        if (controller.controlType == PadController.ControlType.RIGHT_PAD) {
            playerController.SendMessage("EnableRightJump", false);
        } else if (controller.controlType == PadController.ControlType.LEFT_PAD) {
            playerController.SendMessage("EnableLeftJump", false);
        }
    }
}
