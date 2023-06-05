using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MeshManagerOutput : MonoBehaviour
{
    [SerializeField]
    private GameObject _meshManager;
    [SerializeField]
    private Text ScrollText;
    [SerializeField]
    private Button GetMeshButton;
    [SerializeField]
    private List<Transform> CurrentMeshes;

    // Start is called before the first frame update
    void Start()
    {
        GetMeshButton.onClick.AddListener(GetMesh_OnClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void GetMesh_OnClick()
    {
        ScrollText.text += "\n DEBUG START \n";
        for (int i = 0; i < _meshManager.transform.childCount; i++)
        {
            ScrollText.text += _meshManager.transform.GetChild(i) + "\n";
        }
        ScrollText.text += "DEBUG END \n";


    }

    

}
