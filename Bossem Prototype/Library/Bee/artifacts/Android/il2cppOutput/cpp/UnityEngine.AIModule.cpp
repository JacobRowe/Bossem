#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.AI.NavMeshBuildSource[]
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCE23A35A2628159F4561C7D26935D3658D22EA68;
IL2CPP_EXTERN_C String_t* _stringLiteralE55B2CFE56C9C3C557D990819E77C1C6EF9B6EE5;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshBuilder_BuildNavMeshData_m1F15863333DD1674FE522112786CFE64AFA04702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC64F337A786EF1DE807D08323D848149E353A750 
{
};

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
{
};

struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
};

// UnityEngine.AI.NavMeshBuilder
struct NavMeshBuilder_tDF6DED1F6DAED95C31652823BEED6DDC74A0DCC1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.AI.NavMeshBuildDebugSettings
struct NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 
{
	// System.Byte UnityEngine.AI.NavMeshBuildDebugSettings::m_Flags
	uint8_t ___m_Flags_0;
};

// UnityEngine.AI.NavMeshDataInstance
struct NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 
{
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.AI.NavMeshBuildSettings
struct NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D 
{
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AgentTypeID
	int32_t ___m_AgentTypeID_0;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentRadius
	float ___m_AgentRadius_1;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentHeight
	float ___m_AgentHeight_2;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentSlope
	float ___m_AgentSlope_3;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentClimb
	float ___m_AgentClimb_4;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_LedgeDropHeight
	float ___m_LedgeDropHeight_5;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MaxJumpAcrossDistance
	float ___m_MaxJumpAcrossDistance_6;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MinRegionArea
	float ___m_MinRegionArea_7;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideVoxelSize
	int32_t ___m_OverrideVoxelSize_8;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_VoxelSize
	float ___m_VoxelSize_9;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideTileSize
	int32_t ___m_OverrideTileSize_10;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_TileSize
	int32_t ___m_TileSize_11;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AccuratePlacement
	int32_t ___m_AccuratePlacement_12;
	// System.UInt32 UnityEngine.AI.NavMeshBuildSettings::m_MaxJobWorkers
	uint32_t ___m_MaxJobWorkers_13;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_PreserveTilesOutsideBounds
	int32_t ___m_PreserveTilesOutsideBounds_14;
	// UnityEngine.AI.NavMeshBuildDebugSettings UnityEngine.AI.NavMeshBuildSettings::m_Debug
	NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 ___m_Debug_15;
};

// UnityEngine.AI.NavMeshBuildSource
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	// UnityEngine.Matrix4x4 UnityEngine.AI.NavMeshBuildSource::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshBuildSource::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_1;
	// UnityEngine.AI.NavMeshBuildSourceShape UnityEngine.AI.NavMeshBuildSource::m_Shape
	int32_t ___m_Shape_2;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_Area
	int32_t ___m_Area_3;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_ComponentID
	int32_t ___m_ComponentID_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AI.NavMeshBuildSettings::get_agentTypeID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshBuildSettings_get_agentTypeID_m248DC5380737E4AFF5F4004811EE164DD31CE018 (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData__ctor_mAB1CDA814B6CC620C429A82D9B600059A02E37AD (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, int32_t ___agentTypeID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_position_m7CE51D7D261E82494864193C4448E312A70C6233 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_rotation_m5BD78314BAF59C20F1FB437A38B1DB997E455C9B (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::set_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::set_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh::CreateSettings_Injected(UnityEngine.AI.NavMeshBuildSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_size_m8BF0198CBE370CE89B9B29917E105ABA54F05762 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AI.NavMeshData UnityEngine.AI.NavMeshBuilder::BuildNavMeshData(UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* NavMeshBuilder_BuildNavMeshData_m1F15863333DD1674FE522112786CFE64AFA04702 (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings0, List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___sources1, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* V_0 = NULL;
	bool V_1 = false;
	NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* V_2 = NULL;
	{
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_0 = ___sources1;
		V_1 = (bool)((((RuntimeObject*)(List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE23A35A2628159F4561C7D26935D3658D22EA68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMeshBuilder_BuildNavMeshData_m1F15863333DD1674FE522112786CFE64AFA04702_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3;
		L_3 = NavMeshBuildSettings_get_agentTypeID_m248DC5380737E4AFF5F4004811EE164DD31CE018((&___buildSettings0), NULL);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_4 = (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*)il2cpp_codegen_object_new(NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NavMeshData__ctor_mAB1CDA814B6CC620C429A82D9B600059A02E37AD(L_4, L_3, NULL);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position3;
		NullCheck(L_5);
		NavMeshData_set_position_m7CE51D7D261E82494864193C4448E312A70C6233(L_5, L_6, NULL);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_7 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___rotation4;
		NullCheck(L_7);
		NavMeshData_set_rotation_m5BD78314BAF59C20F1FB437A38B1DB997E455C9B(L_7, L_8, NULL);
		V_0 = L_7;
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_9 = V_0;
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_10 = ___buildSettings0;
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_11 = ___sources1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12 = ___localBounds2;
		bool L_13;
		L_13 = NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48(L_9, L_10, L_11, L_12, NULL);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_14 = V_0;
		V_2 = L_14;
		goto IL_0040;
	}

IL_0040:
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_15 = V_2;
		return L_15;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) 
{
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___data0;
		RuntimeObject* L_1 = ___sources2;
		bool L_2;
		L_2 = NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA(L_0, (&___buildSettings1), L_1, (&___localBounds3), NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*, RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)");
	bool icallRetVal = _il2cpp_icall_func(___data0, ___buildSettings1, ___sources2, ___localBounds3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8(__this, (&___value0), NULL);
		return;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_remainingDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathStatus()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_destination_Injected_m7195764B7610A893730EB50F1D9EB70BCDE65BD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_destination_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData__ctor_mAB1CDA814B6CC620C429A82D9B600059A02E37AD (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, int32_t ___agentTypeID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		int32_t L_0 = ___agentTypeID0;
		NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method) 
{
	typedef void (*NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, int32_t);
	static NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)");
	_il2cpp_icall_func(___mono0, ___agentTypeID1);
}
// System.Void UnityEngine.AI.NavMeshData::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_position_m7CE51D7D261E82494864193C4448E312A70C6233 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D(__this, (&___value0), NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_rotation_m5BD78314BAF59C20F1FB437A38B1DB997E455C9B (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52(__this, (&___value0), NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::set_position_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_set_position_Injected_m9A8B13ACE05D9DEBB39F188DEC4021AA26F4570D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::set_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshData::set_rotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_set_rotation_Injected_m95163BC543A5BE5DEE238E064F92955DE41BEB52_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::set_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04*>(__this + _offset);
	NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_0 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_2 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline(L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMesh::AddNavMeshData(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___navMeshData0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE55B2CFE56C9C3C557D990819E77C1C6EF9B6EE5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04));
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_4 = ___navMeshData0;
		int32_t L_5;
		L_5 = NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96(L_4, NULL);
		NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline((&V_0), L_5, NULL);
		NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 L_6 = V_0;
		V_2 = L_6;
		goto IL_0031;
	}

IL_0031:
	{
		NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 L_7 = V_2;
		return L_7;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*);
	static NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)");
	int32_t icallRetVal = _il2cpp_icall_func(___navMeshData0);
	return icallRetVal;
}
// UnityEngine.AI.NavMeshBuildSettings UnityEngine.AI.NavMesh::CreateSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D NavMesh_CreateSettings_mA476DEA2EA6D79B5C83CD906126BED1467CE8386 (const RuntimeMethod* method) 
{
	NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D((&V_0), NULL);
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMesh::RemoveAllNavMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_RemoveAllNavMeshData_m891D2892A30B5E9DDBF7B351F2E15E08DD941980 (const RuntimeMethod* method) 
{
	typedef void (*NavMesh_RemoveAllNavMeshData_m891D2892A30B5E9DDBF7B351F2E15E08DD941980_ftn) ();
	static NavMesh_RemoveAllNavMeshData_m891D2892A30B5E9DDBF7B351F2E15E08DD941980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_RemoveAllNavMeshData_m891D2892A30B5E9DDBF7B351F2E15E08DD941980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::RemoveAllNavMeshData()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.AI.NavMesh::CreateSettings_Injected(UnityEngine.AI.NavMeshBuildSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D_ftn) (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*);
	static NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_CreateSettings_Injected_m9F1F4F142C6FD30C599EA4DFB1A45396A900FC6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::CreateSettings_Injected(UnityEngine.AI.NavMeshBuildSettings&)");
	_il2cpp_icall_func(___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* currentDelegate = reinterpret_cast<OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenInst(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast;
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_Transform_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_size_m8BF0198CBE370CE89B9B29917E105ABA54F05762 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Size_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_size_m8BF0198CBE370CE89B9B29917E105ABA54F05762_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_size_m8BF0198CBE370CE89B9B29917E105ABA54F05762(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Shape_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Area_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.AI.NavMeshBuildSettings::get_agentTypeID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshBuildSettings_get_agentTypeID_m248DC5380737E4AFF5F4004811EE164DD31CE018 (NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_AgentTypeID_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NavMeshBuildSettings_get_agentTypeID_m248DC5380737E4AFF5F4004811EE164DD31CE018_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NavMeshBuildSettings_get_agentTypeID_m248DC5380737E4AFF5F4004811EE164DD31CE018(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
