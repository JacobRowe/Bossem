using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Niantic.ARDK.Extensions.Meshing;
using Niantic.ARDK.Extensions.Gameboard;
using Niantic.ARDK.Utilities;
using Niantic.ARDKExamples;

public class ARMeshSelect : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The scenes ARCamera")]
    private Camera _arCamera;

    [SerializeField]
    [Tooltip("The scenes ARMeshManager")]
    private ARMeshManager _arMeshMananger;

    [SerializeField]
    [Tooltip("The scenes Game Board Manager")]
    private GameboardManager _gameBoardManager;

    [SerializeField]
    [Tooltip("Text shown for current mesh")]
    private Text _currentMeshText;

    [SerializeField]
    [Tooltip("Text shown for current mesh")]
    private Button _selectMeshButton;

    [SerializeField]
    [Tooltip("Playspace Area")]
    [Range(0.1f, 5.0f)]
    private float _playspaceArea = 2.5f;

    [SerializeField]
    //bool 
    private bool _isSelecting;
    [SerializeField]
    private bool _hasSelected;

    public LayerMask ARMeshLayer;

    private void OnEnable()
    {
        _hasSelected = false;
        _selectMeshButton.onClick.AddListener(SelectMeshButton_OnClick);
        
    }

    private void SelectMeshButton_OnClick()
    {
        if (_hasSelected)
        {
            _hasSelected = false;
            _currentMeshText.text = "Current Mesh";
        }
        else
        {
            _hasSelected = true;
        }
    }

    private void Update()
    {
        //if is selecting mesh for playspace placement/creation
        //TO DO - to use AR tools and interfaces to delete meshes programatically?
        if (_hasSelected)
        {
            SelectMesh();

        }
        else if (_isSelecting)//is choosing?
        {
            //choosing
            // method to check size of mesh
            MeshCheck();
            
        }
    }

    //method to check size of playable area on mesh?
    private void MeshCheck()
    {
        
    }

    private void SelectMesh()
    {
        var cameraTransform = _arCamera.transform;
        var ray = new Ray(cameraTransform.position, cameraTransform.forward);
        RaycastHit meshHit;
        //if a raycast interacts with layers tagged as part of the generated ARMesh
        if (Physics.Raycast(cameraTransform.position, cameraTransform.forward, out meshHit, 100, ARMeshLayer))
        {
            //Debug
            _currentMeshText.text = meshHit.transform.gameObject.ToString();
            Debug.Log("Raycast hit on ARMesh");
            //TO DO - bool to be changed by event send, false for now
            _hasSelected = false;
            //---

            var hitMeshObject = meshHit.transform.gameObject;
            //Add to global scope? Need to?
            List<Transform> meshToDelete = new List<Transform>();

            for (int i = 0; i < _arMeshMananger.gameObject.transform.childCount; i++)
            {
                meshToDelete.Add(_arMeshMananger.transform.GetChild(i));
            }


            foreach (Transform mesh in meshToDelete)
            {
                Vector3 gameboardHit;
                if (mesh.gameObject == hitMeshObject 
                    && _gameBoardManager.Gameboard.RayCast(ray, out gameboardHit))
                {
                    //Debug
                    Debug.Log("Selected mesh: " + hitMeshObject);
                    //---
                    //TO DO - save the mesh? Save the object to use? works as is
                    
                }
                else
                {
                    //Debug
                    Debug.Log("Held: " + mesh.gameObject);
                    //---
                    //GameObject.Destroy(mesh.gameObject);

                    mesh.gameObject.SetActive(false);
                    
                }

            }

            //later
            var hitMeshObjectCenter = hitMeshObject.GetComponent<Collider>().bounds.center;

            //final scan on gameboard
            _gameBoardManager.Gameboard.Scan(hitMeshObjectCenter, _playspaceArea);
            //prune to selected mesh chunk
            _gameBoardManager.Gameboard.Prune(hitMeshObjectCenter, _playspaceArea);
            

            
            //_gameBoardManager.SetVisualisationActive(false);



            //method to gen the playspace, external

            _arMeshMananger.DisableFeatures();

            




        }
    }
}

    
