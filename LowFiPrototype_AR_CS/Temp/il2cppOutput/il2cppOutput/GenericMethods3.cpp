﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t43CAA7C036A3D1B90682708F7EB07B75E137663F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tACB55267A4440676D5E50F91141861E8359ABC5F;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tC8E2D23A5937714ABB338DF7C65563ABED65CF05;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_tADB64B0DE6EDBF8E9A8B2DFA59DAF94491BBEE93;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t694AB0BB5090818473AA9742BF34524DF94A1752;
// System.Collections.Generic.IEnumerable`1<Vuforia.CameraMode>
struct IEnumerable_1_t848056E37D41419DA01B4310ECF35B5CDA63FB1B;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/TrackableResultData>
struct IEnumerable_1_tEE24B61D96F5606F758B2628E518C75C1026AB08;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t2CE05980F8B9CC1149914C41DDAB66D7ABFC902A;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t9345A2C4627555419189CF853278DE7693A977BB;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2;
// Vuforia.IlluminationManager
struct IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.VuMarkManager
struct VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m8872B8E11241D58F194416C5A752EFAC84BC6386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB997025AD1AA1AB974A3C9F3B6D8D545863687DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m663B4FDC578DB8136925CB1EBF9C023380CAEAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_m2C80338C3467FFC454C3E8E844DB4CEDEEE63F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3A0F04979664EE9319DC8A6B6B7D39EF2DE174DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m8872B8E11241D58F194416C5A752EFAC84BC6386_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB997025AD1AA1AB974A3C9F3B6D8D545863687DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m663B4FDC578DB8136925CB1EBF9C023380CAEAD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisRuntimeObject_m2C80338C3467FFC454C3E8E844DB4CEDEEE63F52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3A0F04979664EE9319DC8A6B6B7D39EF2DE174DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m18C28A78A4561DF19D73B202D73655B66B89EB7A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___entries_1)); }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___keys_7)); }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___values_8)); }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Linq.Enumerable
struct  Enumerable_tECC271C86C6E8F72E4E27C7C8FD5DB7B63D5D737  : public RuntimeObject
{
public:

public:
};


// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// Vuforia.StateManager
struct  StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * ___mIlluminationManager_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mVuMarkManager_4)); }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_7() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mIlluminationManager_7)); }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * get_mIlluminationManager_7() const { return ___mIlluminationManager_7; }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 ** get_address_of_mIlluminationManager_7() { return &___mIlluminationManager_7; }
	inline void set_mIlluminationManager_7(IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * value)
	{
		___mIlluminationManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_7), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Buffer`1<System.Int32>
struct  Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2, ___items_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_items_0() const { return ___items_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Int32Enum>
struct  Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80, ___items_0)); }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* get_items_0() const { return ___items_0; }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Object>
struct  Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C, ___items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_items_0() const { return ___items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<System.Single>
struct  Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F, ___items_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_items_0() const { return ___items_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Vuforia.CameraMode
#pragma pack(push, tp, 1)
struct  CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04 
{
public:
	// System.Int32 Vuforia.CameraMode::Width
	int32_t ___Width_0;
	// System.Int32 Vuforia.CameraMode::Height
	int32_t ___Height_1;
	// System.Int32 Vuforia.CameraMode::Fps
	int32_t ___Fps_2;
	// System.Int32 Vuforia.CameraMode::Format
	int32_t ___Format_3;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04, ___Height_1)); }
	inline int32_t get_Height_1() const { return ___Height_1; }
	inline int32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(int32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_Fps_2() { return static_cast<int32_t>(offsetof(CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04, ___Fps_2)); }
	inline int32_t get_Fps_2() const { return ___Fps_2; }
	inline int32_t* get_address_of_Fps_2() { return &___Fps_2; }
	inline void set_Fps_2(int32_t value)
	{
		___Fps_2 = value;
	}

	inline static int32_t get_offset_of_Format_3() { return static_cast<int32_t>(offsetof(CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04, ___Format_3)); }
	inline int32_t get_Format_3() const { return ___Format_3; }
	inline int32_t* get_address_of_Format_3() { return &___Format_3; }
	inline void set_Format_3(int32_t value)
	{
		___Format_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.DatasetTracker
struct  DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mActiveDataSets_1)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mDataSets_2)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct  VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * ___mRuntimeImageSource_5;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_5() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mRuntimeImageSource_5)); }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * get_mRuntimeImageSource_5() const { return ___mRuntimeImageSource_5; }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E ** get_address_of_mRuntimeImageSource_5() { return &___mRuntimeImageSource_5; }
	inline void set_mRuntimeImageSource_5(RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * value)
	{
		___mRuntimeImageSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_5), (void*)value);
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfo
struct  StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData_PoseData
#pragma pack(push, tp, 1)
struct  PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData_PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData_PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};


// Vuforia.TrackerData_TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_TrackableResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_VuMarkTargetResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData_VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_Status>
struct  Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t9345A2C4627555419189CF853278DE7693A977BB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Linq.Buffer`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782_gshared (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A_gshared (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0_gshared (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Int32Enum>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA_gshared (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C_gshared (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656_gshared (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB_gshared (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28_gshared (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7 (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentOutOfRange_mACFCB068F4E0C4EEF9E6EDDD59E798901C32C6C9 (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136 (const RuntimeMethod* method);
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623 (const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782 (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Int32>::ToArray()
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *, const RuntimeMethod*))Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0 (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Int32Enum>::ToArray()
inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 * __this, const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* (*) (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *, const RuntimeMethod*))Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656 (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *, const RuntimeMethod*))Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656_gshared)(__this, method);
}
// System.Void System.Linq.Buffer`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Single>::ToArray()
inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28 (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*) (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *, const RuntimeMethod*))Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7 (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1 (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// TSource System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = ___index1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___index1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Exception_t * L_8 = Error_ArgumentOutOfRange_mACFCB068F4E0C4EEF9E6EDDD59E798901C32C6C9((String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_RuntimeMethod_var);
	}

IL_002f:
	{
		RuntimeObject* L_9 = ___source0;
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_9);
		V_1 = (RuntimeObject*)L_10;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			NullCheck((RuntimeObject*)L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			if (L_12)
			{
				goto IL_0049;
			}
		}

IL_003e:
		{
			Exception_t * L_13 = Error_ArgumentOutOfRange_mACFCB068F4E0C4EEF9E6EDDD59E798901C32C6C9((String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, Enumerable_ElementAt_TisRuntimeObject_m6B8C029E4C6C4BDF09AE614DE81BC921788D820E_RuntimeMethod_var);
		}

IL_0049:
		{
			int32_t L_14 = ___index1;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_004c:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			RuntimeObject * L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_15);
			V_2 = (RuntimeObject *)L_16;
			IL2CPP_LEAVE(0x66, FINALLY_005c);
		}

IL_0055:
		{
			int32_t L_17 = ___index1;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_1;
			if (!L_18)
			{
				goto IL_0065;
			}
		}

IL_005f:
		{
			RuntimeObject* L_19 = V_1;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(92)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		RuntimeObject * L_20 = V_2;
		return L_20;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		RuntimeObject * L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x53, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		Exception_t * L_16 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, Enumerable_First_TisRuntimeObject_mD20A777892721EEC3DC95787BF993303BED9368F_RuntimeMethod_var);
	}

IL_0053:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::First<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Vuforia.TrackerData/TrackableResultData>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_7 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Vuforia.TrackerData/TrackableResultData>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/TrackableResultData>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_13 = InterfaceFuncInvoker0< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackerData/TrackableResultData>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_13;
			IL2CPP_LEAVE(0x53, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		Exception_t * L_16 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, Enumerable_First_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_mEEA1BBE9B50DD1AFC37AAE6E268367988B4C8159_RuntimeMethod_var);
	}

IL_0053:
	{
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m8872B8E11241D58F194416C5A752EFAC84BC6386_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m8872B8E11241D58F194416C5A752EFAC84BC6386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_FirstOrDefault_TisRuntimeObject_m8872B8E11241D58F194416C5A752EFAC84BC6386_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		RuntimeObject * L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6, (int32_t)0);
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0038:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x57, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}

IL_0057:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_FirstOrDefault_TisRuntimeObject_m0820069398359F32906C629A7325DA82BAEDFBBC_RuntimeMethod_var);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_0 = (RuntimeObject*)L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_1 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_1;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0039;
			}
		}

IL_0035:
		{
			RuntimeObject * L_11 = V_1;
			V_2 = (RuntimeObject *)L_11;
			IL2CPP_LEAVE(0x57, FINALLY_0043);
		}

IL_0039:
		{
			RuntimeObject* L_12 = V_0;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (L_13)
			{
				goto IL_0025;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}

IL_0057:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((RuntimeObject*)L_7);
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		return L_9;
	}

IL_002d:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_10);
		V_2 = (RuntimeObject*)L_11;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (!L_13)
			{
				goto IL_0050;
			}
		}

IL_003c:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck((RuntimeObject*)L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_14);
			V_3 = (RuntimeObject *)L_15;
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_003c;
			}
		}

IL_004b:
		{
			RuntimeObject * L_18 = V_3;
			V_4 = (RuntimeObject *)L_18;
			IL2CPP_LEAVE(0x62, FINALLY_0052);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck((RuntimeObject*)L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		Exception_t * L_21 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_Last_TisRuntimeObject_m58EABF611EFF71AA84487083A4BDD34C72FE92D4_RuntimeMethod_var);
	}

IL_0062:
	{
		RuntimeObject * L_22 = V_4;
		return L_22;
	}
}
// TSource System.Linq.Enumerable::Last<Vuforia.CameraMode>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Vuforia.CameraMode>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((RuntimeObject*)L_7);
		CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  L_9 = InterfaceFuncInvoker1< CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Vuforia.CameraMode>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		return L_9;
	}

IL_002d:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck((RuntimeObject*)L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.CameraMode>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_10);
		V_2 = (RuntimeObject*)L_11;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			NullCheck((RuntimeObject*)L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (!L_13)
			{
				goto IL_0050;
			}
		}

IL_003c:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck((RuntimeObject*)L_14);
			CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  L_15 = InterfaceFuncInvoker0< CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.CameraMode>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_14);
			V_3 = (CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04 )L_15;
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_003c;
			}
		}

IL_004b:
		{
			CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  L_18 = V_3;
			V_4 = (CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04 )L_18;
			IL2CPP_LEAVE(0x62, FINALLY_0052);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck((RuntimeObject*)L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		Exception_t * L_21 = Error_NoElements_m17188AC2CF25EB359A4E1DDE9518A98598791136(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_Last_TisCameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04_mE9855FFD576F5FE679C0616D0EAE22B688F1AA45_RuntimeMethod_var);
	}

IL_0062:
	{
		CameraMode_t458356EAE84D3798C20C75CA95FAF4A21DA48D04  L_22 = V_4;
		return L_22;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_001c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		V_1 = (int64_t)(((int64_t)((int64_t)0)));
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_2 = (RuntimeObject*)L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0030:
		{
			RuntimeObject* L_6 = V_2;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_3 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_3;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			RuntimeObject * L_11 = V_3;
			V_0 = (RuntimeObject *)L_11;
			int64_t L_12 = V_1;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
			V_1 = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_0047:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0030;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		int64_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		int64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0072;
	}

IL_0065:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_19 = V_4;
		return L_19;
	}

IL_0070:
	{
		RuntimeObject * L_20 = V_0;
		return L_20;
	}

IL_0072:
	{
		Exception_t * L_21 = Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m663B4FDC578DB8136925CB1EBF9C023380CAEAD2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m663B4FDC578DB8136925CB1EBF9C023380CAEAD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m663B4FDC578DB8136925CB1EBF9C023380CAEAD2_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_m0CE9121B518F16084DE99B4E1624BBBCEA0E1782((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 )L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = Buffer_1_ToArray_mC5DCD85B5DC4FD7B6D5DC32954278313976AEF8A((Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *)(Buffer_1_tD44456F9E8EC1320F27AACE8C70545A71A5323A2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB997025AD1AA1AB974A3C9F3B6D8D545863687DF_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB997025AD1AA1AB974A3C9F3B6D8D545863687DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB997025AD1AA1AB974A3C9F3B6D8D545863687DF_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_m4D4FE7CE85A4F5B2D563E7E0B7F82919B41528A0((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 )L_3;
		Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* L_4 = Buffer_1_ToArray_m5548E9619BDC6B0F5AFD1061935657BFF387AAAA((Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *)(Buffer_1_tC94FD2D48C4F8C1FBF3F2AF9BAB7232D44D63D80 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m2C80338C3467FFC454C3E8E844DB4CEDEEE63F52_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisRuntimeObject_m2C80338C3467FFC454C3E8E844DB4CEDEEE63F52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisRuntimeObject_m2C80338C3467FFC454C3E8E844DB4CEDEEE63F52_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_mFC593D644243CEC302C442E4AA893955A7EA307C((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C )L_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = Buffer_1_ToArray_m8464C83D3CD990F32379CB62618CE2A9C9D1C656((Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *)(Buffer_1_t2CE96CAF247505180F566E4C89694A9A03871D7C *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3A0F04979664EE9319DC8A6B6B7D39EF2DE174DB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3A0F04979664EE9319DC8A6B6B7D39EF2DE174DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3A0F04979664EE9319DC8A6B6B7D39EF2DE174DB_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_mCAC07E4C69112D048B71646B9572F8F0899681EB((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F )L_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = Buffer_1_ToArray_m4ABDD0BB2F2B33530EE285D90B9ADFE2E5C78D28((Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *)(Buffer_1_t608147747987B9CDDC506C9A8C2FEBB0AF53278F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_4;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m65245601C668347780A2F6D1A8D7EEC7D79AD673_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject * L_1 = ___key1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_3;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		RuntimeObject * L_3 = ___key1;
		NullCheck((RuntimeObject*)L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2, (RuntimeObject *)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_5 = ___defaultValue2;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mDC1D023FE07F73E1E8433D1E896D5F1250180C10_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m0CC69E8EA623EF987CBC66C5F1BC7711712287CB_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m47600682044DD98895C5990A94AC982C05645DC3_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m4C178287A7D9F411324F0D20D7214B40AC502A26_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m01E28A4D3B917F1FA3F71B47CD03D20F47CA3584_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m72CF8BBE548B570F27C87B6900191B9BC58FCA73_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_m4B3891162A682BB637507D7D7529AFA4F0C80CE3_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_10 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_mA88E7613D69601BA856B9A2C4308B927F7486944_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_3 = ((  ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_m8ED35A012018D4438C73F6D29FBC13CDEC95833F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)((ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_10 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m6D8AF77439E7F5AD3656075625D18D191068C09F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m083189084CF765FF8179220A926820E814D85F56_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mEADBC5B21EE5EA79F60D83CCD98B1BE0E5C03752_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_10 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = V_2;
		return L_11;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_2;
		return L_15;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_mFA4B67A9C181FA996A67A619C76E187C12933FDD_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_0 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m18C28A78A4561DF19D73B202D73655B66B89EB7A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m18C28A78A4561DF19D73B202D73655B66B89EB7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8, /*hidden argument*/NULL);
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_10 = ___obj0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_19;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_2 = Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_3;
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		intptr_t L_4 = Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		int64_t L_6 = Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_8 = ((  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_5, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_6/(int64_t)(((int64_t)((int64_t)L_7)))))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_8;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = V_1;
		V_3 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_10 = V_3;
		return L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14);
		int32_t L_15 = List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14, /*hidden argument*/List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_gshared (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_002d;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_002d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_5 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5);
		bool L_8 = Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5, (Type_t *)L_7, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck((RuntimeObject*)L_9);
		intptr_t L_11 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(107 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (int32_t)L_10);
		V_2 = (intptr_t)L_11;
		intptr_t L_12 = V_2;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_006b:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_16, /*hidden argument*/NULL);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_15, (Type_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_19 = V_2;
		ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * L_20 = (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 *)il2cpp_codegen_object_new(ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1(L_20, (intptr_t)L_19, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_20;
	}

IL_008d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_21 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		Type_t * L_23 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_22, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_24 = V_0;
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21);
		Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21, (Type_t *)L_23, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_24, /*hidden argument*/Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var);
	}

IL_009f:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_25 = V_0;
		return L_25;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m34680F576B6F65E63B55C78557E632C82933F0CC_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m9E595C9E16CE48D868DA1E2D28B606B9A2F3ABC5_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t9345A2C4627555419189CF853278DE7693A977BB * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t9345A2C4627555419189CF853278DE7693A977BB * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t9345A2C4627555419189CF853278DE7693A977BB *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE_m8A51714769F1CF0F89FF3C0AE0EFC3B28414B6B8_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *, VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3, (VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_m2D5D65EE543C7D597BB5A15970948AEA99480704_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m97A6B43AFA084BEC5979CA58AC21EBB171588D40_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
