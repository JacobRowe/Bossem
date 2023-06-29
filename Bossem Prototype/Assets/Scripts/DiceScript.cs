using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceScript : MonoBehaviour
{
	static Rigidbody rb;
	public static Vector3 diceVelocity;

    // Start is called before the first frame update
    void Start()
    {
		rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
	{
		if (Input.GetKeyDown(KeyCode.Space))
		{
			float x = Random.Range(0, 300);
			float y= Random.Range(0, 300);
			float z = Random.Range(0, 300);

			rb.AddForce(transform.up * 300);
			rb.AddTorque(x, y, z);

		}



	}
}
