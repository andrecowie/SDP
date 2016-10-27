using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour
{
    //Controller2D
    public Controller2D controller2D;
    //Health
    public Texture playersHealthTexture;
    //Position
    public float screenPositionX;
    public float screenPositionY;
    //Size
    public int iconSizeX = 25;
    public int iconSizeY = 25;
    //Initial Health
    static public int curHealth = 3;
	//maxHealth
    public int maxHealth = 3;

    GameObject player;
    //power
    static public int bulletDamage = 1;
    //Current exp
    public int curEXP;
    //How many exp needed to level up
    int maxEXP = 50;
    //Initial level
    int level = 1;
    //initial money
    static public int curCoins = 0;

    //stats
    bool playerStats;
    //display stats
    public GUIText statsDisplay;
    //Pause Menu
    bool pauseMenu;
    //Save or not
    int saved = 0;
    //Auto Save
    public float autoSaveTimer;
    //Weapon Menu
    bool weaponsMenu;
    //screen width
    int sw = Screen.width;
    //screen height
    int sh = Screen.height;
    void Awake()
    {
        saved = PlayerPrefs.GetInt("Game Saved");
        if (saved == 1)
        {
            curEXP = PlayerPrefs.GetInt("Player EXP");
            level = PlayerPrefs.GetInt("Player Level");
            curCoins = PlayerPrefs.GetInt("Player Coins");
            maxEXP = level * 50;
            maxHealth = level + 2;
            curHealth = maxHealth;
        }
    }

    //to user game render
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    void Update()
    {
        //Testing function, add money to the player
        if(Input.GetKeyDown(KeyCode.M)){
            curCoins += 100;
        }
        //auto save
        autoSaveTimer += Time.deltaTime;
        if (autoSaveTimer >= 10f)
        {
            SaveGame();
            print("Saved");
            autoSaveTimer = 0;
        }

        if (Input.GetKeyDown(KeyCode.P))
        {
            //pauseMenu = !pauseMenu;	
            pauseMenu = true;
            Time.timeScale = 0;
        }

        if (curEXP >= maxEXP)
        {
            LevelUp();
        }

        if (Input.GetKeyDown(KeyCode.C))
        {
            playerStats = !playerStats;
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            curEXP += 10;
        }

        if (playerStats)
        {
            statsDisplay.text = "Level:" + level + "\nExp:" + curEXP + "/" + maxEXP + "\nAttack:" + bulletDamage + "\nMoney" + curCoins;
        }
        else
        {
            statsDisplay.text = "";
        }

        if (curHealth > maxHealth)
        {
            curHealth = maxHealth;
        }
    }
    //Level up function
    void LevelUp()
    {
        curEXP = 0;
        maxEXP = maxEXP + 50;
        level++;

        //level up and health increase
        maxHealth++;
    }


    
    void OnGUI()
    {

        //health icon
        for (int h = 0; h < curHealth; h++)
        {
            GUI.DrawTexture(new Rect(screenPositionX + (h * iconSizeX), screenPositionY, iconSizeX, iconSizeY), playersHealthTexture, ScaleMode.ScaleToFit, true, 0);
        }

        if (pauseMenu)
        {
            //weapon menu
            if (GUI.Button(new Rect(Screen.width * .25f, Screen.height * .3f, Screen.width * .5f, Screen.height * .1f), "Weaon Menu"))
            {
                pauseMenu = false;
                weaponsMenu = true;
            }

            //Save Function
            if (GUI.Button(new Rect(Screen.width * .25f, Screen.height * .4f, Screen.width * .5f, Screen.height * .1f), "Save"))
            {
                SaveGame();
            }
           
            //Back game
            if (GUI.Button(new Rect(Screen.width * .25f, Screen.height * .5f, Screen.width * .5f, Screen.height * .1f), "Resume"))
            {
                Time.timeScale = 1;
                pauseMenu = false;
            }
            //Exit
            if (GUI.Button(new Rect(Screen.width * .25f, Screen.height * .6f, Screen.width * .5f, Screen.height * .1f), "Exit"))
            {
                
                Application.Quit();
            }
        }

        if (weaponsMenu)
        {
            //First weapon
            if (PlayerPrefs.GetInt("Weapon1", 0) >= 1)
            {
                bulletDamage = 3;
                if (GUI.Button(new Rect(sw * .1f, sh * .2f, sw * .3f, sh * .5f), "Equipped Weapon 1"))
                {
                    bulletDamage = 3;
                }
            }
            else
            {
                if (GUI.Button(new Rect(sw * .1f, sh * .2f, sw * .3f, sh * .5f), "Buy Weapon 1"+"\nPrice:200 Coins"))
                {
                    if (curCoins >= 200) 
                    {
                        curCoins -= 200;
                        PlayerPrefs.SetInt("Weapon1", 1);
                    }
                }
            }
            //weapon 2
            if (PlayerPrefs.GetInt("Weapon2", 0) >= 1)
            {
                bulletDamage = 6;
				if (GUI.Button(new Rect(sw * .6f, sh * .2f, sw * .3f, sh * .5f), "Equipped Weapon 2"))
                {
                    bulletDamage = 6;
                }
            }
            else
            {
				if (GUI.Button(new Rect(sw * .6f, sh * .2f, sw * .3f, sh * .5f), "Buy Weapon2" + "\nPrice:500 Coins"))
                {
                    if (curCoins >= 500)
                    {
                        curCoins -= 500;
                        PlayerPrefs.SetInt("Weapon2", 1);
                    }
                }
            }
            //Resume
            if (GUI.Button(new Rect(Screen.width * .25f, Screen.height * .5f, Screen.width * .5f, Screen.height * .1f), "Back"))
            {
                Time.timeScale = 1;
                weaponsMenu = false;
            }
        }
    }

    public void SaveGame()
    {
        saved = 1;
        PlayerPrefs.SetInt("Player Level", level);
        PlayerPrefs.SetInt("Player EXP", curEXP);
        PlayerPrefs.SetInt("Player Coins", curCoins);
        PlayerPrefs.SetInt("Game Saved", saved);
        PlayerPrefs.SetInt("Player Damage", bulletDamage);
        print("Saved");
    }


    void PlayerDamaged(int damage)
    {   //a function to see if the player get hurt and damage
        if (player.GetComponent<Renderer>().enabled)
        {
            if (curHealth > 0)
            {
                curHealth -= damage;
            }

            if (curHealth <= 0)
            {
                RestartScene();
            }
        }
    }

    void RestartScene()
    {
        Application.LoadLevel(Application.loadedLevel);
    }
}
