using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavMeshManager : MonoBehaviour
{
    
	private void GenerateNavMesh()
	{
		// Use this if you want to clear existing
		NavMesh.RemoveAllNavMeshData();  
		var settings = NavMesh.CreateSettings();
		var buildSources = new List<NavMeshBuildSource>();
		// create floor as passable area
		var floor = new NavMeshBuildSource
		{
			transform = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, Vector3.one),
			shape = NavMeshBuildSourceShape.Box,
			size = new Vector3(10, 1, 10)
		};
		buildSources.Add(floor);

		// Create obstacle 
		const int OBSTACLE = 1 << 0;
		var obstacle = new NavMeshBuildSource
		{
			transform = Matrix4x4.TRS(new Vector3(3, 0, 3), Quaternion.identity, Vector3.one),
			shape = NavMeshBuildSourceShape.Box,
			size = new Vector3(1, 1, 1),
			area = OBSTACLE
		};
		buildSources.Add(obstacle);

		// build navmesh
		NavMeshData built = NavMeshBuilder.BuildNavMeshData(
			settings, buildSources, new Bounds(Vector3.zero, new Vector3(10, 10, 10)),
			new Vector3(0, 0, 0), Quaternion.identity);
		NavMesh.AddNavMeshData(built);
	}
}
