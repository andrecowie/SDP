using UnityEngine;
using System.Collections;

public class GenderButtonScript : MonoBehaviour {

	private bool isSelected;

	void OnMouseClick() {
		isSelected = true;
		transform.localScale += new Vector3 (1.0f, 1.0f, 1.0f);
	}

	void unselected() {
		isSelected = false;
		transform.localScale -= new Vector3 (0.1f, 0.1f, 0.0f);
	}

	// Use this for initialization
	void Start () {
		isSelected = false;
	}

	/*
	// Update is called once per frame
	void Update () {
	
	}
	*/
}
