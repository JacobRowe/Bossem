#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Estrada.DefaultMicrophoneController
struct DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Estrada.IMicrophoneController
struct IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Android.PermissionCallbacks
struct PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Estrada.DefaultMicrophoneController/<RequestPermission>d__3
struct U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A;
// Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester
struct AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B;
// Estrada.DefaultMicrophoneController/IMicrophonePermissionRequester
struct IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6;
// Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester
struct IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD;
// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester
struct MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA;
// Estrada.Microphone/<RequestPermission>d__5
struct U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4;
// Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3
struct U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080;
// Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0
struct U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822;
// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2
struct U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C;
// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback
struct PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral064970164FE71BCF8F16C01F4A9C42F2F68DA740;
IL2CPP_EXTERN_C String_t* _stringLiteral5E23B59FF5CF812218F82D4FB4B6923CC52F109D;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral75172980E53F9A5B447B8B2EBCA8FE75B0AE166D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2114A35536AA0C3EC83E3F69CD8F756E1AED18;
IL2CPP_EXTERN_C String_t* _stringLiteralC23EC9131A7C8C68288B94040335DDAAE003A601;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E3A2E0ACC07549FE2F5EB4775307E004B25A25;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5B54C8D659D922235F682C9DFC8B5EF04911D4;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidMicrophonePermissionRequester_U3CRequestPermissionU3Eb__3_0_mA75C15B58EFBB7FB03D585CDAF54C6903FBD909F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestPermissionU3Ed__0_System_Collections_IEnumerator_Reset_m652EE7FD19EC8F99A4C77701BC223AA3C4D9B94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestPermissionU3Ed__2_System_Collections_IEnumerator_Reset_m210D1F82DC4843F481128514CC2B976988CB3B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_m783A29392D6017BD10CF30ACE898949B83EFA225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_mB64090F25703508BAD8D3FE28024AB1814744267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestPermissionU3Ed__5_System_Collections_IEnumerator_Reset_mA27C1E71CA245AAA0469EE63DC41F6A4669653A4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7E38A2F3DA1293C73D945464FDB2FE6D8AA7C798 
{
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Estrada.DefaultMicrophoneController
struct DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC  : public RuntimeObject
{
	// Estrada.DefaultMicrophoneController/IMicrophonePermissionRequester Estrada.DefaultMicrophoneController::_microphonePermissionRequester
	RuntimeObject* ____microphonePermissionRequester_0;
	// UnityEngine.AudioClip Estrada.DefaultMicrophoneController::_currentClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____currentClip_1;
};

// Estrada.Microphone
struct Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F  : public RuntimeObject
{
};

struct Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields
{
	// Estrada.IMicrophoneController Estrada.Microphone::MicrophoneController
	RuntimeObject* ___MicrophoneController_0;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Estrada.DefaultMicrophoneController/<RequestPermission>d__3
struct U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A  : public RuntimeObject
{
	// System.Int32 Estrada.DefaultMicrophoneController/<RequestPermission>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Estrada.DefaultMicrophoneController/<RequestPermission>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Estrada.DefaultMicrophoneController Estrada.DefaultMicrophoneController/<RequestPermission>d__3::<>4__this
	DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* ___U3CU3E4__this_2;
};

// Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester
struct AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B  : public RuntimeObject
{
	// UnityEngine.Android.PermissionCallbacks Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::_permissionCallbacks
	PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* ____permissionCallbacks_0;
	// System.Boolean Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::_pending
	bool ____pending_1;
};

// Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester
struct IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD  : public RuntimeObject
{
};

// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester
struct MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA  : public RuntimeObject
{
};

struct MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields
{
	// System.Boolean Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::_status
	bool ____status_0;
	// System.Boolean Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::_callbackFired
	bool ____callbackFired_1;
};

// Estrada.Microphone/<RequestPermission>d__5
struct U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4  : public RuntimeObject
{
	// System.Int32 Estrada.Microphone/<RequestPermission>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Estrada.Microphone/<RequestPermission>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3
struct U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080  : public RuntimeObject
{
	// System.Int32 Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::<>4__this
	AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* ___U3CU3E4__this_2;
};

// Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0
struct U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822  : public RuntimeObject
{
	// System.Int32 Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::<>4__this
	IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* ___U3CU3E4__this_2;
};

// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2
struct U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C  : public RuntimeObject
{
	// System.Int32 Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::<>4__this
	MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* ___U3CU3E4__this_2;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// UnityEngine.Android.PermissionCallbacks
struct PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionGranted
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionGranted_4;
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionDenied
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionDenied_5;
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionDeniedAndDontAskAgain
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionDeniedAndDontAskAgain_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback
struct PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void Estrada.DefaultMicrophoneController/<RequestPermission>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3__ctor_mDD18B2FAFF089FDCEF6624F68980DBA4FCEC1E5C (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m7334F3651484FD1E4AC743225059181A1C7C908C (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m1F89E765811C03D64F5734169FBCAF1433441BAD (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mD4A096A929389C5C69906B4E2B27CE18091B28BA (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSMicrophonePermissionRequester__ctor_m79B1542D287843AD2D74499BEC7C3A67976C7C97 (IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* __this, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacOSMicrophonePermissionRequester__ctor_mAA53F929C627CBB0B8912C1052FA0BC4F7BED171 (MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* __this, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMicrophonePermissionRequester__ctor_m4F3AE46C22BBDE2F15C79F9D01D2B6E3C5DBF927 (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.PermissionCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks__ctor_m91B14BBBC8913C131E400BA0D13576822AAE7A75 (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Android.PermissionCallbacks::add_PermissionGranted(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks_add_PermissionGranted_m74335D4200D9B1A7C80AB9C133F95C61FCDCDF89 (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.PermissionCallbacks::add_PermissionDenied(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks_add_PermissionDenied_mE0B2826463785B050C999C70F443FCC3822563D0 (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.PermissionCallbacks::add_PermissionDeniedAndDontAskAgain(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks_add_PermissionDeniedAndDontAskAgain_mEDE8C00FEF2F649F10A47F30AC4ECB09E52DB9AA (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3__ctor_m3404C25B41849F36E0013C77F99D4D1BD1DFA33B (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String,UnityEngine.Android.PermissionCallbacks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_m1063667D9EECEE29D2D1A137B82D22621A2D0A03 (String_t* ___permission0, PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* ___callbacks1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__0__ctor_mC8048695BA53C5E4A1EAA64CBF5B098EB7E9B99C (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B (int32_t ___mode0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* Application_RequestUserAuthorization_mF727A4C8BD43DD486DF6254AA531D256383AEDD7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__2__ctor_m9934DA95CB8AD82E6579CF70946FBFB908F3F68E (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Estrada.DefaultMicrophoneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMicrophoneController__ctor_m78945B828FB98E58B653EF8593E7C30A1BAAF7A6 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) ;
// System.Void Estrada.Microphone/<RequestPermission>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__5__ctor_m6AAA02D4E90BFD52C6F38596A41CFF4EE737AD06 (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean Estrada.Microphone::RequiresPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_RequiresPermission_m678E282E52F8B805D8CB70CDB8DB6349CAC2E08D (const RuntimeMethod* method) ;
// System.Boolean Estrada.Microphone::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_HasPermission_m819100EA5B39967C2AAACDF47DBC6EF430098C64 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String[] Estrada.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_m0001F35D345C9AF300CB73F8FE36BD887D6CFD37 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared)(___source0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// Estrada.IMicrophoneController Estrada.Microphone::CreateMicrophoneController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Microphone_CreateMicrophoneController_m4CD44DB91F59E0FD35B94E89CFE97DA91FA324E8 (const RuntimeMethod* method) ;
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
// System.Boolean Estrada.DefaultMicrophoneController::RequiresPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMicrophoneController_RequiresPermission_m10DC72852438D3E1468BB0EA56B588F1388E4A28 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _microphonePermissionRequester != null;
		RuntimeObject* L_0 = __this->____microphonePermissionRequester_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Estrada.DefaultMicrophoneController::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMicrophoneController_RequestPermission_mF4DD6EE3E5582FCC91504BA3427746643ADF8B29 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* L_0 = (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A*)il2cpp_codegen_object_new(U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRequestPermissionU3Ed__3__ctor_mDD18B2FAFF089FDCEF6624F68980DBA4FCEC1E5C(L_0, 0, NULL);
		U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMicrophoneController_HasPermission_mC6883DCD19F1F7F47F07BB9792C80320DBDF3D82 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return _microphonePermissionRequester == null || _microphonePermissionRequester.HasPermission();
		RuntimeObject* L_0 = __this->____microphonePermissionRequester_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____microphonePermissionRequester_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Estrada.DefaultMicrophoneController/IMicrophonePermissionRequester::HasPermission() */, IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AudioClip Estrada.DefaultMicrophoneController::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DefaultMicrophoneController_Start_m32491ADFD5F51C8DB474B68F63B932941EE046C8 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		// _currentClip = UnityEngine.Microphone.Start(deviceName, loop, lengthSec, frequency);
		String_t* L_0 = ___deviceName0;
		bool L_1 = ___loop1;
		int32_t L_2 = ___lengthSec2;
		int32_t L_3 = ___frequency3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9(L_0, L_1, L_2, L_3, NULL);
		__this->____currentClip_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentClip_1), (void*)L_4);
		// return _currentClip;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->____currentClip_1;
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		return L_6;
	}
}
// System.Void Estrada.DefaultMicrophoneController::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMicrophoneController_End_m53CACEA89F903BFE4FEDA52A0C7CFC346E23AC1A (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	{
		// UnityEngine.Microphone.End(deviceName);
		String_t* L_0 = ___deviceName0;
		Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMicrophoneController_IsRecording_mB1B2568D2EE406F0162EEF3C526CB3B42C7BF229 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return UnityEngine.Microphone.IsRecording(deviceName);
		String_t* L_0 = ___deviceName0;
		bool L_1;
		L_1 = Microphone_IsRecording_m7334F3651484FD1E4AC743225059181A1C7C908C(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Estrada.DefaultMicrophoneController::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMicrophoneController_GetPosition_mED55CB02C67D1C4F979AA3B05726176B7527ACB8 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return UnityEngine.Microphone.GetPosition(deviceName);
		String_t* L_0 = ___deviceName0;
		int32_t L_1;
		L_1 = Microphone_GetPosition_m1F89E765811C03D64F5734169FBCAF1433441BAD(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController::GetCurrentData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMicrophoneController_GetCurrentData_mA4D04CC63A197770960DDC98F72648F44B11C40C (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return _currentClip && _currentClip.GetData(data, offsetSamples);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->____currentClip_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->____currentClip_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___data0;
		int32_t L_4 = ___offsetSamples1;
		NullCheck(L_2);
		bool L_5;
		L_5 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_2, L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Estrada.DefaultMicrophoneController::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMicrophoneController_GetDeviceCaps_m3A56C097A9301C6380530B315472A6F591A563A7 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) 
{
	{
		// UnityEngine.Microphone.GetDeviceCaps(deviceName, out minFreq, out maxFreq);
		String_t* L_0 = ___deviceName0;
		int32_t* L_1 = ___minFreq1;
		int32_t* L_2 = ___maxFreq2;
		Microphone_GetDeviceCaps_mD4A096A929389C5C69906B4E2B27CE18091B28BA(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String[] Estrada.DefaultMicrophoneController::Devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DefaultMicrophoneController_Devices_m06CA588AE531BD8661157A70002C6AC6380E0E8A (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return UnityEngine.Microphone.devices;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void Estrada.DefaultMicrophoneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMicrophoneController__ctor_m78945B828FB98E58B653EF8593E7C30A1BAAF7A6 (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// private readonly IMicrophonePermissionRequester _microphonePermissionRequester = Application.platform switch
		// {
		//     RuntimePlatform.IPhonePlayer => new IOSMicrophonePermissionRequester(),
		//     RuntimePlatform.OSXPlayer => new MacOSMicrophonePermissionRequester(),
		//     RuntimePlatform.Android => new AndroidMicrophonePermissionRequester(),
		//     _ => null
		// };
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_1 = L_0;
		if (1)
		{
			goto IL_000a;
		}
	}
	{
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0035;
	}

IL_001d:
	{
		// RuntimePlatform.IPhonePlayer => new IOSMicrophonePermissionRequester(),
		IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* L_4 = (IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD*)il2cpp_codegen_object_new(IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IOSMicrophonePermissionRequester__ctor_m79B1542D287843AD2D74499BEC7C3A67976C7C97(L_4, NULL);
		V_0 = L_4;
		goto IL_0039;
	}

IL_0025:
	{
		// RuntimePlatform.OSXPlayer => new MacOSMicrophonePermissionRequester(),
		MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* L_5 = (MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA*)il2cpp_codegen_object_new(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MacOSMicrophonePermissionRequester__ctor_mAA53F929C627CBB0B8912C1052FA0BC4F7BED171(L_5, NULL);
		V_0 = L_5;
		goto IL_0039;
	}

IL_002d:
	{
		// RuntimePlatform.Android => new AndroidMicrophonePermissionRequester(),
		AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* L_6 = (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B*)il2cpp_codegen_object_new(AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AndroidMicrophonePermissionRequester__ctor_m4F3AE46C22BBDE2F15C79F9D01D2B6E3C5DBF927(L_6, NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0035:
	{
		// _ => null
		V_0 = (RuntimeObject*)NULL;
		goto IL_0039;
	}

IL_0039:
	{
		if (1)
		{
			goto IL_003d;
		}
	}
	{
	}

IL_003d:
	{
		RuntimeObject* L_7 = V_0;
		__this->____microphonePermissionRequester_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____microphonePermissionRequester_0), (void*)L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMicrophonePermissionRequester__ctor_m4F3AE46C22BBDE2F15C79F9D01D2B6E3C5DBF927 (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly PermissionCallbacks _permissionCallbacks = new();
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_0 = (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F*)il2cpp_codegen_object_new(PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PermissionCallbacks__ctor_m91B14BBBC8913C131E400BA0D13576822AAE7A75(L_0, NULL);
		__this->____permissionCallbacks_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____permissionCallbacks_0), (void*)L_0);
		// public AndroidMicrophonePermissionRequester()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _permissionCallbacks.PermissionGranted += PermissionExecuted;
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_1 = __this->____permissionCallbacks_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, __this, (intptr_t)((void*)AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		PermissionCallbacks_add_PermissionGranted_m74335D4200D9B1A7C80AB9C133F95C61FCDCDF89(L_1, L_2, NULL);
		// _permissionCallbacks.PermissionDenied += PermissionExecuted;
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_3 = __this->____permissionCallbacks_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_4, __this, (intptr_t)((void*)AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		PermissionCallbacks_add_PermissionDenied_mE0B2826463785B050C999C70F443FCC3822563D0(L_3, L_4, NULL);
		// _permissionCallbacks.PermissionDeniedAndDontAskAgain += PermissionExecuted;
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_5 = __this->____permissionCallbacks_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_6, __this, (intptr_t)((void*)AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		PermissionCallbacks_add_PermissionDeniedAndDontAskAgain_mEDE8C00FEF2F649F10A47F30AC4ECB09E52DB9AA(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidMicrophonePermissionRequester_RequestPermission_m3894007D78748B4D9E8D95BED2505318639B6690 (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* L_0 = (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080*)il2cpp_codegen_object_new(U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRequestPermissionU3Ed__3__ctor_m3404C25B41849F36E0013C77F99D4D1BD1DFA33B(L_0, 0, NULL);
		U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidMicrophonePermissionRequester_HasPermission_mE78D15C8566C771034A9D8F9E2D3C52CFFFED352 (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Permission.HasUserAuthorizedPermission(Permission.Microphone);
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::PermissionExecuted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMicrophonePermissionRequester_PermissionExecuted_m6741EED38C8343CBA6CF8B2F987A840E3CFDB7EC (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, String_t* ____0, const RuntimeMethod* method) 
{
	{
		// _pending = false;
		__this->____pending_1 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester::<RequestPermission>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidMicrophonePermissionRequester_U3CRequestPermissionU3Eb__3_0_mA75C15B58EFBB7FB03D585CDAF54C6903FBD909F (AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitWhile(() => _pending);
		bool L_0 = __this->____pending_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3__ctor_m3404C25B41849F36E0013C77F99D4D1BD1DFA33B (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3_System_IDisposable_Dispose_mFE340AAD85E3CE02ABEFF42008CB9CDD7F038079 (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRequestPermissionU3Ed__3_MoveNext_m6256D0E8D586CE928A6ED442E9962D25BA7C4CF3 (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMicrophonePermissionRequester_U3CRequestPermissionU3Eb__3_0_mA75C15B58EFBB7FB03D585CDAF54C6903FBD909F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0067;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _pending = true;
		AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->____pending_1 = (bool)1;
		// Permission.RequestUserPermission(Permission.Microphone, _permissionCallbacks);
		AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_5 = L_4->____permissionCallbacks_0;
		Permission_RequestUserPermission_m1063667D9EECEE29D2D1A137B82D22621A2D0A03(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, L_5, NULL);
		// yield return new WaitWhile(() => _pending);
		AndroidMicrophonePermissionRequester_tF26C178E4C89CBD16D1AA6DF6F187A73C4660E0B* L_6 = __this->___U3CU3E4__this_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)AndroidMicrophonePermissionRequester_U3CRequestPermissionU3Eb__3_0_mA75C15B58EFBB7FB03D585CDAF54C6903FBD909F_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_8 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0067:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC9BEA998BFBECAD1498F20576245A945737EB15 (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_m783A29392D6017BD10CF30ACE898949B83EFA225 (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_m783A29392D6017BD10CF30ACE898949B83EFA225_RuntimeMethod_var)));
	}
}
// System.Object Estrada.DefaultMicrophoneController/AndroidMicrophonePermissionRequester/<RequestPermission>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_get_Current_mA9F6AA3BF367473F3A0E68AF764EF739F866DC12 (U3CRequestPermissionU3Ed__3_tF95842E67AD2A92B5FF5682A51EFC9BCFDF21080* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IOSMicrophonePermissionRequester_RequestPermission_m47BB0A992C1DF74CCAD961725F6B4033B91FF0EB (IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* L_0 = (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822*)il2cpp_codegen_object_new(U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRequestPermissionU3Ed__0__ctor_mC8048695BA53C5E4A1EAA64CBF5B098EB7E9B99C(L_0, 0, NULL);
		U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSMicrophonePermissionRequester_HasPermission_m620F7ED0CC734A9CCFE62AA3F8104A3A933F484F (IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Application.HasUserAuthorization(UserAuthorization.Microphone);
		bool L_0;
		L_0 = Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B(2, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSMicrophonePermissionRequester__ctor_m79B1542D287843AD2D74499BEC7C3A67976C7C97 (IOSMicrophonePermissionRequester_tD595018A2044142557CDE05C571C1598A41AF9BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__0__ctor_mC8048695BA53C5E4A1EAA64CBF5B098EB7E9B99C (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__0_System_IDisposable_Dispose_m6645E7BFAB40242006BA483B3CE37D716F10830B (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRequestPermissionU3Ed__0_MoveNext_mC3990350E45DFDB9B22A0F54873B03705F0A6073 (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return Application.RequestUserAuthorization(UserAuthorization.Microphone);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = Application_RequestUserAuthorization_mF727A4C8BD43DD486DF6254AA531D256383AEDD7(2, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m36EF792709FAAC96B5A89FCE6A6267DE0D6EFFD2 (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__0_System_Collections_IEnumerator_Reset_m652EE7FD19EC8F99A4C77701BC223AA3C4D9B94F (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestPermissionU3Ed__0_System_Collections_IEnumerator_Reset_m652EE7FD19EC8F99A4C77701BC223AA3C4D9B94F_RuntimeMethod_var)));
	}
}
// System.Object Estrada.DefaultMicrophoneController/IOSMicrophonePermissionRequester/<RequestPermission>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__0_System_Collections_IEnumerator_get_Current_m3B958779E98565CD008347C5352EBA134AF0B651 (U3CRequestPermissionU3Ed__0_t90F98B2339EDD2711D25E99780FAA3105F55B822* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MacOSMicrophonePermissionRequester_RequestPermission_mD852C5649F078EECE10041014BC6C63BCA1D5ADC (MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* L_0 = (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C*)il2cpp_codegen_object_new(U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRequestPermissionU3Ed__2__ctor_m9934DA95CB8AD82E6579CF70946FBFB908F3F68E(L_0, 0, NULL);
		U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MacOSMicrophonePermissionRequester_HasPermission_mD8713A975AA30BB62B192297D7BCD9291BBD2F5E (MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _status;
		bool L_0 = ((MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields*)il2cpp_codegen_static_fields_for(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var))->____status_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::Callback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacOSMicrophonePermissionRequester_Callback_m73B4BDDDDD0C70B4714920C0CF53D1D002F62D14 (bool ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _callbackFired = true;
		((MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields*)il2cpp_codegen_static_fields_for(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var))->____callbackFired_1 = (bool)1;
		// _status = result;
		bool L_0 = ___result0;
		((MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields*)il2cpp_codegen_static_fields_for(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var))->____status_0 = L_0;
		// }
		return;
	}
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacOSMicrophonePermissionRequester__ctor_mAA53F929C627CBB0B8912C1052FA0BC4F7BED171 (MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_Multicast(PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* currentDelegate = reinterpret_cast<PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_OpenInst(PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, method);
}
void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_OpenStatic(PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, method);
}
void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_OpenStaticInvoker(PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___result0);
}
void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_ClosedStaticInvoker(PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E (PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___result0));

}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionRequestCallback__ctor_mF54B4140E8EDCA2C2BEBB5939E00CF91C48932F1 (PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510_Multicast;
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionRequestCallback_Invoke_m479659CC39B913DAFD850CEB97069F64580C6510 (PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionRequestCallback_BeginInvoke_m2A9DBF5E2E09A252D985598DE54B421207632FC5 (PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, bool ___result0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/PermissionRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionRequestCallback_EndInvoke_mF295FCB2145A98B40DF9C31F8E66EDE31409F16D (PermissionRequestCallback_t63945E13607ECB40737601694FD89B2660C6255E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__2__ctor_m9934DA95CB8AD82E6579CF70946FBFB908F3F68E (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__2_System_IDisposable_Dispose_mAA7FCC2A0A454D5861A43D8DF3C3FC0D954FC23B (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRequestPermissionU3Ed__2_MoveNext_mAE050A74D684EF47DB43C0D9BA420B5A685110E2 (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _callbackFired = false;
		((MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields*)il2cpp_codegen_static_fields_for(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var))->____callbackFired_1 = (bool)0;
		goto IL_0041;
	}

IL_0028:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0041:
	{
		// while (!_callbackFired)
		bool L_3 = ((MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_StaticFields*)il2cpp_codegen_static_fields_for(MacOSMicrophonePermissionRequester_t36AAA1516BE75EEB8715BEC77F3B04FCCF9111AA_il2cpp_TypeInfo_var))->____callbackFired_1;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFAF2210BE660828BB41BEA6EB60C377B9BC25CB7 (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__2_System_Collections_IEnumerator_Reset_m210D1F82DC4843F481128514CC2B976988CB3B2D (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestPermissionU3Ed__2_System_Collections_IEnumerator_Reset_m210D1F82DC4843F481128514CC2B976988CB3B2D_RuntimeMethod_var)));
	}
}
// System.Object Estrada.DefaultMicrophoneController/MacOSMicrophonePermissionRequester/<RequestPermission>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__2_System_Collections_IEnumerator_get_Current_m304BA4881A2B55A63944005FE36D2278B6B7F8B7 (U3CRequestPermissionU3Ed__2_t23E7E2BC701563E9444DFDD561A1AF66860CE57C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.DefaultMicrophoneController/<RequestPermission>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3__ctor_mDD18B2FAFF089FDCEF6624F68980DBA4FCEC1E5C (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Estrada.DefaultMicrophoneController/<RequestPermission>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3_System_IDisposable_Dispose_m51A2AFF4E001AA2F3F679ED9101A4C29B075B20E (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Estrada.DefaultMicrophoneController/<RequestPermission>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRequestPermissionU3Ed__3_MoveNext_m63DB574B53991E66DE4EBD8CC3C1E16560A689A8 (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0052;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_microphonePermissionRequester != null)
		DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->____microphonePermissionRequester_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		// yield return _microphonePermissionRequester.RequestPermission();
		DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->____microphonePermissionRequester_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator Estrada.DefaultMicrophoneController/IMicrophonePermissionRequester::RequestPermission() */, IMicrophonePermissionRequester_t58E6AA06D9D801B8619E64D76D621EDDAAB977D6_il2cpp_TypeInfo_var, L_7);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0052:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005a:
	{
		// }
		return (bool)0;
	}
}
// System.Object Estrada.DefaultMicrophoneController/<RequestPermission>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB905D9372B86AD28392FBC63A7E4B6C0EFDBF746 (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Estrada.DefaultMicrophoneController/<RequestPermission>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_mB64090F25703508BAD8D3FE28024AB1814744267 (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_Reset_mB64090F25703508BAD8D3FE28024AB1814744267_RuntimeMethod_var)));
	}
}
// System.Object Estrada.DefaultMicrophoneController/<RequestPermission>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__3_System_Collections_IEnumerator_get_Current_mEB987CA58232F7BD8B5227AD69D14AB9B0EE9FB8 (U3CRequestPermissionU3Ed__3_t9842DF49B74985C531D655DDC715F3FC2C8D107A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String[] Estrada.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_m0001F35D345C9AF300CB73F8FE36BD887D6CFD37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string[] devices => MicrophoneController.Devices();
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = InterfaceFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(9 /* System.String[] Estrada.IMicrophoneController::Devices() */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Estrada.IMicrophoneController Estrada.Microphone::CreateMicrophoneController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Microphone_CreateMicrophoneController_m4CD44DB91F59E0FD35B94E89CFE97DA91FA324E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		//             return
		// #if !UNITY_WEBGL || UNITY_EDITOR
		//                 new DefaultMicrophoneController();
		DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC* L_0 = (DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC*)il2cpp_codegen_object_new(DefaultMicrophoneController_tEACB5350047C8A624351C79E51F6E8543E9E5DDC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultMicrophoneController__ctor_m78945B828FB98E58B653EF8593E7C30A1BAAF7A6(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Estrada.Microphone::RequiresPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_RequiresPermission_m678E282E52F8B805D8CB70CDB8DB6349CAC2E08D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return MicrophoneController.RequiresPermission();
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Estrada.IMicrophoneController::RequiresPermission() */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Estrada.Microphone::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Microphone_RequestPermission_m310D8FFB3FEEFEC79E9503ACB36935F8CAAB910E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* L_0 = (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4*)il2cpp_codegen_object_new(U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRequestPermissionU3Ed__5__ctor_m6AAA02D4E90BFD52C6F38596A41CFF4EE737AD06(L_0, 0, NULL);
		return L_0;
	}
}
// System.Boolean Estrada.Microphone::HasPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_HasPermission_m819100EA5B39967C2AAACDF47DBC6EF430098C64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return MicrophoneController.HasPermission();
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Estrada.IMicrophoneController::HasPermission() */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AudioClip Estrada.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (RequiresPermission() && !HasPermission())
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Microphone_RequiresPermission_m678E282E52F8B805D8CB70CDB8DB6349CAC2E08D(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Microphone_HasPermission_m819100EA5B39967C2AAACDF47DBC6EF430098C64(NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException("Permission to record a microphone was not granted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral064970164FE71BCF8F16C01F4A9C42F2F68DA740)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (devices.Length == 0)
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Microphone_get_devices_m0001F35D345C9AF300CB73F8FE36BD887D6CFD37(NULL);
		NullCheck(L_4);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_4)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// throw new InvalidOperationException("No available devices");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75172980E53F9A5B447B8B2EBCA8FE75B0AE166D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if (!string.IsNullOrEmpty(deviceName) && !devices.Contains(deviceName))
		String_t* L_7 = ___deviceName0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = Microphone_get_devices_m0001F35D345C9AF300CB73F8FE36BD887D6CFD37(NULL);
		String_t* L_10 = ___deviceName0;
		bool L_11;
		L_11 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_9, L_10, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		G_B10_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B10_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B10_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// throw new ArgumentException($"Could not find device {deviceName} in the list of the available devices");
		String_t* L_13 = ___deviceName0;
		String_t* L_14;
		L_14 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E23B59FF5CF812218F82D4FB4B6923CC52F109D)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD2114A35536AA0C3EC83E3F69CD8F756E1AED18)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_0070:
	{
		// switch (lengthSec)
		int32_t L_16 = ___lengthSec2;
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_3 = L_17;
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)3600))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00b0;
	}

IL_0084:
	{
		// throw new ArgumentException(
		//     $"Length of recording must be greater than zero seconds (was: {lengthSec} seconds)");
		int32_t L_20 = ___lengthSec2;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_21);
		String_t* L_23;
		L_23 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23EC9131A7C8C68288B94040335DDAAE003A601)), L_22, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_009a:
	{
		// throw new ArgumentException(
		//     $"Length of recording must be less than one hour (was: {lengthSec} seconds)");
		int32_t L_25 = ___lengthSec2;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_26);
		String_t* L_28;
		L_28 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8E3A2E0ACC07549FE2F5EB4775307E004B25A25)), L_27, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_00b0:
	{
		// if (frequency <= 0)
		int32_t L_30 = ___frequency3;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		// throw new ArgumentException($"Frequency of recording must be greater than zero (was: {frequency} Hz)");
		int32_t L_32 = ___frequency3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_33);
		String_t* L_35;
		L_35 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD5B54C8D659D922235F682C9DFC8B5EF04911D4)), L_34, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m585BFB49721B7654D88CA2FCCE3056EE0C70B50F_RuntimeMethod_var)));
	}

IL_00d4:
	{
		// return MicrophoneController.Start(deviceName, loop, lengthSec, frequency);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		String_t* L_38 = ___deviceName0;
		bool L_39 = ___loop1;
		int32_t L_40 = ___lengthSec2;
		int32_t L_41 = ___frequency3;
		NullCheck(L_37);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_42;
		L_42 = InterfaceFuncInvoker4< AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, bool, int32_t, int32_t >::Invoke(3 /* UnityEngine.AudioClip Estrada.IMicrophoneController::Start(System.String,System.Boolean,System.Int32,System.Int32) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_37, L_38, L_39, L_40, L_41);
		V_6 = L_42;
		goto IL_00e6;
	}

IL_00e6:
	{
		// }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_43 = V_6;
		return L_43;
	}
}
// System.Void Estrada.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB43F241697D94303953685A26512E25B21365FF9 (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MicrophoneController.End(deviceName);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		String_t* L_1 = ___deviceName0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void Estrada.IMicrophoneController::End(System.String) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean Estrada.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m1ECA6B92D0FA684272B220C0A77F8A144B9AFA19 (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return MicrophoneController.IsRecording(deviceName);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		String_t* L_1 = ___deviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Estrada.IMicrophoneController::IsRecording(System.String) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Estrada.Microphone::GetCurrentData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_GetCurrentData_m2BCA27FB19E7F809D2C16115068B77EFD7F16B0A (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return MicrophoneController.GetCurrentData(data, offsetSamples);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___data0;
		int32_t L_2 = ___offsetSamples1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t >::Invoke(7 /* System.Boolean Estrada.IMicrophoneController::GetCurrentData(System.Single[],System.Int32) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Estrada.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m44750EC04BF2A86ADEFD2AA358AFA84701E7B529 (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return MicrophoneController.GetPosition(deviceName);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		String_t* L_1 = ___deviceName0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(6 /* System.Int32 Estrada.IMicrophoneController::GetPosition(System.String) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Estrada.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mEB72CB11147AB8C34D81D0A96A3BCD34E6E7F2BE (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MicrophoneController.GetDeviceCaps(deviceName, out minFreq, out maxFreq);
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		String_t* L_1 = ___deviceName0;
		int32_t* L_2 = ___minFreq1;
		int32_t* L_3 = ___maxFreq2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int32_t*, int32_t* >::Invoke(8 /* System.Void Estrada.IMicrophoneController::GetDeviceCaps(System.String,System.Int32&,System.Int32&) */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Estrada.Microphone::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone__cctor_m4F0E8F2D89546D40DD75FA8517523B509726E640 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IMicrophoneController MicrophoneController = CreateMicrophoneController();
		RuntimeObject* L_0;
		L_0 = Microphone_CreateMicrophoneController_m4CD44DB91F59E0FD35B94E89CFE97DA91FA324E8(NULL);
		((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Estrada.Microphone/<RequestPermission>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__5__ctor_m6AAA02D4E90BFD52C6F38596A41CFF4EE737AD06 (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Estrada.Microphone/<RequestPermission>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__5_System_IDisposable_Dispose_mBA51CD285177DEBBBC276F9E40970FEF91FB71CE (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Estrada.Microphone/<RequestPermission>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRequestPermissionU3Ed__5_MoveNext_mA873E5A9D26C389CDDE91F3803C89EA0CEE56F9C (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return MicrophoneController.RequestPermission();
		il2cpp_codegen_runtime_class_init_inline(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_StaticFields*)il2cpp_codegen_static_fields_for(Microphone_t89E95E3D982CB7FC1F2FCD91DFD7519C9434218F_il2cpp_TypeInfo_var))->___MicrophoneController_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.IEnumerator Estrada.IMicrophoneController::RequestPermission() */, IMicrophoneController_t42F769663C8DB3656A5FFA1E2B78A36E81415018_il2cpp_TypeInfo_var, L_3);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Estrada.Microphone/<RequestPermission>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64AEED561A2D4D4AC2314AC9AFCA765584484651 (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Estrada.Microphone/<RequestPermission>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestPermissionU3Ed__5_System_Collections_IEnumerator_Reset_mA27C1E71CA245AAA0469EE63DC41F6A4669653A4 (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestPermissionU3Ed__5_System_Collections_IEnumerator_Reset_mA27C1E71CA245AAA0469EE63DC41F6A4669653A4_RuntimeMethod_var)));
	}
}
// System.Object Estrada.Microphone/<RequestPermission>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRequestPermissionU3Ed__5_System_Collections_IEnumerator_get_Current_m2333638D106CC1EA29F9FEC1F42177576A46EA5D (U3CRequestPermissionU3Ed__5_tEAC8AC7ABDA7DC1CE8F9CFF2D9A5B6AAA803B1D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
