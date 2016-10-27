using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

	//collider
	void OnTriggerEnter(Collider other){
		if (other.gameObject.tag == "Enemy") {
			Destroy(gameObject);
			other.gameObject.SendMessage("EnemyDamaged",GameManager.bulletDamage,SendMessageOptions.DontRequireReceiver);
			other.gameObject.SendMessage("TakenDamage",SendMessageOptions.DontRequireReceiver);
		}

		if (other.gameObject.tag == "LevelObjects") {
			Destroy(gameObject);
		}
	}

	void FixedUpdate(){
		Destroy (gameObject, 1.25f);
	}
}
