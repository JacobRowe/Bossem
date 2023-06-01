using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.External;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;
using System;

public class GameBoardPlace : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Button to place the GameBoard")]
    private Button _placeButton;

    public ARHitTestResultType _realPlane = ARHitTestResultType.EstimatedHorizontalPlane;
    public ARHitTestResultType _existingPlane = ARHitTestResultType.ExistingPlane;


}
