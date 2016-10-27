using UnityEngine;
using System.Collections;

public class SetupScript : MonoBehaviour {
	
	private string gender;
	private string name;
	/*
	public GUI boy;
	public GUI girl;
	public GUI other;
	*/

	public void setGender(string s) {
		gender = s;
		PlayerPrefs.SetString ("info_gender", gender);
	}

	public void setName(string s) {
		name = s;
		PlayerPrefs.SetString ("info_name", name);
	}

	public string getGender() {
		return gender;
	}

	public string getName() {
		return name;
	}

	// Use this for initialization
	void Start () {
	
	}

	void Update() {
		 
	}

}
