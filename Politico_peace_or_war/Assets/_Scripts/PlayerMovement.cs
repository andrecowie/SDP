using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

	public int walkingSpeed; 

	private Rigidbody2D rigidbody;
	private Animator anim;

	// Use this for initialization
	void Start () {
		rigidbody = GetComponent<Rigidbody2D> ();
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		Vector2 movementVector = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));
		if (movementVector != Vector2.zero) {
			anim.SetBool("isWalking", true);
			anim.SetFloat("input_x", movementVector.x);
			anim.SetFloat("input_y", movementVector.y);
		} else {
			anim.SetBool("isWalking", false);
		}
		rigidbody.MovePosition (rigidbody.position + movementVector * Time.smoothDeltaTime * walkingSpeed);
		//rigidbody.AddForce (movementVector.x, movementVector.y, 0, ForceMode.Force); //Use this operation if using FixedUpdate instead of Update
	}
}
