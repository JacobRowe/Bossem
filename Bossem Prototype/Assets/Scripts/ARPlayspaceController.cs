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

	public static bool PlaySpaceLocked;

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
		PlaySpaceLocked = true;
		Debug.Log("Spawned");
	}
	
	
	public void DemoAnim(string AnimPlay)
	{
		character.animator.Play(AnimPlay);
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
}
