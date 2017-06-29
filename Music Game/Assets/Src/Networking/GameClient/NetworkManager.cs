using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using Random = UnityEngine.Random;
using Sproto;
using SprotoType;

public enum NetworkRequestStatus
{
	None = 0,
	Started = 1,
	Failed = 2,
	Success = 3,
	Timeout = 4
}

public class NetworkRequest
{
	public byte[] mRequestData;
	public NetworkRequestStatus mStatus;
	public byte[] mResponseData;
	public Action<byte[]> mSuccess;
	public Action<byte[]> mFail;

	public void SetResponse(byte[] response, bool success)
	{
		mResponseData = response;
		mStatus = success ? NetworkRequestStatus.Success : NetworkRequestStatus.Failed;
	}
}

public class NetworkManager : MonoBehaviour {

	private static NetworkManager m_instance;
	private NetworkManager() { }

	[Range(0,1)]
	public float mSimulateSuccessRate = 0.5f;

	[Range(0,1)]
	public float mSimulateRespondTime = 0.5f;

	Queue<NetworkRequest> mRequests = new Queue<NetworkRequest>();

	public static NetworkManager Instance
	{
		get
		{
			if (m_instance == null)
				m_instance = GameObject.FindObjectOfType(typeof(NetworkManager)) as NetworkManager;
			return m_instance;
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
    void Update()
    {

		if(mRequests.Count <= 0)
			return;
		
		NetworkRequest currentRequest = mRequests.Peek();
		
		switch(currentRequest.mStatus)
		{
		case NetworkRequestStatus.None:
			currentRequest.mStatus = NetworkRequestStatus.Started;
			GameObject.Find("ApiManager").GetComponent<APIManager>().SendRequest(currentRequest);
			break;
		case NetworkRequestStatus.Success:
			currentRequest.mSuccess(currentRequest.mResponseData);
			mRequests.Dequeue();
			break;
		case NetworkRequestStatus.Failed:
			currentRequest.mFail(currentRequest.mResponseData);
			mRequests.Dequeue();
			break;
		default:
			break;
		}



	}

	public void SendNetworkRequest<T>(SprotoTypeBase request, Action<byte[]> success, Action<byte[]> fail)
	{
		NetworkRequest newRequest = new NetworkRequest();
		newRequest.mRequestData = request.encode();
		newRequest.mSuccess = success;
		newRequest.mFail = fail;
		mRequests.Enqueue(newRequest);
	}

	public void SendNetworkRequestAsnyc(string request, Action<object> success, Action<object> fail)
	{
		//Debug.Log("sending request : " + request);
		StartCoroutine( SimulateNetworkRequest(request, success, fail) );
	}

	IEnumerator SimulateNetworkRequest(string request, Action<object> success, Action<object> fail)
	{
		if(Random.Range(0,1.0f) < mSimulateSuccessRate)
		{
			yield return new WaitForSeconds(mSimulateRespondTime);
			//Debug.LogWarning("Success Request : " + request);
			success("success");
		}
		else
		{
			yield return new WaitForSeconds(mSimulateRespondTime);
			fail("fail");
		}
	}
}
