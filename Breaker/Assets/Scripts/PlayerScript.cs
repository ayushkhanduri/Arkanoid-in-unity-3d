using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	public float playerVelocity;
	private Vector3 playerPosition;
	public float boundary;

	// Use this for initialization

	private int playerLives;
	private int playerPoints;

	public AudioClip pointSound;
	public AudioClip lifeSound;

	private AudioSource audioSource;

	void Start () {
		playerPosition = gameObject.transform.position;

		playerLives = 3;
		playerPoints = 0;

		audioSource = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		playerPosition.x += Input.GetAxis ("Horizontal") * playerVelocity;
		if (Input.GetKeyDown (KeyCode.Escape)) {
			Application.Quit ();
		}

		transform.position = playerPosition;
		if (playerPosition.x < -boundary) {
			transform.position = new Vector3 (-boundary, playerPosition.y, playerPosition.z);
		}
		if (playerPosition.x > boundary) {
			transform.position = new Vector3 (boundary, playerPosition.y, playerPosition.z);
		}

		winLose ();
	}

	public void addPoints(int points)
	{
		playerPoints += points;
		audioSource.PlayOneShot (pointSound);
	}

	public void OnGUI()
	{
		GUI.Label (new Rect (5.0f, 3.0f, 200.0f, 200.0f), " Live's : " + playerLives + " Score : " + playerPoints);
	}

	public void takeLife()
	{
		playerLives--;
		audioSource.PlayOneShot (lifeSound);
	}

	public void winLose()
	{
		if (playerLives == 0)
			Application.LoadLevel ("Level1");

		if ((GameObject.FindGameObjectsWithTag ("Block")).Length == 0) {
			if (Application.loadedLevelName == "Level1") {
				Debug.Log ("LEVEL COMPLETEDD 1");
				Application.LoadLevel ("Level2");
			} else {
				Application.Quit ();
			}
		}
	}
}
