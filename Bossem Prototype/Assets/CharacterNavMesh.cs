using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public class CharacterNavMesh : MonoBehaviour
{
	private NavMeshAgent navMeshAgent;

	[SerializeField]
	private ARPlayspaceController PlayspaceController;

	//test
	public Transform Point;

	private void Awake()
	{
		navMeshAgent = GetComponent<NavMeshAgent>();
		navMeshAgent.enabled = false;
		
	}

	private void Update()
	{
		if (navMeshAgent.enabled == true)
		{
			navMeshAgent.destination = Point.position;
		}
	}
}
