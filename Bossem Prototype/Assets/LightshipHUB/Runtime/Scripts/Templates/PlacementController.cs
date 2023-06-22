// Copyright 2022 Niantic, Inc. All Rights Reserved.

using UnityEngine;
using UnityEngine.UI;

using Niantic.ARDK.Utilities;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.Utilities.Input.Legacy;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;

namespace Niantic.LightshipHub.Templates
{
  public class PlacementController : MonoBehaviour
  {
    [HideInInspector]
    public ObjectHolderController OHcontroller;
    public bool MultipleInstances;

	public delegate void OnPlayspaceCreate();
	public static OnPlayspaceCreate onPlayspaceCreate;

	private bool isPlayspaceGood = false;
	public GameObject RotateUI;
	public Slider RotateUISlider;


	private	GameObject PlaySpaceObj;


	private void OnEnable()
	{
			RotateUISlider.onValueChanged.AddListener(delegate { OnValueChangedRotate(RotateUISlider.value); });

	}

	void Update()
    {
      if (PlatformAgnosticInput.touchCount <= 0) return;

      var touch = PlatformAgnosticInput.GetTouch(0);
      if (touch.phase == TouchPhase.Began)
      {
        TouchBegan(touch);
      }
    }

    private void TouchBegan(Touch touch)
    {
      var currentFrame = OHcontroller.Session.CurrentFrame;
      if (currentFrame == null) return;

      if (OHcontroller.Camera == null) return;

      var hitTestResults = currentFrame.HitTest(
          OHcontroller.Camera.pixelWidth,
          OHcontroller.Camera.pixelHeight,
          touch.position,
          ARHitTestResultType.EstimatedHorizontalPlane
      );

      if (hitTestResults.Count <= 0 || EventSystem.current.currentSelectedGameObject != null) return;

	  

      var position = hitTestResults[0].WorldTransform.ToPosition();


			

      if (MultipleInstances)
      {
        PlaySpaceObj = Instantiate(OHcontroller.ObjectHolder, this.transform);
        PlaySpaceObj.SetActive(true);
      }
      else
      {
        PlaySpaceObj = OHcontroller.ObjectHolder;
      }

      PlaySpaceObj.SetActive(true);

      PlaySpaceObj.transform.position = position;
			//TO DO - Change to align with plane and/or camera, not to random
	  StartCoroutine(RotatePlayspace(PlaySpaceObj));
      //PlaySpaceObj.transform.Rotate(0.0f, Random.Range(0.0f, 360.0f), 0.0f);
	  onPlayspaceCreate?.Invoke();
    }

	IEnumerator RotatePlayspace(GameObject playspace)
	{
			//buttons left and right to rotate  object
		RotateUI.SetActive(true);
			//set rotation of ghost object -> placed obj
			//wait until user selects okay to place object
		Debug.Log("Rotating");
		yield return new WaitUntil(() => isPlayspaceGood == true);
		Debug.Log("Rotated");
		RotateUI.SetActive(false);
		TogglePlayspaceGood();
		

	}


	public void TogglePlayspaceGood()
	{
		isPlayspaceGood = !isPlayspaceGood;
	}

	public void OnValueChangedRotate(float RotVal)
	{

		
		PlaySpaceObj.transform.Rotate(0.0f, PlaySpaceObj.transform.rotation.y + RotVal, 0.0f);
	}

	
  }
}