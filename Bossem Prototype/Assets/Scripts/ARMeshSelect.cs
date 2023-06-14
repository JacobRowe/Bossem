using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Niantic.ARDK.Extensions.Meshing;
using Niantic.ARDK.Extensions.Gameboard;
using Niantic.ARDK.Utilities;
using Niantic.ARDKExamples;
using Niantic.ARDK.AR;

public class ARMeshSelect : MonoBehaviour
{
    [Header("AR")]
    [SerializeField]
    [Tooltip("The scenes ARCamera")]
    private Camera _arCamera;

    [SerializeField]
    [Tooltip("The scenes ARMeshManager")]
    private ARMeshManager _arMeshMananger;
    [SerializeField]
    [Tooltip("The scenes Game Board Manager")]
    private GameboardManager _gameBoardManager;

    private IGameboard _gameboard;

    [Header("Get Mesh")]
    [SerializeField]
    [Tooltip("Text shown for current mesh")]
    private Text _currentMeshText;

    [SerializeField]
    [Tooltip("Button to select an ARMesh chunk as a playspace")]
    private Button _selectMeshButton;

    [SerializeField]
    [Tooltip("Button to accept an ARMesh chunk as a playspace")]
    private Button _acceptMeshButton;

    [SerializeField]
    [Tooltip("Button to reject an ARMesh chunk as a playspace")]
    private Button _rejectMeshButton;


    [Header("Playspace")]
    [SerializeField]
    [Tooltip("Playspace Area")]
    [Range(0.1f, 5.0f)]
    private float _playspaceArea = 2.5f;

    [SerializeField]
    private bool? _isPlayspaceGood = null;

    public LayerMask ARMeshLayer;

    private void OnEnable()
    {
        _selectMeshButton.onClick.AddListener(SelectMeshButton_OnClick);
        _acceptMeshButton.onClick.AddListener(AcceptMeshButton_OnClick);
        _rejectMeshButton.onClick.AddListener(RejectMeshButton_OnClick);

        //Gameboard
        GameboardFactory.GameboardInitialized += OnGameBoardCreated;

    }

    private void OnGameBoardCreated(GameboardCreatedArgs args)
    {
        _gameboard = args.Gameboard;
    }

    private void OnDisable()
    {
        _selectMeshButton.onClick.RemoveListener(SelectMeshButton_OnClick);
        _acceptMeshButton.onClick.RemoveListener(AcceptMeshButton_OnClick);
        _rejectMeshButton.onClick.RemoveListener(RejectMeshButton_OnClick);

        //Gameboard
        //should destroy?

    }

    private void RejectMeshButton_OnClick()
    {
        _isPlayspaceGood = false;
    }

    private void AcceptMeshButton_OnClick()
    {
        _isPlayspaceGood = true;
    }

    private void SelectMeshButton_OnClick()
    {
        StartCoroutine(SelectMesh());
    }

    

    //method to check size of playable area on mesh?
    

    //wait for checking and selecting, different wait untils
    IEnumerator SelectMesh()
    {
        var cameraTransform = _arCamera.transform;
        var ray = new Ray(cameraTransform.position, cameraTransform.forward);
        RaycastHit meshRayHit;


        //if a raycast interacts with layers tagged as part of the generated ARMesh
        if (Physics.Raycast(cameraTransform.position, cameraTransform.forward, out meshRayHit, 100, ARMeshLayer))
        {
            //Debug
            _currentMeshText.text = meshRayHit.transform.gameObject.ToString();
            Debug.Log("Raycast hit on ARMesh");
            //---

            //get the gameobject reference for the ARMesh hit from the raycast
            var hitMeshObject = meshRayHit.transform.gameObject;
            //get the center of the ARMesh hit from the raycast
            var hitMeshObjectCenter = hitMeshObject.GetComponent<Collider>().bounds.center;

            //TO DO - include in overall check if raycast statement?
            Vector3 gameboardRayHit;
            bool isGameboardHit = _gameBoardManager.Gameboard.RayCast(ray, out gameboardRayHit);

            //if not on gameboard, break from coroutine
            if (!isGameboardHit)
            {
                //Debug
                Debug.Log("Mesh " + hitMeshObject + " not on the gameboard");
                //---
                yield break;

            }
            

            //TO DO - Add to global scope? Need to?
            List<Transform> activeMeshList = new List<Transform>();

            //add all children of root of armeshmanager to active mesh list
            for (int i = 0; i < _arMeshMananger.gameObject.transform.childCount; i++)
            {
                activeMeshList.Add(_arMeshMananger.transform.GetChild(i));
            }
            
            foreach (Transform mesh in activeMeshList)
            {

                //if the object is the hit object and is on the active gameboard
                if (mesh.gameObject == hitMeshObject && isGameboardHit)
                {
                    //Debug
                    Debug.Log("Selected mesh: " + hitMeshObject);
                    //---
                    //TO DO - save the mesh? Save the object to use? works as is
                }
                else
                {
                    //Debug
                    //Debug.Log("Held: " + mesh.gameObject);
                    //---
                    //GameObject.Destroy(mesh.gameObject);

                    mesh.gameObject.SetActive(false);
                }
                //Debug

                //---
            }

            //final scan on gameboard
            //_gameboard.Scan(hitMeshObjectCenter, _playspaceArea);
            //prune to selected mesh chunk
            _gameboard.Prune(hitMeshObjectCenter, _playspaceArea);
            //check fit
            Debug.Log("Pruned area: " + _gameboard.Area);
            //bool _playspaceFit = _gameboard.CheckFit(hitMeshObjectCenter, _playspaceArea);
            
            if (!_gameboard.CheckFit(hitMeshObjectCenter, 0.03f))
            {
                foreach (Transform mesh in activeMeshList)
                {

                    //Debug
                    //Debug.Log("Restored " + mesh.gameObject);
                    //---
                    mesh.gameObject.SetActive(true);
                }
                Debug.Log("Active gameboard too small for Playspace");
                StopCoroutine(SelectMesh());
                yield break;
            }

            _rejectMeshButton.gameObject.SetActive(true);
            _acceptMeshButton.gameObject.SetActive(true);


            //wait until UI choice made
            yield return new WaitWhile(() => _isPlayspaceGood == null);

            _rejectMeshButton.gameObject.SetActive(false);
            _acceptMeshButton.gameObject.SetActive(false);

            if (_isPlayspaceGood == true)
            {
                //final scan on gameboard
                _gameBoardManager.ScanRange = 10;
                _gameboard.Scan(hitMeshObjectCenter, _playspaceArea);
                
                _gameBoardManager.ScanRange = 5;

                //prune to selected mesh chunk
                _gameboard.Prune(hitMeshObjectCenter, _playspaceArea);


                _arMeshMananger.DisableFeatures();

                Debug.Log("Playspace good");
                _isPlayspaceGood = null;

                yield return null;

            }
            else if (_isPlayspaceGood == false)
            {
                _gameBoardManager.EnableFeatures();
                _arMeshMananger.EnableFeatures();
                


                foreach (Transform mesh in activeMeshList)
                {
                    
                        //Debug
                        //Debug.Log("Restored " + mesh.gameObject);
                        //---
                        mesh.gameObject.SetActive(true);
                }
                Debug.Log("Playspace bad");
                _isPlayspaceGood = null;
                yield return null;


            }

        }
        yield return null;
    }







    //OLD - to remove
    private void SelectMeshMethod()
    {
        var cameraTransform = _arCamera.transform;
        var ray = new Ray(cameraTransform.position, cameraTransform.forward);
        RaycastHit meshRayHit;

        //if a raycast interacts with layers tagged as part of the generated ARMesh
        if (Physics.Raycast(cameraTransform.position, cameraTransform.forward, out meshRayHit, 100, ARMeshLayer))
        {
            //Debug
            _currentMeshText.text = meshRayHit.transform.gameObject.ToString();
            Debug.Log("Raycast hit on ARMesh");
            //TO DO - bool to be changed by event send, false for now
            //---
            
            //get the gameobject reference for the hit object
            var hitMeshObject = meshRayHit.transform.gameObject;
            //Add to global scope? Need to?
            List<Transform> activeMeshList = new List<Transform>();

            //add all children of root of armeshmanager to active mesh list
            for (int i = 0; i < _arMeshMananger.gameObject.transform.childCount; i++)
            {
                activeMeshList.Add(_arMeshMananger.transform.GetChild(i));
            }

            Vector3 gameboardRayHit;
            bool isGameboardHit = _gameBoardManager.Gameboard.RayCast(ray, out gameboardRayHit);

            //if the area selected is not on the active gameboard
            if (!isGameboardHit)
            {
                //Debug
                Debug.Log("Mesh " + hitMeshObject + " is not on the gameboard");
                //---
                
            }
            foreach (Transform mesh in activeMeshList)
            {
                
                //if the object is the hit object and is on the active gameboard
                if (mesh.gameObject == hitMeshObject && isGameboardHit)
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
                //Debug
                
                //---
                

            }
            var hitMeshObjectCenter = hitMeshObject.GetComponent<Collider>().bounds.center;

            //final scan on gameboard
            _gameBoardManager.Gameboard.Scan(hitMeshObjectCenter, _playspaceArea);
            //prune to selected mesh chunk
            _gameBoardManager.Gameboard.Prune(hitMeshObjectCenter, _playspaceArea);



            _gameBoardManager.SetVisualisationActive(false);
            _arMeshMananger.DisableFeatures();

        }
    }
}

    
