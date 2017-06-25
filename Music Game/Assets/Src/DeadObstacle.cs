using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeadObstacle : MonoBehaviour {

    private GameController gameController;

	// Use this for initialization
	void Start () {
        gameController = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameController>();
    }
	
	// Update is called once per frame
	void Update () {

    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (!other.CompareTag("Player"))
        {
            return;
        }

        gameController.PlayerDead();
    }
}
