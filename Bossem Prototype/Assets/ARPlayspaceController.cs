using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;


public class ARPlayspaceController : MonoBehaviour
{
	[SerializeField]
	private Button _spawnButton;

	public Transform PlayspaceParent;

	public GameObject TestPrefab;

	
	private void OnEnable()
	{
		_spawnButton.onClick.AddListener(SpawnButton_OnClick);
	}

	private void SpawnButton_OnClick()
	{
		//spawn object on playspace random pos
		
	}

	


	// Update is called once per frame
	void Update()
    {
        
    }
}
