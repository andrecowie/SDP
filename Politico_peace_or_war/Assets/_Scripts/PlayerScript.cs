using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	private string name;
	private string gender;
	private string rank;
	private int wealth;
	private Text displayName;
	private Image displayImage;

	public Sprite boy;
	public Sprite girl;
	public Sprite other;

	/*
	void awake() {
		DontDestroyOnLoad (transform.gameObject);
	}
	*/

	// Use this for initialization
	void Start () {
		displayName = GetComponentInChildren<Text> ();
		displayImage = GetComponentInChildren<Image> ();
		name = PlayerPrefs.GetString("info_name");
		gender = PlayerPrefs.GetString("info_gender");
		displayName.text = name;
		if(gender.Equals("boy")) {
			displayImage.sprite = boy;
		} else if (gender.Equals("girl")) {
			displayImage.sprite = girl;
		} else {
			displayImage.sprite = other;
		}
	}
	
	// Update is called once per frame
	void Update () {

	}
}
