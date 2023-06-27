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
	private GameObject playSpace;

	public int columnLength = 7;
	public int rowLength = 7;

	public float x_Space, z_Space;
	public Transform x_Start, z_Start;

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
		GameObject AlphaNumGrid = new GameObject("AlphaNumGrid");
		AlphaNumGrid.transform.SetParent(playSpace.transform, true);

		for (int i = 0; i < columnLength * rowLength; i++)
		{
			Instantiate(gridBasic, new Vector3(x_Space * (i % columnLength), 0, z_Space * (i / columnLength)), Quaternion.identity, AlphaNumGrid.transform);

			//Instantiate(gridBasic, AlphaNumGrid.transform, false);
		}

		int GenLength = StringGen.Length;
		for (int i = 0; i < AlphaNumGrid.transform.childCount; i++)
		{
			//AlphaNumGrid.transform.GetChild(i).gameObject.transform.GetChild(0).GetComponent<Text>().text = 
				//StringGen[Random.Range(1, 1)].ToString();

			AlphaNumGrid.transform.GetChild(i).gameObject.GetComponentInChildren<TextMeshPro>().text = StringGen[Random.Range(0, GenLength)].ToString();

		}
		AlphaNumGrid.transform.position = AlphaNumGrid.transform.parent.position;

	}
}
