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
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.Extensions.Gameboard;

public class GameBoardPlace : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The scenes ARCamera")]
    private Camera _arCamera;

    [SerializeField]
    [Tooltip("Button to place the GameBoard")]
    private Button _placeButton;

    /*public ARHitTestResultType _realPlane = ARHitTestResultType.EstimatedHorizontalPlane;
    public ARHitTestResultType _existingPlane = ARHitTestResultType.ExistingPlane;*/


    private IGameboard _gameboard;
    private bool _arIsRunning;
    private bool _gameboardIsRunning;


    public void ARSessionStarted()
    {
        _arIsRunning= true;
    }

    public void ARSessionStopped()
    {
        _arIsRunning = false;
        _gameboard.Clear();
    }

    private void Awake()
    {
        GameboardFactory.GameboardInitialized += OnGameboardCreated;
    }

    private void OnGameboardCreated(GameboardCreatedArgs args)
    {
        _gameboard = args.Gameboard;
        _gameboardIsRunning = true;
        _gameboard.GameboardDestroyed += OnGameboardDestroyed;
    }

    private void OnGameboardDestroyed(IArdkEventArgs args)
    {
        _gameboard = null;
        _gameboardIsRunning = false;
    }


    private void Update()
    {
        
    }

}
