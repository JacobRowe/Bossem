using Niantic.LightshipHub.Templates;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public class CharacterNavMesh : MonoBehaviour
{
	public NavMeshAgent navMeshAgent;

	//test
	public List<Transform> Points;
	

	private void Awake()
	{
		navMeshAgent = GetComponent<NavMeshAgent>();
		PlacementController.onPlayspaceCreate += EnableAgent;

		//Points.Add()
		Debug.Log("Exist!");



	}

	private void EnableAgent()
	{
		Debug.Log("Agent on");
		//StartCoroutine(RandomWalk());
		
	}

	private void LateUpdate()
	{
		StartCoroutine(RandomWalk());
	}

	IEnumerator RandomWalk()
	{

		for (int i = 0; i < 10; i++)
		{
			navMeshAgent.destination = Points[Random.Range(0, 4)].position;
			yield return new WaitForSeconds(2);
		}
		
	}
	
}
