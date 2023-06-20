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
		//navMeshAgent.enabled = false;
		//Points.Add()
		Debug.Log("Exist!");

	}

	private void Update()
	{
		//test
		StartCoroutine(RandomWalk());
	}

	IEnumerator RandomWalk()
	{
		navMeshAgent.destination = Points[Random.Range(0, 4)].position;
		yield return new WaitForSeconds(10);
	}
	
}
