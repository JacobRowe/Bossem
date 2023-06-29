using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class EnviromentScript : MonoBehaviour
{
	[SerializeField]
	private GameObject gridBasic;

	[SerializeField]
	private GameObject gridRed;

	[SerializeField]
	private Transform PlayspaceParent;

	//demo
	[SerializeField]
	private Transform Grid;




	public delegate void OnEnviromentChange();
	public static OnEnviromentChange onEnviromentChange;


	private GameObject AlphaNumGrid;

	public int columnLength = 7;
	public int rowLength = 7;

	public float x_Space, z_Space;

	//AlphaNum grid
	private const string StringGen = "abcdefghijklmnopqrstuvwxyz0123456789";
	

	// Start is called before the first frame update
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{
		if (Input.GetKeyDown(KeyCode.X))
		{
			GenerateGrid();
		}
	}

	public void GenerateGrid()
	{
		/*if (AlphaNumGrid != null)
		{
			return;
		}
		Destroy(AlphaNumGrid);
		AlphaNumGrid = new GameObject("AlphaNumGrid" + AlphaNumGrid.GetHashCode());
		//AlphaNumGrid.transform.SetParent(playSpace.transform, false);

		for (int i = 0; i < columnLength * rowLength; i++)
		{
			if (Random.Range(0, 15) < 3)
			{
				Instantiate(gridRed, new Vector3(x_Space * (i % columnLength), -0.053f, z_Space * (i / columnLength)), Quaternion.identity, AlphaNumGrid.transform);

			}
			else
			{
				Instantiate(gridBasic, new Vector3(x_Space * (i % columnLength), -0.053f, z_Space * (i / columnLength)), Quaternion.identity, AlphaNumGrid.transform);

			}

			//Instantiate(gridBasic, AlphaNumGrid.transform, false);
		}*/
		PlayspaceParent.gameObject.SetActive(true);
		int GenLength = StringGen.Length;

		for (int i = 0; i < Grid.transform.childCount; i++)
		{
			Grid.transform.GetChild(i).gameObject.GetComponentInChildren<TextMeshPro>().text = StringGen[Random.Range(0, GenLength)].ToString();
		}
		
		//AlphaNumGrid.transform.localPosition = PlayspaceParent.transform.position;
		//AlphaNumGrid.transform.SetParent(PlayspaceParent.transform, true);

		//enviroment has changed
		
	}
}
