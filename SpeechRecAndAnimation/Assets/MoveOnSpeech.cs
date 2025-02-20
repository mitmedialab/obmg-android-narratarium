using UnityEngine;
using System.Collections;

public class MoveOnSpeech : MonoBehaviour, ISpeechRecognitionListener {

    private GUIStyle fontStyle = new GUIStyle();
    public MediaPlayerCtrl scrMedia;
    private string lastResults = "", lastResults2="";
	public Vector2 direction = new Vector2(0, 0), speed = new Vector2(2, 2), movement, runningSpeed = new Vector2(2, 2), walkingSpeed = new Vector2(1, 1);
    private float dist, leftBorder, rightBorder, buffer,topBorder,bottomBorder;
    private bool facingRight = true, running = false, walking = false;
	private string lastAnimation = "";
    // Use this for initialization
    void Start()
    {
        SpeechRecognition.AddSpeechRecognitionListeren(this);
        SpeechRecognition.StartListening();
        fontStyle.normal.textColor = Color.black;
		dist = (transform.position - (Camera.main).transform.position).z; 

		leftBorder = (Camera.main).ViewportToWorldPoint(new Vector3(0, 0, dist)).x; 
		rightBorder = (Camera.main).ViewportToWorldPoint(new Vector3(1, 0, dist)).x;

		topBorder = (Camera.main).ViewportToWorldPoint(new Vector3(1, 1, dist)).y;
		bottomBorder = (Camera.main).ViewportToWorldPoint(new Vector3(0, 0, dist)).y;

    }
    public void OnResults(string[] results)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        //foreach (string s in results)
        //{
            sb.Append(results[0]);
           // sb.Append(", ");
        //}
        lastResults = sb.ToString();
        SpeechRecognition.StartListening();
    }

    // Update is called once per frame
    void Update()
    {
		string commandRecognized = "";
		Debug.Log("Beggining update");
		foreach(string key in SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations.Keys){
			if(SpeechRecognition.CommandRecognized(key)){
				commandRecognized = key;
				Debug.Log ("Command recognized "+ key);
				break;
			}
		}
		if(commandRecognized.Equals("")||commandRecognized==null){
			return;
		}
		Debug.Log("Animation Dictionary");
		Debug.Log("AnimationDict"+SpeechRecognition.GetSpeechAnimationDictionary());
		SpeechAnimationDictionary.Animation currentAnimation = null;

		currentAnimation = SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations[commandRecognized];
		if(currentAnimation == null){
			return;
		}

		try{
			direction = currentAnimation.direction;
			if(facingRight && currentAnimation.flippedX){
				//Monster is facing right and we need to flip
				facingRight = !facingRight;
				Vector3 theScale = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
				theScale.x *= -1;
				//lastResults2 = theScale.ToString();
				GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale;
			}
			else if(!facingRight&&!currentAnimation.flippedX){
				//opposite condition
				facingRight = !facingRight;
				Vector3 theScale = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
				theScale.x *= -1;
				//lastResults2 = theScale.ToString();
				GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale;
			}
			//Check if running or walking
			if(currentAnimation.running){
				running = currentAnimation.running;
				walking = false;
				speed = runningSpeed;
			}
			else if(currentAnimation.walking){
				running = false;
				walking = currentAnimation.walking;
				speed = walkingSpeed;
			}
			else{
				running = walking = false;
			}
			if(currentAnimation!=null)
			if(lastAnimation.Equals(currentAnimation.animation)){
				//Do nothing video is already playing
			}
			else if(!currentAnimation.animation.Equals("")&&currentAnimation.animation!=null){
				scrMedia.Load(currentAnimation.animation);
				scrMedia.Play();
			}
			lastAnimation = currentAnimation.animation;
			}
		catch(System.Exception e){
			lastResults2="Exception"+e.ToString();
			return;
		}
			//Check for collisions
		
        //Horizontal
        if (GameObject.FindGameObjectWithTag("Monster").transform.position.x < leftBorder-buffer)
        { // ship is past world-space view / off screen
            lastResults2 = "Too far left";
            GameObject.FindGameObjectWithTag("Monster").transform.position = new Vector3(rightBorder + buffer, GameObject.FindGameObjectWithTag("Monster").transform.position.y, GameObject.FindGameObjectWithTag("Monster").transform.position.z);  // move ship to opposite side
        }
        if ( GameObject.FindGameObjectWithTag("Monster").transform.position.x > rightBorder + buffer)
        {
            lastResults2 = "Too far right";
            GameObject.FindGameObjectWithTag("Monster").transform.position = new Vector3(leftBorder - buffer, GameObject.FindGameObjectWithTag("Monster").transform.position.y, GameObject.FindGameObjectWithTag("Monster").transform.position.z);  // move ship to opposite side
        }

        //Vertical
        if (GameObject.FindGameObjectWithTag("Monster").transform.position.y < bottomBorder + buffer)
        { 
			//ship is past world-space view / off screen
            lastResults2 = "Too far DOWN";
            GameObject.FindGameObjectWithTag("Monster").transform.position = new Vector3(GameObject.FindGameObjectWithTag("Monster").transform.position.x,topBorder - buffer, GameObject.FindGameObjectWithTag("Monster").transform.position.z);  // move ship to opposite side
        }


		if (GameObject.FindGameObjectWithTag("Monster").transform.position.y > topBorder - buffer)
		{ 
			//ship is past world-space view / off screen
			lastResults2 = "Too far DOWN";
			GameObject.FindGameObjectWithTag("Monster").transform.position = new Vector3(GameObject.FindGameObjectWithTag("Monster").transform.position.x,bottomBorder + buffer, GameObject.FindGameObjectWithTag("Monster").transform.position.z);  // move ship to opposite side
		}

       
        movement = new Vector2(speed.x*direction.x, speed.y * direction.y);
		Vector3 theScale1 = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
		theScale1.y = 1.6f;
		GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale1;

	}
	void OnGUI()
	{
		GUI.Label(new Rect(0, 0, Screen.width, Screen.height), "Speech text:"+lastResults,fontStyle);
        GUI.Label(new Rect(0, 30, Screen.width, Screen.height), "Collision:" + lastResults2, fontStyle);
    }
    void FixedUpdate()
    {
        GetComponent<Rigidbody2D>().velocity = movement;
    }

    public void OnBeginningOfSpeech()
    {
        //throw new System.NotImplementedException();
    }

    public void OnBufferReceived(byte[] buffer)
    {
        //throw new System.NotImplementedException();
    }

    public void OnEndOfSpeech()
    {
    //    throw new System.NotImplementedException();
    }

    public void OnError(int error, string errorMessage)
    {
        lastResults = errorMessage + " " + error;
        if (error == 5)
        {
            SpeechRecognition.StartListening();
        }
    }

    public void OnEvent(int eventType, System.Collections.Generic.Dictionary<string, string> bundle)
    {
        //throw new System.NotImplementedException();
    }

    public void OnPartialResults(System.Collections.Generic.Dictionary<string, string> partialResults)
    {
        //throw new System.NotImplementedException();
    }

    public void OnReadyForSpeech(System.Collections.Generic.Dictionary<string, string> bundle)
    {
        //throw new System.NotImplementedException();

        SpeechRecognition.StartListening();
    }

    public void OnRmsChanged(float rmsdB)
    {
    
        //throw new System.NotImplementedException();
    }

    public void OnChangeState(SpeechRecognition.State newState)
    {
        //throw new System.NotImplementedException();
        /*
        if (newState == SpeechRecognition.State.IDLE)
        {
            SpeechRecognition.StartListening();
        }
        */
        //throw new System.NotImplementedException();
    }
}
