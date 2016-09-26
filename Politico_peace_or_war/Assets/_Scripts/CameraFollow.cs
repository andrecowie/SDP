using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour {

	public Transform target;
	public float cameraSpeed = 0.1f;  

	private Camera camera;

	// Use this for initialization
	void Start () {
		camera = GetComponent<Camera> ();
	}
	
	// Update is called once per frame
	void Update () {
		camera.orthographicSize = (Screen.height / 1f) / 4f;
		if (target) {
			transform.position = Vector3.Lerp(transform.position, target.position, cameraSpeed) + new Vector3(0, 0, -10);
		}
	}
}
