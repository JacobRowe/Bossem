void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();

		//System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSampleWithMetadata(System.IntPtr,System.Int32,System.Void*)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSampleWithMetadata();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSampleWithMetadata();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::GetCategoryDescription_Injected(System.UInt16,Unity.Profiling.LowLevel.Unsafe.ProfilerCategoryDescription&)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_GetCategoryDescription_Injected();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_GetCategoryDescription_Injected();

	//End Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

	//Start Registrations for type : UnityEngine.AI.NavMeshAgent

		//System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
		void Register_UnityEngine_AI_NavMeshAgent_get_remainingDistance();
		Register_UnityEngine_AI_NavMeshAgent_get_remainingDistance();

		//UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
		void Register_UnityEngine_AI_NavMeshAgent_get_pathStatus();
		Register_UnityEngine_AI_NavMeshAgent_get_pathStatus();

	//End Registrations for type : UnityEngine.AI.NavMeshAgent

	//Start Registrations for type : UnityEngine.Android.AndroidAssetPacks

		//System.Boolean UnityEngine.Android.AndroidAssetPacks::CoreUnityAssetPacksDownloaded()
		void Register_UnityEngine_Android_AndroidAssetPacks_CoreUnityAssetPacksDownloaded();
		Register_UnityEngine_Android_AndroidAssetPacks_CoreUnityAssetPacksDownloaded();

	//End Registrations for type : UnityEngine.Android.AndroidAssetPacks

	//Start Registrations for type : UnityEngine.AndroidJNI

		//System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallBooleanMethod();
		Register_UnityEngine_AndroidJNI_CallBooleanMethod();

		//System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticBooleanMethod();
		Register_UnityEngine_AndroidJNI_CallStaticBooleanMethod();

		//System.Boolean UnityEngine.AndroidJNI::GetBooleanArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetBooleanArrayElement();
		Register_UnityEngine_AndroidJNI_GetBooleanArrayElement();

		//System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetBooleanField();
		Register_UnityEngine_AndroidJNI_GetBooleanField();

		//System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticBooleanField();
		Register_UnityEngine_AndroidJNI_GetStaticBooleanField();

		//System.Boolean UnityEngine.AndroidJNI::IsAssignableFrom(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_IsAssignableFrom();
		Register_UnityEngine_AndroidJNI_IsAssignableFrom();

		//System.Boolean UnityEngine.AndroidJNI::IsInstanceOf(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_IsInstanceOf();
		Register_UnityEngine_AndroidJNI_IsInstanceOf();

		//System.Boolean UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_IsSameObject();
		Register_UnityEngine_AndroidJNI_IsSameObject();

		//System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromBooleanArray();
		Register_UnityEngine_AndroidJNI_FromBooleanArray();

		//System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromByteArray();
		Register_UnityEngine_AndroidJNI_FromByteArray();

		//System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallCharMethod();
		Register_UnityEngine_AndroidJNI_CallCharMethod();

		//System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticCharMethod();
		Register_UnityEngine_AndroidJNI_CallStaticCharMethod();

		//System.Char UnityEngine.AndroidJNI::GetCharArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetCharArrayElement();
		Register_UnityEngine_AndroidJNI_GetCharArrayElement();

		//System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetCharField();
		Register_UnityEngine_AndroidJNI_GetCharField();

		//System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticCharField();
		Register_UnityEngine_AndroidJNI_GetStaticCharField();

		//System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromCharArray();
		Register_UnityEngine_AndroidJNI_FromCharArray();

		//System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallDoubleMethod();
		Register_UnityEngine_AndroidJNI_CallDoubleMethod();

		//System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticDoubleMethod();
		Register_UnityEngine_AndroidJNI_CallStaticDoubleMethod();

		//System.Double UnityEngine.AndroidJNI::GetDoubleArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetDoubleArrayElement();
		Register_UnityEngine_AndroidJNI_GetDoubleArrayElement();

		//System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetDoubleField();
		Register_UnityEngine_AndroidJNI_GetDoubleField();

		//System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticDoubleField();
		Register_UnityEngine_AndroidJNI_GetStaticDoubleField();

		//System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromDoubleArray();
		Register_UnityEngine_AndroidJNI_FromDoubleArray();

		//System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallShortMethod();
		Register_UnityEngine_AndroidJNI_CallShortMethod();

		//System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticShortMethod();
		Register_UnityEngine_AndroidJNI_CallStaticShortMethod();

		//System.Int16 UnityEngine.AndroidJNI::GetShortArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetShortArrayElement();
		Register_UnityEngine_AndroidJNI_GetShortArrayElement();

		//System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetShortField();
		Register_UnityEngine_AndroidJNI_GetShortField();

		//System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticShortField();
		Register_UnityEngine_AndroidJNI_GetStaticShortField();

		//System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromShortArray();
		Register_UnityEngine_AndroidJNI_FromShortArray();

		//System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
		void Register_UnityEngine_AndroidJNI_AttachCurrentThread();
		Register_UnityEngine_AndroidJNI_AttachCurrentThread();

		//System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallIntMethod();
		Register_UnityEngine_AndroidJNI_CallIntMethod();

		//System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticIntMethod();
		Register_UnityEngine_AndroidJNI_CallStaticIntMethod();

		//System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
		void Register_UnityEngine_AndroidJNI_DetachCurrentThread();
		Register_UnityEngine_AndroidJNI_DetachCurrentThread();

		//System.Int32 UnityEngine.AndroidJNI::EnsureLocalCapacity(System.Int32)
		void Register_UnityEngine_AndroidJNI_EnsureLocalCapacity();
		Register_UnityEngine_AndroidJNI_EnsureLocalCapacity();

		//System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetArrayLength();
		Register_UnityEngine_AndroidJNI_GetArrayLength();

		//System.Int32 UnityEngine.AndroidJNI::GetIntArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetIntArrayElement();
		Register_UnityEngine_AndroidJNI_GetIntArrayElement();

		//System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetIntField();
		Register_UnityEngine_AndroidJNI_GetIntField();

		//System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticIntField();
		Register_UnityEngine_AndroidJNI_GetStaticIntField();

		//System.Int32 UnityEngine.AndroidJNI::GetStringLength(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringLength();
		Register_UnityEngine_AndroidJNI_GetStringLength();

		//System.Int32 UnityEngine.AndroidJNI::GetStringUTFLength(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringUTFLength();
		Register_UnityEngine_AndroidJNI_GetStringUTFLength();

		//System.Int32 UnityEngine.AndroidJNI::GetVersion()
		void Register_UnityEngine_AndroidJNI_GetVersion();
		Register_UnityEngine_AndroidJNI_GetVersion();

		//System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
		void Register_UnityEngine_AndroidJNI_PushLocalFrame();
		Register_UnityEngine_AndroidJNI_PushLocalFrame();

		//System.Int32 UnityEngine.AndroidJNI::Throw(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_Throw();
		Register_UnityEngine_AndroidJNI_Throw();

		//System.Int32 UnityEngine.AndroidJNI::ThrowNew(System.IntPtr,System.String)
		void Register_UnityEngine_AndroidJNI_ThrowNew();
		Register_UnityEngine_AndroidJNI_ThrowNew();

		//System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromIntArray();
		Register_UnityEngine_AndroidJNI_FromIntArray();

		//System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallLongMethod();
		Register_UnityEngine_AndroidJNI_CallLongMethod();

		//System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticLongMethod();
		Register_UnityEngine_AndroidJNI_CallStaticLongMethod();

		//System.Int64 UnityEngine.AndroidJNI::GetLongArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetLongArrayElement();
		Register_UnityEngine_AndroidJNI_GetLongArrayElement();

		//System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetLongField();
		Register_UnityEngine_AndroidJNI_GetLongField();

		//System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticLongField();
		Register_UnityEngine_AndroidJNI_GetStaticLongField();

		//System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromLongArray();
		Register_UnityEngine_AndroidJNI_FromLongArray();

		//System.IntPtr UnityEngine.AndroidJNI::AllocObject(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_AllocObject();
		Register_UnityEngine_AndroidJNI_AllocObject();

		//System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallObjectMethod();
		Register_UnityEngine_AndroidJNI_CallObjectMethod();

		//System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticObjectMethod();
		Register_UnityEngine_AndroidJNI_CallStaticObjectMethod();

		//System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
		void Register_UnityEngine_AndroidJNI_ExceptionOccurred();
		Register_UnityEngine_AndroidJNI_ExceptionOccurred();

		//System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
		void Register_UnityEngine_AndroidJNI_FindClass();
		Register_UnityEngine_AndroidJNI_FindClass();

		//System.IntPtr UnityEngine.AndroidJNI::FromReflectedField(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromReflectedField();
		Register_UnityEngine_AndroidJNI_FromReflectedField();

		//System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromReflectedMethod();
		Register_UnityEngine_AndroidJNI_FromReflectedMethod();

		//System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetFieldID();
		Register_UnityEngine_AndroidJNI_GetFieldID();

		//System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetMethodID();
		Register_UnityEngine_AndroidJNI_GetMethodID();

		//System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetObjectArrayElement();
		Register_UnityEngine_AndroidJNI_GetObjectArrayElement();

		//System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetObjectClass();
		Register_UnityEngine_AndroidJNI_GetObjectClass();

		//System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetObjectField();
		Register_UnityEngine_AndroidJNI_GetObjectField();

		//System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetStaticFieldID();
		Register_UnityEngine_AndroidJNI_GetStaticFieldID();

		//System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetStaticMethodID();
		Register_UnityEngine_AndroidJNI_GetStaticMethodID();

		//System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticObjectField();
		Register_UnityEngine_AndroidJNI_GetStaticObjectField();

		//System.IntPtr UnityEngine.AndroidJNI::GetSuperclass(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetSuperclass();
		Register_UnityEngine_AndroidJNI_GetSuperclass();

		//System.IntPtr UnityEngine.AndroidJNI::NewBooleanArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewBooleanArray();
		Register_UnityEngine_AndroidJNI_NewBooleanArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewCharArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewCharArray();
		Register_UnityEngine_AndroidJNI_NewCharArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewDoubleArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewDoubleArray();
		Register_UnityEngine_AndroidJNI_NewDoubleArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewFloatArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewFloatArray();
		Register_UnityEngine_AndroidJNI_NewFloatArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewGlobalRef();
		Register_UnityEngine_AndroidJNI_NewGlobalRef();

		//System.IntPtr UnityEngine.AndroidJNI::NewIntArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewIntArray();
		Register_UnityEngine_AndroidJNI_NewIntArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewLocalRef();
		Register_UnityEngine_AndroidJNI_NewLocalRef();

		//System.IntPtr UnityEngine.AndroidJNI::NewLongArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewLongArray();
		Register_UnityEngine_AndroidJNI_NewLongArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_NewObject();
		Register_UnityEngine_AndroidJNI_NewObject();

		//System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewObjectArray();
		Register_UnityEngine_AndroidJNI_NewObjectArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewSByteArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewSByteArray();
		Register_UnityEngine_AndroidJNI_NewSByteArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewShortArray(System.Int32)
		void Register_UnityEngine_AndroidJNI_NewShortArray();
		Register_UnityEngine_AndroidJNI_NewShortArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewString(System.Char[])
		void Register_UnityEngine_AndroidJNI_NewString();
		Register_UnityEngine_AndroidJNI_NewString();

		//System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
		void Register_UnityEngine_AndroidJNI_NewStringFromStr();
		Register_UnityEngine_AndroidJNI_NewStringFromStr();

		//System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
		void Register_UnityEngine_AndroidJNI_NewStringUTF();
		Register_UnityEngine_AndroidJNI_NewStringUTF();

		//System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewWeakGlobalRef();
		Register_UnityEngine_AndroidJNI_NewWeakGlobalRef();

		//System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_PopLocalFrame();
		Register_UnityEngine_AndroidJNI_PopLocalFrame();

		//System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
		void Register_UnityEngine_AndroidJNI_ToBooleanArray();
		Register_UnityEngine_AndroidJNI_ToBooleanArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
		void Register_UnityEngine_AndroidJNI_ToByteArray();
		Register_UnityEngine_AndroidJNI_ToByteArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
		void Register_UnityEngine_AndroidJNI_ToCharArray();
		Register_UnityEngine_AndroidJNI_ToCharArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
		void Register_UnityEngine_AndroidJNI_ToDoubleArray();
		Register_UnityEngine_AndroidJNI_ToDoubleArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
		void Register_UnityEngine_AndroidJNI_ToFloatArray();
		Register_UnityEngine_AndroidJNI_ToFloatArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
		void Register_UnityEngine_AndroidJNI_ToIntArray();
		Register_UnityEngine_AndroidJNI_ToIntArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
		void Register_UnityEngine_AndroidJNI_ToLongArray();
		Register_UnityEngine_AndroidJNI_ToLongArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
		void Register_UnityEngine_AndroidJNI_ToObjectArray();
		Register_UnityEngine_AndroidJNI_ToObjectArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToReflectedField(System.IntPtr,System.IntPtr,System.Boolean)
		void Register_UnityEngine_AndroidJNI_ToReflectedField();
		Register_UnityEngine_AndroidJNI_ToReflectedField();

		//System.IntPtr UnityEngine.AndroidJNI::ToReflectedMethod(System.IntPtr,System.IntPtr,System.Boolean)
		void Register_UnityEngine_AndroidJNI_ToReflectedMethod();
		Register_UnityEngine_AndroidJNI_ToReflectedMethod();

		//System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
		void Register_UnityEngine_AndroidJNI_ToSByteArray();
		Register_UnityEngine_AndroidJNI_ToSByteArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
		void Register_UnityEngine_AndroidJNI_ToShortArray();
		Register_UnityEngine_AndroidJNI_ToShortArray();

		//System.IntPtr[] UnityEngine.AndroidJNI::FromObjectArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromObjectArray();
		Register_UnityEngine_AndroidJNI_FromObjectArray();

		//System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallSByteMethod();
		Register_UnityEngine_AndroidJNI_CallSByteMethod();

		//System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticSByteMethod();
		Register_UnityEngine_AndroidJNI_CallStaticSByteMethod();

		//System.SByte UnityEngine.AndroidJNI::GetSByteArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetSByteArrayElement();
		Register_UnityEngine_AndroidJNI_GetSByteArrayElement();

		//System.SByte UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetSByteField();
		Register_UnityEngine_AndroidJNI_GetSByteField();

		//System.SByte UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticSByteField();
		Register_UnityEngine_AndroidJNI_GetStaticSByteField();

		//System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromSByteArray();
		Register_UnityEngine_AndroidJNI_FromSByteArray();

		//System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallFloatMethod();
		Register_UnityEngine_AndroidJNI_CallFloatMethod();

		//System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticFloatMethod();
		Register_UnityEngine_AndroidJNI_CallStaticFloatMethod();

		//System.Single UnityEngine.AndroidJNI::GetFloatArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetFloatArrayElement();
		Register_UnityEngine_AndroidJNI_GetFloatArrayElement();

		//System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetFloatField();
		Register_UnityEngine_AndroidJNI_GetFloatField();

		//System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticFloatField();
		Register_UnityEngine_AndroidJNI_GetStaticFloatField();

		//System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromFloatArray();
		Register_UnityEngine_AndroidJNI_FromFloatArray();

		//System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticStringMethod();
		Register_UnityEngine_AndroidJNI_CallStaticStringMethod();

		//System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStringMethod();
		Register_UnityEngine_AndroidJNI_CallStringMethod();

		//System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStaticStringField();
		Register_UnityEngine_AndroidJNI_GetStaticStringField();

		//System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringChars();
		Register_UnityEngine_AndroidJNI_GetStringChars();

		//System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringField();
		Register_UnityEngine_AndroidJNI_GetStringField();

		//System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringUTFChars();
		Register_UnityEngine_AndroidJNI_GetStringUTFChars();

		//System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticVoidMethod();
		Register_UnityEngine_AndroidJNI_CallStaticVoidMethod();

		//System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallVoidMethod();
		Register_UnityEngine_AndroidJNI_CallVoidMethod();

		//System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteGlobalRef();
		Register_UnityEngine_AndroidJNI_DeleteGlobalRef();

		//System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteLocalRef();
		Register_UnityEngine_AndroidJNI_DeleteLocalRef();

		//System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteWeakGlobalRef();
		Register_UnityEngine_AndroidJNI_DeleteWeakGlobalRef();

		//System.Void UnityEngine.AndroidJNI::ExceptionClear()
		void Register_UnityEngine_AndroidJNI_ExceptionClear();
		Register_UnityEngine_AndroidJNI_ExceptionClear();

		//System.Void UnityEngine.AndroidJNI::ExceptionDescribe()
		void Register_UnityEngine_AndroidJNI_ExceptionDescribe();
		Register_UnityEngine_AndroidJNI_ExceptionDescribe();

		//System.Void UnityEngine.AndroidJNI::FatalError(System.String)
		void Register_UnityEngine_AndroidJNI_FatalError();
		Register_UnityEngine_AndroidJNI_FatalError();

		//System.Void UnityEngine.AndroidJNI::SetBooleanArrayElement(System.IntPtr,System.Int32,System.Boolean)
		void Register_UnityEngine_AndroidJNI_SetBooleanArrayElement();
		Register_UnityEngine_AndroidJNI_SetBooleanArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
		void Register_UnityEngine_AndroidJNI_SetBooleanField();
		Register_UnityEngine_AndroidJNI_SetBooleanField();

		//System.Void UnityEngine.AndroidJNI::SetCharArrayElement(System.IntPtr,System.Int32,System.Char)
		void Register_UnityEngine_AndroidJNI_SetCharArrayElement();
		Register_UnityEngine_AndroidJNI_SetCharArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetCharField(System.IntPtr,System.IntPtr,System.Char)
		void Register_UnityEngine_AndroidJNI_SetCharField();
		Register_UnityEngine_AndroidJNI_SetCharField();

		//System.Void UnityEngine.AndroidJNI::SetDoubleArrayElement(System.IntPtr,System.Int32,System.Double)
		void Register_UnityEngine_AndroidJNI_SetDoubleArrayElement();
		Register_UnityEngine_AndroidJNI_SetDoubleArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetDoubleField(System.IntPtr,System.IntPtr,System.Double)
		void Register_UnityEngine_AndroidJNI_SetDoubleField();
		Register_UnityEngine_AndroidJNI_SetDoubleField();

		//System.Void UnityEngine.AndroidJNI::SetFloatArrayElement(System.IntPtr,System.Int32,System.Single)
		void Register_UnityEngine_AndroidJNI_SetFloatArrayElement();
		Register_UnityEngine_AndroidJNI_SetFloatArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetFloatField(System.IntPtr,System.IntPtr,System.Single)
		void Register_UnityEngine_AndroidJNI_SetFloatField();
		Register_UnityEngine_AndroidJNI_SetFloatField();

		//System.Void UnityEngine.AndroidJNI::SetIntArrayElement(System.IntPtr,System.Int32,System.Int32)
		void Register_UnityEngine_AndroidJNI_SetIntArrayElement();
		Register_UnityEngine_AndroidJNI_SetIntArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetIntField(System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_SetIntField();
		Register_UnityEngine_AndroidJNI_SetIntField();

		//System.Void UnityEngine.AndroidJNI::SetLongArrayElement(System.IntPtr,System.Int32,System.Int64)
		void Register_UnityEngine_AndroidJNI_SetLongArrayElement();
		Register_UnityEngine_AndroidJNI_SetLongArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetLongField(System.IntPtr,System.IntPtr,System.Int64)
		void Register_UnityEngine_AndroidJNI_SetLongField();
		Register_UnityEngine_AndroidJNI_SetLongField();

		//System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_SetObjectArrayElement();
		Register_UnityEngine_AndroidJNI_SetObjectArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_SetObjectField();
		Register_UnityEngine_AndroidJNI_SetObjectField();

		//System.Void UnityEngine.AndroidJNI::SetSByteArrayElement(System.IntPtr,System.Int32,System.SByte)
		void Register_UnityEngine_AndroidJNI_SetSByteArrayElement();
		Register_UnityEngine_AndroidJNI_SetSByteArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetSByteField(System.IntPtr,System.IntPtr,System.SByte)
		void Register_UnityEngine_AndroidJNI_SetSByteField();
		Register_UnityEngine_AndroidJNI_SetSByteField();

		//System.Void UnityEngine.AndroidJNI::SetShortArrayElement(System.IntPtr,System.Int32,System.Int16)
		void Register_UnityEngine_AndroidJNI_SetShortArrayElement();
		Register_UnityEngine_AndroidJNI_SetShortArrayElement();

		//System.Void UnityEngine.AndroidJNI::SetShortField(System.IntPtr,System.IntPtr,System.Int16)
		void Register_UnityEngine_AndroidJNI_SetShortField();
		Register_UnityEngine_AndroidJNI_SetShortField();

		//System.Void UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
		void Register_UnityEngine_AndroidJNI_SetStaticBooleanField();
		Register_UnityEngine_AndroidJNI_SetStaticBooleanField();

		//System.Void UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
		void Register_UnityEngine_AndroidJNI_SetStaticCharField();
		Register_UnityEngine_AndroidJNI_SetStaticCharField();

		//System.Void UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
		void Register_UnityEngine_AndroidJNI_SetStaticDoubleField();
		Register_UnityEngine_AndroidJNI_SetStaticDoubleField();

		//System.Void UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
		void Register_UnityEngine_AndroidJNI_SetStaticFloatField();
		Register_UnityEngine_AndroidJNI_SetStaticFloatField();

		//System.Void UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_SetStaticIntField();
		Register_UnityEngine_AndroidJNI_SetStaticIntField();

		//System.Void UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
		void Register_UnityEngine_AndroidJNI_SetStaticLongField();
		Register_UnityEngine_AndroidJNI_SetStaticLongField();

		//System.Void UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_SetStaticObjectField();
		Register_UnityEngine_AndroidJNI_SetStaticObjectField();

		//System.Void UnityEngine.AndroidJNI::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)
		void Register_UnityEngine_AndroidJNI_SetStaticSByteField();
		Register_UnityEngine_AndroidJNI_SetStaticSByteField();

		//System.Void UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
		void Register_UnityEngine_AndroidJNI_SetStaticShortField();
		Register_UnityEngine_AndroidJNI_SetStaticShortField();

		//System.Void UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
		void Register_UnityEngine_AndroidJNI_SetStaticStringField();
		Register_UnityEngine_AndroidJNI_SetStaticStringField();

		//System.Void UnityEngine.AndroidJNI::SetStringField(System.IntPtr,System.IntPtr,System.String)
		void Register_UnityEngine_AndroidJNI_SetStringField();
		Register_UnityEngine_AndroidJNI_SetStringField();

	//End Registrations for type : UnityEngine.AndroidJNI

	//Start Registrations for type : UnityEngine.AndroidJNIHelper

		//System.Boolean UnityEngine.AndroidJNIHelper::get_debug()
		void Register_UnityEngine_AndroidJNIHelper_get_debug();
		Register_UnityEngine_AndroidJNIHelper_get_debug();

		//System.Void UnityEngine.AndroidJNIHelper::set_debug(System.Boolean)
		void Register_UnityEngine_AndroidJNIHelper_set_debug();
		Register_UnityEngine_AndroidJNIHelper_set_debug();

	//End Registrations for type : UnityEngine.AndroidJNIHelper

	//Start Registrations for type : UnityEngine.Animation

		//System.Int32 UnityEngine.Animation::GetStateCount()
		void Register_UnityEngine_Animation_GetStateCount();
		Register_UnityEngine_Animation_GetStateCount();

		//UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
		void Register_UnityEngine_Animation_GetStateAtIndex();
		Register_UnityEngine_Animation_GetStateAtIndex();

	//End Registrations for type : UnityEngine.Animation

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.Int32 UnityEngine.AnimationCurve::AddKey_Internal_Injected(UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();
		Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();

		//System.Int32 UnityEngine.AnimationCurve::get_length()
		void Register_UnityEngine_AnimationCurve_get_length();
		Register_UnityEngine_AnimationCurve_get_length();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

		//System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
		void Register_UnityEngine_AnimationCurve_RemoveKey();
		Register_UnityEngine_AnimationCurve_RemoveKey();

		//System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_SetKeys();
		Register_UnityEngine_AnimationCurve_SetKeys();

		//System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
		void Register_UnityEngine_AnimationCurve_set_postWrapMode();
		Register_UnityEngine_AnimationCurve_set_postWrapMode();

		//System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
		void Register_UnityEngine_AnimationCurve_set_preWrapMode();
		Register_UnityEngine_AnimationCurve_set_preWrapMode();

		//UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
		void Register_UnityEngine_AnimationCurve_GetKeys();
		Register_UnityEngine_AnimationCurve_GetKeys();

		//UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
		void Register_UnityEngine_AnimationCurve_get_postWrapMode();
		Register_UnityEngine_AnimationCurve_get_postWrapMode();

		//UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
		void Register_UnityEngine_AnimationCurve_get_preWrapMode();
		Register_UnityEngine_AnimationCurve_get_preWrapMode();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

		//System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal();
		Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

	//Start Registrations for type : UnityEngine.Animator

		//System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
		void Register_UnityEngine_Animator_get_hasBoundPlayables();
		Register_UnityEngine_Animator_get_hasBoundPlayables();

		//System.Void UnityEngine.Animator::ResetTriggerString(System.String)
		void Register_UnityEngine_Animator_ResetTriggerString();
		Register_UnityEngine_Animator_ResetTriggerString();

		//System.Void UnityEngine.Animator::SetTriggerString(System.String)
		void Register_UnityEngine_Animator_SetTriggerString();
		Register_UnityEngine_Animator_SetTriggerString();

	//End Registrations for type : UnityEngine.Animator

	//Start Registrations for type : UnityEngine.Application

		//System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
		void Register_UnityEngine_Application_HasUserAuthorization();
		Register_UnityEngine_Application_HasUserAuthorization();

		//System.Boolean UnityEngine.Application::get_isBatchMode()
		void Register_UnityEngine_Application_get_isBatchMode();
		Register_UnityEngine_Application_get_isBatchMode();

		//System.Boolean UnityEngine.Application::get_isFocused()
		void Register_UnityEngine_Application_get_isFocused();
		Register_UnityEngine_Application_get_isFocused();

		//System.Boolean UnityEngine.Application::get_isPlaying()
		void Register_UnityEngine_Application_get_isPlaying();
		Register_UnityEngine_Application_get_isPlaying();

		//System.Int32 UnityEngine.Application::get_targetFrameRate()
		void Register_UnityEngine_Application_get_targetFrameRate();
		Register_UnityEngine_Application_get_targetFrameRate();

		//System.String UnityEngine.Application::get_dataPath()
		void Register_UnityEngine_Application_get_dataPath();
		Register_UnityEngine_Application_get_dataPath();

		//System.String UnityEngine.Application::get_identifier()
		void Register_UnityEngine_Application_get_identifier();
		Register_UnityEngine_Application_get_identifier();

		//System.String UnityEngine.Application::get_persistentDataPath()
		void Register_UnityEngine_Application_get_persistentDataPath();
		Register_UnityEngine_Application_get_persistentDataPath();

		//System.String UnityEngine.Application::get_streamingAssetsPath()
		void Register_UnityEngine_Application_get_streamingAssetsPath();
		Register_UnityEngine_Application_get_streamingAssetsPath();

		//System.String UnityEngine.Application::get_unityVersion()
		void Register_UnityEngine_Application_get_unityVersion();
		Register_UnityEngine_Application_get_unityVersion();

		//System.String UnityEngine.Application::get_version()
		void Register_UnityEngine_Application_get_version();
		Register_UnityEngine_Application_get_version();

		//System.Void UnityEngine.Application::OpenURL(System.String)
		void Register_UnityEngine_Application_OpenURL();
		Register_UnityEngine_Application_OpenURL();

		//System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean)
		void Register_UnityEngine_Application_SetLogCallbackDefined();
		Register_UnityEngine_Application_SetLogCallbackDefined();

		//System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
		void Register_UnityEngine_Application_set_runInBackground();
		Register_UnityEngine_Application_set_runInBackground();

		//System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
		void Register_UnityEngine_Application_set_targetFrameRate();
		Register_UnityEngine_Application_set_targetFrameRate();

		//UnityEngine.ApplicationInstallMode UnityEngine.Application::get_installMode()
		void Register_UnityEngine_Application_get_installMode();
		Register_UnityEngine_Application_get_installMode();

		//UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
		void Register_UnityEngine_Application_RequestUserAuthorization();
		Register_UnityEngine_Application_RequestUserAuthorization();

		//UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
		void Register_UnityEngine_Application_get_platform();
		Register_UnityEngine_Application_get_platform();

		//UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
		void Register_UnityEngine_Application_get_systemLanguage();
		Register_UnityEngine_Application_get_systemLanguage();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Boolean UnityEngine.AsyncOperation::get_isDone()
		void Register_UnityEngine_AsyncOperation_get_isDone();
		Register_UnityEngine_AsyncOperation_get_isDone();

		//System.Void UnityEngine.AsyncOperation::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.AudioClip

		//System.Boolean UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
		void Register_UnityEngine_AudioClip_GetData();
		Register_UnityEngine_AudioClip_GetData();

		//System.Boolean UnityEngine.AudioClip::LoadAudioData()
		void Register_UnityEngine_AudioClip_LoadAudioData();
		Register_UnityEngine_AudioClip_LoadAudioData();

		//System.Int32 UnityEngine.AudioClip::get_channels()
		void Register_UnityEngine_AudioClip_get_channels();
		Register_UnityEngine_AudioClip_get_channels();

		//System.Int32 UnityEngine.AudioClip::get_frequency()
		void Register_UnityEngine_AudioClip_get_frequency();
		Register_UnityEngine_AudioClip_get_frequency();

		//System.Int32 UnityEngine.AudioClip::get_samples()
		void Register_UnityEngine_AudioClip_get_samples();
		Register_UnityEngine_AudioClip_get_samples();

		//System.String UnityEngine.AudioClip::GetName()
		void Register_UnityEngine_AudioClip_GetName();
		Register_UnityEngine_AudioClip_GetName();

		//UnityEngine.AudioDataLoadState UnityEngine.AudioClip::get_loadState()
		void Register_UnityEngine_AudioClip_get_loadState();
		Register_UnityEngine_AudioClip_get_loadState();

	//End Registrations for type : UnityEngine.AudioClip

	//Start Registrations for type : UnityEngine.AudioListener

		//System.Void UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32)
		void Register_UnityEngine_AudioListener_GetOutputDataHelper();
		Register_UnityEngine_AudioListener_GetOutputDataHelper();

	//End Registrations for type : UnityEngine.AudioListener

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
		void Register_UnityEngine_AudioSettings_StartAudioOutput();
		Register_UnityEngine_AudioSettings_StartAudioOutput();

		//System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
		void Register_UnityEngine_AudioSettings_StopAudioOutput();
		Register_UnityEngine_AudioSettings_StopAudioOutput();

		//System.Int32 UnityEngine.AudioSettings::GetSampleRate()
		void Register_UnityEngine_AudioSettings_GetSampleRate();
		Register_UnityEngine_AudioSettings_GetSampleRate();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
		void Register_UnityEngine_Behaviour_get_isActiveAndEnabled();
		Register_UnityEngine_Behaviour_get_isActiveAndEnabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.Camera

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_pixelHeight()
		void Register_UnityEngine_Camera_get_pixelHeight();
		Register_UnityEngine_Camera_get_pixelHeight();

		//System.Int32 UnityEngine.Camera::get_pixelWidth()
		void Register_UnityEngine_Camera_get_pixelWidth();
		Register_UnityEngine_Camera_get_pixelWidth();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_depth()
		void Register_UnityEngine_Camera_get_depth();
		Register_UnityEngine_Camera_get_depth();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_focalLength()
		void Register_UnityEngine_Camera_get_focalLength();
		Register_UnityEngine_Camera_get_focalLength();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Single[] UnityEngine.Camera::GetLayerCullDistances()
		void Register_UnityEngine_Camera_GetLayerCullDistances();
		Register_UnityEngine_Camera_GetLayerCullDistances();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::Render()
		void Register_UnityEngine_Camera_Render();
		Register_UnityEngine_Camera_Render();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::ScreenToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();
		Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::SetLayerCullDistances(System.Single[])
		void Register_UnityEngine_Camera_SetLayerCullDistances();
		Register_UnityEngine_Camera_SetLayerCullDistances();

		//System.Void UnityEngine.Camera::SetReplacementShader(UnityEngine.Shader,System.String)
		void Register_UnityEngine_Camera_SetReplacementShader();
		Register_UnityEngine_Camera_SetReplacementShader();

		//System.Void UnityEngine.Camera::ViewportToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ViewportToScreenPoint_Injected();
		Register_UnityEngine_Camera_ViewportToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToScreenPoint_Injected();
		Register_UnityEngine_Camera_WorldToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_projectionMatrix_Injected();
		Register_UnityEngine_Camera_get_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_sensorSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_get_sensorSize_Injected();
		Register_UnityEngine_Camera_get_sensorSize_Injected();

		//System.Void UnityEngine.Camera::get_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();

		//System.Void UnityEngine.Camera::set_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Camera_set_backgroundColor_Injected();
		Register_UnityEngine_Camera_set_backgroundColor_Injected();

		//System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags();
		Register_UnityEngine_Camera_set_clearFlags();

		//System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
		void Register_UnityEngine_Camera_set_cullingMask();
		Register_UnityEngine_Camera_set_cullingMask();

		//System.Void UnityEngine.Camera::set_depth(System.Single)
		void Register_UnityEngine_Camera_set_depth();
		Register_UnityEngine_Camera_set_depth();

		//System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
		void Register_UnityEngine_Camera_set_depthTextureMode();
		Register_UnityEngine_Camera_set_depthTextureMode();

		//System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_farClipPlane();
		Register_UnityEngine_Camera_set_farClipPlane();

		//System.Void UnityEngine.Camera::set_focalLength(System.Single)
		void Register_UnityEngine_Camera_set_focalLength();
		Register_UnityEngine_Camera_set_focalLength();

		//System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_nearClipPlane();
		Register_UnityEngine_Camera_set_nearClipPlane();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
		void Register_UnityEngine_Camera_set_targetTexture();
		Register_UnityEngine_Camera_set_targetTexture();

		//System.Void UnityEngine.Camera::set_usePhysicalProperties(System.Boolean)
		void Register_UnityEngine_Camera_set_usePhysicalProperties();
		Register_UnityEngine_Camera_set_usePhysicalProperties();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.Canvas

		//System.Boolean UnityEngine.Canvas::get_isRootCanvas()
		void Register_UnityEngine_Canvas_get_isRootCanvas();
		Register_UnityEngine_Canvas_get_isRootCanvas();

		//System.Boolean UnityEngine.Canvas::get_overrideSorting()
		void Register_UnityEngine_Canvas_get_overrideSorting();
		Register_UnityEngine_Canvas_get_overrideSorting();

		//System.Boolean UnityEngine.Canvas::get_pixelPerfect()
		void Register_UnityEngine_Canvas_get_pixelPerfect();
		Register_UnityEngine_Canvas_get_pixelPerfect();

		//System.Int32 UnityEngine.Canvas::get_renderOrder()
		void Register_UnityEngine_Canvas_get_renderOrder();
		Register_UnityEngine_Canvas_get_renderOrder();

		//System.Int32 UnityEngine.Canvas::get_sortingLayerID()
		void Register_UnityEngine_Canvas_get_sortingLayerID();
		Register_UnityEngine_Canvas_get_sortingLayerID();

		//System.Int32 UnityEngine.Canvas::get_sortingOrder()
		void Register_UnityEngine_Canvas_get_sortingOrder();
		Register_UnityEngine_Canvas_get_sortingOrder();

		//System.Int32 UnityEngine.Canvas::get_targetDisplay()
		void Register_UnityEngine_Canvas_get_targetDisplay();
		Register_UnityEngine_Canvas_get_targetDisplay();

		//System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
		void Register_UnityEngine_Canvas_get_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_get_referencePixelsPerUnit();

		//System.Single UnityEngine.Canvas::get_scaleFactor()
		void Register_UnityEngine_Canvas_get_scaleFactor();
		Register_UnityEngine_Canvas_get_scaleFactor();

		//System.Void UnityEngine.Canvas::SetExternalCanvasEnabled(System.Boolean)
		void Register_UnityEngine_Canvas_SetExternalCanvasEnabled();
		Register_UnityEngine_Canvas_SetExternalCanvasEnabled();

		//System.Void UnityEngine.Canvas::get_renderingDisplaySize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();
		Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();

		//System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
		void Register_UnityEngine_Canvas_set_overrideSorting();
		Register_UnityEngine_Canvas_set_overrideSorting();

		//System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
		void Register_UnityEngine_Canvas_set_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_set_referencePixelsPerUnit();

		//System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
		void Register_UnityEngine_Canvas_set_scaleFactor();
		Register_UnityEngine_Canvas_set_scaleFactor();

		//System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingLayerID();
		Register_UnityEngine_Canvas_set_sortingLayerID();

		//System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingOrder();
		Register_UnityEngine_Canvas_set_sortingOrder();

		//UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
		void Register_UnityEngine_Canvas_get_worldCamera();
		Register_UnityEngine_Canvas_get_worldCamera();

		//UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
		void Register_UnityEngine_Canvas_get_rootCanvas();
		Register_UnityEngine_Canvas_get_rootCanvas();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
		void Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();
		Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();

		//UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
		void Register_UnityEngine_Canvas_get_renderMode();
		Register_UnityEngine_Canvas_get_renderMode();

	//End Registrations for type : UnityEngine.Canvas

	//Start Registrations for type : UnityEngine.CanvasGroup

		//System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
		void Register_UnityEngine_CanvasGroup_get_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_get_blocksRaycasts();

		//System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
		void Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();

		//System.Boolean UnityEngine.CanvasGroup::get_interactable()
		void Register_UnityEngine_CanvasGroup_get_interactable();
		Register_UnityEngine_CanvasGroup_get_interactable();

		//System.Single UnityEngine.CanvasGroup::get_alpha()
		void Register_UnityEngine_CanvasGroup_get_alpha();
		Register_UnityEngine_CanvasGroup_get_alpha();

		//System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
		void Register_UnityEngine_CanvasGroup_set_alpha();
		Register_UnityEngine_CanvasGroup_set_alpha();

	//End Registrations for type : UnityEngine.CanvasGroup

	//Start Registrations for type : UnityEngine.CanvasRenderer

		//System.Boolean UnityEngine.CanvasRenderer::get_cull()
		void Register_UnityEngine_CanvasRenderer_get_cull();
		Register_UnityEngine_CanvasRenderer_get_cull();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
		void Register_UnityEngine_CanvasRenderer_get_hasMoved();
		Register_UnityEngine_CanvasRenderer_get_hasMoved();

		//System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
		void Register_UnityEngine_CanvasRenderer_get_absoluteDepth();
		Register_UnityEngine_CanvasRenderer_get_absoluteDepth();

		//System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
		void Register_UnityEngine_CanvasRenderer_get_materialCount();
		Register_UnityEngine_CanvasRenderer_get_materialCount();

		//System.Void UnityEngine.CanvasRenderer::Clear()
		void Register_UnityEngine_CanvasRenderer_Clear();
		Register_UnityEngine_CanvasRenderer_Clear();

		//System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();
		Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();

		//System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
		void Register_UnityEngine_CanvasRenderer_DisableRectClipping();
		Register_UnityEngine_CanvasRenderer_DisableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::EnableRectClipping_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();
		Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();

		//System.Void UnityEngine.CanvasRenderer::GetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_GetColor_Injected();
		Register_UnityEngine_CanvasRenderer_GetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetAlphaTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetAlphaTexture();
		Register_UnityEngine_CanvasRenderer_SetAlphaTexture();

		//System.Void UnityEngine.CanvasRenderer::SetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_SetColor_Injected();
		Register_UnityEngine_CanvasRenderer_SetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetMaterial();
		Register_UnityEngine_CanvasRenderer_SetMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
		void Register_UnityEngine_CanvasRenderer_SetMesh();
		Register_UnityEngine_CanvasRenderer_SetMesh();

		//System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetPopMaterial();
		Register_UnityEngine_CanvasRenderer_SetPopMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetTexture();
		Register_UnityEngine_CanvasRenderer_SetTexture();

		//System.Void UnityEngine.CanvasRenderer::SplitIndicesStreamsInternal(System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::set_clippingSoftness_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();
		Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();

		//System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cull();
		Register_UnityEngine_CanvasRenderer_set_cull();

		//System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();

		//System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_materialCount();
		Register_UnityEngine_CanvasRenderer_set_materialCount();

		//System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_set_popMaterialCount();

	//End Registrations for type : UnityEngine.CanvasRenderer

	//Start Registrations for type : UnityEngine.Collider

		//UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
		void Register_UnityEngine_Collider_get_attachedRigidbody();
		Register_UnityEngine_Collider_get_attachedRigidbody();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
		void Register_UnityEngine_Component_GetComponentsForListInternal();
		Register_UnityEngine_Component_GetComponentsForListInternal();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeBuffer

		//System.IntPtr UnityEngine.ComputeBuffer::InitBuffer(System.Int32,System.Int32,UnityEngine.ComputeBufferType,UnityEngine.ComputeBufferMode)
		void Register_UnityEngine_ComputeBuffer_InitBuffer();
		Register_UnityEngine_ComputeBuffer_InitBuffer();

		//System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeBuffer_DestroyBuffer();
		Register_UnityEngine_ComputeBuffer_DestroyBuffer();

		//System.Void UnityEngine.ComputeBuffer::InternalGetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalGetData();
		Register_UnityEngine_ComputeBuffer_InternalGetData();

		//System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalSetData();
		Register_UnityEngine_ComputeBuffer_InternalSetData();

		//System.Void UnityEngine.ComputeBuffer::InternalSetNativeData(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalSetNativeData();
		Register_UnityEngine_ComputeBuffer_InternalSetNativeData();

	//End Registrations for type : UnityEngine.ComputeBuffer

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

		//System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_Dispatch();
		Register_UnityEngine_ComputeShader_Dispatch();

		//System.Void UnityEngine.ComputeShader::GetKernelThreadGroupSizes(System.Int32,System.UInt32&,System.UInt32&,System.UInt32&)
		void Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();
		Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();

		//System.Void UnityEngine.ComputeShader::Internal_SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeShader_Internal_SetBuffer();
		Register_UnityEngine_ComputeShader_Internal_SetBuffer();

		//System.Void UnityEngine.ComputeShader::SetInt(System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_SetInt();
		Register_UnityEngine_ComputeShader_SetInt();

		//System.Void UnityEngine.ComputeShader::SetMatrix_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_ComputeShader_SetMatrix_Injected();
		Register_UnityEngine_ComputeShader_SetMatrix_Injected();

		//System.Void UnityEngine.ComputeShader::SetVector_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_ComputeShader_SetVector_Injected();
		Register_UnityEngine_ComputeShader_SetVector_Injected();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.ContactFilter2D

		//System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&)
		void Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();
		Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();

	//End Registrations for type : UnityEngine.ContactFilter2D

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable()
		void Register_UnityEngine_Cubemap_get_isReadable();
		Register_UnityEngine_Cubemap_get_isReadable();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable()
		void Register_UnityEngine_CubemapArray_get_isReadable();
		Register_UnityEngine_CubemapArray_get_isReadable();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.Cursor

		//System.Void UnityEngine.Cursor::SetCursor_Injected(UnityEngine.Texture2D,UnityEngine.Vector2&,UnityEngine.CursorMode)
		void Register_UnityEngine_Cursor_SetCursor_Injected();
		Register_UnityEngine_Cursor_SetCursor_Injected();

		//UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
		void Register_UnityEngine_Cursor_get_lockState();
		Register_UnityEngine_Cursor_get_lockState();

	//End Registrations for type : UnityEngine.Cursor

	//Start Registrations for type : UnityEngine.Debug

		//System.Boolean UnityEngine.Debug::get_isDebugBuild()
		void Register_UnityEngine_Debug_get_isDebugBuild();
		Register_UnityEngine_Debug_get_isDebugBuild();

		//System.Int32 UnityEngine.Debug::ExtractStackTraceNoAlloc(System.Byte*,System.Int32,System.String)
		void Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();
		Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();

		//System.Void UnityEngine.Debug::DrawLine_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
		void Register_UnityEngine_Debug_DrawLine_Injected();
		Register_UnityEngine_Debug_DrawLine_Injected();

	//End Registrations for type : UnityEngine.Debug

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,UnityEngine.LogOption,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetRenderingExtImpl();
		Register_UnityEngine_Display_GetRenderingExtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
		void Register_UnityEngine_Event_PopEvent();
		Register_UnityEngine_Event_PopEvent();

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.Int32 UnityEngine.Event::GetDoubleClickTime()
		void Register_UnityEngine_Event_GetDoubleClickTime();
		Register_UnityEngine_Event_GetDoubleClickTime();

		//System.Int32 UnityEngine.Event::get_button()
		void Register_UnityEngine_Event_get_button();
		Register_UnityEngine_Event_get_button();

		//System.Int32 UnityEngine.Event::get_clickCount()
		void Register_UnityEngine_Event_get_clickCount();
		Register_UnityEngine_Event_get_clickCount();

		//System.Int32 UnityEngine.Event::get_displayIndex()
		void Register_UnityEngine_Event_get_displayIndex();
		Register_UnityEngine_Event_get_displayIndex();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.Single UnityEngine.Event::get_pressure()
		void Register_UnityEngine_Event_get_pressure();
		Register_UnityEngine_Event_get_pressure();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::CopyFromPtr(System.IntPtr)
		void Register_UnityEngine_Event_CopyFromPtr();
		Register_UnityEngine_Event_CopyFromPtr();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::Internal_Use()
		void Register_UnityEngine_Event_Internal_Use();
		Register_UnityEngine_Event_Internal_Use();

		//System.Void UnityEngine.Event::get_delta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_delta_Injected();
		Register_UnityEngine_Event_get_delta_Injected();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_character(System.Char)
		void Register_UnityEngine_Event_set_character();
		Register_UnityEngine_Event_set_character();

		//System.Void UnityEngine.Event::set_commandName(System.String)
		void Register_UnityEngine_Event_set_commandName();
		Register_UnityEngine_Event_set_commandName();

		//System.Void UnityEngine.Event::set_delta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_set_delta_Injected();
		Register_UnityEngine_Event_set_delta_Injected();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
		void Register_UnityEngine_Event_set_keyCode();
		Register_UnityEngine_Event_set_keyCode();

		//System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
		void Register_UnityEngine_Event_set_modifiers();
		Register_UnityEngine_Event_set_modifiers();

		//System.Void UnityEngine.Event::set_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_set_mousePosition_Injected();
		Register_UnityEngine_Event_set_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
		void Register_UnityEngine_Event_set_type();
		Register_UnityEngine_Event_set_type();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
		void Register_UnityEngine_Event_GetTypeForControl();
		Register_UnityEngine_Event_GetTypeForControl();

		//UnityEngine.EventType UnityEngine.Event::get_rawType()
		void Register_UnityEngine_Event_get_rawType();
		Register_UnityEngine_Event_get_rawType();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

		//UnityEngine.PointerType UnityEngine.Event::get_pointerType()
		void Register_UnityEngine_Event_get_pointerType();
		Register_UnityEngine_Event_get_pointerType();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_CanDecompressFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsDepthFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsDepthFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsPVRTCFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsPVRTCFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsStencilFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsStencilFormat();

		//System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthBits();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthBits();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::HasCharacter(System.Int32)
		void Register_UnityEngine_Font_HasCharacter();
		Register_UnityEngine_Font_HasCharacter();

		//System.Boolean UnityEngine.Font::get_dynamic()
		void Register_UnityEngine_Font_get_dynamic();
		Register_UnityEngine_Font_get_dynamic();

		//System.Int32 UnityEngine.Font::get_fontSize()
		void Register_UnityEngine_Font_get_fontSize();
		Register_UnityEngine_Font_get_fontSize();

		//System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
		void Register_UnityEngine_Font_Internal_CreateFont();
		Register_UnityEngine_Font_Internal_CreateFont();

		//UnityEngine.Material UnityEngine.Font::get_material()
		void Register_UnityEngine_Font_get_material();
		Register_UnityEngine_Font_get_material();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.FrameTimingManager

		//System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
		void Register_UnityEngine_FrameTimingManager_GetLatestTimings();
		Register_UnityEngine_FrameTimingManager_GetLatestTimings();

		//System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
		void Register_UnityEngine_FrameTimingManager_CaptureFrameTimings();
		Register_UnityEngine_FrameTimingManager_CaptureFrameTimings();

	//End Registrations for type : UnityEngine.FrameTimingManager

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
		void Register_UnityEngine_GameObject_get_activeInHierarchy();
		Register_UnityEngine_GameObject_get_activeInHierarchy();

		//System.Boolean UnityEngine.GameObject::get_activeSelf()
		void Register_UnityEngine_GameObject_get_activeSelf();
		Register_UnityEngine_GameObject_get_activeSelf();

		//System.Int32 UnityEngine.GameObject::get_layer()
		void Register_UnityEngine_GameObject_get_layer();
		Register_UnityEngine_GameObject_get_layer();

		//System.String UnityEngine.GameObject::get_tag()
		void Register_UnityEngine_GameObject_get_tag();
		Register_UnityEngine_GameObject_get_tag();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::TryGetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_TryGetComponentFastPath();
		Register_UnityEngine_GameObject_TryGetComponentFastPath();

		//System.Void UnityEngine.GameObject::get_scene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_GameObject_get_scene_Injected();
		Register_UnityEngine_GameObject_get_scene_Injected();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
		void Register_UnityEngine_GameObject_GetComponent();
		Register_UnityEngine_GameObject_GetComponent();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInChildren();
		Register_UnityEngine_GameObject_GetComponentInChildren();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInParent();
		Register_UnityEngine_GameObject_GetComponentInParent();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.Component UnityEngine.GameObject::TryGetComponentInternal(System.Type)
		void Register_UnityEngine_GameObject_TryGetComponentInternal();
		Register_UnityEngine_GameObject_TryGetComponentInternal();

		//UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
		void Register_UnityEngine_GameObject_CreatePrimitive();
		Register_UnityEngine_GameObject_CreatePrimitive();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::DrawLine_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawLine_Injected();
		Register_UnityEngine_Gizmos_DrawLine_Injected();

		//System.Void UnityEngine.Gizmos::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_set_color_Injected();
		Register_UnityEngine_Gizmos_set_color_Injected();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.GL

		//System.Void UnityEngine.GL::Begin(System.Int32)
		void Register_UnityEngine_GL_Begin();
		Register_UnityEngine_GL_Begin();

		//System.Void UnityEngine.GL::End()
		void Register_UnityEngine_GL_End();
		Register_UnityEngine_GL_End();

		//System.Void UnityEngine.GL::GLClear_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_GL_GLClear_Injected();
		Register_UnityEngine_GL_GLClear_Injected();

		//System.Void UnityEngine.GL::GLLoadPixelMatrixScript(System.Single,System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_GLLoadPixelMatrixScript();
		Register_UnityEngine_GL_GLLoadPixelMatrixScript();

		//System.Void UnityEngine.GL::ImmediateColor(System.Single,System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_ImmediateColor();
		Register_UnityEngine_GL_ImmediateColor();

		//System.Void UnityEngine.GL::LoadOrtho()
		void Register_UnityEngine_GL_LoadOrtho();
		Register_UnityEngine_GL_LoadOrtho();

		//System.Void UnityEngine.GL::LoadProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GL_LoadProjectionMatrix_Injected();
		Register_UnityEngine_GL_LoadProjectionMatrix_Injected();

		//System.Void UnityEngine.GL::PopMatrix()
		void Register_UnityEngine_GL_PopMatrix();
		Register_UnityEngine_GL_PopMatrix();

		//System.Void UnityEngine.GL::PushMatrix()
		void Register_UnityEngine_GL_PushMatrix();
		Register_UnityEngine_GL_PushMatrix();

		//System.Void UnityEngine.GL::SetViewMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GL_SetViewMatrix_Injected();
		Register_UnityEngine_GL_SetViewMatrix_Injected();

		//System.Void UnityEngine.GL::TexCoord3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_TexCoord3();
		Register_UnityEngine_GL_TexCoord3();

		//System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_Vertex3();
		Register_UnityEngine_GL_Vertex3();

		//System.Void UnityEngine.GL::Viewport_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_GL_Viewport_Injected();
		Register_UnityEngine_GL_Viewport_Injected();

	//End Registrations for type : UnityEngine.GL

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

		//System.Void UnityEngine.Gradient::set_alphaKeys(UnityEngine.GradientAlphaKey[])
		void Register_UnityEngine_Gradient_set_alphaKeys();
		Register_UnityEngine_Gradient_set_alphaKeys();

		//System.Void UnityEngine.Gradient::set_colorKeys(UnityEngine.GradientColorKey[])
		void Register_UnityEngine_Gradient_set_colorKeys();
		Register_UnityEngine_Gradient_set_colorKeys();

		//UnityEngine.GradientAlphaKey[] UnityEngine.Gradient::get_alphaKeys()
		void Register_UnityEngine_Gradient_get_alphaKeys();
		Register_UnityEngine_Gradient_get_alphaKeys();

		//UnityEngine.GradientColorKey[] UnityEngine.Gradient::get_colorKeys()
		void Register_UnityEngine_Gradient_get_colorKeys();
		Register_UnityEngine_Gradient_get_colorKeys();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::Blit2(UnityEngine.Texture,UnityEngine.RenderTexture)
		void Register_UnityEngine_Graphics_Blit2();
		Register_UnityEngine_Graphics_Blit2();

		//System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Graphics_ExecuteCommandBuffer();
		Register_UnityEngine_Graphics_ExecuteCommandBuffer();

		//System.Void UnityEngine.Graphics::Internal_BlitMaterial5(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
		void Register_UnityEngine_Graphics_Internal_BlitMaterial5();
		Register_UnityEngine_Graphics_Internal_BlitMaterial5();

		//System.Void UnityEngine.Graphics::Internal_DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,UnityEngine.Camera,UnityEngine.Rendering.LightProbeUsage,UnityEngine.LightProbeProxyVolume)
		void Register_UnityEngine_Graphics_Internal_DrawMeshInstanced();
		Register_UnityEngine_Graphics_Internal_DrawMeshInstanced();

		//System.Void UnityEngine.Graphics::Internal_DrawMesh_Injected(UnityEngine.Mesh,System.Int32,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,UnityEngine.Camera,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,UnityEngine.Transform,UnityEngine.Rendering.LightProbeUsage,UnityEngine.LightProbeProxyVolume)
		void Register_UnityEngine_Graphics_Internal_DrawMesh_Injected();
		Register_UnityEngine_Graphics_Internal_DrawMesh_Injected();

		//System.Void UnityEngine.Graphics::Internal_DrawTexture(UnityEngine.Internal_DrawTextureArguments&)
		void Register_UnityEngine_Graphics_Internal_DrawTexture();
		Register_UnityEngine_Graphics_Internal_DrawTexture();

		//System.Void UnityEngine.Graphics::Internal_SetNullRT()
		void Register_UnityEngine_Graphics_Internal_SetNullRT();
		Register_UnityEngine_Graphics_Internal_SetNullRT();

		//System.Void UnityEngine.Graphics::Internal_SetRTSimple_Injected(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
		void Register_UnityEngine_Graphics_Internal_SetRTSimple_Injected();
		Register_UnityEngine_Graphics_Internal_SetRTSimple_Injected();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
		void Register_UnityEngine_GUI_HasMouseControl();
		Register_UnityEngine_GUI_HasMouseControl();

		//System.Boolean UnityEngine.GUI::get_changed()
		void Register_UnityEngine_GUI_get_changed();
		Register_UnityEngine_GUI_get_changed();

		//System.Boolean UnityEngine.GUI::get_enabled()
		void Register_UnityEngine_GUI_get_enabled();
		Register_UnityEngine_GUI_get_enabled();

		//System.Boolean UnityEngine.GUI::get_usePageScrollbars()
		void Register_UnityEngine_GUI_get_usePageScrollbars();
		Register_UnityEngine_GUI_get_usePageScrollbars();

		//System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
		void Register_UnityEngine_GUI_GrabMouseControl();
		Register_UnityEngine_GUI_GrabMouseControl();

		//System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
		void Register_UnityEngine_GUI_InternalRepaintEditorWindow();
		Register_UnityEngine_GUI_InternalRepaintEditorWindow();

		//System.Void UnityEngine.GUI::ReleaseMouseControl()
		void Register_UnityEngine_GUI_ReleaseMouseControl();
		Register_UnityEngine_GUI_ReleaseMouseControl();

		//System.Void UnityEngine.GUI::get_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_backgroundColor_Injected();
		Register_UnityEngine_GUI_get_backgroundColor_Injected();

		//System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_color_Injected();
		Register_UnityEngine_GUI_get_color_Injected();

		//System.Void UnityEngine.GUI::get_contentColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_contentColor_Injected();
		Register_UnityEngine_GUI_get_contentColor_Injected();

		//System.Void UnityEngine.GUI::set_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_backgroundColor_Injected();
		Register_UnityEngine_GUI_set_backgroundColor_Injected();

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

		//System.Void UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_color_Injected();
		Register_UnityEngine_GUI_set_color_Injected();

		//System.Void UnityEngine.GUI::set_contentColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_contentColor_Injected();
		Register_UnityEngine_GUI_set_contentColor_Injected();

		//System.Void UnityEngine.GUI::set_enabled(System.Boolean)
		void Register_UnityEngine_GUI_set_enabled();
		Register_UnityEngine_GUI_set_enabled();

		//UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
		void Register_UnityEngine_GUI_get_blendMaterial();
		Register_UnityEngine_GUI_get_blendMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
		void Register_UnityEngine_GUI_get_blitMaterial();
		Register_UnityEngine_GUI_get_blitMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectMaterial()
		void Register_UnityEngine_GUI_get_roundedRectMaterial();
		Register_UnityEngine_GUI_get_roundedRectMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectWithColorPerBorderMaterial()
		void Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial();
		Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUIClip

		//System.Int32 UnityEngine.GUIClip::Internal_GetCount()
		void Register_UnityEngine_GUIClip_Internal_GetCount();
		Register_UnityEngine_GUIClip_Internal_GetCount();

		//System.Void UnityEngine.GUIClip::GetMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GUIClip_GetMatrix_Injected();
		Register_UnityEngine_GUIClip_GetMatrix_Injected();

		//System.Void UnityEngine.GUIClip::Internal_Pop()
		void Register_UnityEngine_GUIClip_Internal_Pop();
		Register_UnityEngine_GUIClip_Internal_Pop();

		//System.Void UnityEngine.GUIClip::Internal_PopParentClip()
		void Register_UnityEngine_GUIClip_Internal_PopParentClip();
		Register_UnityEngine_GUIClip_Internal_PopParentClip();

		//System.Void UnityEngine.GUIClip::Internal_PushParentClip_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rect&)
		void Register_UnityEngine_GUIClip_Internal_PushParentClip_Injected();
		Register_UnityEngine_GUIClip_Internal_PushParentClip_Injected();

		//System.Void UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
		void Register_UnityEngine_GUIClip_Internal_Push_Injected();
		Register_UnityEngine_GUIClip_Internal_Push_Injected();

		//System.Void UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GUIClip_SetMatrix_Injected();
		Register_UnityEngine_GUIClip_SetMatrix_Injected();

		//System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_GUIClip_get_visibleRect_Injected();
		Register_UnityEngine_GUIClip_get_visibleRect_Injected();

	//End Registrations for type : UnityEngine.GUIClip

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::IsTooltipActive(System.String)
		void Register_UnityEngine_GUIStyle_IsTooltipActive();
		Register_UnityEngine_GUIStyle_IsTooltipActive();

		//System.Boolean UnityEngine.GUIStyle::get_richText()
		void Register_UnityEngine_GUIStyle_get_richText();
		Register_UnityEngine_GUIStyle_get_richText();

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.Boolean UnityEngine.GUIStyle::get_wordWrap()
		void Register_UnityEngine_GUIStyle_get_wordWrap();
		Register_UnityEngine_GUIStyle_get_wordWrap();

		//System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();

		//System.Int32 UnityEngine.GUIStyle::get_fontSize()
		void Register_UnityEngine_GUIStyle_get_fontSize();
		Register_UnityEngine_GUIStyle_get_fontSize();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Copy();
		Register_UnityEngine_GUIStyle_Internal_Copy();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
		void Register_UnityEngine_GUIStyle_Internal_CalcHeight();
		Register_UnityEngine_GUIStyle_Internal_CalcHeight();

		//System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_GetLineHeight();
		Register_UnityEngine_GUIStyle_Internal_GetLineHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
		void Register_UnityEngine_GUIStyle_Internal_GetSelectedRenderedText_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetSelectedRenderedText_Injected();

		//System.String UnityEngine.GUIStyle::get_rawName()
		void Register_UnityEngine_GUIStyle_get_rawName();
		Register_UnityEngine_GUIStyle_get_rawName();

		//System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
		void Register_UnityEngine_GUIStyle_AssignRectOffset();
		Register_UnityEngine_GUIStyle_AssignRectOffset();

		//System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
		void Register_UnityEngine_GUIStyle_AssignStyleState();
		Register_UnityEngine_GUIStyle_AssignStyleState();

		//System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();
		Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
		void Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();
		Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();

		//System.Void UnityEngine.GUIStyle::get_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_get_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_get_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
		void Register_UnityEngine_GUIStyle_set_alignment();
		Register_UnityEngine_GUIStyle_set_alignment();

		//System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
		void Register_UnityEngine_GUIStyle_set_clipping();
		Register_UnityEngine_GUIStyle_set_clipping();

		//System.Void UnityEngine.GUIStyle::set_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_set_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_set_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
		void Register_UnityEngine_GUIStyle_set_fixedHeight();
		Register_UnityEngine_GUIStyle_set_fixedHeight();

		//System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
		void Register_UnityEngine_GUIStyle_set_fixedWidth();
		Register_UnityEngine_GUIStyle_set_fixedWidth();

		//System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_set_font();
		Register_UnityEngine_GUIStyle_set_font();

		//System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
		void Register_UnityEngine_GUIStyle_set_fontSize();
		Register_UnityEngine_GUIStyle_set_fontSize();

		//System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
		void Register_UnityEngine_GUIStyle_set_fontStyle();
		Register_UnityEngine_GUIStyle_set_fontStyle();

		//System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
		void Register_UnityEngine_GUIStyle_set_imagePosition();
		Register_UnityEngine_GUIStyle_set_imagePosition();

		//System.Void UnityEngine.GUIStyle::set_rawName(System.String)
		void Register_UnityEngine_GUIStyle_set_rawName();
		Register_UnityEngine_GUIStyle_set_rawName();

		//System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_richText();
		Register_UnityEngine_GUIStyle_set_richText();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight();
		Register_UnityEngine_GUIStyle_set_stretchHeight();

		//System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchWidth();
		Register_UnityEngine_GUIStyle_set_stretchWidth();

		//System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_wordWrap();
		Register_UnityEngine_GUIStyle_set_wordWrap();

		//UnityEngine.Font UnityEngine.GUIStyle::get_font()
		void Register_UnityEngine_GUIStyle_get_font();
		Register_UnityEngine_GUIStyle_get_font();

		//UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
		void Register_UnityEngine_GUIStyle_get_fontStyle();
		Register_UnityEngine_GUIStyle_get_fontStyle();

		//UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
		void Register_UnityEngine_GUIStyle_get_imagePosition();
		Register_UnityEngine_GUIStyle_get_imagePosition();

		//UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
		void Register_UnityEngine_GUIStyle_get_alignment();
		Register_UnityEngine_GUIStyle_get_alignment();

		//UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
		void Register_UnityEngine_GUIStyle_get_clipping();
		Register_UnityEngine_GUIStyle_get_clipping();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::get_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_get_textColor_Injected();
		Register_UnityEngine_GUIStyleState_get_textColor_Injected();

		//System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
		void Register_UnityEngine_GUIStyleState_set_background();
		Register_UnityEngine_GUIStyleState_set_background();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

		//UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
		void Register_UnityEngine_GUIStyleState_get_background();
		Register_UnityEngine_GUIStyleState_get_background();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Boolean UnityEngine.GUIUtility::HasFocusableControls()
		void Register_UnityEngine_GUIUtility_HasFocusableControls();
		Register_UnityEngine_GUIUtility_HasFocusableControls();

		//System.Boolean UnityEngine.GUIUtility::OwnsId(System.Int32)
		void Register_UnityEngine_GUIUtility_OwnsId();
		Register_UnityEngine_GUIUtility_OwnsId();

		//System.Boolean UnityEngine.GUIUtility::get_textFieldInput()
		void Register_UnityEngine_GUIUtility_get_textFieldInput();
		Register_UnityEngine_GUIUtility_get_textFieldInput();

		//System.Int32 UnityEngine.GUIUtility::CheckForTabEvent(UnityEngine.Event)
		void Register_UnityEngine_GUIUtility_CheckForTabEvent();
		Register_UnityEngine_GUIUtility_CheckForTabEvent();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_Internal_GetControlID_Injected();
		Register_UnityEngine_GUIUtility_Internal_GetControlID_Injected();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
		void Register_UnityEngine_GUIUtility_Internal_GetHotControl();
		Register_UnityEngine_GUIUtility_Internal_GetHotControl();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
		void Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.String UnityEngine.GUIUtility::get_compositionString()
		void Register_UnityEngine_GUIUtility_get_compositionString();
		Register_UnityEngine_GUIUtility_get_compositionString();

		//System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
		void Register_UnityEngine_GUIUtility_get_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_get_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::AlignRectToDevice_Injected(UnityEngine.Rect&,System.Int32&,System.Int32&,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_AlignRectToDevice_Injected();
		Register_UnityEngine_GUIUtility_AlignRectToDevice_Injected();

		//System.Void UnityEngine.GUIUtility::BeginContainer(UnityEngine.ObjectGUIState)
		void Register_UnityEngine_GUIUtility_BeginContainer();
		Register_UnityEngine_GUIUtility_BeginContainer();

		//System.Void UnityEngine.GUIUtility::BeginContainerFromOwner(UnityEngine.ScriptableObject)
		void Register_UnityEngine_GUIUtility_BeginContainerFromOwner();
		Register_UnityEngine_GUIUtility_BeginContainerFromOwner();

		//System.Void UnityEngine.GUIUtility::Internal_EndContainer()
		void Register_UnityEngine_GUIUtility_Internal_EndContainer();
		Register_UnityEngine_GUIUtility_Internal_EndContainer();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetHotControl();
		Register_UnityEngine_GUIUtility_Internal_SetHotControl();

		//System.Void UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();

		//System.Void UnityEngine.GUIUtility::SetKeyboardControlToFirstControlId()
		void Register_UnityEngine_GUIUtility_SetKeyboardControlToFirstControlId();
		Register_UnityEngine_GUIUtility_SetKeyboardControlToFirstControlId();

		//System.Void UnityEngine.GUIUtility::SetKeyboardControlToLastControlId()
		void Register_UnityEngine_GUIUtility_SetKeyboardControlToLastControlId();
		Register_UnityEngine_GUIUtility_SetKeyboardControlToLastControlId();

		//System.Void UnityEngine.GUIUtility::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIUtility_set_compositionCursorPos_Injected();
		Register_UnityEngine_GUIUtility_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.GUIUtility::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_GUIUtility_set_imeCompositionMode();
		Register_UnityEngine_GUIUtility_set_imeCompositionMode();

		//System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
		void Register_UnityEngine_GUIUtility_set_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_set_systemCopyBuffer();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Gyroscope

		//System.Void UnityEngine.Gyroscope::attitude_Internal_Injected(System.Int32,UnityEngine.Quaternion&)
		void Register_UnityEngine_Gyroscope_attitude_Internal_Injected();
		Register_UnityEngine_Gyroscope_attitude_Internal_Injected();

		//System.Void UnityEngine.Gyroscope::setEnabled_Internal(System.Int32,System.Boolean)
		void Register_UnityEngine_Gyroscope_setEnabled_Internal();
		Register_UnityEngine_Gyroscope_setEnabled_Internal();

		//System.Void UnityEngine.Gyroscope::setUpdateInterval_Internal(System.Int32,System.Single)
		void Register_UnityEngine_Gyroscope_setUpdateInterval_Internal();
		Register_UnityEngine_Gyroscope_setUpdateInterval_Internal();

	//End Registrations for type : UnityEngine.Gyroscope

	//Start Registrations for type : UnityEngine.ImageConversion

		//System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
		void Register_UnityEngine_ImageConversion_LoadImage();
		Register_UnityEngine_ImageConversion_LoadImage();

	//End Registrations for type : UnityEngine.ImageConversion

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::CheckDisabled()
		void Register_UnityEngine_Input_CheckDisabled();
		Register_UnityEngine_Input_CheckDisabled();

		//System.Boolean UnityEngine.Input::GetButton(System.String)
		void Register_UnityEngine_Input_GetButton();
		Register_UnityEngine_Input_GetButton();

		//System.Boolean UnityEngine.Input::GetButtonDown(System.String)
		void Register_UnityEngine_Input_GetButtonDown();
		Register_UnityEngine_Input_GetButtonDown();

		//System.Boolean UnityEngine.Input::GetButtonUp(System.String)
		void Register_UnityEngine_Input_GetButtonUp();
		Register_UnityEngine_Input_GetButtonUp();

		//System.Boolean UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyDownInt();
		Register_UnityEngine_Input_GetKeyDownInt();

		//System.Boolean UnityEngine.Input::GetKeyInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyInt();
		Register_UnityEngine_Input_GetKeyInt();

		//System.Boolean UnityEngine.Input::GetKeyUpInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyUpInt();
		Register_UnityEngine_Input_GetKeyUpInt();

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonUp();
		Register_UnityEngine_Input_GetMouseButtonUp();

		//System.Boolean UnityEngine.Input::get_mousePresent()
		void Register_UnityEngine_Input_get_mousePresent();
		Register_UnityEngine_Input_get_mousePresent();

		//System.Boolean UnityEngine.Input::get_touchSupported()
		void Register_UnityEngine_Input_get_touchSupported();
		Register_UnityEngine_Input_get_touchSupported();

		//System.Int32 UnityEngine.Input::GetGyroInternal()
		void Register_UnityEngine_Input_GetGyroInternal();
		Register_UnityEngine_Input_GetGyroInternal();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Single UnityEngine.Input::GetAxis(System.String)
		void Register_UnityEngine_Input_GetAxis();
		Register_UnityEngine_Input_GetAxis();

		//System.Single UnityEngine.Input::GetAxisRaw(System.String)
		void Register_UnityEngine_Input_GetAxisRaw();
		Register_UnityEngine_Input_GetAxisRaw();

		//System.String UnityEngine.Input::get_compositionString()
		void Register_UnityEngine_Input_get_compositionString();
		Register_UnityEngine_Input_get_compositionString();

		//System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_GetTouch_Injected();
		Register_UnityEngine_Input_GetTouch_Injected();

		//System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_compositionCursorPos_Injected();
		Register_UnityEngine_Input_get_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

		//System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_mouseScrollDelta_Injected();
		Register_UnityEngine_Input_get_mouseScrollDelta_Injected();

		//System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_set_compositionCursorPos_Injected();
		Register_UnityEngine_Input_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_Input_set_imeCompositionMode();
		Register_UnityEngine_Input_set_imeCompositionMode();

		//UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
		void Register_UnityEngine_Input_get_imeCompositionMode();
		Register_UnityEngine_Input_get_imeCompositionMode();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.IntegratedSubsystem

		//System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
		void Register_UnityEngine_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_IntegratedSubsystem_SetHandle();

		//System.Void UnityEngine.IntegratedSubsystem::Start()
		void Register_UnityEngine_IntegratedSubsystem_Start();
		Register_UnityEngine_IntegratedSubsystem_Start();

		//System.Void UnityEngine.IntegratedSubsystem::Stop()
		void Register_UnityEngine_IntegratedSubsystem_Stop();
		Register_UnityEngine_IntegratedSubsystem_Stop();

	//End Registrations for type : UnityEngine.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.Joint2D

		//System.Single UnityEngine.Joint2D::get_breakForce()
		void Register_UnityEngine_Joint2D_get_breakForce();
		Register_UnityEngine_Joint2D_get_breakForce();

		//System.Single UnityEngine.Joint2D::get_breakTorque()
		void Register_UnityEngine_Joint2D_get_breakTorque();
		Register_UnityEngine_Joint2D_get_breakTorque();

		//System.Single UnityEngine.Joint2D::get_reactionTorque()
		void Register_UnityEngine_Joint2D_get_reactionTorque();
		Register_UnityEngine_Joint2D_get_reactionTorque();

		//System.Void UnityEngine.Joint2D::get_reactionForce_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Joint2D_get_reactionForce_Injected();
		Register_UnityEngine_Joint2D_get_reactionForce_Injected();

		//UnityEngine.Rigidbody2D UnityEngine.Joint2D::get_connectedBody()
		void Register_UnityEngine_Joint2D_get_connectedBody();
		Register_UnityEngine_Joint2D_get_connectedBody();

	//End Registrations for type : UnityEngine.Joint2D

	//Start Registrations for type : UnityEngine.JsonUtility

		//System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
		void Register_UnityEngine_JsonUtility_FromJsonInternal();
		Register_UnityEngine_JsonUtility_FromJsonInternal();

		//System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
		void Register_UnityEngine_JsonUtility_ToJsonInternal();
		Register_UnityEngine_JsonUtility_ToJsonInternal();

	//End Registrations for type : UnityEngine.JsonUtility

	//Start Registrations for type : UnityEngine.LayerMask

		//System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
		void Register_UnityEngine_LayerMask_NameToLayer();
		Register_UnityEngine_LayerMask_NameToLayer();

	//End Registrations for type : UnityEngine.LayerMask

	//Start Registrations for type : UnityEngine.Light

		//System.Boolean UnityEngine.Light::get_useColorTemperature()
		void Register_UnityEngine_Light_get_useColorTemperature();
		Register_UnityEngine_Light_get_useColorTemperature();

		//System.Single UnityEngine.Light::get_bounceIntensity()
		void Register_UnityEngine_Light_get_bounceIntensity();
		Register_UnityEngine_Light_get_bounceIntensity();

		//System.Single UnityEngine.Light::get_colorTemperature()
		void Register_UnityEngine_Light_get_colorTemperature();
		Register_UnityEngine_Light_get_colorTemperature();

		//System.Single UnityEngine.Light::get_cookieSize()
		void Register_UnityEngine_Light_get_cookieSize();
		Register_UnityEngine_Light_get_cookieSize();

		//System.Single UnityEngine.Light::get_intensity()
		void Register_UnityEngine_Light_get_intensity();
		Register_UnityEngine_Light_get_intensity();

		//System.Single UnityEngine.Light::get_range()
		void Register_UnityEngine_Light_get_range();
		Register_UnityEngine_Light_get_range();

		//System.Single UnityEngine.Light::get_spotAngle()
		void Register_UnityEngine_Light_get_spotAngle();
		Register_UnityEngine_Light_get_spotAngle();

		//System.Void UnityEngine.Light::get_bakingOutput_Injected(UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_get_bakingOutput_Injected();
		Register_UnityEngine_Light_get_bakingOutput_Injected();

		//System.Void UnityEngine.Light::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows()
		void Register_UnityEngine_Light_get_shadows();
		Register_UnityEngine_Light_get_shadows();

		//UnityEngine.LightType UnityEngine.Light::get_type()
		void Register_UnityEngine_Light_get_type();
		Register_UnityEngine_Light_get_type();

		//UnityEngine.Texture UnityEngine.Light::get_cookie()
		void Register_UnityEngine_Light_get_cookie();
		Register_UnityEngine_Light_get_cookie();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LineRenderer

		//System.Int32 UnityEngine.LineRenderer::get_positionCount()
		void Register_UnityEngine_LineRenderer_get_positionCount();
		Register_UnityEngine_LineRenderer_get_positionCount();

		//System.Void UnityEngine.LineRenderer::SetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_SetPosition_Injected();
		Register_UnityEngine_LineRenderer_SetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
		void Register_UnityEngine_LineRenderer_SetPositions();
		Register_UnityEngine_LineRenderer_SetPositions();

		//System.Void UnityEngine.LineRenderer::SetWidthCurve(UnityEngine.AnimationCurve)
		void Register_UnityEngine_LineRenderer_SetWidthCurve();
		Register_UnityEngine_LineRenderer_SetWidthCurve();

		//System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
		void Register_UnityEngine_LineRenderer_set_positionCount();
		Register_UnityEngine_LineRenderer_set_positionCount();

	//End Registrations for type : UnityEngine.LineRenderer

	//Start Registrations for type : UnityEngine.LocationService

		//System.Boolean UnityEngine.LocationService::IsServiceEnabledByUser()
		void Register_UnityEngine_LocationService_IsServiceEnabledByUser();
		Register_UnityEngine_LocationService_IsServiceEnabledByUser();

		//System.Void UnityEngine.LocationService::GetLastHeading_Injected(UnityEngine.LocationService/HeadingInfo&)
		void Register_UnityEngine_LocationService_GetLastHeading_Injected();
		Register_UnityEngine_LocationService_GetLastHeading_Injected();

		//System.Void UnityEngine.LocationService::GetLastLocation_Injected(UnityEngine.LocationInfo&)
		void Register_UnityEngine_LocationService_GetLastLocation_Injected();
		Register_UnityEngine_LocationService_GetLastLocation_Injected();

		//System.Void UnityEngine.LocationService::SetDesiredAccuracy(System.Single)
		void Register_UnityEngine_LocationService_SetDesiredAccuracy();
		Register_UnityEngine_LocationService_SetDesiredAccuracy();

		//System.Void UnityEngine.LocationService::SetDistanceFilter(System.Single)
		void Register_UnityEngine_LocationService_SetDistanceFilter();
		Register_UnityEngine_LocationService_SetDistanceFilter();

		//System.Void UnityEngine.LocationService::SetHeadingUpdatesEnabled(System.Boolean)
		void Register_UnityEngine_LocationService_SetHeadingUpdatesEnabled();
		Register_UnityEngine_LocationService_SetHeadingUpdatesEnabled();

		//System.Void UnityEngine.LocationService::StartUpdatingLocation()
		void Register_UnityEngine_LocationService_StartUpdatingLocation();
		Register_UnityEngine_LocationService_StartUpdatingLocation();

		//System.Void UnityEngine.LocationService::StopUpdatingLocation()
		void Register_UnityEngine_LocationService_StopUpdatingLocation();
		Register_UnityEngine_LocationService_StopUpdatingLocation();

		//UnityEngine.LocationServiceStatus UnityEngine.LocationService::GetLocationStatus()
		void Register_UnityEngine_LocationService_GetLocationStatus();
		Register_UnityEngine_LocationService_GetLocationStatus();

	//End Registrations for type : UnityEngine.LocationService

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Boolean UnityEngine.Material::SetPass(System.Int32)
		void Register_UnityEngine_Material_SetPass();
		Register_UnityEngine_Material_SetPass();

		//System.Boolean UnityEngine.Material::get_enableInstancing()
		void Register_UnityEngine_Material_get_enableInstancing();
		Register_UnityEngine_Material_get_enableInstancing();

		//System.Int32 UnityEngine.Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags)
		void Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();
		Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();

		//System.Single UnityEngine.Material::GetFloatImpl(System.Int32)
		void Register_UnityEngine_Material_GetFloatImpl();
		Register_UnityEngine_Material_GetFloatImpl();

		//System.String UnityEngine.Material::GetTagImpl(System.String,System.Boolean,System.String)
		void Register_UnityEngine_Material_GetTagImpl();
		Register_UnityEngine_Material_GetTagImpl();

		//System.String[] UnityEngine.Material::GetShaderKeywords()
		void Register_UnityEngine_Material_GetShaderKeywords();
		Register_UnityEngine_Material_GetShaderKeywords();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl();
		Register_UnityEngine_Material_SetFloatImpl();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
		void Register_UnityEngine_Material_set_shader();
		Register_UnityEngine_Material_set_shader();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.MaterialPropertyBlock

		//System.IntPtr UnityEngine.MaterialPropertyBlock::CreateImpl()
		void Register_UnityEngine_MaterialPropertyBlock_CreateImpl();
		Register_UnityEngine_MaterialPropertyBlock_CreateImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::Clear(System.Boolean)
		void Register_UnityEngine_MaterialPropertyBlock_Clear();
		Register_UnityEngine_MaterialPropertyBlock_Clear();

		//System.Void UnityEngine.MaterialPropertyBlock::DestroyImpl(System.IntPtr)
		void Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();
		Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();

		//System.Void UnityEngine.MaterialPropertyBlock::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetVectorArrayImpl(System.Int32,UnityEngine.Vector4[],System.Int32)
		void Register_UnityEngine_MaterialPropertyBlock_SetVectorArrayImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetVectorArrayImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();

	//End Registrations for type : UnityEngine.MaterialPropertyBlock

	//Start Registrations for type : UnityEngine.Mathf

		//System.Boolean UnityEngine.Mathf::IsPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_IsPowerOfTwo();
		Register_UnityEngine_Mathf_IsPowerOfTwo();

		//System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_NextPowerOfTwo();
		Register_UnityEngine_Mathf_NextPowerOfTwo();

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Void UnityEngine.Mathf::CorrelatedColorTemperatureToRGB_Injected(System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Mathf_CorrelatedColorTemperatureToRGB_Injected();
		Register_UnityEngine_Mathf_CorrelatedColorTemperatureToRGB_Injected();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Boolean UnityEngine.Matrix4x4::Inverse3DAffine_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse3DAffine_Injected();
		Register_UnityEngine_Matrix4x4_Inverse3DAffine_Injected();

		//System.Void UnityEngine.Matrix4x4::GetLossyScale_Injected(UnityEngine.Matrix4x4&,UnityEngine.Vector3&)
		void Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();
		Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();

		//System.Void UnityEngine.Matrix4x4::Inverse_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse_Injected();
		Register_UnityEngine_Matrix4x4_Inverse_Injected();

		//System.Void UnityEngine.Matrix4x4::Perspective_Injected(System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Perspective_Injected();
		Register_UnityEngine_Matrix4x4_Perspective_Injected();

		//System.Void UnityEngine.Matrix4x4::TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_TRS_Injected();
		Register_UnityEngine_Matrix4x4_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
		void Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();

		//System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_HasVertexAttribute();
		Register_UnityEngine_Mesh_HasVertexAttribute();

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Int32 UnityEngine.Mesh::get_vertexCount()
		void Register_UnityEngine_Mesh_get_vertexCount();
		Register_UnityEngine_Mesh_get_vertexCount();

		//System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesImpl();
		Register_UnityEngine_Mesh_GetIndicesImpl();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array)
		void Register_UnityEngine_Mesh_GetArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetArrayFromChannelImpl();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::MarkDynamicImpl()
		void Register_UnityEngine_Mesh_MarkDynamicImpl();
		Register_UnityEngine_Mesh_MarkDynamicImpl();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateNormalsImpl();
		Register_UnityEngine_Mesh_RecalculateNormalsImpl();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.Array,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

		//System.Void UnityEngine.Mesh::SetIndicesNativeArrayImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();
		Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();

		//System.Void UnityEngine.Mesh::SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::UploadMeshDataImpl(System.Boolean)
		void Register_UnityEngine_Mesh_UploadMeshDataImpl();
		Register_UnityEngine_Mesh_UploadMeshDataImpl();

		//System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
		void Register_UnityEngine_Mesh_set_indexFormat();
		Register_UnityEngine_Mesh_set_indexFormat();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshCollider_set_sharedMesh();
		Register_UnityEngine_MeshCollider_set_sharedMesh();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_mesh();
		Register_UnityEngine_MeshFilter_set_mesh();

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
		void Register_UnityEngine_MeshFilter_get_mesh();
		Register_UnityEngine_MeshFilter_get_mesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
		void Register_UnityEngine_MeshFilter_get_sharedMesh();
		Register_UnityEngine_MeshFilter_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.Microphone

		//System.Boolean UnityEngine.Microphone::IsRecording(System.Int32)
		void Register_UnityEngine_Microphone_IsRecording();
		Register_UnityEngine_Microphone_IsRecording();

		//System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)
		void Register_UnityEngine_Microphone_GetMicrophoneDeviceIDFromName();
		Register_UnityEngine_Microphone_GetMicrophoneDeviceIDFromName();

		//System.Int32 UnityEngine.Microphone::GetRecordPosition(System.Int32)
		void Register_UnityEngine_Microphone_GetRecordPosition();
		Register_UnityEngine_Microphone_GetRecordPosition();

		//System.String[] UnityEngine.Microphone::get_devices()
		void Register_UnityEngine_Microphone_get_devices();
		Register_UnityEngine_Microphone_get_devices();

		//System.Void UnityEngine.Microphone::EndRecord(System.Int32)
		void Register_UnityEngine_Microphone_EndRecord();
		Register_UnityEngine_Microphone_EndRecord();

		//System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Microphone_GetDeviceCaps();
		Register_UnityEngine_Microphone_GetDeviceCaps();

		//UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)
		void Register_UnityEngine_Microphone_StartRecord();
		Register_UnityEngine_Microphone_StartRecord();

	//End Registrations for type : UnityEngine.Microphone

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::Release()
		void Register_UnityEngine_Networking_CertificateHandler_Release();
		Register_UnityEngine_Networking_CertificateHandler_Release();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandler

		//System.Byte* UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler,System.Int32&)
		void Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();
		Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();

		//System.String UnityEngine.Networking.DownloadHandler::GetContentType()
		void Register_UnityEngine_Networking_DownloadHandler_GetContentType();
		Register_UnityEngine_Networking_DownloadHandler_GetContentType();

		//System.Void UnityEngine.Networking.DownloadHandler::Release()
		void Register_UnityEngine_Networking_DownloadHandler_Release();
		Register_UnityEngine_Networking_DownloadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.DownloadHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

		//System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
		void Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();
		Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerFile

		//System.IntPtr UnityEngine.Networking.DownloadHandlerFile::Create(UnityEngine.Networking.DownloadHandlerFile,System.String,System.Boolean)
		void Register_UnityEngine_Networking_DownloadHandlerFile_Create();
		Register_UnityEngine_Networking_DownloadHandlerFile_Create();

		//System.Void UnityEngine.Networking.DownloadHandlerFile::set_removeFileOnAbort(System.Boolean)
		void Register_UnityEngine_Networking_DownloadHandlerFile_set_removeFileOnAbort();
		Register_UnityEngine_Networking_DownloadHandlerFile_set_removeFileOnAbort();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerFile

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerTexture

		//System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)
		void Register_UnityEngine_Networking_DownloadHandlerTexture_Create();
		Register_UnityEngine_Networking_DownloadHandlerTexture_Create();

		//UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()
		void Register_UnityEngine_Networking_DownloadHandlerTexture_InternalGetTextureNative();
		Register_UnityEngine_Networking_DownloadHandlerTexture_InternalGetTextureNative();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerTexture

	//Start Registrations for type : UnityEngine.Networking.UnityWebRequest

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();
		Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();

		//System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
		void Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();
		Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
		void Register_UnityEngine_Networking_UnityWebRequest_Create();
		Register_UnityEngine_Networking_UnityWebRequest_Create();

		//System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
		void Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();
		Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();

		//System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
		void Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();
		Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();

		//System.Void UnityEngine.Networking.UnityWebRequest::Abort()
		void Register_UnityEngine_Networking_UnityWebRequest_Abort();
		Register_UnityEngine_Networking_UnityWebRequest_Abort();

		//System.Void UnityEngine.Networking.UnityWebRequest::Release()
		void Register_UnityEngine_Networking_UnityWebRequest_Release();
		Register_UnityEngine_Networking_UnityWebRequest_Release();

		//UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
		void Register_UnityEngine_Networking_UnityWebRequest_get_result();
		Register_UnityEngine_Networking_UnityWebRequest_get_result();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
		void Register_UnityEngine_Networking_UnityWebRequest_GetError();
		Register_UnityEngine_Networking_UnityWebRequest_GetError();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_InternalSetRequestHeader();
		Register_UnityEngine_Networking_UnityWebRequest_InternalSetRequestHeader();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
		void Register_UnityEngine_Networking_UnityWebRequest_SetMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_SetUrl();

		//UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
		void Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();
		Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();

	//End Registrations for type : UnityEngine.Networking.UnityWebRequest

	//Start Registrations for type : UnityEngine.Networking.UploadHandler

		//System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
		void Register_UnityEngine_Networking_UploadHandler_InternalSetContentType();
		Register_UnityEngine_Networking_UploadHandler_InternalSetContentType();

		//System.Void UnityEngine.Networking.UploadHandler::Release()
		void Register_UnityEngine_Networking_UploadHandler_Release();
		Register_UnityEngine_Networking_UploadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.UploadHandler

	//Start Registrations for type : UnityEngine.Networking.UploadHandlerRaw

		//System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte*,System.Int32)
		void Register_UnityEngine_Networking_UploadHandlerRaw_Create();
		Register_UnityEngine_Networking_UploadHandlerRaw_Create();

	//End Registrations for type : UnityEngine.Networking.UploadHandlerRaw

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

		//System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
		void Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();
		Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
		void Register_UnityEngine_Object_DestroyImmediate();
		Register_UnityEngine_Object_DestroyImmediate();

		//System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
		void Register_UnityEngine_Object_DontDestroyOnLoad();
		Register_UnityEngine_Object_DontDestroyOnLoad();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
		void Register_UnityEngine_Object_get_hideFlags();
		Register_UnityEngine_Object_get_hideFlags();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_FindObjectFromInstanceID();
		Register_UnityEngine_Object_FindObjectFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle_Injected(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ObjectGUIState

		//System.IntPtr UnityEngine.ObjectGUIState::Internal_Create()
		void Register_UnityEngine_ObjectGUIState_Internal_Create();
		Register_UnityEngine_ObjectGUIState_Internal_Create();

		//System.Void UnityEngine.ObjectGUIState::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_ObjectGUIState_Internal_Destroy();
		Register_UnityEngine_ObjectGUIState_Internal_Destroy();

	//End Registrations for type : UnityEngine.ObjectGUIState

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_EmitOld_Internal();
		Register_UnityEngine_ParticleSystem_EmitOld_Internal();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystemExtensionsImpl

		//System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
		void Register_UnityEngine_ParticleSystemExtensionsImpl_GetCollisionEvents();
		Register_UnityEngine_ParticleSystemExtensionsImpl_GetCollisionEvents();

	//End Registrations for type : UnityEngine.ParticleSystemExtensionsImpl

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
		void Register_UnityEngine_ParticleSystemRenderer_GetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_GetMeshes();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PhysicsScene2D

		//System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>)
		void Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();

		//System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene2D

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.PlayerPrefs

		//System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
		void Register_UnityEngine_PlayerPrefs_HasKey();
		Register_UnityEngine_PlayerPrefs_HasKey();

		//System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
		void Register_UnityEngine_PlayerPrefs_TrySetFloat();
		Register_UnityEngine_PlayerPrefs_TrySetFloat();

		//System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
		void Register_UnityEngine_PlayerPrefs_TrySetInt();
		Register_UnityEngine_PlayerPrefs_TrySetInt();

		//System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
		void Register_UnityEngine_PlayerPrefs_TrySetSetString();
		Register_UnityEngine_PlayerPrefs_TrySetSetString();

		//System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
		void Register_UnityEngine_PlayerPrefs_GetInt();
		Register_UnityEngine_PlayerPrefs_GetInt();

		//System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
		void Register_UnityEngine_PlayerPrefs_GetFloat();
		Register_UnityEngine_PlayerPrefs_GetFloat();

		//System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
		void Register_UnityEngine_PlayerPrefs_GetString();
		Register_UnityEngine_PlayerPrefs_GetString();

		//System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
		void Register_UnityEngine_PlayerPrefs_DeleteKey();
		Register_UnityEngine_PlayerPrefs_DeleteKey();

		//System.Void UnityEngine.PlayerPrefs::Save()
		void Register_UnityEngine_PlayerPrefs_Save();
		Register_UnityEngine_PlayerPrefs_Save();

	//End Registrations for type : UnityEngine.PlayerPrefs

	//Start Registrations for type : UnityEngine.Profiling.Profiler

		//System.Boolean UnityEngine.Profiling.Profiler::get_enabled()
		void Register_UnityEngine_Profiling_Profiler_get_enabled();
		Register_UnityEngine_Profiling_Profiler_get_enabled();

	//End Registrations for type : UnityEngine.Profiling.Profiler

	//Start Registrations for type : UnityEngine.PropertyNameUtils

		//System.Void UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)
		void Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();
		Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();

	//End Registrations for type : UnityEngine.PropertyNameUtils

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Int32 UnityEngine.QualitySettings::get_vSyncCount()
		void Register_UnityEngine_QualitySettings_get_vSyncCount();
		Register_UnityEngine_QualitySettings_get_vSyncCount();

		//System.Single UnityEngine.QualitySettings::get_lodBias()
		void Register_UnityEngine_QualitySettings_get_lodBias();
		Register_UnityEngine_QualitySettings_get_lodBias();

		//System.Void UnityEngine.QualitySettings::set_lodBias(System.Single)
		void Register_UnityEngine_QualitySettings_set_lodBias();
		Register_UnityEngine_QualitySettings_set_lodBias();

		//System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
		void Register_UnityEngine_QualitySettings_set_vSyncCount();
		Register_UnityEngine_QualitySettings_set_vSyncCount();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::AngleAxis_Injected(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_AngleAxis_Injected();
		Register_UnityEngine_Quaternion_AngleAxis_Injected();

		//System.Void UnityEngine.Quaternion::FromToRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_FromToRotation_Injected();
		Register_UnityEngine_Quaternion_FromToRotation_Injected();

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

		//System.Void UnityEngine.Quaternion::Lerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Lerp_Injected();
		Register_UnityEngine_Quaternion_Lerp_Injected();

		//System.Void UnityEngine.Quaternion::LookRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_LookRotation_Injected();
		Register_UnityEngine_Quaternion_LookRotation_Injected();

		//System.Void UnityEngine.Quaternion::Slerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Slerp_Injected();
		Register_UnityEngine_Quaternion_Slerp_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
		void Register_UnityEngine_Random_RandomRangeInt();
		Register_UnityEngine_Random_RandomRangeInt();

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

		//System.Void UnityEngine.RectOffset::Remove_Injected(UnityEngine.Rect&,UnityEngine.Rect&)
		void Register_UnityEngine_RectOffset_Remove_Injected();
		Register_UnityEngine_RectOffset_Remove_Injected();

		//System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
		void Register_UnityEngine_RectOffset_set_bottom();
		Register_UnityEngine_RectOffset_set_bottom();

		//System.Void UnityEngine.RectOffset::set_left(System.Int32)
		void Register_UnityEngine_RectOffset_set_left();
		Register_UnityEngine_RectOffset_set_left();

		//System.Void UnityEngine.RectOffset::set_right(System.Int32)
		void Register_UnityEngine_RectOffset_set_right();
		Register_UnityEngine_RectOffset_set_right();

		//System.Void UnityEngine.RectOffset::set_top(System.Int32)
		void Register_UnityEngine_RectOffset_set_top();
		Register_UnityEngine_RectOffset_set_top();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.RectTransform

		//System.Void UnityEngine.RectTransform::get_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMax_Injected();
		Register_UnityEngine_RectTransform_get_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::get_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMin_Injected();
		Register_UnityEngine_RectTransform_get_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::get_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_pivot_Injected();
		Register_UnityEngine_RectTransform_get_pivot_Injected();

		//System.Void UnityEngine.RectTransform::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_RectTransform_get_rect_Injected();
		Register_UnityEngine_RectTransform_get_rect_Injected();

		//System.Void UnityEngine.RectTransform::get_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_get_sizeDelta_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMax_Injected();
		Register_UnityEngine_RectTransform_set_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMin_Injected();
		Register_UnityEngine_RectTransform_set_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_pivot_Injected();
		Register_UnityEngine_RectTransform_set_pivot_Injected();

		//System.Void UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_set_sizeDelta_Injected();

	//End Registrations for type : UnityEngine.RectTransform

	//Start Registrations for type : UnityEngine.RectTransformUtility

		//System.Boolean UnityEngine.RectTransformUtility::PointInRectangle_Injected(UnityEngine.Vector2&,UnityEngine.RectTransform,UnityEngine.Camera,UnityEngine.Vector4&)
		void Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();
		Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustRect_Injected(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();

	//End Registrations for type : UnityEngine.RectTransformUtility

	//Start Registrations for type : UnityEngine.Renderer

		//System.Boolean UnityEngine.Renderer::get_enabled()
		void Register_UnityEngine_Renderer_get_enabled();
		Register_UnityEngine_Renderer_get_enabled();

		//System.Int32 UnityEngine.Renderer::get_sortingLayerID()
		void Register_UnityEngine_Renderer_get_sortingLayerID();
		Register_UnityEngine_Renderer_get_sortingLayerID();

		//System.Int32 UnityEngine.Renderer::get_sortingOrder()
		void Register_UnityEngine_Renderer_get_sortingOrder();
		Register_UnityEngine_Renderer_get_sortingOrder();

		//System.Void UnityEngine.Renderer::Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Renderer_Internal_GetPropertyBlock();
		Register_UnityEngine_Renderer_Internal_GetPropertyBlock();

		//System.Void UnityEngine.Renderer::Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Renderer_Internal_SetPropertyBlock();
		Register_UnityEngine_Renderer_Internal_SetPropertyBlock();

		//System.Void UnityEngine.Renderer::SetMaterial(UnityEngine.Material)
		void Register_UnityEngine_Renderer_SetMaterial();
		Register_UnityEngine_Renderer_SetMaterial();

		//System.Void UnityEngine.Renderer::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Renderer_get_bounds_Injected();
		Register_UnityEngine_Renderer_get_bounds_Injected();

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

		//UnityEngine.Material UnityEngine.Renderer::GetMaterial()
		void Register_UnityEngine_Renderer_GetMaterial();
		Register_UnityEngine_Renderer_GetMaterial();

		//UnityEngine.Material UnityEngine.Renderer::GetSharedMaterial()
		void Register_UnityEngine_Renderer_GetSharedMaterial();
		Register_UnityEngine_Renderer_GetSharedMaterial();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.AsyncGPUReadback

		//System.Void UnityEngine.Rendering.AsyncGPUReadback::Request_Internal_Texture_1_Injected(UnityEngine.Texture,System.Int32,UnityEngine.Rendering.AsyncRequestNativeArrayData*,UnityEngine.Rendering.AsyncGPUReadbackRequest&)
		void Register_UnityEngine_Rendering_AsyncGPUReadback_Request_Internal_Texture_1_Injected();
		Register_UnityEngine_Rendering_AsyncGPUReadback_Request_Internal_Texture_1_Injected();

	//End Registrations for type : UnityEngine.Rendering.AsyncGPUReadback

	//Start Registrations for type : UnityEngine.Rendering.AsyncGPUReadbackRequest

		//System.Void UnityEngine.Rendering.AsyncGPUReadbackRequest::SetScriptingCallback_Injected(UnityEngine.Rendering.AsyncGPUReadbackRequest&,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
		void Register_UnityEngine_Rendering_AsyncGPUReadbackRequest_SetScriptingCallback_Injected();
		Register_UnityEngine_Rendering_AsyncGPUReadbackRequest_SetScriptingCallback_Injected();

		//System.Void UnityEngine.Rendering.AsyncGPUReadbackRequest::WaitForCompletion_Injected(UnityEngine.Rendering.AsyncGPUReadbackRequest&)
		void Register_UnityEngine_Rendering_AsyncGPUReadbackRequest_WaitForCompletion_Injected();
		Register_UnityEngine_Rendering_AsyncGPUReadbackRequest_WaitForCompletion_Injected();

	//End Registrations for type : UnityEngine.Rendering.AsyncGPUReadbackRequest

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Boolean UnityEngine.Rendering.CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags,UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::CreateGPUFence_Internal(UnityEngine.Rendering.GraphicsFenceType,UnityEngine.Rendering.SynchronisationStageFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget_Injected(UnityEngine.Rendering.RTClearFlags,UnityEngine.Color&,System.Single,System.UInt32)
		void Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawMesh_Injected(UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventAndDataInternal(System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndDataInternal();
		Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventAndDataInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventInternal(System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();
		Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.GraphicsFence

		//System.Int32 UnityEngine.Rendering.GraphicsFence::GetVersionNumber(System.IntPtr)
		void Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();
		Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();

	//End Registrations for type : UnityEngine.Rendering.GraphicsFence

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.Rendering.OnDemandRendering

		//System.Single UnityEngine.Rendering.OnDemandRendering::GetEffectiveRenderFrameRate()
		void Register_UnityEngine_Rendering_OnDemandRendering_GetEffectiveRenderFrameRate();
		Register_UnityEngine_Rendering_OnDemandRendering_GetEffectiveRenderFrameRate();

	//End Registrations for type : UnityEngine.Rendering.OnDemandRendering

	//Start Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetCameras_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetCameras_Internal_Injected();

	//End Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Boolean UnityEngine.RenderTexture::Create()
		void Register_UnityEngine_RenderTexture_Create();
		Register_UnityEngine_RenderTexture_Create();

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetColorBuffer_Injected(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetColorBuffer_Injected();
		Register_UnityEngine_RenderTexture_GetColorBuffer_Injected();

		//System.Void UnityEngine.RenderTexture::GetDepthBuffer_Injected(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetDepthBuffer_Injected();
		Register_UnityEngine_RenderTexture_GetDepthBuffer_Injected();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::Release()
		void Register_UnityEngine_RenderTexture_Release();
		Register_UnityEngine_RenderTexture_Release();

		//System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ReleaseTemporary();
		Register_UnityEngine_RenderTexture_ReleaseTemporary();

		//System.Void UnityEngine.RenderTexture::SetActive(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_SetActive();
		Register_UnityEngine_RenderTexture_SetActive();

		//System.Void UnityEngine.RenderTexture::SetMipMapCount(System.Int32)
		void Register_UnityEngine_RenderTexture_SetMipMapCount();
		Register_UnityEngine_RenderTexture_SetMipMapCount();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_autoGenerateMips();
		Register_UnityEngine_RenderTexture_set_autoGenerateMips();

		//System.Void UnityEngine.RenderTexture::set_depthStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_depthStencilFormat();
		Register_UnityEngine_RenderTexture_set_depthStencilFormat();

		//System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_graphicsFormat();
		Register_UnityEngine_RenderTexture_set_graphicsFormat();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useMipMap();
		Register_UnityEngine_RenderTexture_set_useMipMap();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetActive()
		void Register_UnityEngine_RenderTexture_GetActive();
		Register_UnityEngine_RenderTexture_GetActive();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary_Internal_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();
		Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
		void Register_UnityEngine_Resources_UnloadUnusedAssets();
		Register_UnityEngine_Resources_UnloadUnusedAssets();

		//UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
		void Register_UnityEngine_Resources_GetBuiltinResource();
		Register_UnityEngine_Resources_GetBuiltinResource();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.ResourcesAPIInternal

		//UnityEngine.Object UnityEngine.ResourcesAPIInternal::Load(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_Load();
		Register_UnityEngine_ResourcesAPIInternal_Load();

		//UnityEngine.Object[] UnityEngine.ResourcesAPIInternal::LoadAll(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_LoadAll();
		Register_UnityEngine_ResourcesAPIInternal_LoadAll();

		//UnityEngine.Shader UnityEngine.ResourcesAPIInternal::FindShaderByName(System.String)
		void Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();
		Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();

	//End Registrations for type : UnityEngine.ResourcesAPIInternal

	//Start Registrations for type : UnityEngine.Rigidbody

		//System.Void UnityEngine.Rigidbody::AddForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddForce_Injected();
		Register_UnityEngine_Rigidbody_AddForce_Injected();

		//System.Void UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_velocity_Injected();
		Register_UnityEngine_Rigidbody_set_velocity_Injected();

	//End Registrations for type : UnityEngine.Rigidbody

	//Start Registrations for type : UnityEngine.ScalableBufferManager

		//System.Single UnityEngine.ScalableBufferManager::get_heightScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();

		//System.Single UnityEngine.ScalableBufferManager::get_widthScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();

		//System.Void UnityEngine.ScalableBufferManager::ResizeBuffers(System.Single,System.Single)
		void Register_UnityEngine_ScalableBufferManager_ResizeBuffers();
		Register_UnityEngine_ScalableBufferManager_ResizeBuffers();

	//End Registrations for type : UnityEngine.ScalableBufferManager

	//Start Registrations for type : UnityEngine.SceneManagement.Scene

		//System.Boolean UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();
		Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();

		//System.Boolean UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_IsValidInternal();
		Register_UnityEngine_SceneManagement_Scene_IsValidInternal();

		//System.Int32 UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();

		//System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetNameInternal();
		Register_UnityEngine_SceneManagement_Scene_GetNameInternal();

		//System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)
		void Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();

	//End Registrations for type : UnityEngine.SceneManagement.Scene

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManager

		//System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
		void Register_UnityEngine_SceneManagement_SceneManager_get_sceneCount();
		Register_UnityEngine_SceneManagement_SceneManager_get_sceneCount();

		//System.Void UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();

		//System.Void UnityEngine.SceneManagement.SceneManager::GetSceneAt_Injected(System.Int32,UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetSceneAt_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetSceneAt_Injected();

		//System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene_Injected(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_MoveGameObjectToScene_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_MoveGameObjectToScene_Injected();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManager

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManagerAPIInternal

		//System.Int32 UnityEngine.SceneManagement.SceneManagerAPIInternal::GetNumScenesInBuildSettings()
		void Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_GetNumScenesInBuildSettings();
		Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_GetNumScenesInBuildSettings();

		//UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters&,System.Boolean)
		void Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected();
		Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManagerAPIInternal

	//Start Registrations for type : UnityEngine.SceneManagement.SceneUtility

		//System.String UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)
		void Register_UnityEngine_SceneManagement_SceneUtility_GetScenePathByBuildIndex();
		Register_UnityEngine_SceneManagement_SceneUtility_GetScenePathByBuildIndex();

	//End Registrations for type : UnityEngine.SceneManagement.SceneUtility

	//Start Registrations for type : UnityEngine.Screen

		//System.Boolean UnityEngine.Screen::get_fullScreen()
		void Register_UnityEngine_Screen_get_fullScreen();
		Register_UnityEngine_Screen_get_fullScreen();

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_sleepTimeout()
		void Register_UnityEngine_Screen_get_sleepTimeout();
		Register_UnityEngine_Screen_get_sleepTimeout();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//System.Single UnityEngine.Screen::get_dpi()
		void Register_UnityEngine_Screen_get_dpi();
		Register_UnityEngine_Screen_get_dpi();

		//System.Void UnityEngine.Screen::RequestOrientation(UnityEngine.ScreenOrientation)
		void Register_UnityEngine_Screen_RequestOrientation();
		Register_UnityEngine_Screen_RequestOrientation();

		//System.Void UnityEngine.Screen::SetOrientationEnabled(UnityEngine.EnabledOrientation,System.Boolean)
		void Register_UnityEngine_Screen_SetOrientationEnabled();
		Register_UnityEngine_Screen_SetOrientationEnabled();

		//System.Void UnityEngine.Screen::get_currentResolution_Injected(UnityEngine.Resolution&)
		void Register_UnityEngine_Screen_get_currentResolution_Injected();
		Register_UnityEngine_Screen_get_currentResolution_Injected();

		//System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
		void Register_UnityEngine_Screen_set_sleepTimeout();
		Register_UnityEngine_Screen_set_sleepTimeout();

		//UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
		void Register_UnityEngine_Screen_GetScreenOrientation();
		Register_UnityEngine_Screen_GetScreenOrientation();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.ScriptingRuntime

		//System.String[] UnityEngine.ScriptingRuntime::GetAllUserAssemblies()
		void Register_UnityEngine_ScriptingRuntime_GetAllUserAssemblies();
		Register_UnityEngine_ScriptingRuntime_GetAllUserAssemblies();

	//End Registrations for type : UnityEngine.ScriptingRuntime

	//Start Registrations for type : UnityEngine.Shader

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//System.Int32 UnityEngine.Shader::TagToID(System.String)
		void Register_UnityEngine_Shader_TagToID();
		Register_UnityEngine_Shader_TagToID();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SortingLayer

		//System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
		void Register_UnityEngine_SortingLayer_GetLayerValueFromID();
		Register_UnityEngine_SortingLayer_GetLayerValueFromID();

	//End Registrations for type : UnityEngine.SortingLayer

	//Start Registrations for type : UnityEngine.Sprite

		//System.Int32 UnityEngine.Sprite::GetPacked()
		void Register_UnityEngine_Sprite_GetPacked();
		Register_UnityEngine_Sprite_GetPacked();

		//System.Int32 UnityEngine.Sprite::GetPackingMode()
		void Register_UnityEngine_Sprite_GetPackingMode();
		Register_UnityEngine_Sprite_GetPackingMode();

		//System.Int32 UnityEngine.Sprite::GetPackingRotation()
		void Register_UnityEngine_Sprite_GetPackingRotation();
		Register_UnityEngine_Sprite_GetPackingRotation();

		//System.Single UnityEngine.Sprite::get_pixelsPerUnit()
		void Register_UnityEngine_Sprite_get_pixelsPerUnit();
		Register_UnityEngine_Sprite_get_pixelsPerUnit();

		//System.UInt16[] UnityEngine.Sprite::get_triangles()
		void Register_UnityEngine_Sprite_get_triangles();
		Register_UnityEngine_Sprite_get_triangles();

		//System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetInnerUVs_Injected();
		Register_UnityEngine_Sprite_GetInnerUVs_Injected();

		//System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetOuterUVs_Injected();
		Register_UnityEngine_Sprite_GetOuterUVs_Injected();

		//System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetPadding_Injected();
		Register_UnityEngine_Sprite_GetPadding_Injected();

		//System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_GetTextureRect_Injected();
		Register_UnityEngine_Sprite_GetTextureRect_Injected();

		//System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_get_border_Injected();
		Register_UnityEngine_Sprite_get_border_Injected();

		//System.Void UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Sprite_get_bounds_Injected();
		Register_UnityEngine_Sprite_get_bounds_Injected();

		//System.Void UnityEngine.Sprite::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Sprite_get_pivot_Injected();
		Register_UnityEngine_Sprite_get_pivot_Injected();

		//System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_get_rect_Injected();
		Register_UnityEngine_Sprite_get_rect_Injected();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
		void Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();
		Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
		void Register_UnityEngine_Sprite_get_texture();
		Register_UnityEngine_Sprite_get_texture();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
		void Register_UnityEngine_Sprite_get_uv();
		Register_UnityEngine_Sprite_get_uv();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_vertices()
		void Register_UnityEngine_Sprite_get_vertices();
		Register_UnityEngine_Sprite_get_vertices();

	//End Registrations for type : UnityEngine.Sprite

	//Start Registrations for type : UnityEngine.SubsystemBindings

		//System.Void UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)
		void Register_UnityEngine_SubsystemBindings_DestroySubsystem();
		Register_UnityEngine_SubsystemBindings_DestroySubsystem();

	//End Registrations for type : UnityEngine.SubsystemBindings

	//Start Registrations for type : UnityEngine.SubsystemDescriptorBindings

		//System.String UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)
		void Register_UnityEngine_SubsystemDescriptorBindings_GetId();
		Register_UnityEngine_SubsystemDescriptorBindings_GetId();

	//End Registrations for type : UnityEngine.SubsystemDescriptorBindings

	//Start Registrations for type : UnityEngine.SubsystemManager

		//System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.SubsystemManager

	//Start Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

		//System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();

	//End Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::GetGraphicsMultiThreaded()
		void Register_UnityEngine_SystemInfo_GetGraphicsMultiThreaded();
		Register_UnityEngine_SystemInfo_GetGraphicsMultiThreaded();

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::IsGyroAvailable()
		void Register_UnityEngine_SystemInfo_IsGyroAvailable();
		Register_UnityEngine_SystemInfo_IsGyroAvailable();

		//System.Boolean UnityEngine.SystemInfo::SupportsComputeShaders()
		void Register_UnityEngine_SystemInfo_SupportsComputeShaders();
		Register_UnityEngine_SystemInfo_SupportsComputeShaders();

		//System.Boolean UnityEngine.SystemInfo::SupportsGPUFence()
		void Register_UnityEngine_SystemInfo_SupportsGPUFence();
		Register_UnityEngine_SystemInfo_SupportsGPUFence();

		//System.Boolean UnityEngine.SystemInfo::SupportsInstancing()
		void Register_UnityEngine_SystemInfo_SupportsInstancing();
		Register_UnityEngine_SystemInfo_SupportsInstancing();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//System.Int32 UnityEngine.SystemInfo::GetMaxRenderTextureSize()
		void Register_UnityEngine_SystemInfo_GetMaxRenderTextureSize();
		Register_UnityEngine_SystemInfo_GetMaxRenderTextureSize();

		//System.Int32 UnityEngine.SystemInfo::GetMaxTextureSize()
		void Register_UnityEngine_SystemInfo_GetMaxTextureSize();
		Register_UnityEngine_SystemInfo_GetMaxTextureSize();

		//System.Int64 UnityEngine.SystemInfo::MaxGraphicsBufferSize()
		void Register_UnityEngine_SystemInfo_MaxGraphicsBufferSize();
		Register_UnityEngine_SystemInfo_MaxGraphicsBufferSize();

		//System.Single UnityEngine.SystemInfo::GetBatteryLevel()
		void Register_UnityEngine_SystemInfo_GetBatteryLevel();
		Register_UnityEngine_SystemInfo_GetBatteryLevel();

		//System.String UnityEngine.SystemInfo::GetDeviceModel()
		void Register_UnityEngine_SystemInfo_GetDeviceModel();
		Register_UnityEngine_SystemInfo_GetDeviceModel();

		//System.String UnityEngine.SystemInfo::GetDeviceUniqueIdentifier()
		void Register_UnityEngine_SystemInfo_GetDeviceUniqueIdentifier();
		Register_UnityEngine_SystemInfo_GetDeviceUniqueIdentifier();

		//System.String UnityEngine.SystemInfo::GetOperatingSystem()
		void Register_UnityEngine_SystemInfo_GetOperatingSystem();
		Register_UnityEngine_SystemInfo_GetOperatingSystem();

		//UnityEngine.DeviceType UnityEngine.SystemInfo::GetDeviceType()
		void Register_UnityEngine_SystemInfo_GetDeviceType();
		Register_UnityEngine_SystemInfo_GetDeviceType();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_GetCompatibleFormat();
		Register_UnityEngine_SystemInfo_GetCompatibleFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
		void Register_UnityEngine_SystemInfo_GetGraphicsFormat();
		Register_UnityEngine_SystemInfo_GetGraphicsFormat();

		//UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
		void Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();
		Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.Byte[] UnityEngine.TextAsset::get_bytes()
		void Register_UnityEngine_TextAsset_get_bytes();
		Register_UnityEngine_TextAsset_get_bytes();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_Internal(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_Internal(System.UInt32[],System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[],System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithIndexValue_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithIndexValue_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference_Internal(System.String,System.String,UnityEngine.TextCore.LowLevel.FontReference&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetSystemFontReference_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetSystemFontReference_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_Internal(UnityEngine.TextCore.FaceInfo&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[])
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphPairAdjustmentRecordsFromMarshallingArray();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphPairAdjustmentRecordsFromMarshallingArray();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(System.String,System.Int32,System.Int32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine.Font,System.Int32,System.Int32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(System.String,System.String,System.Int32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(System.UInt32[],System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes();

		//System.UInt32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphIndex(System.UInt32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::ResetAtlasTexture(UnityEngine.Texture2D)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::SetTextureUploadMode(System.Boolean)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_SetTextureUploadMode();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_SetTextureUploadMode();

	//End Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

	//Start Registrations for type : UnityEngine.TextGenerator

		//System.Boolean UnityEngine.TextGenerator::Populate_Internal_Injected(System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
		void Register_UnityEngine_TextGenerator_Populate_Internal_Injected();
		Register_UnityEngine_TextGenerator_Populate_Internal_Injected();

		//System.Int32 UnityEngine.TextGenerator::get_characterCount()
		void Register_UnityEngine_TextGenerator_get_characterCount();
		Register_UnityEngine_TextGenerator_get_characterCount();

		//System.Int32 UnityEngine.TextGenerator::get_lineCount()
		void Register_UnityEngine_TextGenerator_get_lineCount();
		Register_UnityEngine_TextGenerator_get_lineCount();

		//System.IntPtr UnityEngine.TextGenerator::Internal_Create()
		void Register_UnityEngine_TextGenerator_Internal_Create();
		Register_UnityEngine_TextGenerator_Internal_Create();

		//System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetCharactersInternal();
		Register_UnityEngine_TextGenerator_GetCharactersInternal();

		//System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetLinesInternal();
		Register_UnityEngine_TextGenerator_GetLinesInternal();

		//System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetVerticesInternal();
		Register_UnityEngine_TextGenerator_GetVerticesInternal();

		//System.Void UnityEngine.TextGenerator::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TextGenerator_Internal_Destroy();
		Register_UnityEngine_TextGenerator_Internal_Destroy();

		//System.Void UnityEngine.TextGenerator::get_rectExtents_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_TextGenerator_get_rectExtents_Injected();
		Register_UnityEngine_TextGenerator_get_rectExtents_Injected();

	//End Registrations for type : UnityEngine.TextGenerator

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable()
		void Register_UnityEngine_Texture_get_isReadable();
		Register_UnityEngine_Texture_get_isReadable();

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Int32 UnityEngine.Texture::Internal_GetActiveTextureColorSpace()
		void Register_UnityEngine_Texture_Internal_GetActiveTextureColorSpace();
		Register_UnityEngine_Texture_Internal_GetActiveTextureColorSpace();

		//System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Texture_get_texelSize_Injected();
		Register_UnityEngine_Texture_get_texelSize_Injected();

		//System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
		void Register_UnityEngine_Texture_set_anisoLevel();
		Register_UnityEngine_Texture_set_anisoLevel();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

		//UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
		void Register_UnityEngine_Texture_get_filterMode();
		Register_UnityEngine_Texture_get_filterMode();

		//UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
		void Register_UnityEngine_Texture_get_wrapMode();
		Register_UnityEngine_Texture_get_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImpl(System.IntPtr,System.Int32)
		void Register_UnityEngine_Texture2D_LoadRawTextureDataImpl();
		Register_UnityEngine_Texture2D_LoadRawTextureDataImpl();

		//System.Boolean UnityEngine.Texture2D::ReinitializeImpl(System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_ReinitializeImpl();
		Register_UnityEngine_Texture2D_ReinitializeImpl();

		//System.Boolean UnityEngine.Texture2D::ReinitializeWithFormatImpl(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
		void Register_UnityEngine_Texture2D_ReinitializeWithFormatImpl();
		Register_UnityEngine_Texture2D_ReinitializeWithFormatImpl();

		//System.Boolean UnityEngine.Texture2D::SetPixelDataImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelDataImpl();
		Register_UnityEngine_Texture2D_SetPixelDataImpl();

		//System.Boolean UnityEngine.Texture2D::SetPixelDataImplArray(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelDataImplArray();
		Register_UnityEngine_Texture2D_SetPixelDataImplArray();

		//System.Boolean UnityEngine.Texture2D::get_isReadable()
		void Register_UnityEngine_Texture2D_get_isReadable();
		Register_UnityEngine_Texture2D_get_isReadable();

		//System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
		void Register_UnityEngine_Texture2D_GetRawTextureData();
		Register_UnityEngine_Texture2D_GetRawTextureData();

		//System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
		void Register_UnityEngine_Texture2D_GetRawImageDataSize();
		Register_UnityEngine_Texture2D_GetRawImageDataSize();

		//System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
		void Register_UnityEngine_Texture2D_GetWritableImageData();
		Register_UnityEngine_Texture2D_GetWritableImageData();

		//System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl();
		Register_UnityEngine_Texture2D_ApplyImpl();

		//System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();

		//System.Void UnityEngine.Texture2D::ReadPixelsImpl_Injected(UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_Texture2D_ReadPixelsImpl_Injected();
		Register_UnityEngine_Texture2D_ReadPixelsImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
		void Register_UnityEngine_Texture2D_SetAllPixels32();
		Register_UnityEngine_Texture2D_SetAllPixels32();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelsImpl();
		Register_UnityEngine_Texture2D_SetPixelsImpl();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
		void Register_UnityEngine_Texture2D_GetPixels32();
		Register_UnityEngine_Texture2D_GetPixels32();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
		void Register_UnityEngine_Texture2D_get_whiteTexture();
		Register_UnityEngine_Texture2D_get_whiteTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable()
		void Register_UnityEngine_Texture2DArray_get_isReadable();
		Register_UnityEngine_Texture2DArray_get_isReadable();

		//System.Int32 UnityEngine.Texture2DArray::get_allSlices()
		void Register_UnityEngine_Texture2DArray_get_allSlices();
		Register_UnityEngine_Texture2DArray_get_allSlices();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable()
		void Register_UnityEngine_Texture3D_get_isReadable();
		Register_UnityEngine_Texture3D_get_isReadable();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Time

		//System.Int32 UnityEngine.Time::get_frameCount()
		void Register_UnityEngine_Time_get_frameCount();
		Register_UnityEngine_Time_get_frameCount();

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

		//System.Single UnityEngine.Time::get_fixedDeltaTime()
		void Register_UnityEngine_Time_get_fixedDeltaTime();
		Register_UnityEngine_Time_get_fixedDeltaTime();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_time()
		void Register_UnityEngine_Time_get_time();
		Register_UnityEngine_Time_get_time();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

		//System.Single UnityEngine.Time::get_unscaledTime()
		void Register_UnityEngine_Time_get_unscaledTime();
		Register_UnityEngine_Time_get_unscaledTime();

		//System.Void UnityEngine.Time::set_fixedDeltaTime(System.Single)
		void Register_UnityEngine_Time_set_fixedDeltaTime();
		Register_UnityEngine_Time_set_fixedDeltaTime();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.TouchScreenKeyboard

		//System.Boolean UnityEngine.TouchScreenKeyboard::IsInPlaceEditingAllowed()
		void Register_UnityEngine_TouchScreenKeyboard_IsInPlaceEditingAllowed();
		Register_UnityEngine_TouchScreenKeyboard_IsInPlaceEditingAllowed();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
		void Register_UnityEngine_TouchScreenKeyboard_get_active();
		Register_UnityEngine_TouchScreenKeyboard_get_active();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canSetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();

		//System.IntPtr UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
		void Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();
		Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();

		//System.String UnityEngine.TouchScreenKeyboard::get_text()
		void Register_UnityEngine_TouchScreenKeyboard_get_text();
		Register_UnityEngine_TouchScreenKeyboard_get_text();

		//System.Void UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)
		void Register_UnityEngine_TouchScreenKeyboard_GetSelection();
		Register_UnityEngine_TouchScreenKeyboard_GetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();
		Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();

		//System.Void UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_SetSelection();
		Register_UnityEngine_TouchScreenKeyboard_SetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_active();
		Register_UnityEngine_TouchScreenKeyboard_set_active();

		//System.Void UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();
		Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();

		//System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_hideInput();
		Register_UnityEngine_TouchScreenKeyboard_set_hideInput();

		//System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
		void Register_UnityEngine_TouchScreenKeyboard_set_text();
		Register_UnityEngine_TouchScreenKeyboard_set_text();

		//UnityEngine.TouchScreenKeyboard/Status UnityEngine.TouchScreenKeyboard::get_status()
		void Register_UnityEngine_TouchScreenKeyboard_get_status();
		Register_UnityEngine_TouchScreenKeyboard_get_status();

	//End Registrations for type : UnityEngine.TouchScreenKeyboard

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
		void Register_UnityEngine_Transform_IsChildOf();
		Register_UnityEngine_Transform_IsChildOf();

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::Internal_LookAt_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_Internal_LookAt_Injected();
		Register_UnityEngine_Transform_Internal_LookAt_Injected();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::RotateAroundInternal_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_RotateAroundInternal_Injected();
		Register_UnityEngine_Transform_RotateAroundInternal_Injected();

		//System.Void UnityEngine.Transform::SetAsFirstSibling()
		void Register_UnityEngine_Transform_SetAsFirstSibling();
		Register_UnityEngine_Transform_SetAsFirstSibling();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::SetPositionAndRotation_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_SetPositionAndRotation_Injected();
		Register_UnityEngine_Transform_SetPositionAndRotation_Injected();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();
		Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();
		Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::FindRelativeTransformWithPath(UnityEngine.Transform,System.String,System.Boolean)
		void Register_UnityEngine_Transform_FindRelativeTransformWithPath();
		Register_UnityEngine_Transform_FindRelativeTransformWithPath();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlas

		//System.Boolean UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)
		void Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();
		Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlas

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.UIElements.TextNative

		//System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
		void Register_UnityEngine_UIElements_TextNative_DoComputeTextHeight_Injected();
		Register_UnityEngine_UIElements_TextNative_DoComputeTextHeight_Injected();

		//System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
		void Register_UnityEngine_UIElements_TextNative_DoComputeTextWidth_Injected();
		Register_UnityEngine_UIElements_TextNative_DoComputeTextWidth_Injected();

		//System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_UIElements_TextNative_DoGetCursorPosition_Injected();
		Register_UnityEngine_UIElements_TextNative_DoGetCursorPosition_Injected();

		//System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
		void Register_UnityEngine_UIElements_TextNative_DoGetOffset_Injected();
		Register_UnityEngine_UIElements_TextNative_DoGetOffset_Injected();

		//System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
		void Register_UnityEngine_UIElements_TextNative_GetVertices_Injected();
		Register_UnityEngine_UIElements_TextNative_GetVertices_Injected();

	//End Registrations for type : UnityEngine.UIElements.TextNative

	//Start Registrations for type : UnityEngine.UIElements.UIElementsRuntimeUtilityNative

		//System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()
		void Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback();
		Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback();

		//System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()
		void Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback();
		Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback();

		//System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::VisualElementCreation()
		void Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_VisualElementCreation();
		Register_UnityEngine_UIElements_UIElementsRuntimeUtilityNative_VisualElementCreation();

	//End Registrations for type : UnityEngine.UIElements.UIElementsRuntimeUtilityNative

	//Start Registrations for type : UnityEngine.UIElements.UIR.Utility

		//System.Boolean UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)
		void Register_UnityEngine_UIElements_UIR_Utility_CPUFencePassed();
		Register_UnityEngine_UIElements_UIR_Utility_CPUFencePassed();

		//System.Boolean UnityEngine.UIElements.UIR.Utility::HasMappedBufferRange()
		void Register_UnityEngine_UIElements_UIR_Utility_HasMappedBufferRange();
		Register_UnityEngine_UIElements_UIR_Utility_HasMappedBufferRange();

		//System.IntPtr UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_UIElements_UIR_Utility_AllocateBuffer();
		Register_UnityEngine_UIElements_UIR_Utility_AllocateBuffer();

		//System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)
		void Register_UnityEngine_UIElements_UIR_Utility_CreateStencilState_Injected();
		Register_UnityEngine_UIElements_UIR_Utility_CreateStencilState_Injected();

		//System.IntPtr UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])
		void Register_UnityEngine_UIElements_UIR_Utility_GetVertexDeclaration();
		Register_UnityEngine_UIElements_UIR_Utility_GetVertexDeclaration();

		//System.UInt32 UnityEngine.UIElements.UIR.Utility::InsertCPUFence()
		void Register_UnityEngine_UIElements_UIR_Utility_InsertCPUFence();
		Register_UnityEngine_UIElements_UIR_Utility_InsertCPUFence();

		//System.Void UnityEngine.UIElements.UIR.Utility::DisableScissor()
		void Register_UnityEngine_UIElements_UIR_Utility_DisableScissor();
		Register_UnityEngine_UIElements_UIR_Utility_DisableScissor();

		//System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_UIElements_UIR_Utility_DrawRanges();
		Register_UnityEngine_UIElements_UIR_Utility_DrawRanges();

		//System.Void UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)
		void Register_UnityEngine_UIElements_UIR_Utility_FreeBuffer();
		Register_UnityEngine_UIElements_UIR_Utility_FreeBuffer();

		//System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
		void Register_UnityEngine_UIElements_UIR_Utility_GetActiveViewport_Injected();
		Register_UnityEngine_UIElements_UIR_Utility_GetActiveViewport_Injected();

		//System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_UIElements_UIR_Utility_GetUnityProjectionMatrix_Injected();
		Register_UnityEngine_UIElements_UIR_Utility_GetUnityProjectionMatrix_Injected();

		//System.Void UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)
		void Register_UnityEngine_UIElements_UIR_Utility_NotifyOfUIREvents();
		Register_UnityEngine_UIElements_UIR_Utility_NotifyOfUIREvents();

		//System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()
		void Register_UnityEngine_UIElements_UIR_Utility_ProfileDrawChainBegin();
		Register_UnityEngine_UIElements_UIR_Utility_ProfileDrawChainBegin();

		//System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()
		void Register_UnityEngine_UIElements_UIR_Utility_ProfileDrawChainEnd();
		Register_UnityEngine_UIElements_UIR_Utility_ProfileDrawChainEnd();

		//System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
		void Register_UnityEngine_UIElements_UIR_Utility_RegisterIntermediateRenderer_Injected();
		Register_UnityEngine_UIElements_UIR_Utility_RegisterIntermediateRenderer_Injected();

		//System.Void UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_UIElements_UIR_Utility_SetPropertyBlock();
		Register_UnityEngine_UIElements_UIR_Utility_SetPropertyBlock();

		//System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
		void Register_UnityEngine_UIElements_UIR_Utility_SetScissorRect_Injected();
		Register_UnityEngine_UIElements_UIR_Utility_SetScissorRect_Injected();

		//System.Void UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)
		void Register_UnityEngine_UIElements_UIR_Utility_SetStencilState();
		Register_UnityEngine_UIElements_UIR_Utility_SetStencilState();

		//System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
		void Register_UnityEngine_UIElements_UIR_Utility_SetVectorArray();
		Register_UnityEngine_UIElements_UIR_Utility_SetVectorArray();

		//System.Void UnityEngine.UIElements.UIR.Utility::SyncRenderThread()
		void Register_UnityEngine_UIElements_UIR_Utility_SyncRenderThread();
		Register_UnityEngine_UIElements_UIR_Utility_SyncRenderThread();

		//System.Void UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_UIElements_UIR_Utility_UpdateBufferRanges();
		Register_UnityEngine_UIElements_UIR_Utility_UpdateBufferRanges();

		//System.Void UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)
		void Register_UnityEngine_UIElements_UIR_Utility_WaitForCPUFencePassed();
		Register_UnityEngine_UIElements_UIR_Utility_WaitForCPUFencePassed();

	//End Registrations for type : UnityEngine.UIElements.UIR.Utility

	//Start Registrations for type : UnityEngine.UISystemProfilerApi

		//System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
		void Register_UnityEngine_UISystemProfilerApi_AddMarker();
		Register_UnityEngine_UISystemProfilerApi_AddMarker();

		//System.Void UnityEngine.UISystemProfilerApi::BeginSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_BeginSample();
		Register_UnityEngine_UISystemProfilerApi_BeginSample();

		//System.Void UnityEngine.UISystemProfilerApi::EndSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_EndSample();
		Register_UnityEngine_UISystemProfilerApi_EndSample();

	//End Registrations for type : UnityEngine.UISystemProfilerApi

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.Yoga.Native

		//System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGConfigGetUseWebDefaults();
		Register_UnityEngine_Yoga_Native_YGConfigGetUseWebDefaults();

		//System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeGetHasNewLayout();
		Register_UnityEngine_Yoga_Native_YGNodeGetHasNewLayout();

		//System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeIsDirty();
		Register_UnityEngine_Yoga_Native_YGNodeIsDirty();

		//System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
		void Register_UnityEngine_Yoga_Native_YGConfigGetDefault();
		Register_UnityEngine_Yoga_Native_YGConfigGetDefault();

		//System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
		void Register_UnityEngine_Yoga_Native_YGConfigNew();
		Register_UnityEngine_Yoga_Native_YGConfigNew();

		//System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeNewWithConfig();
		Register_UnityEngine_Yoga_Native_YGNodeNewWithConfig();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetBorder();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetBorder();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetBottom();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetBottom();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetHeight();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetHeight();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetLeft();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetLeft();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetMargin();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetMargin();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetPadding();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetPadding();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetRight();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetRight();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetTop();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetTop();

		//System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeLayoutGetWidth();
		Register_UnityEngine_Yoga_Native_YGNodeLayoutGetWidth();

		//System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGConfigFreeInternal();
		Register_UnityEngine_Yoga_Native_YGConfigFreeInternal();

		//System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGConfigSetPointScaleFactor();
		Register_UnityEngine_Yoga_Native_YGConfigSetPointScaleFactor();

		//System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
		void Register_UnityEngine_Yoga_Native_YGConfigSetUseWebDefaults();
		Register_UnityEngine_Yoga_Native_YGConfigSetUseWebDefaults();

		//System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
		void Register_UnityEngine_Yoga_Native_YGNodeCalculateLayout();
		Register_UnityEngine_Yoga_Native_YGNodeCalculateLayout();

		//System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeCopyStyle();
		Register_UnityEngine_Yoga_Native_YGNodeCopyStyle();

		//System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeFreeInternal();
		Register_UnityEngine_Yoga_Native_YGNodeFreeInternal();

		//System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
		void Register_UnityEngine_Yoga_Native_YGNodeInsertChild();
		Register_UnityEngine_Yoga_Native_YGNodeInsertChild();

		//System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeMarkDirty();
		Register_UnityEngine_Yoga_Native_YGNodeMarkDirty();

		//System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeRemoveChild();
		Register_UnityEngine_Yoga_Native_YGNodeRemoveChild();

		//System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeRemoveMeasureFunc();
		Register_UnityEngine_Yoga_Native_YGNodeRemoveMeasureFunc();

		//System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeSetConfig();
		Register_UnityEngine_Yoga_Native_YGNodeSetConfig();

		//System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
		void Register_UnityEngine_Yoga_Native_YGNodeSetHasNewLayout();
		Register_UnityEngine_Yoga_Native_YGNodeSetHasNewLayout();

		//System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeSetMeasureFunc();
		Register_UnityEngine_Yoga_Native_YGNodeSetMeasureFunc();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignContent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignContent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignItems();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignItems();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignSelf();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetAlignSelf();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetBorder();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetBorder();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetDisplay();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetDisplay();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlex();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlex();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasis();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasis();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasisAuto();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasisAuto();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasisPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexBasisPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexDirection();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexDirection();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexGrow();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexGrow();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexShrink();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexShrink();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexWrap();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetFlexWrap();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeight();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeight();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeightAuto();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeightAuto();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeightPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetHeightPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetJustifyContent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetJustifyContent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMargin();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMargin();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMarginAuto();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMarginAuto();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMarginPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMarginPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxHeight();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxHeight();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxHeightPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxHeightPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxWidth();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxWidth();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxWidthPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMaxWidthPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinHeight();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinHeight();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinHeightPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinHeightPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinWidth();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinWidth();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinWidthPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetMinWidthPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetOverflow();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetOverflow();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetPadding();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetPadding();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetPaddingPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetPaddingPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetPosition();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetPosition();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetPositionPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetPositionPercent();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetPositionType();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetPositionType();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidth();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidth();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidthAuto();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidthAuto();

		//System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidthPercent();
		Register_UnityEngine_Yoga_Native_YGNodeStyleSetWidthPercent();

		//System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
		void Register_UnityEngine_Yoga_Native_YGSetManagedObject();
		Register_UnityEngine_Yoga_Native_YGSetManagedObject();

		//UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
		void Register_UnityEngine_Yoga_Native_YGNodeStyleGetDirection();
		Register_UnityEngine_Yoga_Native_YGNodeStyleGetDirection();

	//End Registrations for type : UnityEngine.Yoga.Native

}
