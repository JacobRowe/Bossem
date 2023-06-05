using Niantic.ARDK.Extensions.Meshing;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARMeshSelect : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The scenes ARCamera")]
    private Camera _arCamera;

    [SerializeField]
    [Tooltip("The scenes ARMeshManager")]
    private ARMeshManager _arMeshMananger;

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
    private bool _isSelecting;

    public LayerMask ARMeshLayer;

    private void OnEnable()
    {
        _isSelecting = false;
        _selectMeshButton.onClick.AddListener(SelectMeshButton_OnClick);
        
    }

    private void SelectMeshButton_OnClick()
    {
        if (_isSelecting)
        {
            _isSelecting = false;
            _currentMeshText.text = "Current Mesh";
        }
        else
        {
            _isSelecting = true;
        }
    }

    private void Update()
    {
        //if is selecting mesh for playspace placement/creation
        if (_isSelecting)
        {
            var cameraTransform = _arCamera.transform;
            var ray = new Ray(cameraTransform.position, cameraTransform.forward);
            RaycastHit meshHit;
            //if a raycast interacts with ;ayers tagged as part of the generated ARMesh
            if (Physics.Raycast(cameraTransform.position, cameraTransform.forward, out meshHit, 100, ARMeshLayer))
            {
                //Debug
                _currentMeshText.text =  meshHit.transform.gameObject.ToString();
                //TO DO - bool to be changed by event send, false for now
                _isSelecting = false;
                //---
                
                var currentMesh = meshHit.transform.gameObject;
                


            }

        }
    }
}

    
