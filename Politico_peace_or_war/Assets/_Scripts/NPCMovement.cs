using UnityEngine;
using System.Collections;

public class NPCMovement : MonoBehaviour {

	public int walkingSpeed = 150;
	public float maxDistanceFromStartPoint = 30;
	public int timeToWait = 60;

	//private bool toWalk = false;
	private int delayCounter;
	private float distanceToWalk;
	private int currentDirection; //0 = up, 1 = right, 2 = down, 3 = left, 4 = idle
	private float startingX;
	private float startingY;
	private Rigidbody2D rigidbody;
	private Animator anim;
	private Vector2 movementVector;
	
	// Use this for initialization
	void Start () {
		rigidbody = GetComponent<Rigidbody2D> ();
		anim = GetComponent<Animator> ();
		startingX = transform.position.x;
		startingY = transform.position.y;
		distanceToWalk = 100;
		currentDirection = 2;
		movementVector = new Vector2(0, 0);

	}

	void Update () {
		directionChange ();
		if (currentDirection == 0) {
			movementVector = new Vector2(0, 1);
		} else if (currentDirection == 1) {
			movementVector = new Vector2(1, 0);
		} else if (currentDirection == 2) {
			movementVector = new Vector2(0, -1);
		} else if (currentDirection == 3) {
			movementVector = new Vector2(-1, 0);
		} else if (currentDirection == 4) {
			movementVector = new Vector2(0, 0);
		}
		
		if (movementVector != Vector2.zero) {
			anim.SetBool("isWalking", true);
			anim.SetFloat("input_x", movementVector.x);
			anim.SetFloat("input_y", movementVector.y);
		} else {
			anim.SetBool("isWalking", false);
		}
		rigidbody.MovePosition (rigidbody.position + movementVector * Time.smoothDeltaTime * walkingSpeed);
	}

	void directionChange () {
		if (distanceToWalk == 0) {
			currentDirection = Random.Range(0, 4);
			distanceToWalk = Random.Range (0, 50);
		} else {
			distanceToWalk--;
		}
	}

}
