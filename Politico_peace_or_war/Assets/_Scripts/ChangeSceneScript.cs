using UnityEngine;
using System.Collections;

public class ChangeSceneScript : MonoBehaviour {

	public void ChangeScene(string s) {
		Application.LoadLevel (s);
	}

}
