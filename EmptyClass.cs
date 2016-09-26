using UnityEngine;
using System.Collections;

/// <summary>
/// Control
/// </summary>
public class PlayerScript : Behaviour
{
	#region 1 - 

	/// <summary>
	/// speed
	/// </summary>
	private Vector2 speed = new Vector2(50, 50);

	// save
	private Vector2 movement;

	#endregion

	// Update is called once per frame
	void Update()
	{
		#region 

		// 2 - input
		float inputX = Input.GetAxis("Horizontal");
		float inputY = Input.GetAxis("Vertical");

		// 3 - 
		movement = new Vector2(speed.x * inputX, speed.y * inputY);

		#endregion
	}

	void FixedUpdate()
	{
		// move function
		rigidbody2D.velocity = movement;
	}
}