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
	private CharacterNavMesh character;
	private GameObject characterObj;


	private bool IsSpawned = false;

	//test
	public Transform PointParent;
	

	private void OnEnable()
	{

		PlacementController.onPlayspaceCreate += Spawn;
		IsSpawned = false;
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
	
	

	// Update is called once per frame
	void Update()
	{
		
		
		
	}
}
