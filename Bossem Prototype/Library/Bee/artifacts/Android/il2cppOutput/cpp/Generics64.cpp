#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6;
// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Func`2<System.Guid,System.Object>
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF;
// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.AR._CppAddressAndScale>
struct IEqualityComparer_1_tF58A69557E0D2F470FB6BB7472A27C75A9E0DEE6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.WeakReference>
struct Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference>
struct Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.WeakReference>
struct Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A;
// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer
struct IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Guid,System.Object>
struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0  : public RuntimeObject
{
};

struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.IntPtr,System.Object>
struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09  : public RuntimeObject
{
};

struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Object,System.Object>
struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16  : public RuntimeObject
{
};

struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2  : public RuntimeObject
{
};

struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Int16>>
struct BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Single>>
struct BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Byte>
struct BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Double>
struct BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Guid>
struct BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32>
struct BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32Enum>
struct BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int64>
struct BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.IntPtr>
struct BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Quaternion>
struct BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Resolution>
struct BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.SByte>
struct BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Single>
struct BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt16>
struct BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt64>
struct BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector2>
struct BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector4>
struct BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A  : public RuntimeObject
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* ____createWeakReference_0;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248  : public RuntimeObject
{
	// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<IsKeyframe>k__BackingField
	bool ___U3CIsKeyframeU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_1;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_2;
};

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>
struct KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Int16>
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3  : public BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE  : public BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1  : public BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47  : public BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651  : public BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6  : public BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178  : public BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6  : public BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E  : public BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB  : public BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29  : public BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6  : public BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491  : public BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B  : public BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630  : public BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB  : public BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001  : public BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13  : public BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633  : public BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94  : public BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171  : public BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF  : public BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89  : public BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A  : public BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57  : public BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	RuntimeObject* ____value_1;
};

struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 ___Empty_2;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer
struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
};

struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer::Instance
	BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* ___Instance_1;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer
struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
};

struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer::Instance
	CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* ___Instance_1;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer
struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
};

struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer::Instance
	CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* ___Instance_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer
struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
};

struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer::Instance
	Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* ___Instance_1;
};

// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId
struct NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 
{
	// System.UInt64 Niantic.ARDK.Networking.HLAPI.Routing.NetworkId::_id
	uint64_t ____id_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B 
{
	// System.String Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_key
	String_t* ____key_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_pinvoke
{
	char* ____key_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_com
{
	Il2CppChar* ____key_0;
	Il2CppIUnknown* ____data_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>
struct KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>
struct KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Niantic.ARDK.AR.Camera.CameraIntrinsics
struct CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 
{
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<FocalLength>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CFocalLengthU3Ek__BackingField_0;
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<PrincipalPoint>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPrincipalPointU3Ek__BackingField_1;
	// UnityEngine.Vector4 Niantic.ARDK.AR.Camera.CameraIntrinsics::_vector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____vector_2;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Ray2D
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Niantic.ARDK.AR._CppAddressAndScale
struct _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 
{
	// System.IntPtr Niantic.ARDK.AR._CppAddressAndScale::_cppAddress
	intptr_t ____cppAddress_0;
	// System.Single Niantic.ARDK.AR._CppAddressAndScale::_scale
	float ____scale_1;
};

// Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 
{
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_networkId
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_pinvoke
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_com
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};

// Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage
struct SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 
{
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<PrefabId>k__BackingField
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CPrefabIdU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<NewId>k__BackingField
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CNewIdU3Ek__BackingField_1;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Location>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocationU3Ek__BackingField_2;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_3;
};

// Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform
struct PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 
{
	// Niantic.ARDK.Networking.HLAPI.Object.Unity.TransformPiece Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_dirtyPieces
	int32_t ____dirtyPieces_0;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_1;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_2;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_localScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____localScale_3;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Func`2<System.Guid,System.Object>
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF  : public MulticastDelegate_t
{
};

// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) ;

// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, uint32_t, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared)(__this, ___serializer0, ___item1, method);
}
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_IsKeyframe()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, bool, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917 (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared)(__this, ___serializer0, ___item1, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10 (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared)(__this, ___deserializer0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::add__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::remove__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Key()
inline intptr_t KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Key()
inline _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___dict0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::CheckType(Unity.VisualScripting.FullSerializer.fsData,Unity.VisualScripting.FullSerializer.fsDataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, int32_t ___type1, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::op_Addition(Unity.VisualScripting.FullSerializer.fsResult,Unity.VisualScripting.FullSerializer.fsResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___a0, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
inline bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
inline RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
inline void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, RuntimeObject*, const RuntimeMethod*))fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared)(__this, ___value0, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_mEE21BB557009A8E92D9F036D76EDDAC9B9F6860D_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___serializer0;
		RuntimeObject* L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___serializer0;
		RuntimeObject* L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___serializer0;
		RuntimeObject* L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___serializer0;
		RuntimeObject* L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___serializer0;
		RuntimeObject* L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_m50844E7F75F4AC3E16E79FE63197C822CE7AEFEB_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mE692757AF71C8B254663E7587CA65A3A96320851_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_m494DBA8F7F4C54571444DBF6BFF2F44F8DF95D04_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___serializer0;
		RuntimeObject* L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___serializer0;
		RuntimeObject* L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___serializer0;
		RuntimeObject* L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___serializer0;
		RuntimeObject* L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___serializer0;
		RuntimeObject* L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_mADF08571A3B5EFCC53155015153FD58FF96FC7C1_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mBE54A00A7470601900097A49DA1EED78C0F2FC64_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mBDF4E2E517CE45C50F220547D030CC153C50AA28_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mE70E6725DEB27C8EFE4A189387DE265211195CB6_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_2 = ___item1;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m251714F9A8BDB58C65CE81799DBC42A80A53A54C_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)((NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m00167614209D405B92BB9101B754EE98BF08C038_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m855897A9F427C6F1A1E141038D08268A639E3914_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_2 = ___item1;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _UntypedToTypedSerializerAdapter_1_DoDeserialize_m18D46F3531305069D9E2DD0FB88F97179B9AC299_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)((NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD50DD552AAB32B513FE8F678D796B5A3C3F82872_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m443D557918A99BC06E792AFCBFB7E2992A55A201_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		bool L_2 = ___item1;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0E7A938166759802F2ED6EF2EDBD62726719B490_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(bool*)((bool*)(bool*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC9EA7030283696A661A73B14CBD8615BC9DAAB45_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m04504C625111E959DF50524FB5588CAEE89B5872_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint8_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint8_t L_2 = ___item1;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m9C180618F9833EA7B06C217CED9D57DAD9FB7CB9_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC28354790B9626411923227DFF7D0BB4ADDBECDF_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m31A65ED22256F704FA71CBB09FACDEEF54C15489_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_2 = ___item1;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD4A2E29D56D74D63F0A3BAE8D32C28FF505B6B0C_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)((CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m75522AB56EC230A7C78B687A93C2F630A41E9565_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m8E8B8E4D327CACDF0DFF1D38DFBC53E07F21D484_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___item1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _UntypedToTypedSerializerAdapter_1_DoDeserialize_m1C192BB9AA2714FC79EDFDF9B0977F8FB70475A0_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E6444E4169CD41F777C6E1ABDDB2928DC295443_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB81708E2517CB07FE02B6A4740FDB3F2CD58D052_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, double ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		double L_2 = ___item1;
		double L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _UntypedToTypedSerializerAdapter_1_DoDeserialize_m375156175C007DEFE6B8110CE9198AB69DDD2FFF_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2BC515922FC6AA9C22CE1D030DE18394B3195FD2_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m9AC01E23D47461312002D98DBBE98233D7BBC01B_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Guid_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Guid_t L_2 = ___item1;
		Guid_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0974DA3DFA00BE9B72ED8EA0D6F596B708A85044_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3966D188A81A30B1783C5F6D7AB4A64C3EA50C0E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m2852FD8C607B3F7FE84BB1F655C10F487B4D59CE_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int16_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int16_t L_2 = ___item1;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF85AE30621EDDFA07019902442807728A0B892D4_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m0D228D851263BC7DAABD603CB7E84DC2A7A3A339_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m00753CF5D08414E3937AEA54D69C9B7C34963211_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7D8AF0BA657BE57804319C6C2BAC02F70C53438B_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6F3D35EB92C8BEB389020FAC912DC6D39CB92DAB_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1897B9FDF14BEB8051EE2C41C44BA98646EB97F1_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m80C2E125623148EF06711B58CCAF12E7332BE61A_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m11FB7F333E8C1E02A83F0C79D00476CCAEF5806A_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m46FBA6D2DBA942566E70E7B4CC009DC058DCB87E_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int64_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int64_t L_2 = ___item1;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m98E2C12FA9C8749EEE54066C1CF13FB7AA215135_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mACB06B7052713B8822709410E6B50C6EF6FC5E06_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mDB2D70A71A23C6921FC5E3D441E9E4BB146D410E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, intptr_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		intptr_t L_2 = ___item1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mBE2AEB6ACCF06577A4666CC43D14DD609DDE88D7_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(intptr_t*)((intptr_t*)(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m195C78A847189472293E0B4952BA406013F4CA08_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF65B944DA11370382441BA9B3A8EF638DF624AB4_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___item1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD5CB298EA7ADC41E47534A5EE6D39493DBF0A448_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6DA3862992716AB6275C436ABFE035C98FE29362_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m3C85C8144C44E0EBD706B6B3B05C0B5393ACB963_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_2 = ___item1;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m81CB23EC85B9F13F9739740432F4B4C92AFD6E8A_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)((NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m7E776D0205BE99ECAF6777330945A85581A3F7C7_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m0905EBAC67A23DC27E81345113CB87A28C226A11_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		RuntimeObject* L_2 = ___item1;
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0AA74943557C6D1C4231A41F98D2748D9CE97A7A_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE7EBE48A7FAB8D0CAF7BFC18E2DA9EA13DD0F0B3_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF1931852DB779A2C6ADCCEABA0AEB3FA72816212_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___item1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m5F670AE5F2E517EB0767DFDF5B0CE9C3E7663D3F_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m17C6211759D7F27282705229D95C8B90EE0D8B4A_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB693F089E1943AE4BC287B7C6CA1AF0A771661DB_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_2 = ___item1;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD747597CC97C2580B5B32F90E14E7B8E7223AC36_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)((Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m40EF817725B196E2165AB167B42DC7343F50DAD5_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m62CFC4489B85830BCACF434BDD633BBBE73063DB_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int8_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int8_t L_2 = ___item1;
		int8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF9FB4D915158A8A3B19FAC7F071CA5D0CBD40460_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC5DE7EBED59736CF54C7B704574BA3C0721148DA_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mAE110FAEDA33607660A096378D4D8E18AC59D489_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, float ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		float L_2 = ___item1;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _UntypedToTypedSerializerAdapter_1_DoDeserialize_mB2A1357A5CF247A23AF0E3E2302CDF61ADF5A1B8_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(float*)((float*)(float*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3BCD322B5941CDB3E6C99CBE232F921A448C4832_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7E249E2C46420E746E9E6900FF2715AF8AD796A9_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint16_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint16_t L_2 = ___item1;
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA34BED71995379DD2DC6E10E83D29B8C24F79124_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m30BC2F47ECB3CC56FF5C7899AD9A9C5D1EA84843_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD5A637D6A0553BA4E9556916E740141E091F082D_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint32_t L_2 = ___item1;
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF152290FC1BA158DA226E91E955CE7CDCCF95531_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mF90B2C736C3CB25CFCE91612E82AD65DA27DE23B_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF2ACB20D2DDBDCF951EAE8248BDDC94F091AE3E6_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint64_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint64_t L_2 = ___item1;
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mC616FFAE2EDB33D4404AAFEC30D37BDAA6335F77_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m5F5C2EC6B2AA06F0CF70DE3E996F0AADE611CA26_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m30A1578177DA43601BA9E0FFF5B3C630620CC045_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___item1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2B27FDDE70371AF05B29B2D1E15804E5927B2378_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m4132C632F98BAA53B1C40D256CE79816EF28BA36_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C0FCF548B103A0675E39964C6F6D7EF27366206_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m3AD5EE78F88A78FCD3BB8959638D7B9CE7F6AFEE_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC1F8FD5AA4079FE38EDAEBA5B84DFC7B5E7D256C_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C95E879337A8C135FEAAD3D3BE901833B022A9A_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___item1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m29079523D15C432D6F59A44DAB219F59BA827A9E_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD861C009BF0F00D9A70FC78A91E1ED7DE1C26974_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m048AE2058AEC7D4D14CEBD12E201A5006BA1E06C_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_2 = ___item1;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2BBBB6AED989E7E8F6F1C6EA9C9A9B0A529AB4AE_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)((_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m77A1EEF2766B94FB22A5BBCDFB753BD583DBBB39_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD94B8575EF35B5B49C458D6F353FD794720CA2A1_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_2 = ___item1;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B _UntypedToTypedSerializerAdapter_1_DoDeserialize_m6CAFAD99D13B89697C59478FA9745B8E000297A0_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)((_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE98349301CA77557DEE78878BE31F58F5C75452B_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7B22F66A0CCC5EA1A38D75C6D0ECFBA55A37400E_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_2 = ___item1;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7AFE5495AC99FF528626738F3DC6E5E31E87DE0D_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)((SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E91DC75047209F5576B2BF3CF835123EB302643_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1BEA5281B3E0E6519B48BF0585610AED74D9EF85_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_2 = ___item1;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mCF7E3B78125498C93096086E4A1AB8B02BE0B441_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)((PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m61A167D383B81B01D278B0A76921A5A5DED9A3D1_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m00968F5958BE0B30CF8B9A3F96DBCF115348E72C_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mD7F12D50CB567AE1DF1463D0587A98A31F7246BE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mC22F1CFF6AEA7B6772B63EE9F045892A907DE62E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m16DD08A8BC7652B518E4049409ACE23EED2AC881_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_15 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
						Guid_t L_16;
						L_16 = KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_4 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_16 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_21 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_4 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_18 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_25 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* L_29 = ___createValue1;
				Guid_t L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mCC3C04F2E9326AC2E7F1E033BFA3CCFB78B55166_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* L_0 = ((U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_1 = (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m675BEDDDA063F89DA36E0F1C73B0806580A56807_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_mC66F5B04626B1DA359517178F991EE729B64705B_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m47ABFCA22E44B20981ED43EB241F064DA1814E41_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mEBD1A7C2B576B029889C0AC92AFE568CAF40E674_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m2686F8589A793F5FF59D6EE1DE09B68DD595FB43_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_15 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
						intptr_t L_16;
						L_16 = KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_16 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_21 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_18 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_25 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* L_29 = ___createValue1;
				intptr_t L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mA8638BD86DAF869BBDD5BDDAA72E63F9367FDE2D_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* L_0 = ((U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_1 = (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m4BDAC7514FDA165F95ECC205992F0A621CAD0A0B_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m269CFBFFA403967BEABA96FF8E7FE9C19881E6E0_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m6185A17A3347B159D1EFDE95912E68EE6D0AA0BE_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m4DEE27F7677694A5799195ECE2F32339F74AA3DC_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mE9B55552496CD5CEE9397C91B2ACA2E709FE29DB_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_15 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
						RuntimeObject* L_16;
						L_16 = KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_16 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_21 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_18 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_25 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_29 = ___createValue1;
				RuntimeObject* L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mEC4A500428B40F46FC8293633B5C8D74B0A647F0_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* L_0 = ((U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_1 = (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m46492AC8EAD3CE625B1B47E4977D6D7A97A82DD5_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m01146FC022A14ACF4258D99B7141DD941C1022A9_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mB9B8FE29FA130C19B725CE28E43B5048ABE440A0_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m3FCF7DBD4AC4FD7E5EC3748CDF907102743D7428_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mFFEB7FC4B57870050CBA30420CCD4956C534C1B6_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_15 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
						_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_16;
						L_16 = KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_16 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_21 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_18 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_25 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* L_29 = ___createValue1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mDEA561E0F5F3C0E824A3FAB7BE3C44BB5585196B_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* L_0 = ((U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_1 = (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		RuntimeObject* L_16 = V_1;
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mE39C1BA9B71DB186B1405E1AEC4FD8CFA246C17F(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		RuntimeObject* L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)__this->____value_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___ModelType_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Width { get; private set; }
		uint32_t L_0 = __this->___U3CWidthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Height { get; private set; }
		uint32_t L_0 = __this->___U3CHeightU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsKeyframe { get; private set; }
		bool L_0 = __this->___U3CIsKeyframeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (intptr_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_0 = (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
