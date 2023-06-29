using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using Niantic.LightshipHub.Templates;
using Random = UnityEngine.Random;

public class ARPlayspaceController : MonoBehaviour
{

	public Transform PlayspaceParent;

	public NavMeshSurface surface;

	public GameObject testCharacterPrefab;
	[HideInInspector]
	public CharacterNavMesh character;
	private GameObject characterObj;

	public static bool PlaySpaceLocked;

	//test
	public Transform PointParent;


	//demo
	public Transform AiyuSpawn;
	public Transform ObjectToGo;
	static Rigidbody rb;

	private void OnEnable()
	{

		PlacementController.onPlayspaceCreate += Spawn;
		rb = ObjectToGo.GetComponent<Rigidbody>();
		//test

	}

	

	public void Spawn()
	{
		Destroy(characterObj);
		surface.RemoveData();

		surface.BuildNavMesh();
		characterObj = Instantiate(testCharacterPrefab, PlayspaceParent);
		characterObj.transform.position = AiyuSpawn.position;

		character = characterObj.GetComponent<CharacterNavMesh>();
		
		//test
		character.Points.Clear();

		for (int i = 0; i < PointParent.gameObject.transform.childCount; i++)
		{
			Debug.Log(i);
			character.Points.Add(PointParent.GetChild(i));
		}
		PlaySpaceLocked = true;
		Debug.Log("Spawned");
	}
	
	
	public void DemoAnim(string anim)
	{
		StartCoroutine(DemoAnimDelay(anim, 3f));
	}

	public IEnumerator DemoAnimDelay(string anim, float delay)
	{
		yield return new WaitForSeconds(delay);
		character.animator.Play(anim);

		if (anim == "Kick")
		{
			yield return new WaitForSeconds(.5f);
			float x = Random.Range(0, 300);
			float y = Random.Range(0, 300);
			float z = Random.Range(0, 300);

			rb.AddForce(transform.up * 300);
			rb.AddTorque(x, y, z);
		}

	}

	public void AgentGoTo()
	{
		character.GoTo(ObjectToGo);

	}

	public void AgentRandomWalkToggle()
	{
		character.StartCoroutine(character.RandomWalk());
	}

	public void TogglePlayspaceLock()
	{
		PlaySpaceLocked = !PlaySpaceLocked;
		ToggleDisableCharacter();
	}

	public void ToggleDisableCharacter()
	{
		if (characterObj != null)
		{
			characterObj.SetActive(!characterObj.activeSelf);
		}
	}

	public void StopAgentCoroutine(string name)
	{
		character.StopCoroutine(name);
		
	}

	public void DemoRoll()
	{
		float x = Random.Range(0, 300);
		float y = Random.Range(0, 300);
		float z = Random.Range(0, 300);

		rb.AddForce(transform.up * 300);
		rb.AddTorque(x, y, z);
	}
}
