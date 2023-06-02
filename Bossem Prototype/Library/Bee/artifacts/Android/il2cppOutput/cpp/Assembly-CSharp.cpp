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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs>
struct ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Utilities.IArdkEventArgs>
struct ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>
struct ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<System.Collections.IEnumerator>>
struct Dictionary_2_tA6DC8C0F03275A94487E0C8148E65A9BFE71CFCE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Action>
struct Dictionary_2_t9E7483E73237E81F9DA6D865FCC04ADE2AB22F48;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A;
// System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,System.Int32Enum>
struct Func_2_t111FBB7A33F993FF4BC4F1D4D7710EC0A7EED389;
// System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,UnityEngine.SystemLanguage>
struct Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C;
// System.Func`2<UnityEngine.SystemLanguage,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Recognissimo.Components.StreamingAssetsLanguageModel>
struct IEnumerable_1_t99924E7E6EC70728735EF5B93E0B496D9F6F41A6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SystemLanguage>
struct IEnumerable_1_tE0AD74EF2217F1E94B5C72F8E57AAE145ACB2B18;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Dropdown/OptionData>
struct IEnumerable_1_t48D22DF1140C37CEBB51C4E365703A607B2A4F07;
// System.Collections.Generic.IList`1<UnityEngine.SystemLanguage>
struct IList_1_t98385065545001E4014855CC41DEE92F7FE50063;
// System.Collections.Generic.List`1<Recognissimo.Components.Alternative>
struct List_1_t07835BACB1E80360FD9D599DA0E6E2D341CFDC57;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Recognissimo.Components.StreamingAssetsLanguageModel>
struct List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.SystemLanguage>
struct List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516;
// System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand>
struct List_1_t5DD84171740534E27980249B42B230DF269891A2;
// System.Collections.Generic.List`1<Recognissimo.Components.Word>
struct List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Collections.Generic.List`1<Recognissimo.SpeechProcessorDependency/TaskData>
struct List_1_tA2842B31D1215B1F29BEC74736A4441E61C24F98;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<Recognissimo.InitializationException>
struct UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Recognissimo.Components.PartialResult>
struct UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242;
// UnityEngine.Events.UnityAction`1<Recognissimo.Components.Result>
struct UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442;
// UnityEngine.Events.UnityAction`1<Recognissimo.RuntimeException>
struct UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7;
// UnityEngine.Events.UnityEvent`1<Recognissimo.InitializationException>
struct UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Recognissimo.Components.PartialResult>
struct UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC;
// UnityEngine.Events.UnityEvent`1<Recognissimo.Components.Result>
struct UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F;
// UnityEngine.Events.UnityEvent`1<Recognissimo.RuntimeException>
struct UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Recognissimo.Components.StreamingAssetsLanguageModel[]
struct StreamingAssetsLanguageModelU5BU5D_tB6A3E36B2BD5349161BCB759E9B5EEDAA0177345;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SystemLanguage[]
struct SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Recognissimo.Components.VoiceControlCommand[]
struct VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// Recognissimo.Core.Algorithm
struct Algorithm_t2D5AFF8D5EF1492A9B1A9C758B7CF685792CEDF3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager
struct BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Recognissimo.Core.Context
struct Context_t0E9A624FFDEC08B3EBF5ADEA5A2C75D59C047FA0;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameBoardPlace
struct GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameboardAgent
struct GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93;
// Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs
struct GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3;
// Niantic.ARDKExamples.GameboardSpaceManager
struct GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Niantic.ARDK.AR.IARSession
struct IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8;
// Niantic.ARDK.Utilities.IArdkEventArgs
struct IArdkEventArgs_t2CDFF09BBED5B8FC07ABF602B2D6D6D073A6C1CC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Extensions.Gameboard.IGameboard
struct IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC;
// Recognissimo.Utils.StreamingAssetsProvider.IStreamingAssetsProvider
struct IStreamingAssetsProvider_tF1C9594467A93213951CF657BF0A126D5D44165E;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Recognissimo.InitializationException
struct InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Recognissimo.LanguageModel
struct LanguageModel_t6ADDB3816F0F1AF4A106EB1D1A3BF60E9211E7AD;
// Recognissimo.LanguageModelProvider
struct LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Recognissimo.Components.PartialResultEvent
struct PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E;
// Niantic.ARDK.Extensions.Gameboard.Path
struct Path_t5D2A055E9B5C315B3737EE015D2A1BA3D8535B8B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// RecognitionListener
struct RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Recognissimo.Components.ResultEvent
struct ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Recognissimo.RuntimeException
struct RuntimeException_t3DD1E88B37D09F5A83C2B54B22F1EFC03F8C1B4F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneManager
struct SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Recognissimo.SpeechProcessor
struct SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E;
// Recognissimo.SpeechProcessorException
struct SpeechProcessorException_t20814CFC89BFFFC0D52520A774EC2DC8C35AF16C;
// Recognissimo.Components.SpeechRecognizer
struct SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494;
// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample
struct SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3;
// Recognissimo.SpeechSource
struct SpeechSource_tDC716CBD3D87242973A29DCB9A1A9CE56FD6116C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// Recognissimo.Components.StreamingAssetsLanguageModelProvider
struct StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Niantic.ARDK.Extensions.UnityLifecycleDriver
struct UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Recognissimo.Components.VoiceActivityDetector
struct VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5;
// Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample
struct VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469;
// Recognissimo.Components.VoiceControl
struct VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581;
// Recognissimo.Samples.VoiceControlExample.VoiceControlExample
struct VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Niantic.ARDK.Utilities._ThreadCheckedObject
struct _ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c
struct U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642;
// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText
struct RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04;
// Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF;
// Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9
struct U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E;

IL2CPP_EXTERN_C RuntimeClass* ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD65FDF9CAB4EBD0DCFF9A446239322E85ABA74B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t98385065545001E4014855CC41DEE92F7FE50063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0971D53E8CA564AF4767DB3D364DF8DC14E0B11F;
IL2CPP_EXTERN_C String_t* _stringLiteral2142B63AAE98E9BD9D8A52A0E1639A2D8059ABE2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94;
IL2CPP_EXTERN_C String_t* _stringLiteral43CF2B03BAD4C8E04EDC5E2EB91211C3DF0D32F3;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral762C524C2DE42F798734526B704F372A5D6EB23F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377;
IL2CPP_EXTERN_C String_t* _stringLiteral8F3E710DB29AA7ABA06EEAAEE767324F4C58C621;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A47AD66A9F38CFF0419199B3DB8C644703D45D;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB1029F6EBF88E08862AA490281D59EDB44D3A80E;
IL2CPP_EXTERN_C String_t* _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5088DE05997E8C0FA668CE95616EF5A498DE40;
IL2CPP_EXTERN_C String_t* _stringLiteralF0967F1A4BE87F847F318088B019B73A89B82ABF;
IL2CPP_EXTERN_C String_t* _stringLiteralF10D6704A9D6765C5984CED4211762A30D7A99EE;
IL2CPP_EXTERN_C const RuntimeMethod* BossemGameboardManager_set_TileSize_m2E6E54E84539E082F9C66E059997AF5E39D81717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m05F6EB9BA166FC1D382479D5F1833A78D7BECC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m1D23142FD5C9161BA6B5F2CAB05328C687936086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m147470C58461EBA2B81DE788E873609C0166346E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameBoardPlace_OnGameboardCreated_m1885C2B8599C678B967881524EA27E7F56BE6EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameBoardPlace_OnGameboardDestroyed_m1FB77114589125EE730C25DFB15FF41117FD1048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93_mDBE9B05251B9B86A0D67A8FF9DDE10D8747F7965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameboardSpaceManager_OnGameboardCreated_m0FB8B81B7914A7F341EBBF8CB96FC3BE07DCAA2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameboardSpaceManager_OnGameboardDestroyed_mB1C57955E321B1C081D233CCD028549E0BEF6D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_GetPreferredLanguage_mDB7DEB271A5032F780225780BD9980AD369C97D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_OnEnable_m2A27C4CDD24AA788D8EF5AFBFFD5CA3772D02ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_OnError_m4636551DAF1B08B92E1C75E6C0BBC1077856320D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_OnPartialResult_m4F5B040A26694C6AFDCFE6B6229446ED16C7FD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_OnResult_m0DF76576E5347EEED93C79D27ECA578FF71D81AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_1_m9E81717AFFD6BF6E7E193D70BC939FCB7EF7588E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_2_mAFCF3950CA442264674AF8977603CA0B457B7A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_U3COnEnableU3Eb__8_1_mEC3815F2885DB67188EBBE7AB86716411729B477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizerExample_U3COnEnableU3Eb__8_3_mE650767AC8B50AAB4EBBBD08D0031D3C988CC2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHighlightCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mBDC7DED1B9629586B725FC6FB47E9E1F2DB4E187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeLanguageDropdownU3Eb__10_0_m507609B99351DD1561876BEBB22C424CE9A0A1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__8_0_m839820389DC39C7899DD725F6B74A299D7D7E723_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__8_2_m57D8DEB800C2994F85F31550E7B84064D7C3D5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__1_m4D837EED553ADFFA2AA6168FB422EE7EB2F144A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m7092AEBC9BE76EBC5839A6CAF5111EA41A8D9186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivityDetectorExample_U3CStartU3Eb__2_0_m2296175BDC735A14E3420C27571294736E8FEA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivityDetectorExample_U3CStartU3Eb__2_1_m35EF796E4D124D3EA94AE1E5A2C4C826711CE499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivityDetectorExample_U3CStartU3Eb__2_2_m6EB4758EFE0E8936D6ACF239407CEDC52243156F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceControlExample_U3CStartU3Eb__7_0_m404A47309CB686987FDB65111D5B3AE1BB719CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Recognissimo.Components.StreamingAssetsLanguageModel>
struct List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StreamingAssetsLanguageModelU5BU5D_tB6A3E36B2BD5349161BCB759E9B5EEDAA0177345* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StreamingAssetsLanguageModelU5BU5D_tB6A3E36B2BD5349161BCB759E9B5EEDAA0177345* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SystemLanguage>
struct List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SystemLanguageU5BU5D_t9BFB37F8C2607169C61A03B0206BECCD78D8713D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand>
struct List_1_t5DD84171740534E27980249B42B230DF269891A2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5DD84171740534E27980249B42B230DF269891A2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs
struct GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3  : public RuntimeObject
{
	// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs::<Gameboard>k__BackingField
	RuntimeObject* ___U3CGameboardU3Ek__BackingField_0;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c
struct U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642  : public RuntimeObject
{
};

struct U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields
{
	// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<>9
	U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* ___U3CU3E9_0;
	// System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,UnityEngine.SystemLanguage> Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<>9__8_0
	Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* ___U3CU3E9__8_0_1;
	// UnityEngine.Events.UnityAction Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<>9__8_2
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__8_2_2;
	// System.Func`2<UnityEngine.SystemLanguage,UnityEngine.UI.Dropdown/OptionData> Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<>9__10_0
	Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* ___U3CU3E9__10_0_3;
};

// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText
struct RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04  : public RuntimeObject
{
	// System.String Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::_changingText
	String_t* ____changingText_0;
	// System.String Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::_stableText
	String_t* ____stableText_1;
};

// Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF  : public RuntimeObject
{
	// UnityEngine.UI.Text Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0::textComp
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textComp_0;
	// Recognissimo.Samples.VoiceControlExample.VoiceControlExample Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0::<>4__this
	VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* ___U3CU3E4__this_1;
};

// Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9
struct U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E  : public RuntimeObject
{
	// System.Int32 Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Graphic Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::text
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___text_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<Recognissimo.InitializationException>
struct UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Recognissimo.Components.PartialResult>
struct UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Recognissimo.Components.Result>
struct UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Recognissimo.RuntimeException>
struct UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Niantic.ARDK.Extensions.Gameboard.AgentConfiguration
struct AgentConfiguration_tA031FCB53B7BE4040C1BFC74F3FB5AB8C0F8C4C7 
{
	// System.Single Niantic.ARDK.Extensions.Gameboard.AgentConfiguration::JumpDistance
	float ___JumpDistance_0;
	// System.Int32 Niantic.ARDK.Extensions.Gameboard.AgentConfiguration::JumpPenalty
	int32_t ___JumpPenalty_1;
	// Niantic.ARDK.Extensions.Gameboard.PathFindingBehaviour Niantic.ARDK.Extensions.Gameboard.AgentConfiguration::Behaviour
	int32_t ___Behaviour_2;
};

// Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E 
{
	// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	// System.Boolean Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<_IsLocal>k__BackingField
	bool ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_pinvoke
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_com
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Recognissimo.Components.PartialResult
struct PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B 
{
	// System.Collections.Generic.List`1<Recognissimo.Components.Word> Recognissimo.Components.PartialResult::result
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	// System.String Recognissimo.Components.PartialResult::partial
	String_t* ___partial_1;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.PartialResult
struct PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B_marshaled_pinvoke
{
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	char* ___partial_1;
};
// Native definition for COM marshalling of Recognissimo.Components.PartialResult
struct PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B_marshaled_com
{
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	Il2CppChar* ___partial_1;
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

// Recognissimo.Components.Result
struct Result_t38EF4946810811DF344B77462AF54D398253E75A 
{
	// System.Collections.Generic.List`1<Recognissimo.Components.Word> Recognissimo.Components.Result::result
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	// System.String Recognissimo.Components.Result::text
	String_t* ___text_1;
	// System.Collections.Generic.List`1<Recognissimo.Components.Alternative> Recognissimo.Components.Result::alternatives
	List_1_t07835BACB1E80360FD9D599DA0E6E2D341CFDC57* ___alternatives_2;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.Result
struct Result_t38EF4946810811DF344B77462AF54D398253E75A_marshaled_pinvoke
{
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	char* ___text_1;
	List_1_t07835BACB1E80360FD9D599DA0E6E2D341CFDC57* ___alternatives_2;
};
// Native definition for COM marshalling of Recognissimo.Components.Result
struct Result_t38EF4946810811DF344B77462AF54D398253E75A_marshaled_com
{
	List_1_tF190647716A77E2FF6D3F1C415AFBD959DE67067* ___result_0;
	Il2CppChar* ___text_1;
	List_1_t07835BACB1E80360FD9D599DA0E6E2D341CFDC57* ___alternatives_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Recognissimo.Components.StreamingAssetsLanguageModel
struct StreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D 
{
	// UnityEngine.SystemLanguage Recognissimo.Components.StreamingAssetsLanguageModel::language
	int32_t ___language_0;
	// System.String Recognissimo.Components.StreamingAssetsLanguageModel::path
	String_t* ___path_1;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.StreamingAssetsLanguageModel
struct StreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_marshaled_pinvoke
{
	int32_t ___language_0;
	char* ___path_1;
};
// Native definition for COM marshalling of Recognissimo.Components.StreamingAssetsLanguageModel
struct StreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_marshaled_com
{
	int32_t ___language_0;
	Il2CppChar* ___path_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Recognissimo.Components.VoiceControlCommand
struct VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F 
{
	// System.String Recognissimo.Components.VoiceControlCommand::phrase
	String_t* ___phrase_0;
	// UnityEngine.Events.UnityEvent Recognissimo.Components.VoiceControlCommand::onSpoken
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSpoken_1;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.VoiceControlCommand
struct VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F_marshaled_pinvoke
{
	char* ___phrase_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSpoken_1;
};
// Native definition for COM marshalling of Recognissimo.Components.VoiceControlCommand
struct VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F_marshaled_com
{
	Il2CppChar* ___phrase_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSpoken_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// Recognissimo.SpeechProcessor/LifecycleEvents
struct LifecycleEvents_t38792924F140A2035FDB0F5502F523203277243D 
{
	// UnityEngine.Events.UnityEvent Recognissimo.SpeechProcessor/LifecycleEvents::started
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___started_0;
	// UnityEngine.Events.UnityEvent Recognissimo.SpeechProcessor/LifecycleEvents::finished
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___finished_1;
	// UnityEngine.Events.UnityEvent`1<Recognissimo.InitializationException> Recognissimo.SpeechProcessor/LifecycleEvents::initializationFailed
	UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* ___initializationFailed_2;
	// UnityEngine.Events.UnityEvent`1<Recognissimo.RuntimeException> Recognissimo.SpeechProcessor/LifecycleEvents::runtimeFailed
	UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* ___runtimeFailed_3;
};
// Native definition for P/Invoke marshalling of Recognissimo.SpeechProcessor/LifecycleEvents
struct LifecycleEvents_t38792924F140A2035FDB0F5502F523203277243D_marshaled_pinvoke
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___started_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___finished_1;
	UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* ___initializationFailed_2;
	UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* ___runtimeFailed_3;
};
// Native definition for COM marshalling of Recognissimo.SpeechProcessor/LifecycleEvents
struct LifecycleEvents_t38792924F140A2035FDB0F5502F523203277243D_marshaled_com
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___started_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___finished_1;
	UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* ___initializationFailed_2;
	UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* ___runtimeFailed_3;
};

// Recognissimo.SpeechProcessor/Settings
struct Settings_t39A6CDB7668341E42D9C5AA6C7DD7F518D86B37D 
{
	// Recognissimo.LanguageModelProvider Recognissimo.SpeechProcessor/Settings::modelProvider
	LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F* ___modelProvider_0;
	// Recognissimo.SpeechSource Recognissimo.SpeechProcessor/Settings::speechSource
	SpeechSource_tDC716CBD3D87242973A29DCB9A1A9CE56FD6116C* ___speechSource_1;
	// System.Boolean Recognissimo.SpeechProcessor/Settings::autoStart
	bool ___autoStart_2;
};
// Native definition for P/Invoke marshalling of Recognissimo.SpeechProcessor/Settings
struct Settings_t39A6CDB7668341E42D9C5AA6C7DD7F518D86B37D_marshaled_pinvoke
{
	LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F* ___modelProvider_0;
	SpeechSource_tDC716CBD3D87242973A29DCB9A1A9CE56FD6116C* ___speechSource_1;
	int32_t ___autoStart_2;
};
// Native definition for COM marshalling of Recognissimo.SpeechProcessor/Settings
struct Settings_t39A6CDB7668341E42D9C5AA6C7DD7F518D86B37D_marshaled_com
{
	LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F* ___modelProvider_0;
	SpeechSource_tDC716CBD3D87242973A29DCB9A1A9CE56FD6116C* ___speechSource_1;
	int32_t ___autoStart_2;
};

// Recognissimo.SpeechProcessorDependency/InitializationState
struct InitializationState_t463C006C186B4352E18AB125AE6CBF39DA0A7D12 
{
	// System.Boolean Recognissimo.SpeechProcessorDependency/InitializationState::IsActive
	bool ___IsActive_0;
	// System.Exception Recognissimo.SpeechProcessorDependency/InitializationState::Exception
	Exception_t* ___Exception_1;
};
// Native definition for P/Invoke marshalling of Recognissimo.SpeechProcessorDependency/InitializationState
struct InitializationState_t463C006C186B4352E18AB125AE6CBF39DA0A7D12_marshaled_pinvoke
{
	int32_t ___IsActive_0;
	Exception_t_marshaled_pinvoke* ___Exception_1;
};
// Native definition for COM marshalling of Recognissimo.SpeechProcessorDependency/InitializationState
struct InitializationState_t463C006C186B4352E18AB125AE6CBF39DA0A7D12_marshaled_com
{
	int32_t ___IsActive_0;
	Exception_t_marshaled_com* ___Exception_1;
};

// Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings
struct SpeechRecognizerSettings_t30B1238A482F6111853E54AE63CF2A247C1F7B31 
{
	// System.Collections.Generic.List`1<System.String> Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings::vocabulary
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___vocabulary_0;
	// System.Boolean Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings::enableDetails
	bool ___enableDetails_1;
	// System.Int32 Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings::alternatives
	int32_t ___alternatives_2;
	// Recognissimo.Components.PartialResultEvent Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings::partialResultReady
	PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E* ___partialResultReady_3;
	// Recognissimo.Components.ResultEvent Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings::resultReady
	ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183* ___resultReady_4;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings
struct SpeechRecognizerSettings_t30B1238A482F6111853E54AE63CF2A247C1F7B31_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___vocabulary_0;
	int32_t ___enableDetails_1;
	int32_t ___alternatives_2;
	PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E* ___partialResultReady_3;
	ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183* ___resultReady_4;
};
// Native definition for COM marshalling of Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings
struct SpeechRecognizerSettings_t30B1238A482F6111853E54AE63CF2A247C1F7B31_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___vocabulary_0;
	int32_t ___enableDetails_1;
	int32_t ___alternatives_2;
	PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E* ___partialResultReady_3;
	ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183* ___resultReady_4;
};

// Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings
struct VoiceActivityDetectorSettings_tD210418393610A3E31047853738C1016251B3653 
{
	// System.Int32 Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings::timeoutMs
	int32_t ___timeoutMs_0;
	// UnityEngine.Events.UnityEvent Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings::spoke
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___spoke_1;
	// UnityEngine.Events.UnityEvent Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings::silenced
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___silenced_2;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings
struct VoiceActivityDetectorSettings_tD210418393610A3E31047853738C1016251B3653_marshaled_pinvoke
{
	int32_t ___timeoutMs_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___spoke_1;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___silenced_2;
};
// Native definition for COM marshalling of Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings
struct VoiceActivityDetectorSettings_tD210418393610A3E31047853738C1016251B3653_marshaled_com
{
	int32_t ___timeoutMs_0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___spoke_1;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___silenced_2;
};

// Recognissimo.Components.VoiceControl/VoiceControlSettings
struct VoiceControlSettings_tE6C51CC4195DD7E2F7A004AE5B5882AEAA7D89A0 
{
	// System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand> Recognissimo.Components.VoiceControl/VoiceControlSettings::commands
	List_1_t5DD84171740534E27980249B42B230DF269891A2* ___commands_0;
	// System.Boolean Recognissimo.Components.VoiceControl/VoiceControlSettings::asapMode
	bool ___asapMode_1;
};
// Native definition for P/Invoke marshalling of Recognissimo.Components.VoiceControl/VoiceControlSettings
struct VoiceControlSettings_tE6C51CC4195DD7E2F7A004AE5B5882AEAA7D89A0_marshaled_pinvoke
{
	List_1_t5DD84171740534E27980249B42B230DF269891A2* ___commands_0;
	int32_t ___asapMode_1;
};
// Native definition for COM marshalling of Recognissimo.Components.VoiceControl/VoiceControlSettings
struct VoiceControlSettings_tE6C51CC4195DD7E2F7A004AE5B5882AEAA7D89A0_marshaled_com
{
	List_1_t5DD84171740534E27980249B42B230DF269891A2* ___commands_0;
	int32_t ___asapMode_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Niantic.ARDK.Extensions.Gameboard.ModelSettings
struct ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164 
{
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::TileSize
	float ___TileSize_0;
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::SpatialChunkSize
	float ___SpatialChunkSize_1;
	// System.Int32 Niantic.ARDK.Extensions.Gameboard.ModelSettings::KernelSize
	int32_t ___KernelSize_2;
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::KernelStdDevTol
	float ___KernelStdDevTol_3;
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::MaxSlope
	float ___MaxSlope_4;
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::MinElevation
	float ___MinElevation_5;
	// System.Single Niantic.ARDK.Extensions.Gameboard.ModelSettings::StepHeight
	float ___StepHeight_6;
	// UnityEngine.LayerMask Niantic.ARDK.Extensions.Gameboard.ModelSettings::LayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___LayerMask_7;
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

// Recognissimo.Components.PartialResultEvent
struct PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E  : public UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC
{
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Recognissimo.Components.ResultEvent
struct ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183  : public UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Recognissimo.SpeechProcessorException
struct SpeechProcessorException_t20814CFC89BFFFC0D52520A774EC2DC8C35AF16C  : public Exception_t
{
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

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs>
struct ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Utilities.IArdkEventArgs>
struct ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7  : public MulticastDelegate_t
{
};

// System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,UnityEngine.SystemLanguage>
struct Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SystemLanguage,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Recognissimo.InitializationException>
struct UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Recognissimo.Components.PartialResult>
struct UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Recognissimo.Components.Result>
struct UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Recognissimo.RuntimeException>
struct UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7  : public MulticastDelegate_t
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

// Recognissimo.InitializationException
struct InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645  : public SpeechProcessorException_t20814CFC89BFFFC0D52520A774EC2DC8C35AF16C
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

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GameBoardPlace
struct GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GameBoardPlace::_arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____arCamera_4;
	// UnityEngine.UI.Button GameBoardPlace::_placeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____placeButton_5;
	// Niantic.ARDK.Extensions.Gameboard.IGameboard GameBoardPlace::_gameboard
	RuntimeObject* ____gameboard_6;
	// System.Boolean GameBoardPlace::_arIsRunning
	bool ____arIsRunning_7;
	// System.Boolean GameBoardPlace::_gameboardIsRunning
	bool ____gameboardIsRunning_8;
};

// GameboardAgent
struct GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameboardAgent::walkingSpeed
	float ___walkingSpeed_4;
	// System.Single GameboardAgent::jumpDistance
	float ___jumpDistance_5;
	// System.Int32 GameboardAgent::jumpPenalty
	int32_t ___jumpPenalty_6;
	// Niantic.ARDK.Extensions.Gameboard.PathFindingBehaviour GameboardAgent::pathFindingBehaviour
	int32_t ___pathFindingBehaviour_7;
	// GameboardAgent/AgentNavigationState GameboardAgent::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_8;
	// Niantic.ARDK.Extensions.Gameboard.Path GameboardAgent::_path
	Path_t5D2A055E9B5C315B3737EE015D2A1BA3D8535B8B* ____path_9;
	// System.Int32 GameboardAgent::_currentWaypoint
	int32_t ____currentWaypoint_10;
	// UnityEngine.Vector3 GameboardAgent::_destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____destination_11;
	// UnityEngine.Coroutine GameboardAgent::_actorMoveCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____actorMoveCoroutine_12;
	// UnityEngine.Coroutine GameboardAgent::_actorJumpCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____actorJumpCoroutine_13;
	// Niantic.ARDK.Extensions.Gameboard.AgentConfiguration GameboardAgent::_agentConfig
	AgentConfiguration_tA031FCB53B7BE4040C1BFC74F3FB5AB8C0F8C4C7 ____agentConfig_14;
	// Niantic.ARDK.Extensions.Gameboard.IGameboard GameboardAgent::_gameboard
	RuntimeObject* ____gameboard_15;
};

// Niantic.ARDKExamples.GameboardSpaceManager
struct GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Niantic.ARDKExamples.GameboardSpaceManager::_arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____arCamera_4;
	// UnityEngine.GameObject Niantic.ARDKExamples.GameboardSpaceManager::_agentPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____agentPrefab_5;
	// UnityEngine.GameObject Niantic.ARDKExamples.GameboardSpaceManager::_destinationMarker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____destinationMarker_6;
	// UnityEngine.UI.Button Niantic.ARDKExamples.GameboardSpaceManager::_replaceButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____replaceButton_7;
	// UnityEngine.UI.Text Niantic.ARDKExamples.GameboardSpaceManager::_replaceButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____replaceButtonText_8;
	// UnityEngine.UI.Button Niantic.ARDKExamples.GameboardSpaceManager::_callButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____callButton_9;
	// UnityEngine.UI.Button Niantic.ARDKExamples.GameboardSpaceManager::_pruneButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____pruneButton_10;
	// System.Single Niantic.ARDKExamples.GameboardSpaceManager::_pruneAmount
	float ____pruneAmount_11;
	// System.Single Niantic.ARDKExamples.GameboardSpaceManager::_playspaceArea
	float ____playspaceArea_12;
	// Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager Niantic.ARDKExamples.GameboardSpaceManager::_gameBoardManager
	BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* ____gameBoardManager_13;
	// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDKExamples.GameboardSpaceManager::_gameboard
	RuntimeObject* ____gameboard_14;
	// UnityEngine.GameObject Niantic.ARDKExamples.GameboardSpaceManager::_agentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____agentGameObject_15;
	// GameboardAgent Niantic.ARDKExamples.GameboardSpaceManager::_agent
	GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* ____agent_16;
	// System.Boolean Niantic.ARDKExamples.GameboardSpaceManager::_isReplacing
	bool ____isReplacing_17;
	// System.Boolean Niantic.ARDKExamples.GameboardSpaceManager::_arIsRunning
	bool ____arIsRunning_18;
	// System.Boolean Niantic.ARDKExamples.GameboardSpaceManager::_gameboardIsRunning
	bool ____gameboardIsRunning_19;
};

// RecognitionListener
struct RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SceneManager
struct SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneManager::_ballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____ballPrefab_4;
	// UnityEngine.Camera SceneManager::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
	// Niantic.ARDK.AR.IARSession SceneManager::_ARsession
	RuntimeObject* ____ARsession_6;
};

// Recognissimo.SpeechProcessor
struct SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Recognissimo.SpeechProcessor/Settings Recognissimo.SpeechProcessor::generalSettings
	Settings_t39A6CDB7668341E42D9C5AA6C7DD7F518D86B37D ___generalSettings_4;
	// Recognissimo.SpeechProcessor/LifecycleEvents Recognissimo.SpeechProcessor::lifecycleEvents
	LifecycleEvents_t38792924F140A2035FDB0F5502F523203277243D ___lifecycleEvents_5;
	// Recognissimo.Core.Algorithm Recognissimo.SpeechProcessor::_algorithm
	Algorithm_t2D5AFF8D5EF1492A9B1A9C758B7CF685792CEDF3* ____algorithm_6;
	// Recognissimo.Core.Context Recognissimo.SpeechProcessor::_context
	Context_t0E9A624FFDEC08B3EBF5ADEA5A2C75D59C047FA0* ____context_7;
	// UnityEngine.Coroutine Recognissimo.SpeechProcessor::_initializationCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____initializationCoroutine_8;
	// Recognissimo.SpeechProcessorState Recognissimo.SpeechProcessor::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_9;
};

// Recognissimo.SpeechProcessorDependency
struct SpeechProcessorDependency_t726BCA847289384E4E68E342D833B1BB20D27A7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Action> Recognissimo.SpeechProcessorDependency::_actions
	Dictionary_2_t9E7483E73237E81F9DA6D865FCC04ADE2AB22F48* ____actions_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<System.Collections.IEnumerator>> Recognissimo.SpeechProcessorDependency::_coroutines
	Dictionary_2_tA6DC8C0F03275A94487E0C8148E65A9BFE71CFCE* ____coroutines_5;
	// System.Collections.Generic.List`1<Recognissimo.SpeechProcessorDependency/TaskData> Recognissimo.SpeechProcessorDependency::_tasks
	List_1_tA2842B31D1215B1F29BEC74736A4441E61C24F98* ____tasks_6;
	// Recognissimo.SpeechProcessorDependency/InitializationState Recognissimo.SpeechProcessorDependency::_initializationState
	InitializationState_t463C006C186B4352E18AB125AE6CBF39DA0A7D12 ____initializationState_7;
	// System.Boolean Recognissimo.SpeechProcessorDependency::_isFirstRun
	bool ____isFirstRun_8;
	// System.Int32 Recognissimo.SpeechProcessorDependency::_taskRegistrationIndex
	int32_t ____taskRegistrationIndex_9;
};

// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample
struct SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Recognissimo.Components.SpeechRecognizer Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::recognizer
	SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* ___recognizer_5;
	// Recognissimo.Components.StreamingAssetsLanguageModelProvider Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::languageModelProvider
	StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* ___languageModelProvider_6;
	// UnityEngine.UI.Dropdown Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::languageDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___languageDropdown_7;
	// UnityEngine.UI.Button Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::startButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___startButton_8;
	// UnityEngine.UI.InputField Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::status
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___status_9;
	// Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::_recognizedText
	RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* ____recognizedText_10;
	// System.Collections.Generic.List`1<UnityEngine.SystemLanguage> Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::_availableLanguages
	List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* ____availableLanguages_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Niantic.ARDK.Extensions.UnityLifecycleDriverBase
struct UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample
struct VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Recognissimo.Components.VoiceActivityDetector Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::activityDetector
	VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* ___activityDetector_4;
	// UnityEngine.UI.Text Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___status_5;
};

// Recognissimo.Samples.VoiceControlExample.VoiceControlExample
struct VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Recognissimo.Components.VoiceControl Recognissimo.Samples.VoiceControlExample.VoiceControlExample::voiceControl
	VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* ___voiceControl_4;
	// UnityEngine.UI.Text Recognissimo.Samples.VoiceControlExample.VoiceControlExample::status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___status_5;
	// System.Collections.Generic.List`1<System.String> Recognissimo.Samples.VoiceControlExample.VoiceControlExample::phrases
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___phrases_6;
	// UnityEngine.Transform Recognissimo.Samples.VoiceControlExample.VoiceControlExample::textParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___textParent_7;
	// UnityEngine.GameObject Recognissimo.Samples.VoiceControlExample.VoiceControlExample::textPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___textPrefab_8;
};

struct VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields
{
	// UnityEngine.Color Recognissimo.Samples.VoiceControlExample.VoiceControlExample::Active
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Active_9;
	// UnityEngine.Color Recognissimo.Samples.VoiceControlExample.VoiceControlExample::Inactive
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Inactive_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Recognissimo.LanguageModelProvider
struct LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F  : public SpeechProcessorDependency_t726BCA847289384E4E68E342D833B1BB20D27A7F
{
	// Recognissimo.LanguageModel Recognissimo.LanguageModelProvider::_model
	LanguageModel_t6ADDB3816F0F1AF4A106EB1D1A3BF60E9211E7AD* ____model_10;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Recognissimo.Components.SpeechRecognizer
struct SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494  : public SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E
{
	// Recognissimo.Components.SpeechRecognizer/SpeechRecognizerSettings Recognissimo.Components.SpeechRecognizer::settings
	SpeechRecognizerSettings_t30B1238A482F6111853E54AE63CF2A247C1F7B31 ___settings_10;
};

// Niantic.ARDK.Extensions.UnityLifecycleDriver
struct UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708  : public UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4
{
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_manageUsingUnityLifecycle
	bool ____manageUsingUnityLifecycle_4;
	// Niantic.ARDK.Utilities._ThreadCheckedObject Niantic.ARDK.Extensions.UnityLifecycleDriver::_threadChecker
	_ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6* ____threadChecker_5;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_initialized
	bool ____initialized_6;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_deinitialized
	bool ____deinitialized_7;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_areFeaturesEnabled
	bool ____areFeaturesEnabled_8;
};

// Recognissimo.Components.VoiceActivityDetector
struct VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5  : public SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E
{
	// Recognissimo.Components.VoiceActivityDetector/VoiceActivityDetectorSettings Recognissimo.Components.VoiceActivityDetector::settings
	VoiceActivityDetectorSettings_tD210418393610A3E31047853738C1016251B3653 ___settings_10;
};

// Recognissimo.Components.VoiceControl
struct VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581  : public SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E
{
	// Recognissimo.Components.VoiceControl/VoiceControlSettings Recognissimo.Components.VoiceControl::settings
	VoiceControlSettings_tE6C51CC4195DD7E2F7A004AE5B5882AEAA7D89A0 ___settings_10;
};

// Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager
struct BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD  : public UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708
{
	// UnityEngine.Camera Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_9;
	// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::<Gameboard>k__BackingField
	RuntimeObject* ___U3CGameboardU3Ek__BackingField_10;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_tileSize
	float ____tileSize_11;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_flatFloorTolerance
	float ____flatFloorTolerance_12;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_maxSlope
	float ____maxSlope_13;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_stepHeight
	float ____stepHeight_14;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_scanInterval
	float ____scanInterval_15;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_scanRange
	float ____scanRange_16;
	// UnityEngine.LayerMask Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____layerMask_17;
	// System.Boolean Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_visualise
	bool ____visualise_18;
	// System.Boolean Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::recreateGameboard
	bool ___recreateGameboard_19;
	// System.Boolean Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::playspaceFound
	bool ___playspaceFound_20;
	// UnityEngine.Camera Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevArCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____prevArCamera_21;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevTileSize
	float ____prevTileSize_22;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevFlatFloorTolerance
	float ____prevFlatFloorTolerance_23;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevMaxSlope
	float ____prevMaxSlope_24;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevStepHeight
	float ____prevStepHeight_25;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevScanInterval
	float ____prevScanInterval_26;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevScanRange
	float ____prevScanRange_27;
	// UnityEngine.LayerMask Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____prevLayerMask_28;
	// System.Boolean Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_prevVisualise
	bool ____prevVisualise_29;
	// Niantic.ARDK.Extensions.Gameboard.ModelSettings Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_modelSettings
	ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164 ____modelSettings_30;
	// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::_lastScan
	float ____lastScan_31;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Recognissimo.Components.StreamingAssetsLanguageModelProvider
struct StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88  : public LanguageModelProvider_t65BF53D92F719D72AB6919A85FD8864F09BB8C1F
{
	// UnityEngine.SystemLanguage Recognissimo.Components.StreamingAssetsLanguageModelProvider::language
	int32_t ___language_11;
	// System.Collections.Generic.List`1<Recognissimo.Components.StreamingAssetsLanguageModel> Recognissimo.Components.StreamingAssetsLanguageModelProvider::languageModels
	List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* ___languageModels_12;
	// Recognissimo.Utils.StreamingAssetsProvider.IStreamingAssetsProvider Recognissimo.Components.StreamingAssetsLanguageModelProvider::_streamingAssetsProvider
	RuntimeObject* ____streamingAssetsProvider_13;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Recognissimo.Components.VoiceControlCommand[]
struct VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7  : public RuntimeArray
{
	ALIGN_FIELD (8) VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F m_Items[1];

	inline VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___phrase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___onSpoken_1), (void*)NULL);
		#endif
	}
	inline VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___phrase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___onSpoken_1), (void*)NULL);
		#endif
	}
};


// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared (ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_gshared_inline (List_1_t5DD84171740534E27980249B42B230DF269891A2* __this, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Recognissimo.Components.StreamingAssetsLanguageModel>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_gshared_inline (List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m153010616BF53909D8D0718C82AC26466521B751_gshared (Func_2_t111FBB7A33F993FF4BC4F1D4D7710EC0A7EED389* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Recognissimo.Components.StreamingAssetsLanguageModel,System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5F8E3D89FED8D63DF3F40D58A17A5BE1F89AB5DE_gshared (RuntimeObject* ___source0, Func_2_t111FBB7A33F993FF4BC4F1D4D7710EC0A7EED389* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* Enumerable_ToList_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m0AB6973B46B2BD1DB26873946BBA3EEB82A484DF_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.Components.PartialResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7965BEDC42A050ABBDDA933D85EDC925B33192C8_gshared (UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.Components.PartialResult>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A_gshared (UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC* __this, UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.Components.Result>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mEB8F91A4D4E7E3E2287F99CC9E16936CBE744281_gshared (UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.Components.Result>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436_gshared (UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F* __this, UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442* ___call0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m889D430A5EE74DDF6971773B4D8C48ACF923ECCF_gshared (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Int32Enum,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mB68A29291EEC0750C0CF0A2F8C07FA4C51494367_gshared (RuntimeObject* ___source0, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3A05D09FC397C1304B2444ADA722E5E90355B51B (ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Extensions.Gameboard.GameboardFactory::add_GameboardInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardFactory_add_GameboardInitialized_m44E0464435B5E6721D4125A4CB4D57E4CDAC25DE (ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1* ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs::get_Gameboard()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameboardCreatedArgs_get_Gameboard_mC056BCB5B2853BDEDAFC47B5E318174C1CE8A298_inline (GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Utilities.IArdkEventArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mB2B6DD74AACDC9A571405BF44217E343FCFCAA33 (ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.AR.ARSessionFactory::add_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_add_SessionInitialized_mAB53E2F3474C8350FB870EEA9EAA30D31F2BBB7B (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// System.Int32 Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_m6B44EA87943AA6B7AA916B13DD9EFB5209A6377F (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void SceneManager::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_TouchBegan_m7A05CCD471D7BE449F3267D1445135F92974DA03 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.ARSessionFactory::remove_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_remove_SessionInitialized_mE5660496ADE5A392E192424F7B4583A19419F723 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::get_Session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::HandlePlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_HandlePlacement_m2D37146921AF852FF1EF8B650DD1E7DC43CCFB70 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::HandleTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_HandleTouch_mE9020A579C9210F72C0E4F73C421DD4094B46BB2 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_TouchBegan_mEA46EC46EC047B0742CC6DAAE834FC2158167030 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void GameboardAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardAgent_SetDestination_m9AE3D5D6FD7EFB5E4A15C8B9A27138BFB1D5EE0A (GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameboardAgent>()
inline GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* GameObject_GetComponent_TisGameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93_mDBE9B05251B9B86A0D67A8FF9DDE10D8747F7965 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameboardAgent::set_State(GameboardAgent/AgentNavigationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameboardAgent_set_State_m68D62E3A5673C788540515612D68206426498E8B_inline (GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.UnityLifecycleDriver::InitializeImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleDriver_InitializeImpl_m86267991AF998B24643BB90173DD4BCE377C35BE (UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::CreateNewGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_CreateNewGameboard_mD47C7731C54A24517D1B875BA17CAEEBBAEA71F0 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.UnityLifecycleDriver::DeinitializeImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleDriver_DeinitializeImpl_m10856BE7D4C3CD1530DB6C3AE29EE5887FABE6AB (UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::DestroyGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_DestroyGameboard_m4DBBC7023F4E2784889AE16BD5A769BEFEB4B45C (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_Gameboard()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::get_AreFeaturesEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityLifecycleDriver_get_AreFeaturesEnabled_m3A3853DC073EABB68A9F7C5DD75CB86EAD060A74_inline (UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::UpdateGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_UpdateGameboard_mE94D718094D54872FC302975D5DE94713B276634 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_Gameboard(Niantic.ARDK.Extensions.Gameboard.IGameboard)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BossemGameboardManager_set_Gameboard_m8BE54CB720603544F52D7C12A7F1DDE54092B2A3_inline (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.Gameboard.ModelSettings::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelSettings__ctor_m2EFFAFE3FE76B6500896B9FFE4D3133D6244AD7C (ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164* __this, float ___tileSize0, float ___kernelStdDevTol1, float ___maxSlope2, float ___stepHeight3, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask4, const RuntimeMethod* method) ;
// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.GameboardFactory::Create(Niantic.ARDK.Extensions.Gameboard.ModelSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameboardFactory_Create_m4D5A2B54AACBA645E1165A86115B5E584CA88BEA (ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164 ___settings0, bool ___visualise1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.UnityLifecycleDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleDriver__ctor_mE49622AAB32D13ACB22D10926BAABCB35E27F356 (UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Components.VoiceControl::set_AsapMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControl_set_AsapMode_m21F470B766240EA1093E93F1CDB8407916132AFA (VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m0774167819399E6574FC996E164E05ACBEB92D4F (U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand> Recognissimo.Components.VoiceControl::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5DD84171740534E27980249B42B230DF269891A2* VoiceControl_get_Commands_m017757D70A581D81A4F6AF5D5FA759BAEF7D5A59 (VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Components.VoiceControlCommand::.ctor(System.String,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlCommand__ctor_mBB7AEA5D9908198CED868CFC2107560BFB563DCD (VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F* __this, String_t* ___phrase0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Recognissimo.Components.VoiceControlCommand>::Add(T)
inline void List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_inline (List_1_t5DD84171740534E27980249B42B230DF269891A2* __this, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DD84171740534E27980249B42B230DF269891A2*, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F, const RuntimeMethod*))List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Events.UnityEvent`1<Recognissimo.InitializationException> Recognissimo.SpeechProcessor::get_InitializationFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* SpeechProcessor_get_InitializationFailed_mDFD20D49A914ECE34071738333592B5274AC87BF (SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.InitializationException>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m6FA2B8C4FE9DF97A48B4A6362615855ABF76B3A9 (UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.InitializationException>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B (UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* __this, UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053*, UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void Recognissimo.SpeechProcessor::StartProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechProcessor_StartProcessing_m628283D7C8B9B924D5453446D3F5F4E153EB86C6 (SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Recognissimo.Samples.VoiceControlExample.VoiceControlExample::HighlightCoroutine(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceControlExample_HighlightCoroutine_m192F07F9C251FC71EA692459206471CCF8A93030 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___text0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHighlightCoroutineU3Ed__9__ctor_mE89BA4DFA3367E8940FA92CD4043A4EC1FE3526D (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::ShowError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_ShowError_m752EBFD635845B1085B6E97E3169B3F0B0EA9FFB (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::Highlight(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_Highlight_mD74DC7FEE75D4197B20A30C92D8DD016269D1462 (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Components.VoiceActivityDetector::set_TimeoutMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetector_set_TimeoutMs_m5BC2F0247B9B0A60460D0A2DF9F6E934DE4DC638 (VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Recognissimo.Components.VoiceActivityDetector::get_Spoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* VoiceActivityDetector_get_Spoke_mED953844DD51C284EBEC618D6FC4FD4CBD2596D3 (VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Recognissimo.Components.VoiceActivityDetector::get_Silenced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* VoiceActivityDetector_get_Silenced_mADD2CA539887F1199D8E28B7396548BA3FF2532D (VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Recognissimo.Components.StreamingAssetsLanguageModel>::get_Count()
inline int32_t List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_inline (List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E*, const RuntimeMethod*))List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_gshared_inline)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Recognissimo.Components.StreamingAssetsLanguageModel,UnityEngine.SystemLanguage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2EFE0701CC1E02F2BBD28C1B6FE13EBC4A1FB487 (Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m153010616BF53909D8D0718C82AC26466521B751_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Recognissimo.Components.StreamingAssetsLanguageModel,UnityEngine.SystemLanguage>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m05F6EB9BA166FC1D382479D5F1833A78D7BECC05 (RuntimeObject* ___source0, Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C*, const RuntimeMethod*))Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5F8E3D89FED8D63DF3F40D58A17A5BE1F89AB5DE_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.SystemLanguage>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* Enumerable_ToList_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m147470C58461EBA2B81DE788E873609C0166346E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m0AB6973B46B2BD1DB26873946BBA3EEB82A484DF_gshared)(___source0, method);
}
// UnityEngine.SystemLanguage Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::GetPreferredLanguage(System.Collections.Generic.IList`1<UnityEngine.SystemLanguage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognizerExample_GetPreferredLanguage_mDB7DEB271A5032F780225780BD9980AD369C97D7 (RuntimeObject* ___availableLanguages0, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::InitializeLanguageDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_InitializeLanguageDropdown_m4D508D9DA71871BA8E0E108063C50897561CE3BF (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::UpdateStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, String_t* ___text0, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Recognissimo.SpeechProcessor::get_Started()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechProcessor_get_Started_m5CB31182EFC7B82FBCE7901539E1C8602B4A6A6F (SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Recognissimo.SpeechProcessor::get_Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechProcessor_get_Finished_m6600CD1E34515265591DE6905B905D12C1FDA8A6 (SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E* __this, const RuntimeMethod* method) ;
// Recognissimo.Components.PartialResultEvent Recognissimo.Components.SpeechRecognizer::get_PartialResultReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E* SpeechRecognizer_get_PartialResultReady_m2207DB6C32399BDF2203DB1F156F9B9AFC212BD9 (SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.Components.PartialResult>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7965BEDC42A050ABBDDA933D85EDC925B33192C8 (UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m7965BEDC42A050ABBDDA933D85EDC925B33192C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.Components.PartialResult>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A (UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC* __this, UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF2CE8BA4D5167D8282512E13D3EDB3E7E887A3EC*, UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242*, const RuntimeMethod*))UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A_gshared)(__this, ___call0, method);
}
// Recognissimo.Components.ResultEvent Recognissimo.Components.SpeechRecognizer::get_ResultReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183* SpeechRecognizer_get_ResultReady_m9CAA3E5D499C27171EBBD0A4931166D0A6611B7F (SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.Components.Result>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEB8F91A4D4E7E3E2287F99CC9E16936CBE744281 (UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mEB8F91A4D4E7E3E2287F99CC9E16936CBE744281_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.Components.Result>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436 (UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F* __this, UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCEA97CE0AE37B75C4D3231DA5624C4FD270C972F*, UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442*, const RuntimeMethod*))UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436_gshared)(__this, ___call0, method);
}
// UnityEngine.Events.UnityEvent`1<Recognissimo.RuntimeException> Recognissimo.SpeechProcessor::get_RuntimeFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* SpeechProcessor_get_RuntimeFailed_mCF154BDD13366DA7035B4279FB9F143E49255CBD (SpeechProcessor_t623DE7E9AD8EDBB8C4DBB2D4B371449DEECBB25E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Recognissimo.RuntimeException>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m46FE3D782E37D40C49F578AAF4EA3B91C5275BDE (UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Recognissimo.RuntimeException>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m7092AEBC9BE76EBC5839A6CAF5111EA41A8D9186 (UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* __this, UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829*, UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_systemLanguage_mF0C8FBE854F7B58315A61087619DD10CB53A9AFF (const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.SystemLanguage,UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m53EE16DF3DDD039702F82B0337537EC904C8B81D (Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m889D430A5EE74DDF6971773B4D8C48ACF923ECCF_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.SystemLanguage,UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m1D23142FD5C9161BA6B5F2CAB05328C687936086 (RuntimeObject* ___source0, Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD*, const RuntimeMethod*))Enumerable_Select_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mB68A29291EEC0750C0CF0A2F8C07FA4C51494367_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_options_mEC30A0E3E0819485B1EACF8624D0C1974857D368 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8 (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Append(Recognissimo.Components.PartialResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Append_m2777E2FDC46995E2BAA5D343E706F65D9BF695CE (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B ___partialResult0, const RuntimeMethod* method) ;
// System.String Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::get_CurrentText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognizedText_get_CurrentText_mBB80148E002CDE44930BEA5043373D95DF54FC71 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Append(Recognissimo.Components.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Append_m5001DF03262074DACE8411BBAB27D1C03AAA22B6 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, Result_t38EF4946810811DF344B77462AF54D398253E75A ___result0, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText__ctor_mCD264FEB759B89CE18ADA99790FD7D432FBD738C (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Clear_mE36EF4449934222041308194EF387807849AAEE2 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257 (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5477F24C6B892FC94029F1380DAF66E43AECBBF4 (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void GameBoardPlace::ARSessionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_ARSessionStarted_mCDADFD1DD4832CFAC7C5668419112375835F3197 (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, const RuntimeMethod* method) 
{
	{
		// _arIsRunning= true;
		__this->____arIsRunning_7 = (bool)1;
		// }
		return;
	}
}
// System.Void GameBoardPlace::ARSessionStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_ARSessionStopped_mE85676480276EDE08A9519CECB6FAB49AC64500E (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arIsRunning = false;
		__this->____arIsRunning_7 = (bool)0;
		// _gameboard.Clear();
		RuntimeObject* L_0 = __this->____gameboard_6;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::Clear() */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void GameBoardPlace::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_Awake_m992A722CE45C2D36E64CBED6AB21C05A24B4ABC6 (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameBoardPlace_OnGameboardCreated_m1885C2B8599C678B967881524EA27E7F56BE6EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameboardFactory.GameboardInitialized += OnGameboardCreated;
		ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1* L_0 = (ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1*)il2cpp_codegen_object_new(ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m3A05D09FC397C1304B2444ADA722E5E90355B51B(L_0, __this, (intptr_t)((void*)GameBoardPlace_OnGameboardCreated_m1885C2B8599C678B967881524EA27E7F56BE6EDA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		GameboardFactory_add_GameboardInitialized_m44E0464435B5E6721D4125A4CB4D57E4CDAC25DE(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameBoardPlace::OnGameboardCreated(Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_OnGameboardCreated_m1885C2B8599C678B967881524EA27E7F56BE6EDA (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameBoardPlace_OnGameboardDestroyed_m1FB77114589125EE730C25DFB15FF41117FD1048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameboard = args.Gameboard;
		GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameboardCreatedArgs_get_Gameboard_mC056BCB5B2853BDEDAFC47B5E318174C1CE8A298_inline(L_0, NULL);
		__this->____gameboard_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameboard_6), (void*)L_1);
		// _gameboardIsRunning = true;
		__this->____gameboardIsRunning_8 = (bool)1;
		// _gameboard.GameboardDestroyed += OnGameboardDestroyed;
		RuntimeObject* L_2 = __this->____gameboard_6;
		ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7* L_3 = (ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_mB2B6DD74AACDC9A571405BF44217E343FCFCAA33(L_3, __this, (intptr_t)((void*)GameBoardPlace_OnGameboardDestroyed_m1FB77114589125EE730C25DFB15FF41117FD1048_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7* >::Invoke(4 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::add_GameboardDestroyed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Utilities.IArdkEventArgs>) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void GameBoardPlace::OnGameboardDestroyed(Niantic.ARDK.Utilities.IArdkEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_OnGameboardDestroyed_m1FB77114589125EE730C25DFB15FF41117FD1048 (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, RuntimeObject* ___args0, const RuntimeMethod* method) 
{
	{
		// _gameboard = null;
		__this->____gameboard_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameboard_6), (void*)(RuntimeObject*)NULL);
		// _gameboardIsRunning = false;
		__this->____gameboardIsRunning_8 = (bool)0;
		// }
		return;
	}
}
// System.Void GameBoardPlace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace_Update_m866F6F35102D72F8BF07DA74BA5184A6A8A50CCD (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameBoardPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardPlace__ctor_m45782520FA253B910CBB72C5AA9F878B968CFCA6 (GameBoardPlace_t7DC26C9FD25FE4EA2E66243F90C18E04585445AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RecognitionListener::WriteIt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionListener_WriteIt_m908856281B90C4E7EF38996C5989E2FDA3C3EC51 (RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF10D6704A9D6765C5984CED4211762A30D7A99EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("In Listener");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF10D6704A9D6765C5984CED4211762A30D7A99EE, NULL);
		// }
		return;
	}
}
// System.Void RecognitionListener::OnPartialResult(Recognissimo.Components.PartialResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionListener_OnPartialResult_m2319C88C28B4F8CD40EBF7C969EF5C5A472E7846 (RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999* __this, PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B ___partialResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"<color=yellow>{partialResult.partial}</color>");
		PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B L_0 = ___partialResult0;
		String_t* L_1 = L_0.___partial_1;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD, L_1, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void RecognitionListener::OnResult(Recognissimo.Components.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionListener_OnResult_m23CD73EE8AA038DBDAC5F49C840EC18BF897551B (RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999* __this, Result_t38EF4946810811DF344B77462AF54D398253E75A ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"<color=green>{result.text}</color>");
		Result_t38EF4946810811DF344B77462AF54D398253E75A L_0 = ___result0;
		String_t* L_1 = L_0.___text_1;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A, L_1, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void RecognitionListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionListener__ctor_m292CAE90EC0D7C1EEBE865FA164002A854D3DBC6 (RecognitionListener_t3E799E66046D8751A2A0642293DAE4D6B9482999* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Start_mA38706E4402D600ECDE8A1FF3C45DDEF3948DB0F (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized += OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_add_SessionInitialized_mAB53E2F3474C8350FB870EEA9EAA30D31F2BBB7B(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Update_mF9680B5FCF65C2E1ABFB3729BEA27C1A49B4D2B0 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (PlatformAgnosticInput.touchCount <= 0)
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7(NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = PlatformAgnosticInput_GetTouch_m6B44EA87943AA6B7AA916B13DD9EFB5209A6377F(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// TouchBegan(touch);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3 = V_0;
		SceneManager_TouchBegan_m7A05CCD471D7BE449F3267D1445135F92974DA03(__this, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void SceneManager::OnSessionInitialized(Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized -= OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_remove_SessionInitialized_mE5660496ADE5A392E192424F7B4583A19419F723(L_0, NULL);
		// _ARsession = args.Session;
		RuntimeObject* L_1;
		L_1 = AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline((&___args0), NULL);
		__this->____ARsession_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ARsession_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void SceneManager::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_TouchBegan_m7A05CCD471D7BE449F3267D1445135F92974DA03 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// GameObject newBall = Instantiate(_ballPrefab);  //Spawn a new ball from our Ball Prefab
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____ballPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// newBall.transform.rotation = Quaternion.Euler(new Vector3(0.0f, 0.0f, 0.0f));   //Set the rotation of our new Ball
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_4, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_5, NULL);
		// newBall.transform.position = _mainCamera.transform.position + _mainCamera.transform.forward;    //Set the position of our new Ball to just in front of our Main Camera
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->____mainCamera_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->____mainCamera_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_13, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_14, NULL);
		// Rigidbody rigbod = newBall.GetComponent<Rigidbody>();
		NullCheck(L_6);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15;
		L_15 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_6, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rigbod.velocity = new Vector3(0f, 0f, 0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_17, NULL);
		// float force = 300.0f;
		V_0 = (300.0f);
		// rigbod.AddForce(_mainCamera.transform.forward * force);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->____mainCamera_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		NullCheck(L_16);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_16, L_22, NULL);
		// }
		return;
	}
}
// System.Void SceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager__ctor_m61FBFE598A99CDD806C72972FD6466E89648A5B1 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::ARSessionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_ARSessionStarted_m4FC97C5EE42923B492777D9D7910262AEC74B293 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	{
		// _arIsRunning = true;
		__this->____arIsRunning_18 = (bool)1;
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::ARSessionStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_ARSessionStopped_m28119BC5EAA073927B7B840B63A9B8C26083900E (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF5088DE05997E8C0FA668CE95616EF5A498DE40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(_agentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____agentGameObject_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// _agentGameObject = null;
		__this->____agentGameObject_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____agentGameObject_15), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// _replaceButtonText.text = "Place";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____replaceButtonText_8;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralEF5088DE05997E8C0FA668CE95616EF5A498DE40);
		// _replaceButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____replaceButton_7;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
		// _callButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____callButton_9;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)0, NULL);
		// _isReplacing = false;
		__this->____isReplacing_17 = (bool)0;
		// _arIsRunning = false;
		__this->____arIsRunning_18 = (bool)0;
		// _gameboard.Clear();
		RuntimeObject* L_4 = __this->____gameboard_14;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::Clear() */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_4);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_Awake_mDEA062E9CE7E4C32F09BA3754EE6286926F2535F (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_OnGameboardCreated_m0FB8B81B7914A7F341EBBF8CB96FC3BE07DCAA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF5088DE05997E8C0FA668CE95616EF5A498DE40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameboardFactory.GameboardInitialized += OnGameboardCreated;
		ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1* L_0 = (ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1*)il2cpp_codegen_object_new(ArdkEventHandler_1_tC5EF93E8D104BDA8B133EAB0A136B6E95EED6FC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m3A05D09FC397C1304B2444ADA722E5E90355B51B(L_0, __this, (intptr_t)((void*)GameboardSpaceManager_OnGameboardCreated_m0FB8B81B7914A7F341EBBF8CB96FC3BE07DCAA2B_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		GameboardFactory_add_GameboardInitialized_m44E0464435B5E6721D4125A4CB4D57E4CDAC25DE(L_0, NULL);
		// _callButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____callButton_9;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// _replaceButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____replaceButton_7;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
		// _replaceButtonText.text = "Place";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____replaceButtonText_8;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralEF5088DE05997E8C0FA668CE95616EF5A498DE40);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::OnGameboardCreated(Niantic.ARDK.Extensions.Gameboard.GameboardCreatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_OnGameboardCreated_m0FB8B81B7914A7F341EBBF8CB96FC3BE07DCAA2B (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_OnGameboardDestroyed_mB1C57955E321B1C081D233CCD028549E0BEF6D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameboard = args.Gameboard;
		GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameboardCreatedArgs_get_Gameboard_mC056BCB5B2853BDEDAFC47B5E318174C1CE8A298_inline(L_0, NULL);
		__this->____gameboard_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameboard_14), (void*)L_1);
		// _gameboardIsRunning = true;
		__this->____gameboardIsRunning_19 = (bool)1;
		// _gameboard.GameboardDestroyed += OnGameboardDestroyed;
		RuntimeObject* L_2 = __this->____gameboard_14;
		ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7* L_3 = (ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_mB2B6DD74AACDC9A571405BF44217E343FCFCAA33(L_3, __this, (intptr_t)((void*)GameboardSpaceManager_OnGameboardDestroyed_mB1C57955E321B1C081D233CCD028549E0BEF6D10_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t80AC3964C6FC689035261DEC69B499B7BB8848B7* >::Invoke(4 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::add_GameboardDestroyed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Utilities.IArdkEventArgs>) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::OnGameboardDestroyed(Niantic.ARDK.Utilities.IArdkEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_OnGameboardDestroyed_mB1C57955E321B1C081D233CCD028549E0BEF6D10 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, RuntimeObject* ___args0, const RuntimeMethod* method) 
{
	{
		// _gameboard = null;
		__this->____gameboard_14 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameboard_14), (void*)(RuntimeObject*)NULL);
		// _gameboardIsRunning = false;
		__this->____gameboardIsRunning_19 = (bool)0;
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_OnEnable_mC96208937FB8CBF3AA298DC110645FB1B103263D (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _replaceButton.onClick.AddListener(ReplaceButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____replaceButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _callButton.onClick.AddListener(CallButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____callButton_9;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _pruneButton.onClick.AddListener(PruneButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____pruneButton_10;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_OnDisable_mF2DA5FD477B83D0A63B4577A4D90A11DF7B7CF2E (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _replaceButton.onClick.RemoveListener(ReplaceButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____replaceButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// _callButton.onClick.RemoveListener(CallButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____callButton_9;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// _pruneButton.onClick.RemoveListener(PruneButton_OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____pruneButton_10;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_Update_mE606591D376436369A0126722F4725BCD5D11BD1 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_gameboardIsRunning)
		bool L_0 = __this->____gameboardIsRunning_19;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_isReplacing)
		bool L_1 = __this->____isReplacing_17;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// HandlePlacement();
		GameboardSpaceManager_HandlePlacement_m2D37146921AF852FF1EF8B650DD1E7DC43CCFB70(__this, NULL);
		return;
	}

IL_0018:
	{
		// _replaceButton.interactable = _gameboard.Area > 0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____replaceButton_7;
		RuntimeObject* L_3 = __this->____gameboard_14;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Niantic.ARDK.Extensions.Gameboard.IGameboard::get_Area() */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0), NULL);
		// HandleTouch();
		GameboardSpaceManager_HandleTouch_mE9020A579C9210F72C0E4F73C421DD4094B46BB2(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::HandleTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_HandleTouch_mE9020A579C9210F72C0E4F73C421DD4094B46BB2 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (PlatformAgnosticInput.touchCount <= 0)
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7(NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = PlatformAgnosticInput_GetTouch_m6B44EA87943AA6B7AA916B13DD9EFB5209A6377F(0, NULL);
		V_0 = L_1;
		// if (PlatformAgnosticInput.touchCount <= 0 || EventSystem.current.currentSelectedGameObject != null)
		int32_t L_2;
		L_2 = PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// TouchBegan(touch);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7 = V_0;
		GameboardSpaceManager_TouchBegan_mEA46EC46EC047B0742CC6DAAE834FC2158167030(__this, L_7, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::TouchBegan(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_TouchBegan_mEA46EC46EC047B0742CC6DAAE834FC2158167030 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!_arIsRunning || _agent == null || _arCamera == null)
		bool L_0 = __this->____arIsRunning_18;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_1 = __this->____agent_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->____arCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// Ray ray = _arCamera.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____arCamera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___touch0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_6, NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_7, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_9;
		L_9 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_8, (&V_0), NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		// _destinationMarker.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____destinationMarker_6;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// _destinationMarker.transform.position = hit.point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____destinationMarker_6;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// _agent.SetDestination(hit.point);
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_14 = __this->____agent_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_14);
		GameboardAgent_SetDestination_m9AE3D5D6FD7EFB5E4A15C8B9A27138BFB1D5EE0A(L_14, L_15, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::HandlePlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_HandlePlacement_m2D37146921AF852FF1EF8B650DD1E7DC43CCFB70 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var cameraTransform = _arCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____arCamera_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// var ray = new Ray(cameraTransform.position, cameraTransform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_1), L_3, L_5, NULL);
		// if (_gameboard.RayCast(ray, out Vector3 hitPoint))
		RuntimeObject* L_6 = __this->____gameboard_14;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(17 /* System.Boolean Niantic.ARDK.Extensions.Gameboard.IGameboard::RayCast(UnityEngine.Ray,UnityEngine.Vector3&) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_6, L_7, (&V_2));
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		// if (_gameboard.CheckFit(center: hitPoint, 0.4f))
		RuntimeObject* L_9 = __this->____gameboard_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		NullCheck(L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(10 /* System.Boolean Niantic.ARDK.Extensions.Gameboard.IGameboard::CheckFit(UnityEngine.Vector3,System.Single) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_9, L_10, (0.400000006f));
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// _agentGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____agentGameObject_15;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// _agentGameObject.transform.position = hitPoint;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->____agentGameObject_15;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// var rotation = Vector3.ProjectOnPlane(cameraTransform.forward, Vector3.up).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_17, L_18, NULL);
		V_4 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_3 = L_20;
		// _agentGameObject.transform.rotation = Quaternion.LookRotation(-rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->____agentGameObject_15;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_24, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_25, NULL);
		// _replaceButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->____replaceButton_7;
		NullCheck(L_26);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_26, (bool)1, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::ReplaceButton_OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_ReplaceButton_OnClick_m9B57F3C3D4186FAEFE85568A77D05C641D9B6CF9 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93_mDBE9B05251B9B86A0D67A8FF9DDE10D8747F7965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43CF2B03BAD4C8E04EDC5E2EB91211C3DF0D32F3);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// _destinationMarker.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____destinationMarker_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (_agentGameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____agentGameObject_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// _agentGameObject = Instantiate(_agentPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____agentPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->____agentGameObject_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____agentGameObject_15), (void*)L_4);
		// _agent = _agentGameObject.GetComponent<GameboardAgent>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____agentGameObject_15;
		NullCheck(L_5);
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_6;
		L_6 = GameObject_GetComponent_TisGameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93_mDBE9B05251B9B86A0D67A8FF9DDE10D8747F7965(L_5, GameObject_GetComponent_TisGameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93_mDBE9B05251B9B86A0D67A8FF9DDE10D8747F7965_RuntimeMethod_var);
		__this->____agent_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____agent_16), (void*)L_6);
		// _agent.State = GameboardAgent.AgentNavigationState.Paused;
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_7 = __this->____agent_16;
		NullCheck(L_7);
		GameboardAgent_set_State_m68D62E3A5673C788540515612D68206426498E8B_inline(L_7, 0, NULL);
		// _agentGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->____agentGameObject_15;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0054:
	{
		// _isReplacing = !_isReplacing;
		bool L_9 = __this->____isReplacing_17;
		__this->____isReplacing_17 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		// _replaceButtonText.text = _isReplacing ? "Done" : "Replace";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____replaceButtonText_8;
		bool L_11 = __this->____isReplacing_17;
		G_B3_0 = L_10;
		if (L_11)
		{
			G_B4_0 = L_10;
			goto IL_0078;
		}
	}
	{
		G_B5_0 = _stringLiteral43CF2B03BAD4C8E04EDC5E2EB91211C3DF0D32F3;
		G_B5_1 = G_B3_0;
		goto IL_007d;
	}

IL_0078:
	{
		G_B5_0 = _stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94;
		G_B5_1 = G_B4_0;
	}

IL_007d:
	{
		NullCheck(G_B5_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_1, G_B5_0);
		// _replaceButton.interactable = !_isReplacing;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->____replaceButton_7;
		bool L_13 = __this->____isReplacing_17;
		NullCheck(L_12);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		// _callButton.interactable = !_isReplacing;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->____callButton_9;
		bool L_15 = __this->____isReplacing_17;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), NULL);
		// if (_isReplacing)
		bool L_16 = __this->____isReplacing_17;
		if (!L_16)
		{
			goto IL_00da;
		}
	}
	{
		// _agent.SetDestination(_agentGameObject.transform.position);
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_17 = __this->____agent_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->____agentGameObject_15;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_17);
		GameboardAgent_SetDestination_m9AE3D5D6FD7EFB5E4A15C8B9A27138BFB1D5EE0A(L_17, L_20, NULL);
		// _agentGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->____agentGameObject_15;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		return;
	}

IL_00da:
	{
		// _agent.State = GameboardAgent.AgentNavigationState.Idle;
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_22 = __this->____agent_16;
		NullCheck(L_22);
		GameboardAgent_set_State_m68D62E3A5673C788540515612D68206426498E8B_inline(L_22, 1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::CallButton_OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_CallButton_OnClick_mA46CA58534855B8C1BE975965C0DCB55F24F046C (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	{
		// _destinationMarker.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____destinationMarker_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _agent.SetDestination(_arCamera.transform.position);
		GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* L_1 = __this->____agent_16;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->____arCamera_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		GameboardAgent_SetDestination_m9AE3D5D6FD7EFB5E4A15C8B9A27138BFB1D5EE0A(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::PruneButton_OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager_PruneButton_OnClick_m6D9A8E98D69AAD1C719F7C6C72DB6B3231EBD018 (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cameraPos = _arCamera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____arCamera_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// _gameboard.Prune(cameraPos, _pruneAmount);
		RuntimeObject* L_3 = __this->____gameboard_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = __this->____pruneAmount_11;
		NullCheck(L_3);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(9 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::Prune(UnityEngine.Vector3,System.Single) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// _gameBoardManager.playspaceFound = true;
		BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* L_6 = __this->____gameBoardManager_13;
		NullCheck(L_6);
		L_6->___playspaceFound_20 = (bool)1;
		// Debug.Log(_gameboard.Area);
		RuntimeObject* L_7 = __this->____gameboard_14;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Niantic.ARDK.Extensions.Gameboard.IGameboard::get_Area() */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_7);
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.GameboardSpaceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardSpaceManager__ctor_m0C6A0C451B1F76A4C1B4D374C889B9EA18992BEA (GameboardSpaceManager_t503A55CD61AE33D51B67071C895C272B273446D7* __this, const RuntimeMethod* method) 
{
	{
		// private float _pruneAmount = 1.0f;
		__this->____pruneAmount_11 = (1.0f);
		// private float _playspaceArea = 2.5f;
		__this->____playspaceArea_12 = (2.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Niantic.ARDK.Extensions.Gameboard.IGameboard Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_Gameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// public IGameboard Gameboard { get; private set; }
		RuntimeObject* L_0 = __this->___U3CGameboardU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_Gameboard(Niantic.ARDK.Extensions.Gameboard.IGameboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_Gameboard_m8BE54CB720603544F52D7C12A7F1DDE54092B2A3 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IGameboard Gameboard { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGameboardU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameboardU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// UnityEngine.Camera Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* BossemGameboardManager_get_Camera_m0B6417339C7A6AC37ED591E41EF79EC8F92F253F (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_9;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_Camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_Camera_m0C310B35DE4956F911E813A047CA24AFC93C4B38 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _camera = value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		__this->____camera_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_9), (void*)L_0);
		return;
	}
}
// UnityEngine.Camera Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_ArCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* BossemGameboardManager_get_ArCamera_m15BC8EB40277062C1467FCA7128989CE9CE7F016 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_9;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_ArCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_ArCamera_m899792067B990E2B5CC922C686469E1C14990F6F (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _camera = value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		__this->____camera_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_9), (void*)L_0);
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_TileSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_TileSize_mD4871FD19BEA8912D3E254332F1E036FF0F99FCE (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _tileSize;
		float L_0 = __this->____tileSize_11;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_TileSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_TileSize_m2E6E54E84539E082F9C66E059997AF5E39D81717 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// if (value <= 0f)
		float L_0 = ___value0;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(value), "TileSize must be greater than 0.");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0967F1A4BE87F847F318088B019B73A89B82ABF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BossemGameboardManager_set_TileSize_m2E6E54E84539E082F9C66E059997AF5E39D81717_RuntimeMethod_var)));
	}

IL_0018:
	{
		// _tileSize = value;
		float L_2 = ___value0;
		__this->____tileSize_11 = L_2;
		// }
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_FlatFloorTolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_FlatFloorTolerance_mB04EA68F47FADB9CFB6B530D2515F9E320774B4E (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _flatFloorTolerance;
		float L_0 = __this->____flatFloorTolerance_12;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_FlatFloorTolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_FlatFloorTolerance_m7DFDAD83DAA0D6B9D22BF8376CED239C567FCD71 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _flatFloorTolerance = value;
		float L_0 = ___value0;
		__this->____flatFloorTolerance_12 = L_0;
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_MaxSlope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_MaxSlope_m97531DE01B11A15CA3AE4C692AE22E0D16029903 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _maxSlope;
		float L_0 = __this->____maxSlope_13;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_MaxSlope(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_MaxSlope_m8F1B0442DA133FD2CC78A55DBF79106423996736 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _maxSlope = value;
		float L_0 = ___value0;
		__this->____maxSlope_13 = L_0;
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_StepHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_StepHeight_mB51D9EE786A9CA8DEE1BEC59523C5D0347436144 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _stepHeight;
		float L_0 = __this->____stepHeight_14;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_StepHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_StepHeight_mA67C3B95458BE931606415850F6091E61ACC7949 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _stepHeight = value;
		float L_0 = ___value0;
		__this->____stepHeight_14 = L_0;
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_ScanInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_ScanInterval_m1506DB636D3672CDBD01BC97F21DCBD835AF33B9 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _scanInterval;
		float L_0 = __this->____scanInterval_15;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_ScanInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_ScanInterval_m83BAA9F01AE7847199C18535CBEF360D058A698B (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _scanInterval = value;
		float L_0 = ___value0;
		__this->____scanInterval_15 = L_0;
		return;
	}
}
// System.Single Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_ScanRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossemGameboardManager_get_ScanRange_mFCDA2F84164FE2F725B33831A0463AD6BB9FADB2 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _scanRange;
		float L_0 = __this->____scanRange_16;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_ScanRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_ScanRange_mAC182CA1FFE6B53007476C9A49CD4B2FA5D49622 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _scanRange = value;
		float L_0 = ___value0;
		__this->____scanRange_16 = L_0;
		return;
	}
}
// UnityEngine.LayerMask Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_LayerMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB BossemGameboardManager_get_LayerMask_mC97BC1C5D373F1A21F3BBC48061C233CC1911E6D (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _layerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->____layerMask_17;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_LayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_LayerMask_m4A3B8A96D3A91A8713B970FF37C7BA5F96D2A954 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set => _layerMask = value;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->____layerMask_17 = L_0;
		return;
	}
}
// System.Boolean Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::get_Visualise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BossemGameboardManager_get_Visualise_m2C52D397C5379A27AAE20BC51B1BC0245BBAA5DB (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// get => _visualise;
		bool L_0 = __this->____visualise_18;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::set_Visualise(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_set_Visualise_m51404812D5FCE2B5C95DBB0D5B9F3BE66D43797A (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => _visualise = value;
		bool L_0 = ___value0;
		__this->____visualise_18 = L_0;
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::InitializeImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_InitializeImpl_m0E69918771B788785CF3512A5EE1BCDA882D7357 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// base.InitializeImpl();
		UnityLifecycleDriver_InitializeImpl_m86267991AF998B24643BB90173DD4BCE377C35BE(__this, NULL);
		// _prevArCamera = _camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_9;
		__this->____prevArCamera_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prevArCamera_21), (void*)L_0);
		// _prevTileSize = _tileSize;
		float L_1 = __this->____tileSize_11;
		__this->____prevTileSize_22 = L_1;
		// _prevFlatFloorTolerance = _flatFloorTolerance;
		float L_2 = __this->____flatFloorTolerance_12;
		__this->____prevFlatFloorTolerance_23 = L_2;
		// _prevMaxSlope = _maxSlope;
		float L_3 = __this->____maxSlope_13;
		__this->____prevMaxSlope_24 = L_3;
		// _prevStepHeight = _stepHeight;
		float L_4 = __this->____stepHeight_14;
		__this->____prevStepHeight_25 = L_4;
		// _prevScanInterval = _scanInterval;
		float L_5 = __this->____scanInterval_15;
		__this->____prevScanInterval_26 = L_5;
		// _prevScanRange = _scanRange;
		float L_6 = __this->____scanRange_16;
		__this->____prevScanRange_27 = L_6;
		// _prevLayerMask = _layerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = __this->____layerMask_17;
		__this->____prevLayerMask_28 = L_7;
		// _prevVisualise = _visualise;
		bool L_8 = __this->____visualise_18;
		__this->____prevVisualise_29 = L_8;
		// CreateNewGameboard();
		BossemGameboardManager_CreateNewGameboard_mD47C7731C54A24517D1B875BA17CAEEBBAEA71F0(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::DeinitializeImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_DeinitializeImpl_mAF19494C92750A3285D67E11BFBE9BEBC67D2419 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// base.DeinitializeImpl();
		UnityLifecycleDriver_DeinitializeImpl_m10856BE7D4C3CD1530DB6C3AE29EE5887FABE6AB(__this, NULL);
		// DestroyGameboard();
		BossemGameboardManager_DestroyGameboard_m4DBBC7023F4E2784889AE16BD5A769BEFEB4B45C(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::SetVisualisationActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_SetVisualisationActive_m141121A0EAF24D8DDEC11DCEE41DE5F4C7D93D07 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, bool ___active0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// Gameboard?.SetVisualisationActive(active);
		RuntimeObject* L_0;
		L_0 = BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___active0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(18 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::SetVisualisationActive(System.Boolean) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::UpdateGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_UpdateGameboard_mE94D718094D54872FC302975D5DE94713B276634 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var cameraTransform = _camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		// var playerPosition = cameraTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// var playerForward = cameraTransform.forward;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		V_1 = L_4;
		// var origin = playerPosition + Vector3.ProjectOnPlane(playerForward, Vector3.up).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_6, L_7, NULL);
		V_3 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_9, NULL);
		V_2 = L_10;
		// if (!playspaceFound)
		bool L_11 = __this->___playspaceFound_20;
		if (L_11)
		{
			goto IL_004c;
		}
	}
	{
		// Gameboard.Scan(origin, range: _scanRange);
		RuntimeObject* L_12;
		L_12 = BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		float L_14 = __this->____scanRange_16;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(7 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::Scan(UnityEngine.Vector3,System.Single) */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_12, L_13, L_14);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_Update_m2A907AA8A6D43719E71E237FE572B19D83EA4C5B (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// if (!AreFeaturesEnabled || Gameboard == null)
		bool L_0;
		L_0 = UnityLifecycleDriver_get_AreFeaturesEnabled_m3A3853DC073EABB68A9F7C5DD75CB86EAD060A74_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (!(Time.time - _lastScan > _scanInterval))
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3 = __this->____lastScan_31;
		float L_4 = __this->____scanInterval_15;
		if ((((float)((float)il2cpp_codegen_subtract(L_2, L_3))) > ((float)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// _lastScan = Time.time;
		float L_5;
		L_5 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastScan_31 = L_5;
		// UpdateGameboard();
		BossemGameboardManager_UpdateGameboard_mE94D718094D54872FC302975D5DE94713B276634(__this, NULL);
		// if (recreateGameboard)
		bool L_6 = __this->___recreateGameboard_19;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		// DestroyGameboard();
		BossemGameboardManager_DestroyGameboard_m4DBBC7023F4E2784889AE16BD5A769BEFEB4B45C(__this, NULL);
		// CreateNewGameboard();
		BossemGameboardManager_CreateNewGameboard_mD47C7731C54A24517D1B875BA17CAEEBBAEA71F0(__this, NULL);
		// recreateGameboard = false;
		__this->___recreateGameboard_19 = (bool)0;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::DestroyGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_DestroyGameboard_m4DBBC7023F4E2784889AE16BD5A769BEFEB4B45C (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Gameboard == null)
		RuntimeObject* L_0;
		L_0 = BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Gameboard.Destroy();
		RuntimeObject* L_1;
		L_1 = BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline(__this, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Niantic.ARDK.Extensions.Gameboard.IGameboard::Destroy() */, IGameboard_t705327E7B768329493F4FCDE0E89144A5757C6EC_il2cpp_TypeInfo_var, L_1);
		// Gameboard = null;
		BossemGameboardManager_set_Gameboard_m8BE54CB720603544F52D7C12A7F1DDE54092B2A3_inline(__this, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::CreateNewGameboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_CreateNewGameboard_mD47C7731C54A24517D1B875BA17CAEEBBAEA71F0 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _modelSettings =
		//   new ModelSettings
		//   (
		//     _tileSize,
		//     _flatFloorTolerance,
		//     _maxSlope,
		//     _stepHeight,
		//     _layerMask
		//   );
		float L_0 = __this->____tileSize_11;
		float L_1 = __this->____flatFloorTolerance_12;
		float L_2 = __this->____maxSlope_13;
		float L_3 = __this->____stepHeight_14;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->____layerMask_17;
		ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ModelSettings__ctor_m2EFFAFE3FE76B6500896B9FFE4D3133D6244AD7C((&L_5), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->____modelSettings_30 = L_5;
		// Gameboard = GameboardFactory.Create(_modelSettings, _visualise);
		ModelSettings_t6699CF7D34CD0F2B8451D6B4DABEDFACE9A8F164 L_6 = __this->____modelSettings_30;
		bool L_7 = __this->____visualise_18;
		il2cpp_codegen_runtime_class_init_inline(GameboardFactory_tF82536131A67DB958911D16184FCBC6236C39D01_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = GameboardFactory_Create_m4D5A2B54AACBA645E1165A86115B5E584CA88BEA(L_6, L_7, NULL);
		BossemGameboardManager_set_Gameboard_m8BE54CB720603544F52D7C12A7F1DDE54092B2A3_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager_OnValidate_mC9925C34A16CBA583467BAECE7BDB128719BD025 (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_prevTileSize == 0)
		float L_0 = __this->____prevTileSize_22;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var configChanged = false;
		V_0 = (bool)0;
		// if (_tileSize != _prevTileSize)
		float L_1 = __this->____tileSize_11;
		float L_2 = __this->____prevTileSize_22;
		if ((((float)L_1) == ((float)L_2)))
		{
			goto IL_002c;
		}
	}
	{
		// _prevTileSize = _tileSize;
		float L_3 = __this->____tileSize_11;
		__this->____prevTileSize_22 = L_3;
		// configChanged = true;
		V_0 = (bool)1;
	}

IL_002c:
	{
		// if (_flatFloorTolerance != _prevFlatFloorTolerance)
		float L_4 = __this->____flatFloorTolerance_12;
		float L_5 = __this->____prevFlatFloorTolerance_23;
		if ((((float)L_4) == ((float)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		// _prevFlatFloorTolerance = _flatFloorTolerance;
		float L_6 = __this->____flatFloorTolerance_12;
		__this->____prevFlatFloorTolerance_23 = L_6;
		// configChanged = true;
		V_0 = (bool)1;
	}

IL_0048:
	{
		// if (_maxSlope != _prevMaxSlope)
		float L_7 = __this->____maxSlope_13;
		float L_8 = __this->____prevMaxSlope_24;
		if ((((float)L_7) == ((float)L_8)))
		{
			goto IL_0064;
		}
	}
	{
		// _prevMaxSlope = _maxSlope;
		float L_9 = __this->____maxSlope_13;
		__this->____prevMaxSlope_24 = L_9;
		// configChanged = true;
		V_0 = (bool)1;
	}

IL_0064:
	{
		// if (_stepHeight != _prevStepHeight)
		float L_10 = __this->____stepHeight_14;
		float L_11 = __this->____prevStepHeight_25;
		if ((((float)L_10) == ((float)L_11)))
		{
			goto IL_0080;
		}
	}
	{
		// _prevStepHeight = _stepHeight;
		float L_12 = __this->____stepHeight_14;
		__this->____prevStepHeight_25 = L_12;
		// configChanged = true;
		V_0 = (bool)1;
	}

IL_0080:
	{
		// if (configChanged)
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// recreateGameboard = true;
		__this->___recreateGameboard_19 = (bool)1;
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.BossemGameboardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossemGameboardManager__ctor_m7EC4DA1816D44B65F3B7AB2509B459D23C323F7F (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// private float _tileSize = 0.15f;
		__this->____tileSize_11 = (0.150000006f);
		// private float _flatFloorTolerance = 0.2f;
		__this->____flatFloorTolerance_12 = (0.200000003f);
		// private float _maxSlope = 25.0f;
		__this->____maxSlope_13 = (25.0f);
		// private float _stepHeight = 0.1f;
		__this->____stepHeight_14 = (0.100000001f);
		// private float _scanInterval = 0.1f;
		__this->____scanInterval_15 = (0.100000001f);
		// private float _scanRange = 1.5f;
		__this->____scanRange_16 = (1.5f);
		// private LayerMask _layerMask = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->____layerMask_17 = L_0;
		// public bool _visualise = true;
		__this->____visualise_18 = (bool)1;
		UnityLifecycleDriver__ctor_mE49622AAB32D13ACB22D10926BAABCB35E27F356(__this, NULL);
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
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_Start_mEDAC23FB0895FB494E19669C1B0C2CB57E47C9A1 (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__1_m4D837EED553ADFFA2AA6168FB422EE7EB2F144A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceControlExample_U3CStartU3Eb__7_0_m404A47309CB686987FDB65111D5B3AE1BB719CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// voiceControl.AsapMode = true;
		VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* L_0 = __this->___voiceControl_4;
		NullCheck(L_0);
		VoiceControl_set_AsapMode_m21F470B766240EA1093E93F1CDB8407916132AFA(L_0, (bool)1, NULL);
		// foreach (var phrase in phrases)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___phrases_6;
		NullCheck(L_1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_2;
		L_2 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_1, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0092_1;
			}

IL_001a_1:
			{
				// foreach (var phrase in phrases)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_1 = L_3;
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_4 = (U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				U3CU3Ec__DisplayClass7_0__ctor_m0774167819399E6574FC996E164E05ACBEB92D4F(L_4, NULL);
				V_2 = L_4;
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_5 = V_2;
				NullCheck(L_5);
				L_5->___U3CU3E4__this_1 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_1), (void*)__this);
				// var textGo = Instantiate(textPrefab, textParent);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___textPrefab_8;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___textParent_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
				V_3 = L_8;
				// textGo.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_3;
				NullCheck(L_9);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
				// var textComp = textGo.GetComponent<Text>();
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_10 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_3;
				NullCheck(L_11);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
				L_12 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_11, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
				NullCheck(L_10);
				L_10->___textComp_0 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->___textComp_0), (void*)L_12);
				// textComp.text = phrase;
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_13 = V_2;
				NullCheck(L_13);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13->___textComp_0;
				String_t* L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_15);
				// textComp.color = Inactive;
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_16 = V_2;
				NullCheck(L_16);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = L_16->___textComp_0;
				il2cpp_codegen_runtime_class_init_inline(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Inactive_10;
				NullCheck(L_17);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
				// voiceControl.Commands.Add(new VoiceControlCommand(phrase, () => Highlight(textComp)));
				VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* L_19 = __this->___voiceControl_4;
				NullCheck(L_19);
				List_1_t5DD84171740534E27980249B42B230DF269891A2* L_20;
				L_20 = VoiceControl_get_Commands_m017757D70A581D81A4F6AF5D5FA759BAEF7D5A59(L_19, NULL);
				String_t* L_21 = V_1;
				U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* L_22 = V_2;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__1_m4D837EED553ADFFA2AA6168FB422EE7EB2F144A1_RuntimeMethod_var), NULL);
				VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F L_24;
				memset((&L_24), 0, sizeof(L_24));
				VoiceControlCommand__ctor_mBB7AEA5D9908198CED868CFC2107560BFB563DCD((&L_24), L_21, L_23, /*hidden argument*/NULL);
				NullCheck(L_20);
				List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_inline(L_20, L_24, List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_RuntimeMethod_var);
			}

IL_0092_1:
			{
				// foreach (var phrase in phrases)
				bool L_25;
				L_25 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_00ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		// voiceControl.InitializationFailed.AddListener(e => ShowError(e.Message));
		VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* L_26 = __this->___voiceControl_4;
		NullCheck(L_26);
		UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* L_27;
		L_27 = SpeechProcessor_get_InitializationFailed_mDFD20D49A914ECE34071738333592B5274AC87BF(L_26, NULL);
		UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62* L_28 = (UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62*)il2cpp_codegen_object_new(UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UnityAction_1__ctor_m6FA2B8C4FE9DF97A48B4A6362615855ABF76B3A9(L_28, __this, (intptr_t)((void*)VoiceControlExample_U3CStartU3Eb__7_0_m404A47309CB686987FDB65111D5B3AE1BB719CE3_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B(L_27, L_28, UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		// voiceControl.StartProcessing();
		VoiceControl_t59938142CD6C1C72B07BD076F80AD5209762A581* L_29 = __this->___voiceControl_4;
		NullCheck(L_29);
		SpeechProcessor_StartProcessing_m628283D7C8B9B924D5453446D3F5F4E153EB86C6(L_29, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::Highlight(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_Highlight_mD74DC7FEE75D4197B20A30C92D8DD016269D1462 (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (text.color == Active)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___text0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Active_9;
		bool L_3;
		L_3 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// StartCoroutine(HighlightCoroutine(text));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = VoiceControlExample_HighlightCoroutine_m192F07F9C251FC71EA692459206471CCF8A93030(L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Recognissimo.Samples.VoiceControlExample.VoiceControlExample::HighlightCoroutine(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceControlExample_HighlightCoroutine_m192F07F9C251FC71EA692459206471CCF8A93030 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* L_0 = (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E*)il2cpp_codegen_object_new(U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHighlightCoroutineU3Ed__9__ctor_mE89BA4DFA3367E8940FA92CD4043A4EC1FE3526D(L_0, 0, NULL);
		U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* L_1 = L_0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___text0;
		NullCheck(L_1);
		L_1->___text_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___text_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::ShowError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_ShowError_m752EBFD635845B1085B6E97E3169B3F0B0EA9FFB (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// status.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___status_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// status.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___status_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// status.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___status_5;
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample__ctor_mB760B8BD6C97549F7BA5C1E13443FE3055080EBE (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample__cctor_m3F842244B8586F4299AA3938933085FA6DBC4395 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color Active = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Active_9 = L_0;
		// private static readonly Color Inactive = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Inactive_10 = L_1;
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample::<Start>b__7_0(Recognissimo.InitializationException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceControlExample_U3CStartU3Eb__7_0_m404A47309CB686987FDB65111D5B3AE1BB719CE3 (VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* __this, InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645* ___e0, const RuntimeMethod* method) 
{
	{
		// voiceControl.InitializationFailed.AddListener(e => ShowError(e.Message));
		InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		VoiceControlExample_ShowError_m752EBFD635845B1085B6E97E3169B3F0B0EA9FFB(__this, L_1, NULL);
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
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m0774167819399E6574FC996E164E05ACBEB92D4F (U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<>c__DisplayClass7_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__1_m4D837EED553ADFFA2AA6168FB422EE7EB2F144A1 (U3CU3Ec__DisplayClass7_0_t91ACD4D6A5357E83312D7290E2AEB941692E23FF* __this, const RuntimeMethod* method) 
{
	{
		// voiceControl.Commands.Add(new VoiceControlCommand(phrase, () => Highlight(textComp)));
		VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD* L_0 = __this->___U3CU3E4__this_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___textComp_0;
		NullCheck(L_0);
		VoiceControlExample_Highlight_mD74DC7FEE75D4197B20A30C92D8DD016269D1462(L_0, L_1, NULL);
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
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHighlightCoroutineU3Ed__9__ctor_mE89BA4DFA3367E8940FA92CD4043A4EC1FE3526D (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHighlightCoroutineU3Ed__9_System_IDisposable_Dispose_m287F257102C3618DD757FEC2CE7A0B440F9B027F (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHighlightCoroutineU3Ed__9_MoveNext_m9857B5895FB4DC07D60140B136A32282778F7CE4 (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// text.color = Active;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = __this->___text_2;
		il2cpp_codegen_runtime_class_init_inline(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Active_9;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// text.color = Inactive;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6 = __this->___text_2;
		il2cpp_codegen_runtime_class_init_inline(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ((VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceControlExample_tDB840AA3F371B8011150242111F800479A2F48FD_il2cpp_TypeInfo_var))->___Inactive_10;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return (bool)0;
	}
}
// System.Object Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHighlightCoroutineU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCAAB12DC13E67DA87EB12B24D1678133201FDC20 (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHighlightCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mBDC7DED1B9629586B725FC6FB47E9E1F2DB4E187 (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHighlightCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mBDC7DED1B9629586B725FC6FB47E9E1F2DB4E187_RuntimeMethod_var)));
	}
}
// System.Object Recognissimo.Samples.VoiceControlExample.VoiceControlExample/<HighlightCoroutine>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHighlightCoroutineU3Ed__9_System_Collections_IEnumerator_get_Current_mDA7B7EEBA58300E85412AA48409EB9C8D1C8D564 (U3CHighlightCoroutineU3Ed__9_t9E33944BDFB6FC962CDD3AD4D94907F88615028E* __this, const RuntimeMethod* method) 
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
// System.Void Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetectorExample_Start_mE2E6A817C434E0F4636033254587C0456C01F289 (VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivityDetectorExample_U3CStartU3Eb__2_0_m2296175BDC735A14E3420C27571294736E8FEA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivityDetectorExample_U3CStartU3Eb__2_1_m35EF796E4D124D3EA94AE1E5A2C4C826711CE499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivityDetectorExample_U3CStartU3Eb__2_2_m6EB4758EFE0E8936D6ACF239407CEDC52243156F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activityDetector.TimeoutMs = 0;
		VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* L_0 = __this->___activityDetector_4;
		NullCheck(L_0);
		VoiceActivityDetector_set_TimeoutMs_m5BC2F0247B9B0A60460D0A2DF9F6E934DE4DC638(L_0, 0, NULL);
		// activityDetector.Spoke.AddListener(() => status.text = "<color=green>Speech</color>");
		VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* L_1 = __this->___activityDetector_4;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2;
		L_2 = VoiceActivityDetector_get_Spoke_mED953844DD51C284EBEC618D6FC4FD4CBD2596D3(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)VoiceActivityDetectorExample_U3CStartU3Eb__2_0_m2296175BDC735A14E3420C27571294736E8FEA4A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// activityDetector.Silenced.AddListener(() => status.text = "<color=red>Silence</color>");
		VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* L_4 = __this->___activityDetector_4;
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5;
		L_5 = VoiceActivityDetector_get_Silenced_mADD2CA539887F1199D8E28B7396548BA3FF2532D(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)VoiceActivityDetectorExample_U3CStartU3Eb__2_1_m35EF796E4D124D3EA94AE1E5A2C4C826711CE499_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// activityDetector.InitializationFailed.AddListener(e => status.text = e.Message);
		VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* L_7 = __this->___activityDetector_4;
		NullCheck(L_7);
		UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* L_8;
		L_8 = SpeechProcessor_get_InitializationFailed_mDFD20D49A914ECE34071738333592B5274AC87BF(L_7, NULL);
		UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62* L_9 = (UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62*)il2cpp_codegen_object_new(UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m6FA2B8C4FE9DF97A48B4A6362615855ABF76B3A9(L_9, __this, (intptr_t)((void*)VoiceActivityDetectorExample_U3CStartU3Eb__2_2_m6EB4758EFE0E8936D6ACF239407CEDC52243156F_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B(L_8, L_9, UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		// activityDetector.StartProcessing();
		VoiceActivityDetector_t5082E35801CECF8621E9D9794BBB9BB730ABB6B5* L_10 = __this->___activityDetector_4;
		NullCheck(L_10);
		SpeechProcessor_StartProcessing_m628283D7C8B9B924D5453446D3F5F4E153EB86C6(L_10, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetectorExample__ctor_mA7CBC6020B0988A3157A6F912BE2E77DFBE048C1 (VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::<Start>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetectorExample_U3CStartU3Eb__2_0_m2296175BDC735A14E3420C27571294736E8FEA4A (VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1029F6EBF88E08862AA490281D59EDB44D3A80E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activityDetector.Spoke.AddListener(() => status.text = "<color=green>Speech</color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___status_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralB1029F6EBF88E08862AA490281D59EDB44D3A80E);
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::<Start>b__2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetectorExample_U3CStartU3Eb__2_1_m35EF796E4D124D3EA94AE1E5A2C4C826711CE499 (VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2142B63AAE98E9BD9D8A52A0E1639A2D8059ABE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activityDetector.Silenced.AddListener(() => status.text = "<color=red>Silence</color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___status_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2142B63AAE98E9BD9D8A52A0E1639A2D8059ABE2);
		return;
	}
}
// System.Void Recognissimo.Samples.VoiceActivityDetectorExample.VoiceActivityDetectorExample::<Start>b__2_2(Recognissimo.InitializationException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivityDetectorExample_U3CStartU3Eb__2_2_m6EB4758EFE0E8936D6ACF239407CEDC52243156F (VoiceActivityDetectorExample_t0B53323EC3216116CED4FCA0999047C2FFDCC469* __this, InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645* ___e0, const RuntimeMethod* method) 
{
	{
		// activityDetector.InitializationFailed.AddListener(e => status.text = e.Message);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___status_5;
		InitializationException_tF416ADAEEDC47C25FFBCAD531201FFADE402F645* L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
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
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_OnEnable_m2A27C4CDD24AA788D8EF5AFBFFD5CA3772D02ED3 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m05F6EB9BA166FC1D382479D5F1833A78D7BECC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m147470C58461EBA2B81DE788E873609C0166346E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_OnError_m4636551DAF1B08B92E1C75E6C0BBC1077856320D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_OnPartialResult_m4F5B040A26694C6AFDCFE6B6229446ED16C7FD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_OnResult_m0DF76576E5347EEED93C79D27ECA578FF71D81AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_U3COnEnableU3Eb__8_1_mEC3815F2885DB67188EBBE7AB86716411729B477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_U3COnEnableU3Eb__8_3_mE650767AC8B50AAB4EBBBD08D0031D3C988CC2B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__8_0_m839820389DC39C7899DD725F6B74A299D7D7E723_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__8_2_m57D8DEB800C2994F85F31550E7B84064D7C3D5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m7092AEBC9BE76EBC5839A6CAF5111EA41A8D9186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* G_B4_0 = NULL;
	List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* G_B4_1 = NULL;
	SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* G_B4_2 = NULL;
	Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* G_B3_0 = NULL;
	List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* G_B3_1 = NULL;
	SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* G_B3_2 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_1 = NULL;
	{
		// if (languageModelProvider.languageModels.Count == 0)
		StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* L_0 = __this->___languageModelProvider_6;
		NullCheck(L_0);
		List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* L_1 = L_0->___languageModels_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_inline(L_1, List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("No language models.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral762C524C2DE42F798734526B704F372A5D6EB23F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpeechRecognizerExample_OnEnable_m2A27C4CDD24AA788D8EF5AFBFFD5CA3772D02ED3_RuntimeMethod_var)));
	}

IL_001d:
	{
		// _availableLanguages = languageModelProvider.languageModels
		//     .Select(languageModel => languageModel.language)
		//     .ToList();
		StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* L_4 = __this->___languageModelProvider_6;
		NullCheck(L_4);
		List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* L_5 = L_4->___languageModels_12;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* L_6 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		G_B3_2 = __this;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			G_B4_2 = __this;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* L_8 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* L_9 = (Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C*)il2cpp_codegen_object_new(Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m2EFE0701CC1E02F2BBD28C1B6FE13EBC4A1FB487(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__8_0_m839820389DC39C7899DD725F6B74A299D7D7E723_RuntimeMethod_var), NULL);
		Func_2_tCFC14B9493D87B98ACC5342D305E60697A3DC77C* L_10 = L_9;
		((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0048:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m05F6EB9BA166FC1D382479D5F1833A78D7BECC05(G_B4_1, G_B4_0, Enumerable_Select_TisStreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m05F6EB9BA166FC1D382479D5F1833A78D7BECC05_RuntimeMethod_var);
		List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* L_12;
		L_12 = Enumerable_ToList_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m147470C58461EBA2B81DE788E873609C0166346E(L_11, Enumerable_ToList_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_m147470C58461EBA2B81DE788E873609C0166346E_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->____availableLanguages_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->____availableLanguages_11), (void*)L_12);
		// languageModelProvider.language = GetPreferredLanguage(_availableLanguages);
		StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* L_13 = __this->___languageModelProvider_6;
		List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* L_14 = __this->____availableLanguages_11;
		int32_t L_15;
		L_15 = SpeechRecognizerExample_GetPreferredLanguage_mDB7DEB271A5032F780225780BD9980AD369C97D7(L_14, NULL);
		NullCheck(L_13);
		L_13->___language_11 = L_15;
		// InitializeLanguageDropdown();
		SpeechRecognizerExample_InitializeLanguageDropdown_m4D508D9DA71871BA8E0E108063C50897561CE3BF(__this, NULL);
		// UpdateStatus("");
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// recognizer.Started.AddListener(() =>
		// {
		//     _recognizedText.Clear();
		//     UpdateStatus("");
		// });
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_16 = __this->___recognizer_5;
		NullCheck(L_16);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17;
		L_17 = SpeechProcessor_get_Started_m5CB31182EFC7B82FBCE7901539E1C8602B4A6A6F(L_16, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)SpeechRecognizerExample_U3COnEnableU3Eb__8_1_mEC3815F2885DB67188EBBE7AB86716411729B477_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_18, NULL);
		// recognizer.Finished.AddListener(() => Debug.Log("Finished"));
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_19 = __this->___recognizer_5;
		NullCheck(L_19);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20;
		L_20 = SpeechProcessor_get_Finished_m6600CD1E34515265591DE6905B905D12C1FDA8A6(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = L_21;
		G_B5_0 = L_22;
		G_B5_1 = L_20;
		if (L_22)
		{
			G_B6_0 = L_22;
			G_B6_1 = L_20;
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* L_23 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_24, L_23, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__8_2_m57D8DEB800C2994F85F31550E7B84064D7C3D5F3_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = L_24;
		((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_2), (void*)L_25);
		G_B6_0 = L_25;
		G_B6_1 = G_B5_1;
	}

IL_00c4:
	{
		NullCheck(G_B6_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B6_1, G_B6_0, NULL);
		// recognizer.PartialResultReady.AddListener(OnPartialResult);
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_26 = __this->___recognizer_5;
		NullCheck(L_26);
		PartialResultEvent_t3CD4D86E2AAA2304E589234CDE53AA4E246D538E* L_27;
		L_27 = SpeechRecognizer_get_PartialResultReady_m2207DB6C32399BDF2203DB1F156F9B9AFC212BD9(L_26, NULL);
		UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242* L_28 = (UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242*)il2cpp_codegen_object_new(UnityAction_1_t7EDC2CF4FF07CB29D6770FB6865F10E60D2B6242_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UnityAction_1__ctor_m7965BEDC42A050ABBDDA933D85EDC925B33192C8(L_28, __this, (intptr_t)((void*)SpeechRecognizerExample_OnPartialResult_m4F5B040A26694C6AFDCFE6B6229446ED16C7FD85_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A(L_27, L_28, UnityEvent_1_AddListener_m628D8A364A239AFFA9B495C92B5F418499E3FD2A_RuntimeMethod_var);
		// recognizer.ResultReady.AddListener(OnResult);
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_29 = __this->___recognizer_5;
		NullCheck(L_29);
		ResultEvent_t9F4715C44CF5BF9E70921DB67BFF3342EFDBD183* L_30;
		L_30 = SpeechRecognizer_get_ResultReady_m9CAA3E5D499C27171EBBD0A4931166D0A6611B7F(L_29, NULL);
		UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442* L_31 = (UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442*)il2cpp_codegen_object_new(UnityAction_1_tC72DD6BE6F3946F3DFB2486BF534FA0723C7A442_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction_1__ctor_mEB8F91A4D4E7E3E2287F99CC9E16936CBE744281(L_31, __this, (intptr_t)((void*)SpeechRecognizerExample_OnResult_m0DF76576E5347EEED93C79D27ECA578FF71D81AE_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436(L_30, L_31, UnityEvent_1_AddListener_mB142B7A75B549B36FA211172E74F2B526E237436_RuntimeMethod_var);
		// recognizer.InitializationFailed.AddListener(OnError);
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_32 = __this->___recognizer_5;
		NullCheck(L_32);
		UnityEvent_1_t8A1B4F9E74FE769A2706571CB103D47D42733053* L_33;
		L_33 = SpeechProcessor_get_InitializationFailed_mDFD20D49A914ECE34071738333592B5274AC87BF(L_32, NULL);
		UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62* L_34 = (UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62*)il2cpp_codegen_object_new(UnityAction_1_t543BC4DD5F5F5ED71FA1AF956D906198D603AD62_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		UnityAction_1__ctor_m6FA2B8C4FE9DF97A48B4A6362615855ABF76B3A9(L_34, __this, (intptr_t)((void*)SpeechRecognizerExample_OnError_m4636551DAF1B08B92E1C75E6C0BBC1077856320D_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B(L_33, L_34, UnityEvent_1_AddListener_m62D3DE83B65DECE77104F699B867B5F82CF13A7B_RuntimeMethod_var);
		// recognizer.RuntimeFailed.AddListener(OnError);
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_35 = __this->___recognizer_5;
		NullCheck(L_35);
		UnityEvent_1_t412EBBCCB2CFC3B851E96C2B6623CC77BB967829* L_36;
		L_36 = SpeechProcessor_get_RuntimeFailed_mCF154BDD13366DA7035B4279FB9F143E49255CBD(L_35, NULL);
		UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7* L_37 = (UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7*)il2cpp_codegen_object_new(UnityAction_1_tF9459A409CCE5710F19822DB6E030D7E1A420EB7_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_m46FE3D782E37D40C49F578AAF4EA3B91C5275BDE(L_37, __this, (intptr_t)((void*)SpeechRecognizerExample_OnError_m4636551DAF1B08B92E1C75E6C0BBC1077856320D_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_AddListener_m7092AEBC9BE76EBC5839A6CAF5111EA41A8D9186(L_36, L_37, UnityEvent_1_AddListener_m7092AEBC9BE76EBC5839A6CAF5111EA41A8D9186_RuntimeMethod_var);
		// startButton.onClick.AddListener(() =>
		// {
		//     UpdateStatus(LoadingMessage);
		//     recognizer.StartProcessing();
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_38 = __this->___startButton_8;
		NullCheck(L_38);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_39;
		L_39 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_38, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_40 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_40, __this, (intptr_t)((void*)SpeechRecognizerExample_U3COnEnableU3Eb__8_3_mE650767AC8B50AAB4EBBBD08D0031D3C988CC2B9_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_39, L_40, NULL);
		// }
		return;
	}
}
// UnityEngine.SystemLanguage Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::GetPreferredLanguage(System.Collections.Generic.IList`1<UnityEngine.SystemLanguage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognizerExample_GetPreferredLanguage_mDB7DEB271A5032F780225780BD9980AD369C97D7 (RuntimeObject* ___availableLanguages0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD65FDF9CAB4EBD0DCFF9A446239322E85ABA74B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t98385065545001E4014855CC41DEE92F7FE50063_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (availableLanguages.Count == 0)
		RuntimeObject* L_0 = ___availableLanguages0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SystemLanguage>::get_Count() */, ICollection_1_tD65FDF9CAB4EBD0DCFF9A446239322E85ABA74B9_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("No available languages.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2A47AD66A9F38CFF0419199B3DB8C644703D45D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpeechRecognizerExample_GetPreferredLanguage_mDB7DEB271A5032F780225780BD9980AD369C97D7_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (availableLanguages.Contains(Application.systemLanguage))
		RuntimeObject* L_3 = ___availableLanguages0;
		int32_t L_4;
		L_4 = Application_get_systemLanguage_mF0C8FBE854F7B58315A61087619DD10CB53A9AFF(NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SystemLanguage>::Contains(T) */, ICollection_1_tD65FDF9CAB4EBD0DCFF9A446239322E85ABA74B9_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return Application.systemLanguage;
		int32_t L_6;
		L_6 = Application_get_systemLanguage_mF0C8FBE854F7B58315A61087619DD10CB53A9AFF(NULL);
		return L_6;
	}

IL_0026:
	{
		// if (availableLanguages.Contains(SystemLanguage.English))
		RuntimeObject* L_7 = ___availableLanguages0;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SystemLanguage>::Contains(T) */, ICollection_1_tD65FDF9CAB4EBD0DCFF9A446239322E85ABA74B9_il2cpp_TypeInfo_var, L_7, ((int32_t)10));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// return SystemLanguage.English;
		return (int32_t)(((int32_t)10));
	}

IL_0033:
	{
		// return availableLanguages[0];
		RuntimeObject* L_9 = ___availableLanguages0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.SystemLanguage>::get_Item(System.Int32) */, IList_1_t98385065545001E4014855CC41DEE92F7FE50063_il2cpp_TypeInfo_var, L_9, 0);
		return L_10;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::InitializeLanguageDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_InitializeLanguageDropdown_m4D508D9DA71871BA8E0E108063C50897561CE3BF (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m1D23142FD5C9161BA6B5F2CAB05328C687936086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_1_m9E81717AFFD6BF6E7E193D70BC939FCB7EF7588E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_2_mAFCF3950CA442264674AF8977603CA0B457B7A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeLanguageDropdownU3Eb__10_0_m507609B99351DD1561876BEBB22C424CE9A0A1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* G_B2_0 = NULL;
	List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* G_B2_1 = NULL;
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* G_B2_2 = NULL;
	Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* G_B1_0 = NULL;
	List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* G_B1_1 = NULL;
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* G_B1_2 = NULL;
	{
		// languageDropdown.options = _availableLanguages
		//     .Select(language => new Dropdown.OptionData {text = language.ToString()})
		//     .ToList();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___languageDropdown_7;
		List_1_t8CC720FCDC45DA24733B888EA21D38A58C71A516* L_1 = __this->____availableLanguages_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* L_2 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_3;
		Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* L_4 = ((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* L_5 = (Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD*)il2cpp_codegen_object_new(Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m53EE16DF3DDD039702F82B0337537EC904C8B81D(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CInitializeLanguageDropdownU3Eb__10_0_m507609B99351DD1561876BEBB22C424CE9A0A1E5_RuntimeMethod_var), NULL);
		Func_2_t1BE5D0BEB2622C9277F4FFEFFC33EEB31E768DCD* L_6 = L_5;
		((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_3), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m1D23142FD5C9161BA6B5F2CAB05328C687936086(G_B2_1, G_B2_0, Enumerable_Select_TisSystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m1D23142FD5C9161BA6B5F2CAB05328C687936086_RuntimeMethod_var);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_8;
		L_8 = Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852(L_7, Enumerable_ToList_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mC55F4383B151FA082D4CF768341BCE2F218A7852_RuntimeMethod_var);
		NullCheck(G_B2_2);
		Dropdown_set_options_mEC30A0E3E0819485B1EACF8624D0C1974857D368(G_B2_2, L_8, NULL);
		// languageDropdown.value =
		//     languageDropdown.options.FindIndex(option => option.text == languageModelProvider.language.ToString());
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___languageDropdown_7;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_10 = __this->___languageDropdown_7;
		NullCheck(L_10);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_11;
		L_11 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_10, NULL);
		Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* L_12 = (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*)il2cpp_codegen_object_new(Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8(L_12, __this, (intptr_t)((void*)SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_1_m9E81717AFFD6BF6E7E193D70BC939FCB7EF7588E_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		int32_t L_13;
		L_13 = List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767(L_11, L_12, List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		NullCheck(L_9);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_9, L_13, NULL);
		// languageDropdown.onValueChanged.AddListener(index =>
		// {
		//     var optionText = languageDropdown.options[index].text;
		//     var selectedLanguage = (SystemLanguage) Enum.Parse(typeof(SystemLanguage), optionText);
		//     languageModelProvider.language = selectedLanguage;
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_14 = __this->___languageDropdown_7;
		NullCheck(L_14);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_15;
		L_15 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_14, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_16 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_16, __this, (intptr_t)((void*)SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_2_mAFCF3950CA442264674AF8977603CA0B457B7A66_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_15, L_16, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::UpdateStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// status.text = text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___status_9;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::OnPartialResult(Recognissimo.Components.PartialResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_OnPartialResult_m4F5B040A26694C6AFDCFE6B6229446ED16C7FD85 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B ___partial0, const RuntimeMethod* method) 
{
	{
		// _recognizedText.Append(partial);
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_0 = __this->____recognizedText_10;
		PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B L_1 = ___partial0;
		NullCheck(L_0);
		RecognizedText_Append_m2777E2FDC46995E2BAA5D343E706F65D9BF695CE(L_0, L_1, NULL);
		// UpdateStatus(_recognizedText.CurrentText);
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_2 = __this->____recognizedText_10;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecognizedText_get_CurrentText_mBB80148E002CDE44930BEA5043373D95DF54FC71(L_2, NULL);
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::OnResult(Recognissimo.Components.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_OnResult_m0DF76576E5347EEED93C79D27ECA578FF71D81AE (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, Result_t38EF4946810811DF344B77462AF54D398253E75A ___result0, const RuntimeMethod* method) 
{
	{
		// _recognizedText.Append(result);
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_0 = __this->____recognizedText_10;
		Result_t38EF4946810811DF344B77462AF54D398253E75A L_1 = ___result0;
		NullCheck(L_0);
		RecognizedText_Append_m5001DF03262074DACE8411BBAB27D1C03AAA22B6(L_0, L_1, NULL);
		// UpdateStatus(_recognizedText.CurrentText);
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_2 = __this->____recognizedText_10;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecognizedText_get_CurrentText_mBB80148E002CDE44930BEA5043373D95DF54FC71(L_2, NULL);
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::OnError(Recognissimo.SpeechProcessorException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_OnError_m4636551DAF1B08B92E1C75E6C0BBC1077856320D (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, SpeechProcessorException_t20814CFC89BFFFC0D52520A774EC2DC8C35AF16C* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus($"<color=red>{exception.Message}</color>");
		SpeechProcessorException_t20814CFC89BFFFC0D52520A774EC2DC8C35AF16C* L_0 = ___exception0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377, L_1, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample__ctor_mB47A69383726A5166584010FEFF1D0C87A0E1A68 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly RecognizedText _recognizedText = new();
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_0 = (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04*)il2cpp_codegen_object_new(RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RecognizedText__ctor_mCD264FEB759B89CE18ADA99790FD7D432FBD738C(L_0, NULL);
		__this->____recognizedText_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____recognizedText_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::<OnEnable>b__8_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_U3COnEnableU3Eb__8_1_mEC3815F2885DB67188EBBE7AB86716411729B477 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _recognizedText.Clear();
		RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* L_0 = __this->____recognizedText_10;
		NullCheck(L_0);
		RecognizedText_Clear_mE36EF4449934222041308194EF387807849AAEE2(L_0, NULL);
		// UpdateStatus("");
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// });
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::<OnEnable>b__8_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_U3COnEnableU3Eb__8_3_mE650767AC8B50AAB4EBBBD08D0031D3C988CC2B9 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus(LoadingMessage);
		SpeechRecognizerExample_UpdateStatus_mEC5AD6C06E5EAFAB7748CE433AFA88F3A9FB8B9C(__this, _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA, NULL);
		// recognizer.StartProcessing();
		SpeechRecognizer_t7FC954EFD3DAD43388E5C91FDA882F2CE13A6494* L_0 = __this->___recognizer_5;
		NullCheck(L_0);
		SpeechProcessor_StartProcessing_m628283D7C8B9B924D5453446D3F5F4E153EB86C6(L_0, NULL);
		// });
		return;
	}
}
// System.Boolean Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::<InitializeLanguageDropdown>b__10_1(UnityEngine.UI.Dropdown/OptionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_1_m9E81717AFFD6BF6E7E193D70BC939FCB7EF7588E (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___option0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// languageDropdown.options.FindIndex(option => option.text == languageModelProvider.language.ToString());
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = ___option0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_0, NULL);
		StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* L_2 = __this->___languageModelProvider_6;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___language_11);
		Il2CppFakeBox<int32_t> L_4(SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_5, NULL);
		return L_6;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample::<InitializeLanguageDropdown>b__10_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizerExample_U3CInitializeLanguageDropdownU3Eb__10_2_mAFCF3950CA442264674AF8977603CA0B457B7A66 (SpeechRecognizerExample_t08F9212E5B46B635218D62500ECE953C84BB37A3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var optionText = languageDropdown.options[index].text;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___languageDropdown_7;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_3;
		L_3 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_1, L_2, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_3, NULL);
		V_0 = L_4;
		// var selectedLanguage = (SystemLanguage) Enum.Parse(typeof(SystemLanguage), optionText);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_6, L_7, NULL);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var))));
		// languageModelProvider.language = selectedLanguage;
		StreamingAssetsLanguageModelProvider_t89C6D0EED480FEF39F99D656265E774A30C99E88* L_9 = __this->___languageModelProvider_6;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		L_9->___language_11 = L_10;
		// });
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
// System.String Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::get_CurrentText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognizedText_get_CurrentText_mBB80148E002CDE44930BEA5043373D95DF54FC71 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F3E710DB29AA7ABA06EEAAEE767324F4C58C621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string CurrentText => $"{_stableText} <color=grey>{_changingText}</color>";
		String_t* L_0 = __this->____stableText_1;
		String_t* L_1 = __this->____changingText_0;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteral8F3E710DB29AA7ABA06EEAAEE767324F4C58C621, L_1, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		return L_2;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Append(Recognissimo.Components.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Append_m5001DF03262074DACE8411BBAB27D1C03AAA22B6 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, Result_t38EF4946810811DF344B77462AF54D398253E75A ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _changingText = "";
		__this->____changingText_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____changingText_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// _stableText = $"{_stableText} {result.text}";
		String_t* L_0 = __this->____stableText_1;
		Result_t38EF4946810811DF344B77462AF54D398253E75A L_1 = ___result0;
		String_t* L_2 = L_1.___text_1;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		__this->____stableText_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stableText_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Append(Recognissimo.Components.PartialResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Append_m2777E2FDC46995E2BAA5D343E706F65D9BF695CE (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B ___partialResult0, const RuntimeMethod* method) 
{
	{
		// _changingText = partialResult.partial;
		PartialResult_t66CC6EB9671A289FD0DA6A6E686DFB932FB2479B L_0 = ___partialResult0;
		String_t* L_1 = L_0.___partial_1;
		__this->____changingText_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____changingText_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText_Clear_mE36EF4449934222041308194EF387807849AAEE2 (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _changingText = "";
		__this->____changingText_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____changingText_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// _stableText = "";
		__this->____stableText_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stableText_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/RecognizedText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizedText__ctor_mCD264FEB759B89CE18ADA99790FD7D432FBD738C (RecognizedText_t2528C5CDE710F128BAE8A5A3071A5323A4AB0E04* __this, const RuntimeMethod* method) 
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
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8C1019525C3991A31665D68A2B1B4AEDCB153A11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* L_0 = (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642*)il2cpp_codegen_object_new(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5477F24C6B892FC94029F1380DAF66E43AECBBF4(L_0, NULL);
		((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5477F24C6B892FC94029F1380DAF66E43AECBBF4 (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.SystemLanguage Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<OnEnable>b__8_0(Recognissimo.Components.StreamingAssetsLanguageModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnEnableU3Eb__8_0_m839820389DC39C7899DD725F6B74A299D7D7E723 (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* __this, StreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D ___languageModel0, const RuntimeMethod* method) 
{
	{
		// .Select(languageModel => languageModel.language)
		StreamingAssetsLanguageModel_t0180B8F72FB6AD4F724AC32DA31023646498874D L_0 = ___languageModel0;
		int32_t L_1 = L_0.___language_0;
		return L_1;
	}
}
// System.Void Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<OnEnable>b__8_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__8_2_m57D8DEB800C2994F85F31550E7B84064D7C3D5F3 (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0971D53E8CA564AF4767DB3D364DF8DC14E0B11F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// recognizer.Finished.AddListener(() => Debug.Log("Finished"));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0971D53E8CA564AF4767DB3D364DF8DC14E0B11F, NULL);
		return;
	}
}
// UnityEngine.UI.Dropdown/OptionData Recognissimo.Samples.SpeechRecognizerExample.SpeechRecognizerExample/<>c::<InitializeLanguageDropdown>b__10_0(UnityEngine.SystemLanguage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CInitializeLanguageDropdownU3Eb__10_0_m507609B99351DD1561876BEBB22C424CE9A0A1E5 (U3CU3Ec_t86C3827CCF6D094C34CC6EBF60F3DC7460BF7642* __this, int32_t ___language0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(language => new Dropdown.OptionData {text = language.ToString()})
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166(L_0, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_1 = L_0;
		Il2CppFakeBox<int32_t> L_2(SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var, (&___language0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		NullCheck(L_1);
		OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E_inline(L_1, L_3, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameboardCreatedArgs_get_Gameboard_mC056BCB5B2853BDEDAFC47B5E318174C1CE8A298_inline (GameboardCreatedArgs_t94D7234EAF40D6491A03B8451C5AA6F9825FEEB3* __this, const RuntimeMethod* method) 
{
	{
		// public IGameboard Gameboard { get; private set; }
		RuntimeObject* L_0 = __this->___U3CGameboardU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) 
{
	{
		// public IARSession Session { get; }
		RuntimeObject* L_0 = __this->___U3CSessionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameboardAgent_set_State_m68D62E3A5673C788540515612D68206426498E8B_inline (GameboardAgent_tEFF1DF461D4F8ED11A63A8A12939C572ACB49C93* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AgentNavigationState State { get; set; } = AgentNavigationState.Idle;
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BossemGameboardManager_get_Gameboard_m4B43BACD3BECF0833FC74A59E9EF70080BB71B23_inline (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, const RuntimeMethod* method) 
{
	{
		// public IGameboard Gameboard { get; private set; }
		RuntimeObject* L_0 = __this->___U3CGameboardU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityLifecycleDriver_get_AreFeaturesEnabled_m3A3853DC073EABB68A9F7C5DD75CB86EAD060A74_inline (UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708* __this, const RuntimeMethod* method) 
{
	{
		// return _areFeaturesEnabled;
		bool L_0 = __this->____areFeaturesEnabled_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BossemGameboardManager_set_Gameboard_m8BE54CB720603544F52D7C12A7F1DDE54092B2A3_inline (BossemGameboardManager_tE37B89E68AE1B71769E5EB0EAD03352F0EEADDCD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IGameboard Gameboard { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGameboardU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameboardU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) 
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = ___value0;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9F8336F78AE253BBA9080A0E176B4EB5915DAA88_gshared_inline (List_1_t5DD84171740534E27980249B42B230DF269891A2* __this, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F ___item0, const RuntimeMethod* method) 
{
	VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* L_1 = (VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		VoiceControlCommandU5BU5D_t44F9838EE6B3F907398FCE6871AF5FC0877339B7* L_6 = V_0;
		int32_t L_7 = V_1;
		VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F)L_8);
		return;
	}

IL_0034:
	{
		VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F L_9 = ___item0;
		((  void (*) (List_1_t5DD84171740534E27980249B42B230DF269891A2*, VoiceControlCommand_tF201843CA8F72C1CB874B4FC4634D6FBCD4CE66F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m59141EEE44E2955E630ABF585E850B95BE94EC15_gshared_inline (List_1_tF56A590631DD0A17BC1DCC8A00336928D09FAE8E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
