using UnityEngine;
using System.Collections;

public class BallScript : MonoBehaviour {

	private bool ballIsActive;
	private Vector3 ballPosition;
	private Vector2 ballInitForce;
	private Rigidbody2D rb;

	public AudioClip hitSound;

	private AudioSource playAudio;

	public GameObject playerObject; 
	void Start () {
		ballInitForce = new Vector2 (100.0f, 300.0f);
		ballIsActive = false;
		ballPosition = transform.position;
		rb = GetComponent<Rigidbody2D> ();
		playAudio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown ("Jump") == true) {
			if (!ballIsActive) {
				rb.isKinematic = false;
				rb.AddForce (ballInitForce);
				ballIsActive = !ballIsActive;
			}
		}


		if (!ballIsActive && playerObject != null) {
			ballPosition.x = playerObject.transform.position.x;
			transform.position = ballPosition;
		}

		if (ballIsActive && transform.position.y < -5.50f) {
			Debug.Log("ball is inactive",this);
			ballIsActive = !ballIsActive;
			ballPosition.x = playerObject.transform.position.x;
			ballPosition.y = -3.26f;
			transform.position = ballPosition;
			rb.isKinematic = true;
			playerObject.SendMessage ("takeLife");
		}

		/*if(Input.GetKeyDown(KeyCode.R)){
			Vector2 random = new Vector2 (100.0f, 200.0f);	
			rb.AddForce(random);
		}*/


	}

	public void OnCollisionEnter2D(Collision2D collider)
	{
		if (ballIsActive)
			playAudio.PlayOneShot (hitSound);
			
	}
}
