using UnityEngine;
using System.Collections;

public class Controller2D : MonoBehaviour {
	// using CharacterController
	CharacterController characterController;

	// using GameManager
	public GameManager gameManager;

	//gravity
	public float gravity = 10;
	//speed
	public float walkSpeed = 5;
	//jump hight
	public float jumpHeight = 5;

	//blink to show the player got damage
	float takenDamage = 0.2f;

	// control
	Vector3 moveDirection = Vector3.zero;
	float horizontal = 0;
	public Rigidbody bulletPrefab;
	float attackRate = 0.5f;
	float coolDown;
	bool lookRight = true;

	public string Level;
	
	// Use this for initialization
	void Start () {
		characterController = GetComponent<CharacterController>();

	}
	
	// Update is called once per frame
	void Update () {
		//control movement
		characterController.Move (moveDirection * Time.deltaTime);
		horizontal = Input.GetAxis("Horizontal");
		//control gravity
		moveDirection.y -= gravity * Time.deltaTime;

		if (horizontal == 0) {
			moveDirection.x = horizontal;		
		}


		//move right
		if (horizontal > 0.01f) {
			lookRight = true;
			moveDirection.x = horizontal * walkSpeed;
		}
		//move left
		if (horizontal < -0.01f) {
			lookRight = false;
			moveDirection.x = horizontal * walkSpeed;
		}
		// jump
		if (characterController.isGrounded) {
			if(Input.GetKeyDown(KeyCode.Space)||Input.GetKeyDown(KeyCode.K)){
				moveDirection.y = jumpHeight;
			}
		}
		//PlayerAttack
		if (Time.time >= coolDown) {
			if (Input.GetKeyDown (KeyCode.J)){
				BulletAttack ();	
			}
		}
	}
	void BulletAttack(){
		if (lookRight) {

			Rigidbody bPrefab = Instantiate (bulletPrefab, transform.position, Quaternion.identity)as Rigidbody;
			bPrefab.GetComponent<Rigidbody>().AddForce (Vector3.right * 500);
			coolDown = Time.time + attackRate;
				}
		else {
			Rigidbody bPrefab = Instantiate (bulletPrefab, transform.position, Quaternion.identity)as Rigidbody;
			bPrefab.GetComponent<Rigidbody>().AddForce (-Vector3.right * 500);
			coolDown = Time.time + attackRate;
		}
	}
	
	public IEnumerator TakenDamage(){
		GetComponent<Renderer>().enabled = false;
		yield return new WaitForSeconds(takenDamage);
		GetComponent<Renderer>().enabled = true;
		yield return new WaitForSeconds(takenDamage);
		GetComponent<Renderer>().enabled = false;
		yield return new WaitForSeconds(takenDamage);
		GetComponent<Renderer>().enabled = true;
		yield return new WaitForSeconds(takenDamage);
		GetComponent<Renderer>().enabled = false;
		yield return new WaitForSeconds(takenDamage);
		GetComponent<Renderer>().enabled = true;
		yield return new WaitForSeconds(takenDamage);
	}

	void OnTriggerStay(Collider other){
		if (other.tag == "Platform") {
			this.transform.parent = other.transform;
		}
	}
	
	void OnTriggerExit(Collider other){
		if (other.tag == "Platform") {
			this.transform.parent = null;
		}
	}

	void OnTriggerEnter(Collider other){
		if (other.tag == "HealthPotion") {
			GameManager.curHealth++;
			Destroy(other.gameObject);
		}

/*		if (other.tag == "Door") {
			gameManager.SaveGame();
			string thisLevel = Application.loadedLevelName;
			int intThisLevel = int.Parse(thisLevel);
			int intNextLevel = intThisLevel+1;
			string nextLevel = intNextLevel.ToString();
			Application.LoadLevel(nextLevel);
	    }
*/
    }
}
