using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using Niantic.LightshipHub.Templates;

public class ARPlayspaceController : MonoBehaviour
{

	public Transform PlayspaceParent;

	public NavMeshSurface surface;

	public GameObject testCharacterPrefab;
	[HideInInspector]
	public CharacterNavMesh character;
	private GameObject characterObj;


	//test
	public Transform PointParent;
	

	private void OnEnable()
	{

		PlacementController.onPlayspaceCreate += Spawn;

		//test

	}

	

	public void Spawn()
	{
		Destroy(characterObj);
		surface.RemoveData();

		surface.BuildNavMesh();
		characterObj = Instantiate(testCharacterPrefab, PlayspaceParent);
		character = characterObj.GetComponent<CharacterNavMesh>();
		//test
		character.Points.Clear();
		for (int i = 0; i < PointParent.gameObject.transform.childCount; i++)
		{
			Debug.Log(i);
			character.Points.Add(PointParent.GetChild(i));
		}
		Debug.Log("Spawned");
	}
	
	
	public void DemoAnim(string AnimPlay)
	{
		character.animator.Play(AnimPlay);
	}

	// Update is called once per frame
	void Update()
	{
		
		
		
	}
}
