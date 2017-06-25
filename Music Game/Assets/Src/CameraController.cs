using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {
	public Transform target;
	public float offsetX = 0.0f;
    public float offsetY = 0.0f;

	// Update is called once per frame
	private void Update()
	{
        Vector3 newPos = new Vector3(target.position.x + offsetX, offsetY, transform.position.z);
		transform.position = newPos;
	}
}
