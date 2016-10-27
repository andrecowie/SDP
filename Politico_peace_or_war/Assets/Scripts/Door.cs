using UnityEngine;
using System.Collections;

public class Door : MonoBehaviour {

    public string Level;
    GameManager gameManager;
    GameObject gameObjectGM;

    void Start() {
        gameObjectGM = GameObject.FindGameObjectWithTag("GameManager");
        gameManager = gameObjectGM.GetComponent<GameManager>();
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            gameManager.SaveGame();
            PlayerPrefs.SetInt("LevelUnlock", 2);
            Application.LoadLevel(Level);       
        }
    }
}
