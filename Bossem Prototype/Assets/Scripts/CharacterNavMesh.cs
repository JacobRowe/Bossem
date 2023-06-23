using Niantic.LightshipHub.Templates;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(Animator), typeof(NavMeshAgent))]
public class CharacterNavMesh : MonoBehaviour
{
	public NavMeshAgent navMeshAgent;
	public Animator animator;

	//test
	public List<Transform> Points;

	//demo


	private void Start()
	{
		navMeshAgent = GetComponent<NavMeshAgent>();
		animator = GetComponent<Animator>();
		
		//navMeshAgent.destination = Points[Random.Range(0, 4)].position;

		PlacementController.onPlayspaceCreate += EnableAgent;
	}

	private void Awake()
	{
		navMeshAgent = GetComponent<NavMeshAgent>();
		animator = GetComponent<Animator>();

	}
	private void EnableAgent()
	{
		Debug.Log("Agent on");
		//StartCoroutine(RandomWalk());
		
	}	

	IEnumerator RandomWalk()
	{
		while (Points != null)
		{
			navMeshAgent.destination = Points[Random.Range(0, 3)].position;
			yield return new WaitForSeconds(10);
		}
	}
	
}
