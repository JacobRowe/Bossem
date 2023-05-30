using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Recognissimo.Components;

public class RecognitionListener : MonoBehaviour
{
    public void WriteIt()
    {
        Debug.Log("In Listener");
    }

    public void OnPartialResult(PartialResult partialResult)
    {
        Debug.Log($"<color=yellow>{partialResult.partial}</color>");
    }

    public void OnResult(Result result)
    {
        Debug.Log($"<color=green>{result.text}</color>");
    }
}
