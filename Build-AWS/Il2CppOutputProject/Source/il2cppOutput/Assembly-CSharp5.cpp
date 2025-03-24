#include "il2cpp-config.h"

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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// LocomotionController
struct LocomotionController_tA907F9E139EBDD71711738652E6B15242831F03C;
// LocomotionTeleport
struct LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60;
// LocomotionTeleport/AimData
struct AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tD285FEDDDE878F05D7118B16004C6E5A50DB5FE0;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>
struct Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_tF2B8D497997828882EE68F6091D09258D33BCAE6;
// Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>
struct Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707;
// Oculus.Platform.Message`1<System.Object>
struct Message_1_t7CA4D6382E61BD402083B1A5D7E5320C2CA38381;
// Oculus.Platform.Models.Error
struct Error_t76CC0AAD333443873F5F59C518D5DFD20705DFDD;
// Oculus.Platform.Models.NetworkingPeer
struct NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5;
// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t6F5E0F248DA988D1AA75A0002A6359F5A68540B6;
// OvrAvatar
struct OvrAvatar_t16147A7696D14D9247B552357FDF3BF5C3F8DD7B;
// OvrAvatarAsset
struct OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7;
// RemotePlayer
struct RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<LocomotionTeleport/AimData>
struct Action_1_tC61630CFDAE4C1FF52EEEF9511C9247A9034C500;
// System.Action`3<UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion>
struct Action_3_tCB8DDC66911F91B32CCE6F69169873E3C1A69A74;
// System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>>
struct Action_4_tBC197DC1F875F378C032800413E9B90C86C0E86B;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
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
// TeleportAimHandler
struct TeleportAimHandler_t42D9AABB16D2C76E8C5D54E5690BECC7C7F9F26F;
// TeleportDestination
struct TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D;
// TeleportInputHandler
struct TeleportInputHandler_t5490F63C64553F46BD71E577FF8AF187C8010FD4;
// TeleportPoint
struct TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887;
// TeleportSupport
struct TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC;
// TeleportTargetHandler
struct TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50;
// TeleportTargetHandlerNode
struct TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368;
// TeleportTargetHandlerPhysical
struct TeleportTargetHandlerPhysical_tF0B011AC6E536FAD45AD50B25B41FB8D5D7F0AFE;
// TeleportTransition
struct TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69;
// TeleportTransitionBlink
struct TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68;
// TeleportTransitionBlink/<BlinkCoroutine>d__4
struct U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66;
// TeleportTransitionInstant
struct TeleportTransitionInstant_tE356C07FACE346A5E927770EB19E2C88BF384FA5;
// TeleportTransitionWarp
struct TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3;
// TeleportTransitionWarp/<DoWarp>d__3
struct U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// VoipManager
struct VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167;
// assetLoadedCallback
struct assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022;
// combinedMeshLoadedCallback
struct combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36;
// ovrAvatarGazeTarget[]
struct ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64;
// ovrAvatarLight[]
struct ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A;
// ovrAvatarMaterialLayerState[]
struct ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069;
// ovrAvatarMaterialState
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849;
// ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4;
// ovrAvatarTransform[]
struct ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D;
// specificationCallback
struct specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerConnectionState_t0755C44D771E33AE60014810A0AE4E2E75ADA49C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral072E37390BC5C9545A3EE238425021DFE1CCBDE4;
IL2CPP_EXTERN_C String_t* _stringLiteral0DDE60391A06CE9DA77F770C3B21E274A8C3D4A6;
IL2CPP_EXTERN_C String_t* _stringLiteral1D08358AFC492F61116C510CFA10A1621F8D7FFD;
IL2CPP_EXTERN_C String_t* _stringLiteral1E4911ABB800741B11468DABA3E93833B61396E4;
IL2CPP_EXTERN_C String_t* _stringLiteral20C4039A192B265C0814B11D2CAE16D6B96449FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2E19F154E8D7A1F153AB9485170C3AD85A7C25DD;
IL2CPP_EXTERN_C String_t* _stringLiteral33AB2E3C6F59116175C618B36501AC67FCDEFED6;
IL2CPP_EXTERN_C String_t* _stringLiteral34D550090CBDAB8A6E2ED303EC074BC544F7F32D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D55AF37DBBB6A42088D917CAA1CA25428EC42C9;
IL2CPP_EXTERN_C String_t* _stringLiteral5178270A987BCF5BDBA02FE80BFE741DFEAD26F2;
IL2CPP_EXTERN_C String_t* _stringLiteral54AA76CCF74AD157FB3728BC89C0E6450373ACF1;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6EAE48584890A9F1AEA437B70FF22AF965E9059D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BA9FB4E38E8CCDE6C7D9B19354DD1646B4664D;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral9367742C0B53C6327A75AFFB316C1633CA66A8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9C7B9AC3D1E6A51E1561D9BD6E6A391B6B4937A3;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB97A033E30C7649FDED5C94BB8911061ED0E50;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD254D7C7C06DAB2E99442830BE0A97A03A9D0FB6;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155;
IL2CPP_EXTERN_C String_t* _stringLiteralE181B7EB3C1441D7B03757FEE72535796CA5F535;
IL2CPP_EXTERN_C String_t* _stringLiteralE33C13105DDF43300A8FC0B1BA9DBEDFC3D3C24D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE0FEE0969C8D615632209D75BA73314C7BDE12;
IL2CPP_EXTERN_C String_t* _stringLiteralF12EC3B4078ADF6E41DD8C0740F51697EE7E5E24;
IL2CPP_EXTERN_C String_t* _stringLiteralF60E03378128CC91BB8F5446D8243E0BD79E5A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralFEADE4954EC0DC16315D51C6D892DFEA6E762A18;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887_m737BB3A97521F30418B3E1E4FFE86F13D7F8BE3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mE852436EDC0E88EBAD3F4F5FFC4E7E0D31E28D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_m628A26932C9AC1A559B414638A775B0AA1466578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoipManager_VoipConnectRequestCallback_m55432C04D827F6F75FA39642FA44C9DA9739012C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoipManager_VoipStateChangedCallback_m9047934DAA7965D92B7093B72D147520F2FA21A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t TeleportTargetHandlerNode_ConsiderTeleport_m54A45F201FA81DFD61D7E2E1EE21A19E1B464855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTargetHandlerPhysical_ConsiderTeleport_m6A772B57A5978B6A75D64D13D4753EE088C5D0D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTransitionBlink_BlinkCoroutine_m5B178290BBDA95E7F65320142AA299810BA4DA53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTransitionBlink__ctor_mB58C9D33137F82734916A7FCA42F8A9C7236FA9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTransitionWarp_DoWarp_m9399859102B3C797C388171A558EA64905C921AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTransition_AddEventHandlers_m66DD556F57D4787BF093872D63A5C726881B6070_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TeleportTransition_RemoveEventHandlers_m4954A888112EC9E505D71D9466FE7066F0AC5A7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mE852436EDC0E88EBAD3F4F5FFC4E7E0D31E28D36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_m628A26932C9AC1A559B414638A775B0AA1466578_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoipManager_ConnectTo_m16B754924A87B966BB287C94299328109ECDCA23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoipManager_Disconnect_m9A2505E76FB17623084F81B7B19AED155A750E4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoipManager_VoipConnectRequestCallback_m55432C04D827F6F75FA39642FA44C9DA9739012C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoipManager_VoipStateChangedCallback_m9047934DAA7965D92B7093B72D147520F2FA21A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoipManager__ctor_mCF8AB0BD831EC0EF61A71ACBD5170D64D02202C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t combinedMeshLoadedCallback_BeginInvoke_mB23505405F5A6241F07BEA92F111AFC848BAD16A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarBlendShapeParams_Offsets__cctor_m87C94EC1DC83D32B2D574C25556C940A07DD19D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarBodyComponent_Offsets__cctor_m7EC217D476CC0FA5F6225D6C90E50C2A56E72841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarComponent_Offsets__cctor_mA4937997A56C0EADA5BE1BE5AD926DB094FE92BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarGazeTarget_Offsets__cctor_m73745ABCC67959CF37A29A938941DF7529DE9242_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarGazeTargets_Offsets__cctor_m0ADAF7C94330E70C34A69A64AF314B1464D55240_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarLight_Offsets__cctor_m51A00DD51754A525736947B9E55BAD0CA861337D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarLights_Offsets__cctor_m27749AD79C46EDF9BBFC79B0EF0ED713E436D6A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarVisemes_Offsets__cctor_m59530B2B1128568A33E28EAB8032C11EB87FDBFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t specificationCallback_BeginInvoke_mCC5A7E70EC78E7FFE7E4D60A6ADC558642581628_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F ;
struct ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C ;
struct ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF ;
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849;;
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com;
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com;;
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke;
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke;;
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4;;
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com;
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com;;
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke;
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke;;
struct ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 ;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
struct ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64;
struct ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A;
struct ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069;
struct ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// OvrAvatarAsset
struct  OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7  : public RuntimeObject
{
public:
	// System.UInt64 OvrAvatarAsset::assetID
	uint64_t ___assetID_0;

public:
	inline static int32_t get_offset_of_assetID_0() { return static_cast<int32_t>(offsetof(OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7, ___assetID_0)); }
	inline uint64_t get_assetID_0() const { return ___assetID_0; }
	inline uint64_t* get_address_of_assetID_0() { return &___assetID_0; }
	inline void set_assetID_0(uint64_t value)
	{
		___assetID_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// TeleportTransitionBlink_<BlinkCoroutine>d__4
struct  U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66  : public RuntimeObject
{
public:
	// System.Int32 TeleportTransitionBlink_<BlinkCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportTransitionBlink_<BlinkCoroutine>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportTransitionBlink TeleportTransitionBlink_<BlinkCoroutine>d__4::<>4__this
	TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * ___U3CU3E4__this_2;
	// System.Single TeleportTransitionBlink_<BlinkCoroutine>d__4::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
	// System.Single TeleportTransitionBlink_<BlinkCoroutine>d__4::<teleportTime>5__3
	float ___U3CteleportTimeU3E5__3_4;
	// System.Boolean TeleportTransitionBlink_<BlinkCoroutine>d__4::<teleported>5__4
	bool ___U3CteleportedU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CU3E4__this_2)); }
	inline TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CteleportTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CteleportTimeU3E5__3_4)); }
	inline float get_U3CteleportTimeU3E5__3_4() const { return ___U3CteleportTimeU3E5__3_4; }
	inline float* get_address_of_U3CteleportTimeU3E5__3_4() { return &___U3CteleportTimeU3E5__3_4; }
	inline void set_U3CteleportTimeU3E5__3_4(float value)
	{
		___U3CteleportTimeU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CteleportedU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66, ___U3CteleportedU3E5__4_5)); }
	inline bool get_U3CteleportedU3E5__4_5() const { return ___U3CteleportedU3E5__4_5; }
	inline bool* get_address_of_U3CteleportedU3E5__4_5() { return &___U3CteleportedU3E5__4_5; }
	inline void set_U3CteleportedU3E5__4_5(bool value)
	{
		___U3CteleportedU3E5__4_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// VectorUtil
struct  VectorUtil_t8D57D2467C9EB2D7EE79049E9D6836ACC198FF6C  : public RuntimeObject
{
public:

public:
};


// VoipManager
struct  VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167  : public RuntimeObject
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
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

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// ovrAvatarBlendShapeParams_Offsets
struct  ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C__padding[1];
	};

public:
};

struct ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_StaticFields
{
public:
	// System.Int32 ovrAvatarBlendShapeParams_Offsets::blendShapeParamCount
	int32_t ___blendShapeParamCount_0;
	// System.Int64 ovrAvatarBlendShapeParams_Offsets::blendShapeParams
	int64_t ___blendShapeParams_1;

public:
	inline static int32_t get_offset_of_blendShapeParamCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_StaticFields, ___blendShapeParamCount_0)); }
	inline int32_t get_blendShapeParamCount_0() const { return ___blendShapeParamCount_0; }
	inline int32_t* get_address_of_blendShapeParamCount_0() { return &___blendShapeParamCount_0; }
	inline void set_blendShapeParamCount_0(int32_t value)
	{
		___blendShapeParamCount_0 = value;
	}

	inline static int32_t get_offset_of_blendShapeParams_1() { return static_cast<int32_t>(offsetof(ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_StaticFields, ___blendShapeParams_1)); }
	inline int64_t get_blendShapeParams_1() const { return ___blendShapeParams_1; }
	inline int64_t* get_address_of_blendShapeParams_1() { return &___blendShapeParams_1; }
	inline void set_blendShapeParams_1(int64_t value)
	{
		___blendShapeParams_1 = value;
	}
};


// ovrAvatarBlendVertex
struct  ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE 
{
public:
	// System.Single ovrAvatarBlendVertex::x
	float ___x_0;
	// System.Single ovrAvatarBlendVertex::y
	float ___y_1;
	// System.Single ovrAvatarBlendVertex::z
	float ___z_2;
	// System.Single ovrAvatarBlendVertex::nx
	float ___nx_3;
	// System.Single ovrAvatarBlendVertex::ny
	float ___ny_4;
	// System.Single ovrAvatarBlendVertex::nz
	float ___nz_5;
	// System.Single ovrAvatarBlendVertex::tx
	float ___tx_6;
	// System.Single ovrAvatarBlendVertex::ty
	float ___ty_7;
	// System.Single ovrAvatarBlendVertex::tz
	float ___tz_8;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_nx_3() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___nx_3)); }
	inline float get_nx_3() const { return ___nx_3; }
	inline float* get_address_of_nx_3() { return &___nx_3; }
	inline void set_nx_3(float value)
	{
		___nx_3 = value;
	}

	inline static int32_t get_offset_of_ny_4() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___ny_4)); }
	inline float get_ny_4() const { return ___ny_4; }
	inline float* get_address_of_ny_4() { return &___ny_4; }
	inline void set_ny_4(float value)
	{
		___ny_4 = value;
	}

	inline static int32_t get_offset_of_nz_5() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___nz_5)); }
	inline float get_nz_5() const { return ___nz_5; }
	inline float* get_address_of_nz_5() { return &___nz_5; }
	inline void set_nz_5(float value)
	{
		___nz_5 = value;
	}

	inline static int32_t get_offset_of_tx_6() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___tx_6)); }
	inline float get_tx_6() const { return ___tx_6; }
	inline float* get_address_of_tx_6() { return &___tx_6; }
	inline void set_tx_6(float value)
	{
		___tx_6 = value;
	}

	inline static int32_t get_offset_of_ty_7() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___ty_7)); }
	inline float get_ty_7() const { return ___ty_7; }
	inline float* get_address_of_ty_7() { return &___ty_7; }
	inline void set_ty_7(float value)
	{
		___ty_7 = value;
	}

	inline static int32_t get_offset_of_tz_8() { return static_cast<int32_t>(offsetof(ovrAvatarBlendVertex_tA35C297C0FBE7A9F26C18D121DFCA411ECC63FCE, ___tz_8)); }
	inline float get_tz_8() const { return ___tz_8; }
	inline float* get_address_of_tz_8() { return &___tz_8; }
	inline void set_tz_8(float value)
	{
		___tz_8 = value;
	}
};


// ovrAvatarBodyComponent_Offsets
struct  ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66__padding[1];
	};

public:
};

struct ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields
{
public:
	// System.Int64 ovrAvatarBodyComponent_Offsets::leftEyeTransform
	int64_t ___leftEyeTransform_0;
	// System.Int64 ovrAvatarBodyComponent_Offsets::rightEyeTransform
	int64_t ___rightEyeTransform_1;
	// System.Int64 ovrAvatarBodyComponent_Offsets::centerEyeTransform
	int64_t ___centerEyeTransform_2;
	// System.Int64 ovrAvatarBodyComponent_Offsets::renderComponent
	int64_t ___renderComponent_3;

public:
	inline static int32_t get_offset_of_leftEyeTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields, ___leftEyeTransform_0)); }
	inline int64_t get_leftEyeTransform_0() const { return ___leftEyeTransform_0; }
	inline int64_t* get_address_of_leftEyeTransform_0() { return &___leftEyeTransform_0; }
	inline void set_leftEyeTransform_0(int64_t value)
	{
		___leftEyeTransform_0 = value;
	}

	inline static int32_t get_offset_of_rightEyeTransform_1() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields, ___rightEyeTransform_1)); }
	inline int64_t get_rightEyeTransform_1() const { return ___rightEyeTransform_1; }
	inline int64_t* get_address_of_rightEyeTransform_1() { return &___rightEyeTransform_1; }
	inline void set_rightEyeTransform_1(int64_t value)
	{
		___rightEyeTransform_1 = value;
	}

	inline static int32_t get_offset_of_centerEyeTransform_2() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields, ___centerEyeTransform_2)); }
	inline int64_t get_centerEyeTransform_2() const { return ___centerEyeTransform_2; }
	inline int64_t* get_address_of_centerEyeTransform_2() { return &___centerEyeTransform_2; }
	inline void set_centerEyeTransform_2(int64_t value)
	{
		___centerEyeTransform_2 = value;
	}

	inline static int32_t get_offset_of_renderComponent_3() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields, ___renderComponent_3)); }
	inline int64_t get_renderComponent_3() const { return ___renderComponent_3; }
	inline int64_t* get_address_of_renderComponent_3() { return &___renderComponent_3; }
	inline void set_renderComponent_3(int64_t value)
	{
		___renderComponent_3 = value;
	}
};


// ovrAvatarComponent_Offsets
struct  ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3__padding[1];
	};

public:
};

struct ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields
{
public:
	// System.Int64 ovrAvatarComponent_Offsets::transform
	int64_t ___transform_0;
	// System.Int32 ovrAvatarComponent_Offsets::renderPartCount
	int32_t ___renderPartCount_1;
	// System.Int32 ovrAvatarComponent_Offsets::renderParts
	int32_t ___renderParts_2;
	// System.Int32 ovrAvatarComponent_Offsets::name
	int32_t ___name_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields, ___transform_0)); }
	inline int64_t get_transform_0() const { return ___transform_0; }
	inline int64_t* get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(int64_t value)
	{
		___transform_0 = value;
	}

	inline static int32_t get_offset_of_renderPartCount_1() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields, ___renderPartCount_1)); }
	inline int32_t get_renderPartCount_1() const { return ___renderPartCount_1; }
	inline int32_t* get_address_of_renderPartCount_1() { return &___renderPartCount_1; }
	inline void set_renderPartCount_1(int32_t value)
	{
		___renderPartCount_1 = value;
	}

	inline static int32_t get_offset_of_renderParts_2() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields, ___renderParts_2)); }
	inline int32_t get_renderParts_2() const { return ___renderParts_2; }
	inline int32_t* get_address_of_renderParts_2() { return &___renderParts_2; }
	inline void set_renderParts_2(int32_t value)
	{
		___renderParts_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields, ___name_3)); }
	inline int32_t get_name_3() const { return ___name_3; }
	inline int32_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(int32_t value)
	{
		___name_3 = value;
	}
};


// ovrAvatarGazeTarget_Offsets
struct  ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F__padding[1];
	};

public:
};

struct ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields
{
public:
	// System.Int32 ovrAvatarGazeTarget_Offsets::id
	int32_t ___id_0;
	// System.Int32 ovrAvatarGazeTarget_Offsets::worldPosition
	int32_t ___worldPosition_1;
	// System.Int32 ovrAvatarGazeTarget_Offsets::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_worldPosition_1() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields, ___worldPosition_1)); }
	inline int32_t get_worldPosition_1() const { return ___worldPosition_1; }
	inline int32_t* get_address_of_worldPosition_1() { return &___worldPosition_1; }
	inline void set_worldPosition_1(int32_t value)
	{
		___worldPosition_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};


// ovrAvatarGazeTargets_Offsets
struct  ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5__padding[1];
	};

public:
};

struct ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_StaticFields
{
public:
	// System.Int32 ovrAvatarGazeTargets_Offsets::targetCount
	int32_t ___targetCount_0;
	// System.Int64 ovrAvatarGazeTargets_Offsets::targets
	int64_t ___targets_1;

public:
	inline static int32_t get_offset_of_targetCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_StaticFields, ___targetCount_0)); }
	inline int32_t get_targetCount_0() const { return ___targetCount_0; }
	inline int32_t* get_address_of_targetCount_0() { return &___targetCount_0; }
	inline void set_targetCount_0(int32_t value)
	{
		___targetCount_0 = value;
	}

	inline static int32_t get_offset_of_targets_1() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_StaticFields, ___targets_1)); }
	inline int64_t get_targets_1() const { return ___targets_1; }
	inline int64_t* get_address_of_targets_1() { return &___targets_1; }
	inline void set_targets_1(int64_t value)
	{
		___targets_1 = value;
	}
};


// ovrAvatarLight_Offsets
struct  ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2__padding[1];
	};

public:
};

struct ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields
{
public:
	// System.Int64 ovrAvatarLight_Offsets::id
	int64_t ___id_0;
	// System.Int64 ovrAvatarLight_Offsets::type
	int64_t ___type_1;
	// System.Int64 ovrAvatarLight_Offsets::intensity
	int64_t ___intensity_2;
	// System.Int64 ovrAvatarLight_Offsets::worldDirection
	int64_t ___worldDirection_3;
	// System.Int64 ovrAvatarLight_Offsets::worldPosition
	int64_t ___worldPosition_4;
	// System.Int64 ovrAvatarLight_Offsets::range
	int64_t ___range_5;
	// System.Int64 ovrAvatarLight_Offsets::spotAngleDeg
	int64_t ___spotAngleDeg_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___id_0)); }
	inline int64_t get_id_0() const { return ___id_0; }
	inline int64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___type_1)); }
	inline int64_t get_type_1() const { return ___type_1; }
	inline int64_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int64_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___intensity_2)); }
	inline int64_t get_intensity_2() const { return ___intensity_2; }
	inline int64_t* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(int64_t value)
	{
		___intensity_2 = value;
	}

	inline static int32_t get_offset_of_worldDirection_3() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___worldDirection_3)); }
	inline int64_t get_worldDirection_3() const { return ___worldDirection_3; }
	inline int64_t* get_address_of_worldDirection_3() { return &___worldDirection_3; }
	inline void set_worldDirection_3(int64_t value)
	{
		___worldDirection_3 = value;
	}

	inline static int32_t get_offset_of_worldPosition_4() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___worldPosition_4)); }
	inline int64_t get_worldPosition_4() const { return ___worldPosition_4; }
	inline int64_t* get_address_of_worldPosition_4() { return &___worldPosition_4; }
	inline void set_worldPosition_4(int64_t value)
	{
		___worldPosition_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___range_5)); }
	inline int64_t get_range_5() const { return ___range_5; }
	inline int64_t* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(int64_t value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_spotAngleDeg_6() { return static_cast<int32_t>(offsetof(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields, ___spotAngleDeg_6)); }
	inline int64_t get_spotAngleDeg_6() const { return ___spotAngleDeg_6; }
	inline int64_t* get_address_of_spotAngleDeg_6() { return &___spotAngleDeg_6; }
	inline void set_spotAngleDeg_6(int64_t value)
	{
		___spotAngleDeg_6 = value;
	}
};


// ovrAvatarLights_Offsets
struct  ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE__padding[1];
	};

public:
};

struct ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields
{
public:
	// System.Int64 ovrAvatarLights_Offsets::ambientIntensity
	int64_t ___ambientIntensity_0;
	// System.Int64 ovrAvatarLights_Offsets::lightCount
	int64_t ___lightCount_1;
	// System.Int64 ovrAvatarLights_Offsets::lights
	int64_t ___lights_2;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields, ___ambientIntensity_0)); }
	inline int64_t get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline int64_t* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(int64_t value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_lightCount_1() { return static_cast<int32_t>(offsetof(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields, ___lightCount_1)); }
	inline int64_t get_lightCount_1() const { return ___lightCount_1; }
	inline int64_t* get_address_of_lightCount_1() { return &___lightCount_1; }
	inline void set_lightCount_1(int64_t value)
	{
		___lightCount_1 = value;
	}

	inline static int32_t get_offset_of_lights_2() { return static_cast<int32_t>(offsetof(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields, ___lights_2)); }
	inline int64_t get_lights_2() const { return ___lights_2; }
	inline int64_t* get_address_of_lights_2() { return &___lights_2; }
	inline void set_lights_2(int64_t value)
	{
		___lights_2 = value;
	}
};


// ovrAvatarVisemes_Offsets
struct  ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8__padding[1];
	};

public:
};

struct ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_StaticFields
{
public:
	// System.Int32 ovrAvatarVisemes_Offsets::visemeParamCount
	int32_t ___visemeParamCount_0;
	// System.Int64 ovrAvatarVisemes_Offsets::visemeParams
	int64_t ___visemeParams_1;

public:
	inline static int32_t get_offset_of_visemeParamCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_StaticFields, ___visemeParamCount_0)); }
	inline int32_t get_visemeParamCount_0() const { return ___visemeParamCount_0; }
	inline int32_t* get_address_of_visemeParamCount_0() { return &___visemeParamCount_0; }
	inline void set_visemeParamCount_0(int32_t value)
	{
		___visemeParamCount_0 = value;
	}

	inline static int32_t get_offset_of_visemeParams_1() { return static_cast<int32_t>(offsetof(ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_StaticFields, ___visemeParams_1)); }
	inline int64_t get_visemeParams_1() const { return ___visemeParams_1; }
	inline int64_t* get_address_of_visemeParams_1() { return &___visemeParams_1; }
	inline void set_visemeParams_1(int64_t value)
	{
		___visemeParams_1 = value;
	}
};


// LocomotionTeleport_AimCollisionTypes
struct  AimCollisionTypes_t4CF21BFF0B7038DD926F8C548A26755780C4BFFF 
{
public:
	// System.Int32 LocomotionTeleport_AimCollisionTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AimCollisionTypes_t4CF21BFF0B7038DD926F8C548A26755780C4BFFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport_States
struct  States_t8416F711C3FBFA8E622CB6D5AF6D663070F5D97C 
{
public:
	// System.Int32 LocomotionTeleport_States::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(States_t8416F711C3FBFA8E622CB6D5AF6D663070F5D97C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport_TeleportIntentions
struct  TeleportIntentions_tFE9AFD079C76E14C44F1154EDE5CE3C51E7446F8 
{
public:
	// System.Int32 LocomotionTeleport_TeleportIntentions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportIntentions_tFE9AFD079C76E14C44F1154EDE5CE3C51E7446F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Message_MessageType
struct  MessageType_t47B12A28C6BF2A8D78FFEA44B2E19949C259F19B 
{
public:
	// System.UInt32 Oculus.Platform.Message_MessageType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t47B12A28C6BF2A8D78FFEA44B2E19949C259F19B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PeerConnectionState
struct  PeerConnectionState_t0755C44D771E33AE60014810A0AE4E2E75ADA49C 
{
public:
	// System.Int32 Oculus.Platform.PeerConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerConnectionState_t0755C44D771E33AE60014810A0AE4E2E75ADA49C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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

// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// TeleportTransitionWarp_<DoWarp>d__3
struct  U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B  : public RuntimeObject
{
public:
	// System.Int32 TeleportTransitionWarp_<DoWarp>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportTransitionWarp_<DoWarp>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportTransitionWarp TeleportTransitionWarp_<DoWarp>d__3::<>4__this
	TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 TeleportTransitionWarp_<DoWarp>d__3::<startPosition>5__2
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CstartPositionU3E5__2_3;
	// System.Single TeleportTransitionWarp_<DoWarp>d__3::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B, ___U3CU3E4__this_2)); }
	inline TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B, ___U3CstartPositionU3E5__2_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CstartPositionU3E5__2_3() const { return ___U3CstartPositionU3E5__2_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CstartPositionU3E5__2_3() { return &___U3CstartPositionU3E5__2_3; }
	inline void set_U3CstartPositionU3E5__2_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CstartPositionU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// ovrAvatarAssetLevelOfDetail
struct  ovrAvatarAssetLevelOfDetail_t8D1A0197E7C729F3C98807D40DBFF66A6397D07F 
{
public:
	// System.Int32 ovrAvatarAssetLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarAssetLevelOfDetail_t8D1A0197E7C729F3C98807D40DBFF66A6397D07F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarAssetType
struct  ovrAvatarAssetType_tA014668B4DDC5DD6432B895B64529E8549166399 
{
public:
	// System.Int32 ovrAvatarAssetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarAssetType_tA014668B4DDC5DD6432B895B64529E8549166399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarBaseComponent
struct  ovrAvatarBaseComponent_t4E4D544D209FF746BA6018188D80133BC9791B67 
{
public:
	// UnityEngine.Vector3 ovrAvatarBaseComponent::basePosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___basePosition_0;
	// System.IntPtr ovrAvatarBaseComponent::renderComponent
	intptr_t ___renderComponent_1;

public:
	inline static int32_t get_offset_of_basePosition_0() { return static_cast<int32_t>(offsetof(ovrAvatarBaseComponent_t4E4D544D209FF746BA6018188D80133BC9791B67, ___basePosition_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_basePosition_0() const { return ___basePosition_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_basePosition_0() { return &___basePosition_0; }
	inline void set_basePosition_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___basePosition_0 = value;
	}

	inline static int32_t get_offset_of_renderComponent_1() { return static_cast<int32_t>(offsetof(ovrAvatarBaseComponent_t4E4D544D209FF746BA6018188D80133BC9791B67, ___renderComponent_1)); }
	inline intptr_t get_renderComponent_1() const { return ___renderComponent_1; }
	inline intptr_t* get_address_of_renderComponent_1() { return &___renderComponent_1; }
	inline void set_renderComponent_1(intptr_t value)
	{
		___renderComponent_1 = value;
	}
};


// ovrAvatarBlendShapeParams
struct  ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE 
{
public:
	// System.UInt32 ovrAvatarBlendShapeParams::blendShapeParamCount
	uint32_t ___blendShapeParamCount_0;
	// System.Single[] ovrAvatarBlendShapeParams::blendShapeParams
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___blendShapeParams_1;

public:
	inline static int32_t get_offset_of_blendShapeParamCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE, ___blendShapeParamCount_0)); }
	inline uint32_t get_blendShapeParamCount_0() const { return ___blendShapeParamCount_0; }
	inline uint32_t* get_address_of_blendShapeParamCount_0() { return &___blendShapeParamCount_0; }
	inline void set_blendShapeParamCount_0(uint32_t value)
	{
		___blendShapeParamCount_0 = value;
	}

	inline static int32_t get_offset_of_blendShapeParams_1() { return static_cast<int32_t>(offsetof(ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE, ___blendShapeParams_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_blendShapeParams_1() const { return ___blendShapeParams_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_blendShapeParams_1() { return &___blendShapeParams_1; }
	inline void set_blendShapeParams_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___blendShapeParams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendShapeParams_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarBlendShapeParams
struct ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_pinvoke
{
	uint32_t ___blendShapeParamCount_0;
	float ___blendShapeParams_1[64];
};
// Native definition for COM marshalling of ovrAvatarBlendShapeParams
struct ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_com
{
	uint32_t ___blendShapeParamCount_0;
	float ___blendShapeParams_1[64];
};

// ovrAvatarBodyPartType
struct  ovrAvatarBodyPartType_t737E1D99142CBA3DD4A938F13EDB9DE219ABF25F 
{
public:
	// System.Int32 ovrAvatarBodyPartType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarBodyPartType_t737E1D99142CBA3DD4A938F13EDB9DE219ABF25F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarButton
struct  ovrAvatarButton_tFB39A61B3CCFF0FC418D95593E7AE59A28365E25 
{
public:
	// System.Int32 ovrAvatarButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarButton_tFB39A61B3CCFF0FC418D95593E7AE59A28365E25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarCapabilities
struct  ovrAvatarCapabilities_tCFCD94FE51485BFD20973792045CB3549082E93A 
{
public:
	// System.Int32 ovrAvatarCapabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarCapabilities_tCFCD94FE51485BFD20973792045CB3549082E93A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarControllerType
struct  ovrAvatarControllerType_t04C9E59CA8DE0BDF354DC0E82DE9C2BF9DA9D667 
{
public:
	// System.Int32 ovrAvatarControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarControllerType_t04C9E59CA8DE0BDF354DC0E82DE9C2BF9DA9D667, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarDebugContext
struct  ovrAvatarDebugContext_t73E7F0D8466463FE9F506CABEAE8DDDB07067B21 
{
public:
	// System.UInt32 ovrAvatarDebugContext::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarDebugContext_t73E7F0D8466463FE9F506CABEAE8DDDB07067B21, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarExpressiveParameters
struct  ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC 
{
public:
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::irisColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___irisColor_0;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::scleraColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___scleraColor_1;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::lashColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___lashColor_2;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::browColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___browColor_3;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::lipColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___lipColor_4;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::teethColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___teethColor_5;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::gumColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___gumColor_6;
	// System.Single ovrAvatarExpressiveParameters::browLashIntensity
	float ___browLashIntensity_7;
	// System.Single ovrAvatarExpressiveParameters::lipSmoothness
	float ___lipSmoothness_8;

public:
	inline static int32_t get_offset_of_irisColor_0() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___irisColor_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_irisColor_0() const { return ___irisColor_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_irisColor_0() { return &___irisColor_0; }
	inline void set_irisColor_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___irisColor_0 = value;
	}

	inline static int32_t get_offset_of_scleraColor_1() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___scleraColor_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_scleraColor_1() const { return ___scleraColor_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_scleraColor_1() { return &___scleraColor_1; }
	inline void set_scleraColor_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___scleraColor_1 = value;
	}

	inline static int32_t get_offset_of_lashColor_2() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___lashColor_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_lashColor_2() const { return ___lashColor_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_lashColor_2() { return &___lashColor_2; }
	inline void set_lashColor_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___lashColor_2 = value;
	}

	inline static int32_t get_offset_of_browColor_3() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___browColor_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_browColor_3() const { return ___browColor_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_browColor_3() { return &___browColor_3; }
	inline void set_browColor_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___browColor_3 = value;
	}

	inline static int32_t get_offset_of_lipColor_4() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___lipColor_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_lipColor_4() const { return ___lipColor_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_lipColor_4() { return &___lipColor_4; }
	inline void set_lipColor_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___lipColor_4 = value;
	}

	inline static int32_t get_offset_of_teethColor_5() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___teethColor_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_teethColor_5() const { return ___teethColor_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_teethColor_5() { return &___teethColor_5; }
	inline void set_teethColor_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___teethColor_5 = value;
	}

	inline static int32_t get_offset_of_gumColor_6() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___gumColor_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_gumColor_6() const { return ___gumColor_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_gumColor_6() { return &___gumColor_6; }
	inline void set_gumColor_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___gumColor_6 = value;
	}

	inline static int32_t get_offset_of_browLashIntensity_7() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___browLashIntensity_7)); }
	inline float get_browLashIntensity_7() const { return ___browLashIntensity_7; }
	inline float* get_address_of_browLashIntensity_7() { return &___browLashIntensity_7; }
	inline void set_browLashIntensity_7(float value)
	{
		___browLashIntensity_7 = value;
	}

	inline static int32_t get_offset_of_lipSmoothness_8() { return static_cast<int32_t>(offsetof(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC, ___lipSmoothness_8)); }
	inline float get_lipSmoothness_8() const { return ___lipSmoothness_8; }
	inline float* get_address_of_lipSmoothness_8() { return &___lipSmoothness_8; }
	inline void set_lipSmoothness_8(float value)
	{
		___lipSmoothness_8 = value;
	}
};


// ovrAvatarGazeTargetType
struct  ovrAvatarGazeTargetType_tDB3E059BE8813F5901702583A8474E22A2BF5B89 
{
public:
	// System.Int32 ovrAvatarGazeTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTargetType_tDB3E059BE8813F5901702583A8474E22A2BF5B89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarHandGesture
struct  ovrAvatarHandGesture_t2117E3A60911295F577C4EADEBE683C533B5365A 
{
public:
	// System.Int32 ovrAvatarHandGesture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarHandGesture_t2117E3A60911295F577C4EADEBE683C533B5365A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarLightType
struct  ovrAvatarLightType_tAB768BF7557C474771E82ADA97A69DAE48127CF8 
{
public:
	// System.Int32 ovrAvatarLightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarLightType_tAB768BF7557C474771E82ADA97A69DAE48127CF8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarLogLevel
struct  ovrAvatarLogLevel_tA62C6E7D471A74F540B7CD9207B76FB618BA1AF0 
{
public:
	// System.Int32 ovrAvatarLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarLogLevel_tA62C6E7D471A74F540B7CD9207B76FB618BA1AF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarLookAndFeelVersion
struct  ovrAvatarLookAndFeelVersion_t2ACE0C06B8FA74EA1B72F93E38944927BAF0D189 
{
public:
	// System.Int32 ovrAvatarLookAndFeelVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarLookAndFeelVersion_t2ACE0C06B8FA74EA1B72F93E38944927BAF0D189, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarMaterialLayerBlendMode
struct  ovrAvatarMaterialLayerBlendMode_t48F6324328A18F7BD22F58541E59127871D2C96B 
{
public:
	// System.Int32 ovrAvatarMaterialLayerBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerBlendMode_t48F6324328A18F7BD22F58541E59127871D2C96B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarMaterialLayerSampleMode
struct  ovrAvatarMaterialLayerSampleMode_t4FF43D4A29FC7F3DBADBC9FE8BDFF369201347E5 
{
public:
	// System.Int32 ovrAvatarMaterialLayerSampleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerSampleMode_t4FF43D4A29FC7F3DBADBC9FE8BDFF369201347E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarMaterialMaskType
struct  ovrAvatarMaterialMaskType_tA8B9658DCCAEF95C24BB5B7B1F75FCA3EE237247 
{
public:
	// System.Int32 ovrAvatarMaterialMaskType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialMaskType_tA8B9658DCCAEF95C24BB5B7B1F75FCA3EE237247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarMeshVertex
struct  ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D 
{
public:
	// System.Single ovrAvatarMeshVertex::x
	float ___x_0;
	// System.Single ovrAvatarMeshVertex::y
	float ___y_1;
	// System.Single ovrAvatarMeshVertex::z
	float ___z_2;
	// System.Single ovrAvatarMeshVertex::nx
	float ___nx_3;
	// System.Single ovrAvatarMeshVertex::ny
	float ___ny_4;
	// System.Single ovrAvatarMeshVertex::nz
	float ___nz_5;
	// System.Single ovrAvatarMeshVertex::tx
	float ___tx_6;
	// System.Single ovrAvatarMeshVertex::ty
	float ___ty_7;
	// System.Single ovrAvatarMeshVertex::tz
	float ___tz_8;
	// System.Single ovrAvatarMeshVertex::tw
	float ___tw_9;
	// System.Single ovrAvatarMeshVertex::u
	float ___u_10;
	// System.Single ovrAvatarMeshVertex::v
	float ___v_11;
	// System.Byte[] ovrAvatarMeshVertex::blendIndices
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___blendIndices_12;
	// System.Single[] ovrAvatarMeshVertex::blendWeights
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___blendWeights_13;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_nx_3() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___nx_3)); }
	inline float get_nx_3() const { return ___nx_3; }
	inline float* get_address_of_nx_3() { return &___nx_3; }
	inline void set_nx_3(float value)
	{
		___nx_3 = value;
	}

	inline static int32_t get_offset_of_ny_4() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___ny_4)); }
	inline float get_ny_4() const { return ___ny_4; }
	inline float* get_address_of_ny_4() { return &___ny_4; }
	inline void set_ny_4(float value)
	{
		___ny_4 = value;
	}

	inline static int32_t get_offset_of_nz_5() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___nz_5)); }
	inline float get_nz_5() const { return ___nz_5; }
	inline float* get_address_of_nz_5() { return &___nz_5; }
	inline void set_nz_5(float value)
	{
		___nz_5 = value;
	}

	inline static int32_t get_offset_of_tx_6() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___tx_6)); }
	inline float get_tx_6() const { return ___tx_6; }
	inline float* get_address_of_tx_6() { return &___tx_6; }
	inline void set_tx_6(float value)
	{
		___tx_6 = value;
	}

	inline static int32_t get_offset_of_ty_7() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___ty_7)); }
	inline float get_ty_7() const { return ___ty_7; }
	inline float* get_address_of_ty_7() { return &___ty_7; }
	inline void set_ty_7(float value)
	{
		___ty_7 = value;
	}

	inline static int32_t get_offset_of_tz_8() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___tz_8)); }
	inline float get_tz_8() const { return ___tz_8; }
	inline float* get_address_of_tz_8() { return &___tz_8; }
	inline void set_tz_8(float value)
	{
		___tz_8 = value;
	}

	inline static int32_t get_offset_of_tw_9() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___tw_9)); }
	inline float get_tw_9() const { return ___tw_9; }
	inline float* get_address_of_tw_9() { return &___tw_9; }
	inline void set_tw_9(float value)
	{
		___tw_9 = value;
	}

	inline static int32_t get_offset_of_u_10() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___u_10)); }
	inline float get_u_10() const { return ___u_10; }
	inline float* get_address_of_u_10() { return &___u_10; }
	inline void set_u_10(float value)
	{
		___u_10 = value;
	}

	inline static int32_t get_offset_of_v_11() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___v_11)); }
	inline float get_v_11() const { return ___v_11; }
	inline float* get_address_of_v_11() { return &___v_11; }
	inline void set_v_11(float value)
	{
		___v_11 = value;
	}

	inline static int32_t get_offset_of_blendIndices_12() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___blendIndices_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_blendIndices_12() const { return ___blendIndices_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_blendIndices_12() { return &___blendIndices_12; }
	inline void set_blendIndices_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___blendIndices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendIndices_12), (void*)value);
	}

	inline static int32_t get_offset_of_blendWeights_13() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D, ___blendWeights_13)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_blendWeights_13() const { return ___blendWeights_13; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_blendWeights_13() { return &___blendWeights_13; }
	inline void set_blendWeights_13(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___blendWeights_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendWeights_13), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarMeshVertex
struct ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_pinvoke
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___nx_3;
	float ___ny_4;
	float ___nz_5;
	float ___tx_6;
	float ___ty_7;
	float ___tz_8;
	float ___tw_9;
	float ___u_10;
	float ___v_11;
	uint8_t ___blendIndices_12[4];
	float ___blendWeights_13[4];
};
// Native definition for COM marshalling of ovrAvatarMeshVertex
struct ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_com
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___nx_3;
	float ___ny_4;
	float ___nz_5;
	float ___tx_6;
	float ___ty_7;
	float ___tz_8;
	float ___tw_9;
	float ___u_10;
	float ___v_11;
	uint8_t ___blendIndices_12[4];
	float ___blendWeights_13[4];
};

// ovrAvatarMeshVertexV2
struct  ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA 
{
public:
	// System.Single ovrAvatarMeshVertexV2::x
	float ___x_0;
	// System.Single ovrAvatarMeshVertexV2::y
	float ___y_1;
	// System.Single ovrAvatarMeshVertexV2::z
	float ___z_2;
	// System.Single ovrAvatarMeshVertexV2::nx
	float ___nx_3;
	// System.Single ovrAvatarMeshVertexV2::ny
	float ___ny_4;
	// System.Single ovrAvatarMeshVertexV2::nz
	float ___nz_5;
	// System.Single ovrAvatarMeshVertexV2::tx
	float ___tx_6;
	// System.Single ovrAvatarMeshVertexV2::ty
	float ___ty_7;
	// System.Single ovrAvatarMeshVertexV2::tz
	float ___tz_8;
	// System.Single ovrAvatarMeshVertexV2::tw
	float ___tw_9;
	// System.Single ovrAvatarMeshVertexV2::u
	float ___u_10;
	// System.Single ovrAvatarMeshVertexV2::v
	float ___v_11;
	// System.Single ovrAvatarMeshVertexV2::r
	float ___r_12;
	// System.Single ovrAvatarMeshVertexV2::g
	float ___g_13;
	// System.Single ovrAvatarMeshVertexV2::b
	float ___b_14;
	// System.Single ovrAvatarMeshVertexV2::a
	float ___a_15;
	// System.Byte[] ovrAvatarMeshVertexV2::blendIndices
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___blendIndices_16;
	// System.Single[] ovrAvatarMeshVertexV2::blendWeights
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___blendWeights_17;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_nx_3() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___nx_3)); }
	inline float get_nx_3() const { return ___nx_3; }
	inline float* get_address_of_nx_3() { return &___nx_3; }
	inline void set_nx_3(float value)
	{
		___nx_3 = value;
	}

	inline static int32_t get_offset_of_ny_4() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___ny_4)); }
	inline float get_ny_4() const { return ___ny_4; }
	inline float* get_address_of_ny_4() { return &___ny_4; }
	inline void set_ny_4(float value)
	{
		___ny_4 = value;
	}

	inline static int32_t get_offset_of_nz_5() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___nz_5)); }
	inline float get_nz_5() const { return ___nz_5; }
	inline float* get_address_of_nz_5() { return &___nz_5; }
	inline void set_nz_5(float value)
	{
		___nz_5 = value;
	}

	inline static int32_t get_offset_of_tx_6() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___tx_6)); }
	inline float get_tx_6() const { return ___tx_6; }
	inline float* get_address_of_tx_6() { return &___tx_6; }
	inline void set_tx_6(float value)
	{
		___tx_6 = value;
	}

	inline static int32_t get_offset_of_ty_7() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___ty_7)); }
	inline float get_ty_7() const { return ___ty_7; }
	inline float* get_address_of_ty_7() { return &___ty_7; }
	inline void set_ty_7(float value)
	{
		___ty_7 = value;
	}

	inline static int32_t get_offset_of_tz_8() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___tz_8)); }
	inline float get_tz_8() const { return ___tz_8; }
	inline float* get_address_of_tz_8() { return &___tz_8; }
	inline void set_tz_8(float value)
	{
		___tz_8 = value;
	}

	inline static int32_t get_offset_of_tw_9() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___tw_9)); }
	inline float get_tw_9() const { return ___tw_9; }
	inline float* get_address_of_tw_9() { return &___tw_9; }
	inline void set_tw_9(float value)
	{
		___tw_9 = value;
	}

	inline static int32_t get_offset_of_u_10() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___u_10)); }
	inline float get_u_10() const { return ___u_10; }
	inline float* get_address_of_u_10() { return &___u_10; }
	inline void set_u_10(float value)
	{
		___u_10 = value;
	}

	inline static int32_t get_offset_of_v_11() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___v_11)); }
	inline float get_v_11() const { return ___v_11; }
	inline float* get_address_of_v_11() { return &___v_11; }
	inline void set_v_11(float value)
	{
		___v_11 = value;
	}

	inline static int32_t get_offset_of_r_12() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___r_12)); }
	inline float get_r_12() const { return ___r_12; }
	inline float* get_address_of_r_12() { return &___r_12; }
	inline void set_r_12(float value)
	{
		___r_12 = value;
	}

	inline static int32_t get_offset_of_g_13() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___g_13)); }
	inline float get_g_13() const { return ___g_13; }
	inline float* get_address_of_g_13() { return &___g_13; }
	inline void set_g_13(float value)
	{
		___g_13 = value;
	}

	inline static int32_t get_offset_of_b_14() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___b_14)); }
	inline float get_b_14() const { return ___b_14; }
	inline float* get_address_of_b_14() { return &___b_14; }
	inline void set_b_14(float value)
	{
		___b_14 = value;
	}

	inline static int32_t get_offset_of_a_15() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___a_15)); }
	inline float get_a_15() const { return ___a_15; }
	inline float* get_address_of_a_15() { return &___a_15; }
	inline void set_a_15(float value)
	{
		___a_15 = value;
	}

	inline static int32_t get_offset_of_blendIndices_16() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___blendIndices_16)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_blendIndices_16() const { return ___blendIndices_16; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_blendIndices_16() { return &___blendIndices_16; }
	inline void set_blendIndices_16(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___blendIndices_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendIndices_16), (void*)value);
	}

	inline static int32_t get_offset_of_blendWeights_17() { return static_cast<int32_t>(offsetof(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA, ___blendWeights_17)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_blendWeights_17() const { return ___blendWeights_17; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_blendWeights_17() { return &___blendWeights_17; }
	inline void set_blendWeights_17(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___blendWeights_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendWeights_17), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarMeshVertexV2
struct ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_pinvoke
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___nx_3;
	float ___ny_4;
	float ___nz_5;
	float ___tx_6;
	float ___ty_7;
	float ___tz_8;
	float ___tw_9;
	float ___u_10;
	float ___v_11;
	float ___r_12;
	float ___g_13;
	float ___b_14;
	float ___a_15;
	uint8_t ___blendIndices_16[4];
	float ___blendWeights_17[4];
};
// Native definition for COM marshalling of ovrAvatarMeshVertexV2
struct ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_com
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___nx_3;
	float ___ny_4;
	float ___nz_5;
	float ___tx_6;
	float ___ty_7;
	float ___tz_8;
	float ___tw_9;
	float ___u_10;
	float ___v_11;
	float ___r_12;
	float ___g_13;
	float ___b_14;
	float ___a_15;
	uint8_t ___blendIndices_16[4];
	float ___blendWeights_17[4];
};

// ovrAvatarMessageType
struct  ovrAvatarMessageType_t93188EF8BBD9DE11A21E38E450CBD3CEF6DDF751 
{
public:
	// System.Int32 ovrAvatarMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarMessageType_t93188EF8BBD9DE11A21E38E450CBD3CEF6DDF751, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarMessage_AssetLoaded
struct  ovrAvatarMessage_AssetLoaded_tC3CFC9AE487A6B7B67DA9FDC7DF1F2ABAD39A13D 
{
public:
	// System.UInt64 ovrAvatarMessage_AssetLoaded::assetID
	uint64_t ___assetID_0;
	// System.IntPtr ovrAvatarMessage_AssetLoaded::asset
	intptr_t ___asset_1;

public:
	inline static int32_t get_offset_of_assetID_0() { return static_cast<int32_t>(offsetof(ovrAvatarMessage_AssetLoaded_tC3CFC9AE487A6B7B67DA9FDC7DF1F2ABAD39A13D, ___assetID_0)); }
	inline uint64_t get_assetID_0() const { return ___assetID_0; }
	inline uint64_t* get_address_of_assetID_0() { return &___assetID_0; }
	inline void set_assetID_0(uint64_t value)
	{
		___assetID_0 = value;
	}

	inline static int32_t get_offset_of_asset_1() { return static_cast<int32_t>(offsetof(ovrAvatarMessage_AssetLoaded_tC3CFC9AE487A6B7B67DA9FDC7DF1F2ABAD39A13D, ___asset_1)); }
	inline intptr_t get_asset_1() const { return ___asset_1; }
	inline intptr_t* get_address_of_asset_1() { return &___asset_1; }
	inline void set_asset_1(intptr_t value)
	{
		___asset_1 = value;
	}
};


// ovrAvatarMessage_AvatarSpecification
struct  ovrAvatarMessage_AvatarSpecification_t64AB6360A42F7765119AA430E99FB30345739994 
{
public:
	// System.IntPtr ovrAvatarMessage_AvatarSpecification::avatarSpec
	intptr_t ___avatarSpec_0;
	// System.UInt64 ovrAvatarMessage_AvatarSpecification::oculusUserID
	uint64_t ___oculusUserID_1;

public:
	inline static int32_t get_offset_of_avatarSpec_0() { return static_cast<int32_t>(offsetof(ovrAvatarMessage_AvatarSpecification_t64AB6360A42F7765119AA430E99FB30345739994, ___avatarSpec_0)); }
	inline intptr_t get_avatarSpec_0() const { return ___avatarSpec_0; }
	inline intptr_t* get_address_of_avatarSpec_0() { return &___avatarSpec_0; }
	inline void set_avatarSpec_0(intptr_t value)
	{
		___avatarSpec_0 = value;
	}

	inline static int32_t get_offset_of_oculusUserID_1() { return static_cast<int32_t>(offsetof(ovrAvatarMessage_AvatarSpecification_t64AB6360A42F7765119AA430E99FB30345739994, ___oculusUserID_1)); }
	inline uint64_t get_oculusUserID_1() const { return ___oculusUserID_1; }
	inline uint64_t* get_address_of_oculusUserID_1() { return &___oculusUserID_1; }
	inline void set_oculusUserID_1(uint64_t value)
	{
		___oculusUserID_1 = value;
	}
};


// ovrAvatarPBSMaterialState
struct  ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F 
{
public:
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::baseColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseColor_0;
	// System.UInt64 ovrAvatarPBSMaterialState::albedoTextureID
	uint64_t ___albedoTextureID_1;
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::albedoMultiplier
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___albedoMultiplier_2;
	// System.UInt64 ovrAvatarPBSMaterialState::metallicnessTextureID
	uint64_t ___metallicnessTextureID_3;
	// System.Single ovrAvatarPBSMaterialState::glossinessScale
	float ___glossinessScale_4;
	// System.UInt64 ovrAvatarPBSMaterialState::normalTextureID
	uint64_t ___normalTextureID_5;
	// System.UInt64 ovrAvatarPBSMaterialState::heightTextureID
	uint64_t ___heightTextureID_6;
	// System.UInt64 ovrAvatarPBSMaterialState::occlusionTextureID
	uint64_t ___occlusionTextureID_7;
	// System.UInt64 ovrAvatarPBSMaterialState::emissionTextureID
	uint64_t ___emissionTextureID_8;
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::emissionMultiplier
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___emissionMultiplier_9;
	// System.UInt64 ovrAvatarPBSMaterialState::detailMaskTextureID
	uint64_t ___detailMaskTextureID_10;
	// System.UInt64 ovrAvatarPBSMaterialState::detailAlbedoTextureID
	uint64_t ___detailAlbedoTextureID_11;
	// System.UInt64 ovrAvatarPBSMaterialState::detailNormalTextureID
	uint64_t ___detailNormalTextureID_12;

public:
	inline static int32_t get_offset_of_baseColor_0() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___baseColor_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_baseColor_0() const { return ___baseColor_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_baseColor_0() { return &___baseColor_0; }
	inline void set_baseColor_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___baseColor_0 = value;
	}

	inline static int32_t get_offset_of_albedoTextureID_1() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___albedoTextureID_1)); }
	inline uint64_t get_albedoTextureID_1() const { return ___albedoTextureID_1; }
	inline uint64_t* get_address_of_albedoTextureID_1() { return &___albedoTextureID_1; }
	inline void set_albedoTextureID_1(uint64_t value)
	{
		___albedoTextureID_1 = value;
	}

	inline static int32_t get_offset_of_albedoMultiplier_2() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___albedoMultiplier_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_albedoMultiplier_2() const { return ___albedoMultiplier_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_albedoMultiplier_2() { return &___albedoMultiplier_2; }
	inline void set_albedoMultiplier_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___albedoMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_metallicnessTextureID_3() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___metallicnessTextureID_3)); }
	inline uint64_t get_metallicnessTextureID_3() const { return ___metallicnessTextureID_3; }
	inline uint64_t* get_address_of_metallicnessTextureID_3() { return &___metallicnessTextureID_3; }
	inline void set_metallicnessTextureID_3(uint64_t value)
	{
		___metallicnessTextureID_3 = value;
	}

	inline static int32_t get_offset_of_glossinessScale_4() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___glossinessScale_4)); }
	inline float get_glossinessScale_4() const { return ___glossinessScale_4; }
	inline float* get_address_of_glossinessScale_4() { return &___glossinessScale_4; }
	inline void set_glossinessScale_4(float value)
	{
		___glossinessScale_4 = value;
	}

	inline static int32_t get_offset_of_normalTextureID_5() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___normalTextureID_5)); }
	inline uint64_t get_normalTextureID_5() const { return ___normalTextureID_5; }
	inline uint64_t* get_address_of_normalTextureID_5() { return &___normalTextureID_5; }
	inline void set_normalTextureID_5(uint64_t value)
	{
		___normalTextureID_5 = value;
	}

	inline static int32_t get_offset_of_heightTextureID_6() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___heightTextureID_6)); }
	inline uint64_t get_heightTextureID_6() const { return ___heightTextureID_6; }
	inline uint64_t* get_address_of_heightTextureID_6() { return &___heightTextureID_6; }
	inline void set_heightTextureID_6(uint64_t value)
	{
		___heightTextureID_6 = value;
	}

	inline static int32_t get_offset_of_occlusionTextureID_7() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___occlusionTextureID_7)); }
	inline uint64_t get_occlusionTextureID_7() const { return ___occlusionTextureID_7; }
	inline uint64_t* get_address_of_occlusionTextureID_7() { return &___occlusionTextureID_7; }
	inline void set_occlusionTextureID_7(uint64_t value)
	{
		___occlusionTextureID_7 = value;
	}

	inline static int32_t get_offset_of_emissionTextureID_8() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___emissionTextureID_8)); }
	inline uint64_t get_emissionTextureID_8() const { return ___emissionTextureID_8; }
	inline uint64_t* get_address_of_emissionTextureID_8() { return &___emissionTextureID_8; }
	inline void set_emissionTextureID_8(uint64_t value)
	{
		___emissionTextureID_8 = value;
	}

	inline static int32_t get_offset_of_emissionMultiplier_9() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___emissionMultiplier_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_emissionMultiplier_9() const { return ___emissionMultiplier_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_emissionMultiplier_9() { return &___emissionMultiplier_9; }
	inline void set_emissionMultiplier_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___emissionMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_detailMaskTextureID_10() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___detailMaskTextureID_10)); }
	inline uint64_t get_detailMaskTextureID_10() const { return ___detailMaskTextureID_10; }
	inline uint64_t* get_address_of_detailMaskTextureID_10() { return &___detailMaskTextureID_10; }
	inline void set_detailMaskTextureID_10(uint64_t value)
	{
		___detailMaskTextureID_10 = value;
	}

	inline static int32_t get_offset_of_detailAlbedoTextureID_11() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___detailAlbedoTextureID_11)); }
	inline uint64_t get_detailAlbedoTextureID_11() const { return ___detailAlbedoTextureID_11; }
	inline uint64_t* get_address_of_detailAlbedoTextureID_11() { return &___detailAlbedoTextureID_11; }
	inline void set_detailAlbedoTextureID_11(uint64_t value)
	{
		___detailAlbedoTextureID_11 = value;
	}

	inline static int32_t get_offset_of_detailNormalTextureID_12() { return static_cast<int32_t>(offsetof(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F, ___detailNormalTextureID_12)); }
	inline uint64_t get_detailNormalTextureID_12() const { return ___detailNormalTextureID_12; }
	inline uint64_t* get_address_of_detailNormalTextureID_12() { return &___detailNormalTextureID_12; }
	inline void set_detailNormalTextureID_12(uint64_t value)
	{
		___detailNormalTextureID_12 = value;
	}
};


// ovrAvatarRenderPartType
struct  ovrAvatarRenderPartType_t8F56EBA27438F709E951F03C82B8E7E3E52D2F2D 
{
public:
	// System.Int32 ovrAvatarRenderPartType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPartType_t8F56EBA27438F709E951F03C82B8E7E3E52D2F2D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarTextureFormat
struct  ovrAvatarTextureFormat_t8F1CD786FEF24F001015B4E0D3F8A83E8157D43E 
{
public:
	// System.Int32 ovrAvatarTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarTextureFormat_t8F1CD786FEF24F001015B4E0D3F8A83E8157D43E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarTouch
struct  ovrAvatarTouch_tC76CEF5017D0A81B7E90CE9D8A5242EE4C96691C 
{
public:
	// System.Int32 ovrAvatarTouch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarTouch_tC76CEF5017D0A81B7E90CE9D8A5242EE4C96691C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarTransform
struct  ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 
{
public:
	// UnityEngine.Vector3 ovrAvatarTransform::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion ovrAvatarTransform::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// UnityEngine.Vector3 ovrAvatarTransform::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3, ___scale_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_2() const { return ___scale_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_2 = value;
	}
};


// ovrAvatarVisemes
struct  ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF 
{
public:
	// System.UInt32 ovrAvatarVisemes::visemeParamCount
	uint32_t ___visemeParamCount_0;
	// System.Single[] ovrAvatarVisemes::visemeParams
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___visemeParams_1;

public:
	inline static int32_t get_offset_of_visemeParamCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF, ___visemeParamCount_0)); }
	inline uint32_t get_visemeParamCount_0() const { return ___visemeParamCount_0; }
	inline uint32_t* get_address_of_visemeParamCount_0() { return &___visemeParamCount_0; }
	inline void set_visemeParamCount_0(uint32_t value)
	{
		___visemeParamCount_0 = value;
	}

	inline static int32_t get_offset_of_visemeParams_1() { return static_cast<int32_t>(offsetof(ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF, ___visemeParams_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_visemeParams_1() const { return ___visemeParams_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_visemeParams_1() { return &___visemeParams_1; }
	inline void set_visemeParams_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___visemeParams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visemeParams_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarVisemes
struct ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_pinvoke
{
	uint32_t ___visemeParamCount_0;
	float ___visemeParams_1[32];
};
// Native definition for COM marshalling of ovrAvatarVisemes
struct ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_com
{
	uint32_t ___visemeParamCount_0;
	float ___visemeParams_1[32];
};

// ovrAvatarVisibilityFlags
struct  ovrAvatarVisibilityFlags_tB94FABA66FF523FF20CFB1D8A678155B77A9F470 
{
public:
	// System.Int32 ovrAvatarVisibilityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarVisibilityFlags_tB94FABA66FF523FF20CFB1D8A678155B77A9F470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport_AimData
struct  AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3  : public RuntimeObject
{
public:
	// UnityEngine.RaycastHit LocomotionTeleport_AimData::TargetHitInfo
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___TargetHitInfo_0;
	// System.Boolean LocomotionTeleport_AimData::TargetValid
	bool ___TargetValid_1;
	// System.Nullable`1<UnityEngine.Vector3> LocomotionTeleport_AimData::Destination
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___Destination_2;
	// System.Single LocomotionTeleport_AimData::Radius
	float ___Radius_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LocomotionTeleport_AimData::<Points>k__BackingField
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___U3CPointsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_TargetHitInfo_0() { return static_cast<int32_t>(offsetof(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3, ___TargetHitInfo_0)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_TargetHitInfo_0() const { return ___TargetHitInfo_0; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_TargetHitInfo_0() { return &___TargetHitInfo_0; }
	inline void set_TargetHitInfo_0(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___TargetHitInfo_0 = value;
	}

	inline static int32_t get_offset_of_TargetValid_1() { return static_cast<int32_t>(offsetof(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3, ___TargetValid_1)); }
	inline bool get_TargetValid_1() const { return ___TargetValid_1; }
	inline bool* get_address_of_TargetValid_1() { return &___TargetValid_1; }
	inline void set_TargetValid_1(bool value)
	{
		___TargetValid_1 = value;
	}

	inline static int32_t get_offset_of_Destination_2() { return static_cast<int32_t>(offsetof(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3, ___Destination_2)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_Destination_2() const { return ___Destination_2; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_Destination_2() { return &___Destination_2; }
	inline void set_Destination_2(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___Destination_2 = value;
	}

	inline static int32_t get_offset_of_Radius_3() { return static_cast<int32_t>(offsetof(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3, ___Radius_3)); }
	inline float get_Radius_3() const { return ___Radius_3; }
	inline float* get_address_of_Radius_3() { return &___Radius_3; }
	inline void set_Radius_3(float value)
	{
		___Radius_3 = value;
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3, ___U3CPointsU3Ek__BackingField_4)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_U3CPointsU3Ek__BackingField_4() const { return ___U3CPointsU3Ek__BackingField_4; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_U3CPointsU3Ek__BackingField_4() { return &___U3CPointsU3Ek__BackingField_4; }
	inline void set_U3CPointsU3Ek__BackingField_4(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___U3CPointsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointsU3Ek__BackingField_4), (void*)value);
	}
};


// Oculus.Platform.Message
struct  Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350  : public RuntimeObject
{
public:
	// Oculus.Platform.Message_MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t76CC0AAD333443873F5F59C518D5DFD20705DFDD * ___error_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_requestID_1() { return static_cast<int32_t>(offsetof(Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350, ___requestID_1)); }
	inline uint64_t get_requestID_1() const { return ___requestID_1; }
	inline uint64_t* get_address_of_requestID_1() { return &___requestID_1; }
	inline void set_requestID_1(uint64_t value)
	{
		___requestID_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350, ___error_2)); }
	inline Error_t76CC0AAD333443873F5F59C518D5DFD20705DFDD * get_error_2() const { return ___error_2; }
	inline Error_t76CC0AAD333443873F5F59C518D5DFD20705DFDD ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Error_t76CC0AAD333443873F5F59C518D5DFD20705DFDD * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
	}
};

struct Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350_StaticFields
{
public:
	// Oculus.Platform.Message_ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_tD285FEDDDE878F05D7118B16004C6E5A50DB5FE0 * ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350_StaticFields, ___U3CHandleExtraMessageTypesU3Ek__BackingField_3)); }
	inline ExtraMessageTypesHandler_tD285FEDDDE878F05D7118B16004C6E5A50DB5FE0 * get_U3CHandleExtraMessageTypesU3Ek__BackingField_3() const { return ___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline ExtraMessageTypesHandler_tD285FEDDDE878F05D7118B16004C6E5A50DB5FE0 ** get_address_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return &___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline void set_U3CHandleExtraMessageTypesU3Ek__BackingField_3(ExtraMessageTypesHandler_tD285FEDDDE878F05D7118B16004C6E5A50DB5FE0 * value)
	{
		___U3CHandleExtraMessageTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandleExtraMessageTypesU3Ek__BackingField_3), (void*)value);
	}
};


// Oculus.Platform.Models.NetworkingPeer
struct  NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.NetworkingPeer::<ID>k__BackingField
	uint64_t ___U3CIDU3Ek__BackingField_0;
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Models.NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5, ___U3CIDU3Ek__BackingField_0)); }
	inline uint64_t get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(uint64_t value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5, ___U3CStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CStateU3Ek__BackingField_1() const { return ___U3CStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_1() { return &___U3CStateU3Ek__BackingField_1; }
	inline void set_U3CStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CStateU3Ek__BackingField_1 = value;
	}
};


// RemotePlayer
struct  RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62  : public RuntimeObject
{
public:
	// System.UInt64 RemotePlayer::remoteUserID
	uint64_t ___remoteUserID_0;
	// System.Boolean RemotePlayer::stillInRoom
	bool ___stillInRoom_1;
	// Oculus.Platform.PeerConnectionState RemotePlayer::p2pConnectionState
	int32_t ___p2pConnectionState_2;
	// Oculus.Platform.PeerConnectionState RemotePlayer::voipConnectionState
	int32_t ___voipConnectionState_3;
	// OvrAvatar RemotePlayer::RemoteAvatar
	OvrAvatar_t16147A7696D14D9247B552357FDF3BF5C3F8DD7B * ___RemoteAvatar_4;
	// UnityEngine.Vector3 RemotePlayer::receivedRootPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___receivedRootPosition_5;
	// UnityEngine.Vector3 RemotePlayer::receivedRootPositionPrior
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___receivedRootPositionPrior_6;
	// UnityEngine.Quaternion RemotePlayer::receivedRootRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___receivedRootRotation_7;
	// UnityEngine.Quaternion RemotePlayer::receivedRootRotationPrior
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___receivedRootRotationPrior_8;
	// Oculus.Platform.VoipAudioSourceHiLevel RemotePlayer::voipSource
	VoipAudioSourceHiLevel_t6F5E0F248DA988D1AA75A0002A6359F5A68540B6 * ___voipSource_9;

public:
	inline static int32_t get_offset_of_remoteUserID_0() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___remoteUserID_0)); }
	inline uint64_t get_remoteUserID_0() const { return ___remoteUserID_0; }
	inline uint64_t* get_address_of_remoteUserID_0() { return &___remoteUserID_0; }
	inline void set_remoteUserID_0(uint64_t value)
	{
		___remoteUserID_0 = value;
	}

	inline static int32_t get_offset_of_stillInRoom_1() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___stillInRoom_1)); }
	inline bool get_stillInRoom_1() const { return ___stillInRoom_1; }
	inline bool* get_address_of_stillInRoom_1() { return &___stillInRoom_1; }
	inline void set_stillInRoom_1(bool value)
	{
		___stillInRoom_1 = value;
	}

	inline static int32_t get_offset_of_p2pConnectionState_2() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___p2pConnectionState_2)); }
	inline int32_t get_p2pConnectionState_2() const { return ___p2pConnectionState_2; }
	inline int32_t* get_address_of_p2pConnectionState_2() { return &___p2pConnectionState_2; }
	inline void set_p2pConnectionState_2(int32_t value)
	{
		___p2pConnectionState_2 = value;
	}

	inline static int32_t get_offset_of_voipConnectionState_3() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___voipConnectionState_3)); }
	inline int32_t get_voipConnectionState_3() const { return ___voipConnectionState_3; }
	inline int32_t* get_address_of_voipConnectionState_3() { return &___voipConnectionState_3; }
	inline void set_voipConnectionState_3(int32_t value)
	{
		___voipConnectionState_3 = value;
	}

	inline static int32_t get_offset_of_RemoteAvatar_4() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___RemoteAvatar_4)); }
	inline OvrAvatar_t16147A7696D14D9247B552357FDF3BF5C3F8DD7B * get_RemoteAvatar_4() const { return ___RemoteAvatar_4; }
	inline OvrAvatar_t16147A7696D14D9247B552357FDF3BF5C3F8DD7B ** get_address_of_RemoteAvatar_4() { return &___RemoteAvatar_4; }
	inline void set_RemoteAvatar_4(OvrAvatar_t16147A7696D14D9247B552357FDF3BF5C3F8DD7B * value)
	{
		___RemoteAvatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteAvatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_receivedRootPosition_5() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___receivedRootPosition_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_receivedRootPosition_5() const { return ___receivedRootPosition_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_receivedRootPosition_5() { return &___receivedRootPosition_5; }
	inline void set_receivedRootPosition_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___receivedRootPosition_5 = value;
	}

	inline static int32_t get_offset_of_receivedRootPositionPrior_6() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___receivedRootPositionPrior_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_receivedRootPositionPrior_6() const { return ___receivedRootPositionPrior_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_receivedRootPositionPrior_6() { return &___receivedRootPositionPrior_6; }
	inline void set_receivedRootPositionPrior_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___receivedRootPositionPrior_6 = value;
	}

	inline static int32_t get_offset_of_receivedRootRotation_7() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___receivedRootRotation_7)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_receivedRootRotation_7() const { return ___receivedRootRotation_7; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_receivedRootRotation_7() { return &___receivedRootRotation_7; }
	inline void set_receivedRootRotation_7(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___receivedRootRotation_7 = value;
	}

	inline static int32_t get_offset_of_receivedRootRotationPrior_8() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___receivedRootRotationPrior_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_receivedRootRotationPrior_8() const { return ___receivedRootRotationPrior_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_receivedRootRotationPrior_8() { return &___receivedRootRotationPrior_8; }
	inline void set_receivedRootRotationPrior_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___receivedRootRotationPrior_8 = value;
	}

	inline static int32_t get_offset_of_voipSource_9() { return static_cast<int32_t>(offsetof(RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62, ___voipSource_9)); }
	inline VoipAudioSourceHiLevel_t6F5E0F248DA988D1AA75A0002A6359F5A68540B6 * get_voipSource_9() const { return ___voipSource_9; }
	inline VoipAudioSourceHiLevel_t6F5E0F248DA988D1AA75A0002A6359F5A68540B6 ** get_address_of_voipSource_9() { return &___voipSource_9; }
	inline void set_voipSource_9(VoipAudioSourceHiLevel_t6F5E0F248DA988D1AA75A0002A6359F5A68540B6 * value)
	{
		___voipSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voipSource_9), (void*)value);
	}
};


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


// ovrAvatarBodyComponent
struct  ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B 
{
public:
	// ovrAvatarTransform ovrAvatarBodyComponent::leftEyeTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___leftEyeTransform_0;
	// ovrAvatarTransform ovrAvatarBodyComponent::rightEyeTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___rightEyeTransform_1;
	// ovrAvatarTransform ovrAvatarBodyComponent::centerEyeTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___centerEyeTransform_2;
	// System.IntPtr ovrAvatarBodyComponent::renderComponent
	intptr_t ___renderComponent_3;

public:
	inline static int32_t get_offset_of_leftEyeTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B, ___leftEyeTransform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_leftEyeTransform_0() const { return ___leftEyeTransform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_leftEyeTransform_0() { return &___leftEyeTransform_0; }
	inline void set_leftEyeTransform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___leftEyeTransform_0 = value;
	}

	inline static int32_t get_offset_of_rightEyeTransform_1() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B, ___rightEyeTransform_1)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_rightEyeTransform_1() const { return ___rightEyeTransform_1; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_rightEyeTransform_1() { return &___rightEyeTransform_1; }
	inline void set_rightEyeTransform_1(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___rightEyeTransform_1 = value;
	}

	inline static int32_t get_offset_of_centerEyeTransform_2() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B, ___centerEyeTransform_2)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_centerEyeTransform_2() const { return ___centerEyeTransform_2; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_centerEyeTransform_2() { return &___centerEyeTransform_2; }
	inline void set_centerEyeTransform_2(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___centerEyeTransform_2 = value;
	}

	inline static int32_t get_offset_of_renderComponent_3() { return static_cast<int32_t>(offsetof(ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B, ___renderComponent_3)); }
	inline intptr_t get_renderComponent_3() const { return ___renderComponent_3; }
	inline intptr_t* get_address_of_renderComponent_3() { return &___renderComponent_3; }
	inline void set_renderComponent_3(intptr_t value)
	{
		___renderComponent_3 = value;
	}
};


// ovrAvatarComponent
struct  ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC 
{
public:
	// ovrAvatarTransform ovrAvatarComponent::transform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___transform_0;
	// System.UInt32 ovrAvatarComponent::renderPartCount
	uint32_t ___renderPartCount_1;
	// System.IntPtr ovrAvatarComponent::renderParts
	intptr_t ___renderParts_2;
	// System.String ovrAvatarComponent::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC, ___transform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_transform_0() const { return ___transform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___transform_0 = value;
	}

	inline static int32_t get_offset_of_renderPartCount_1() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC, ___renderPartCount_1)); }
	inline uint32_t get_renderPartCount_1() const { return ___renderPartCount_1; }
	inline uint32_t* get_address_of_renderPartCount_1() { return &___renderPartCount_1; }
	inline void set_renderPartCount_1(uint32_t value)
	{
		___renderPartCount_1 = value;
	}

	inline static int32_t get_offset_of_renderParts_2() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC, ___renderParts_2)); }
	inline intptr_t get_renderParts_2() const { return ___renderParts_2; }
	inline intptr_t* get_address_of_renderParts_2() { return &___renderParts_2; }
	inline void set_renderParts_2(intptr_t value)
	{
		___renderParts_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarComponent
struct ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_pinvoke
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___transform_0;
	uint32_t ___renderPartCount_1;
	intptr_t ___renderParts_2;
	char* ___name_3;
};
// Native definition for COM marshalling of ovrAvatarComponent
struct ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_com
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___transform_0;
	uint32_t ___renderPartCount_1;
	intptr_t ___renderParts_2;
	char* ___name_3;
};

// ovrAvatarDebugLine
struct  ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC 
{
public:
	// UnityEngine.Vector3 ovrAvatarDebugLine::startPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPoint_0;
	// UnityEngine.Vector3 ovrAvatarDebugLine::endPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endPoint_1;
	// UnityEngine.Vector3 ovrAvatarDebugLine::color
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___color_2;
	// ovrAvatarDebugContext ovrAvatarDebugLine::context
	uint32_t ___context_3;
	// System.IntPtr ovrAvatarDebugLine::text
	intptr_t ___text_4;

public:
	inline static int32_t get_offset_of_startPoint_0() { return static_cast<int32_t>(offsetof(ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC, ___startPoint_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPoint_0() const { return ___startPoint_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPoint_0() { return &___startPoint_0; }
	inline void set_startPoint_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPoint_0 = value;
	}

	inline static int32_t get_offset_of_endPoint_1() { return static_cast<int32_t>(offsetof(ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC, ___endPoint_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endPoint_1() const { return ___endPoint_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endPoint_1() { return &___endPoint_1; }
	inline void set_endPoint_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endPoint_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC, ___color_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_color_2() const { return ___color_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_context_3() { return static_cast<int32_t>(offsetof(ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC, ___context_3)); }
	inline uint32_t get_context_3() const { return ___context_3; }
	inline uint32_t* get_address_of_context_3() { return &___context_3; }
	inline void set_context_3(uint32_t value)
	{
		___context_3 = value;
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(ovrAvatarDebugLine_tC238F0474741C8D1DAF756A05CE6A53415DB94EC, ___text_4)); }
	inline intptr_t get_text_4() const { return ___text_4; }
	inline intptr_t* get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(intptr_t value)
	{
		___text_4 = value;
	}
};


// ovrAvatarDebugTransform
struct  ovrAvatarDebugTransform_tB923E43AE588E389EF3BAF2AF37574987997E875 
{
public:
	// ovrAvatarTransform ovrAvatarDebugTransform::transform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___transform_0;
	// ovrAvatarDebugContext ovrAvatarDebugTransform::context
	uint32_t ___context_1;
	// System.IntPtr ovrAvatarDebugTransform::text
	intptr_t ___text_2;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ovrAvatarDebugTransform_tB923E43AE588E389EF3BAF2AF37574987997E875, ___transform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_transform_0() const { return ___transform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___transform_0 = value;
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ovrAvatarDebugTransform_tB923E43AE588E389EF3BAF2AF37574987997E875, ___context_1)); }
	inline uint32_t get_context_1() const { return ___context_1; }
	inline uint32_t* get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(uint32_t value)
	{
		___context_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(ovrAvatarDebugTransform_tB923E43AE588E389EF3BAF2AF37574987997E875, ___text_2)); }
	inline intptr_t get_text_2() const { return ___text_2; }
	inline intptr_t* get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(intptr_t value)
	{
		___text_2 = value;
	}
};


// ovrAvatarGazeTarget
struct  ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F 
{
public:
	// System.UInt32 ovrAvatarGazeTarget::id
	uint32_t ___id_0;
	// UnityEngine.Vector3 ovrAvatarGazeTarget::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_1;
	// ovrAvatarGazeTargetType ovrAvatarGazeTarget::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_worldPosition_1() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F, ___worldPosition_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_1() const { return ___worldPosition_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_1() { return &___worldPosition_1; }
	inline void set_worldPosition_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};


// ovrAvatarHandInputState
struct  ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85 
{
public:
	// ovrAvatarTransform ovrAvatarHandInputState::transform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___transform_0;
	// ovrAvatarButton ovrAvatarHandInputState::buttonMask
	int32_t ___buttonMask_1;
	// ovrAvatarTouch ovrAvatarHandInputState::touchMask
	int32_t ___touchMask_2;
	// System.Single ovrAvatarHandInputState::joystickX
	float ___joystickX_3;
	// System.Single ovrAvatarHandInputState::joystickY
	float ___joystickY_4;
	// System.Single ovrAvatarHandInputState::indexTrigger
	float ___indexTrigger_5;
	// System.Single ovrAvatarHandInputState::handTrigger
	float ___handTrigger_6;
	// System.Boolean ovrAvatarHandInputState::isActive
	bool ___isActive_7;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___transform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_transform_0() const { return ___transform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___transform_0 = value;
	}

	inline static int32_t get_offset_of_buttonMask_1() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___buttonMask_1)); }
	inline int32_t get_buttonMask_1() const { return ___buttonMask_1; }
	inline int32_t* get_address_of_buttonMask_1() { return &___buttonMask_1; }
	inline void set_buttonMask_1(int32_t value)
	{
		___buttonMask_1 = value;
	}

	inline static int32_t get_offset_of_touchMask_2() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___touchMask_2)); }
	inline int32_t get_touchMask_2() const { return ___touchMask_2; }
	inline int32_t* get_address_of_touchMask_2() { return &___touchMask_2; }
	inline void set_touchMask_2(int32_t value)
	{
		___touchMask_2 = value;
	}

	inline static int32_t get_offset_of_joystickX_3() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___joystickX_3)); }
	inline float get_joystickX_3() const { return ___joystickX_3; }
	inline float* get_address_of_joystickX_3() { return &___joystickX_3; }
	inline void set_joystickX_3(float value)
	{
		___joystickX_3 = value;
	}

	inline static int32_t get_offset_of_joystickY_4() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___joystickY_4)); }
	inline float get_joystickY_4() const { return ___joystickY_4; }
	inline float* get_address_of_joystickY_4() { return &___joystickY_4; }
	inline void set_joystickY_4(float value)
	{
		___joystickY_4 = value;
	}

	inline static int32_t get_offset_of_indexTrigger_5() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___indexTrigger_5)); }
	inline float get_indexTrigger_5() const { return ___indexTrigger_5; }
	inline float* get_address_of_indexTrigger_5() { return &___indexTrigger_5; }
	inline void set_indexTrigger_5(float value)
	{
		___indexTrigger_5 = value;
	}

	inline static int32_t get_offset_of_handTrigger_6() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___handTrigger_6)); }
	inline float get_handTrigger_6() const { return ___handTrigger_6; }
	inline float* get_address_of_handTrigger_6() { return &___handTrigger_6; }
	inline void set_handTrigger_6(float value)
	{
		___handTrigger_6 = value;
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85, ___isActive_7)); }
	inline bool get_isActive_7() const { return ___isActive_7; }
	inline bool* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(bool value)
	{
		___isActive_7 = value;
	}
};


// ovrAvatarLight
struct  ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C 
{
public:
	// System.UInt32 ovrAvatarLight::id
	uint32_t ___id_0;
	// ovrAvatarLightType ovrAvatarLight::type
	int32_t ___type_1;
	// System.Single ovrAvatarLight::intensity
	float ___intensity_2;
	// UnityEngine.Vector3 ovrAvatarLight::worldDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldDirection_3;
	// UnityEngine.Vector3 ovrAvatarLight::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_4;
	// System.Single ovrAvatarLight::range
	float ___range_5;
	// System.Single ovrAvatarLight::spotAngleDeg
	float ___spotAngleDeg_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___intensity_2)); }
	inline float get_intensity_2() const { return ___intensity_2; }
	inline float* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(float value)
	{
		___intensity_2 = value;
	}

	inline static int32_t get_offset_of_worldDirection_3() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___worldDirection_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldDirection_3() const { return ___worldDirection_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldDirection_3() { return &___worldDirection_3; }
	inline void set_worldDirection_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldDirection_3 = value;
	}

	inline static int32_t get_offset_of_worldPosition_4() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___worldPosition_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_4() const { return ___worldPosition_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_4() { return &___worldPosition_4; }
	inline void set_worldPosition_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_spotAngleDeg_6() { return static_cast<int32_t>(offsetof(ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C, ___spotAngleDeg_6)); }
	inline float get_spotAngleDeg_6() const { return ___spotAngleDeg_6; }
	inline float* get_address_of_spotAngleDeg_6() { return &___spotAngleDeg_6; }
	inline void set_spotAngleDeg_6(float value)
	{
		___spotAngleDeg_6 = value;
	}
};


// ovrAvatarMaterialLayerState
struct  ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF 
{
public:
	// ovrAvatarMaterialLayerBlendMode ovrAvatarMaterialLayerState::blendMode
	int32_t ___blendMode_0;
	// ovrAvatarMaterialLayerSampleMode ovrAvatarMaterialLayerState::sampleMode
	int32_t ___sampleMode_1;
	// ovrAvatarMaterialMaskType ovrAvatarMaterialLayerState::maskType
	int32_t ___maskType_2;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::layerColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___layerColor_3;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::sampleParameters
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___sampleParameters_4;
	// System.UInt64 ovrAvatarMaterialLayerState::sampleTexture
	uint64_t ___sampleTexture_5;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::sampleScaleOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___sampleScaleOffset_6;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::maskParameters
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___maskParameters_7;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::maskAxis
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___maskAxis_8;

public:
	inline static int32_t get_offset_of_blendMode_0() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___blendMode_0)); }
	inline int32_t get_blendMode_0() const { return ___blendMode_0; }
	inline int32_t* get_address_of_blendMode_0() { return &___blendMode_0; }
	inline void set_blendMode_0(int32_t value)
	{
		___blendMode_0 = value;
	}

	inline static int32_t get_offset_of_sampleMode_1() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___sampleMode_1)); }
	inline int32_t get_sampleMode_1() const { return ___sampleMode_1; }
	inline int32_t* get_address_of_sampleMode_1() { return &___sampleMode_1; }
	inline void set_sampleMode_1(int32_t value)
	{
		___sampleMode_1 = value;
	}

	inline static int32_t get_offset_of_maskType_2() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___maskType_2)); }
	inline int32_t get_maskType_2() const { return ___maskType_2; }
	inline int32_t* get_address_of_maskType_2() { return &___maskType_2; }
	inline void set_maskType_2(int32_t value)
	{
		___maskType_2 = value;
	}

	inline static int32_t get_offset_of_layerColor_3() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___layerColor_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_layerColor_3() const { return ___layerColor_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_layerColor_3() { return &___layerColor_3; }
	inline void set_layerColor_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___layerColor_3 = value;
	}

	inline static int32_t get_offset_of_sampleParameters_4() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___sampleParameters_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_sampleParameters_4() const { return ___sampleParameters_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_sampleParameters_4() { return &___sampleParameters_4; }
	inline void set_sampleParameters_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___sampleParameters_4 = value;
	}

	inline static int32_t get_offset_of_sampleTexture_5() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___sampleTexture_5)); }
	inline uint64_t get_sampleTexture_5() const { return ___sampleTexture_5; }
	inline uint64_t* get_address_of_sampleTexture_5() { return &___sampleTexture_5; }
	inline void set_sampleTexture_5(uint64_t value)
	{
		___sampleTexture_5 = value;
	}

	inline static int32_t get_offset_of_sampleScaleOffset_6() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___sampleScaleOffset_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_sampleScaleOffset_6() const { return ___sampleScaleOffset_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_sampleScaleOffset_6() { return &___sampleScaleOffset_6; }
	inline void set_sampleScaleOffset_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___sampleScaleOffset_6 = value;
	}

	inline static int32_t get_offset_of_maskParameters_7() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___maskParameters_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_maskParameters_7() const { return ___maskParameters_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_maskParameters_7() { return &___maskParameters_7; }
	inline void set_maskParameters_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___maskParameters_7 = value;
	}

	inline static int32_t get_offset_of_maskAxis_8() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF, ___maskAxis_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_maskAxis_8() const { return ___maskAxis_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_maskAxis_8() { return &___maskAxis_8; }
	inline void set_maskAxis_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___maskAxis_8 = value;
	}
};


// ovrAvatarSkinnedMeshPose
struct  ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 
{
public:
	// System.UInt32 ovrAvatarSkinnedMeshPose::jointCount
	uint32_t ___jointCount_0;
	// ovrAvatarTransform[] ovrAvatarSkinnedMeshPose::jointTransform
	ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D* ___jointTransform_1;
	// System.Int32[] ovrAvatarSkinnedMeshPose::jointParents
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___jointParents_2;
	// System.IntPtr[] ovrAvatarSkinnedMeshPose::jointNames
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___jointNames_3;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4, ___jointCount_0)); }
	inline uint32_t get_jointCount_0() const { return ___jointCount_0; }
	inline uint32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(uint32_t value)
	{
		___jointCount_0 = value;
	}

	inline static int32_t get_offset_of_jointTransform_1() { return static_cast<int32_t>(offsetof(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4, ___jointTransform_1)); }
	inline ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D* get_jointTransform_1() const { return ___jointTransform_1; }
	inline ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D** get_address_of_jointTransform_1() { return &___jointTransform_1; }
	inline void set_jointTransform_1(ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D* value)
	{
		___jointTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_jointParents_2() { return static_cast<int32_t>(offsetof(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4, ___jointParents_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_jointParents_2() const { return ___jointParents_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_jointParents_2() { return &___jointParents_2; }
	inline void set_jointParents_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___jointParents_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointParents_2), (void*)value);
	}

	inline static int32_t get_offset_of_jointNames_3() { return static_cast<int32_t>(offsetof(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4, ___jointNames_3)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_jointNames_3() const { return ___jointNames_3; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_jointNames_3() { return &___jointNames_3; }
	inline void set_jointNames_3(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___jointNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointNames_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke
{
	uint32_t ___jointCount_0;
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___jointTransform_1[64];
	int32_t ___jointParents_2[64];
	intptr_t ___jointNames_3[64];
};
// Native definition for COM marshalling of ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com
{
	uint32_t ___jointCount_0;
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___jointTransform_1[64];
	int32_t ___jointParents_2[64];
	intptr_t ___jointNames_3[64];
};

// ovrAvatarTextureAssetData
struct  ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49 
{
public:
	// ovrAvatarTextureFormat ovrAvatarTextureAssetData::format
	int32_t ___format_0;
	// System.UInt32 ovrAvatarTextureAssetData::sizeX
	uint32_t ___sizeX_1;
	// System.UInt32 ovrAvatarTextureAssetData::sizeY
	uint32_t ___sizeY_2;
	// System.UInt32 ovrAvatarTextureAssetData::mipCount
	uint32_t ___mipCount_3;
	// System.UInt64 ovrAvatarTextureAssetData::textureDataSize
	uint64_t ___textureDataSize_4;
	// System.IntPtr ovrAvatarTextureAssetData::textureData
	intptr_t ___textureData_5;

public:
	inline static int32_t get_offset_of_format_0() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___format_0)); }
	inline int32_t get_format_0() const { return ___format_0; }
	inline int32_t* get_address_of_format_0() { return &___format_0; }
	inline void set_format_0(int32_t value)
	{
		___format_0 = value;
	}

	inline static int32_t get_offset_of_sizeX_1() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___sizeX_1)); }
	inline uint32_t get_sizeX_1() const { return ___sizeX_1; }
	inline uint32_t* get_address_of_sizeX_1() { return &___sizeX_1; }
	inline void set_sizeX_1(uint32_t value)
	{
		___sizeX_1 = value;
	}

	inline static int32_t get_offset_of_sizeY_2() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___sizeY_2)); }
	inline uint32_t get_sizeY_2() const { return ___sizeY_2; }
	inline uint32_t* get_address_of_sizeY_2() { return &___sizeY_2; }
	inline void set_sizeY_2(uint32_t value)
	{
		___sizeY_2 = value;
	}

	inline static int32_t get_offset_of_mipCount_3() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___mipCount_3)); }
	inline uint32_t get_mipCount_3() const { return ___mipCount_3; }
	inline uint32_t* get_address_of_mipCount_3() { return &___mipCount_3; }
	inline void set_mipCount_3(uint32_t value)
	{
		___mipCount_3 = value;
	}

	inline static int32_t get_offset_of_textureDataSize_4() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___textureDataSize_4)); }
	inline uint64_t get_textureDataSize_4() const { return ___textureDataSize_4; }
	inline uint64_t* get_address_of_textureDataSize_4() { return &___textureDataSize_4; }
	inline void set_textureDataSize_4(uint64_t value)
	{
		___textureDataSize_4 = value;
	}

	inline static int32_t get_offset_of_textureData_5() { return static_cast<int32_t>(offsetof(ovrAvatarTextureAssetData_t312A91A694CAB8BD68457011B644CA5632534A49, ___textureData_5)); }
	inline intptr_t get_textureData_5() const { return ___textureData_5; }
	inline intptr_t* get_address_of_textureData_5() { return &___textureData_5; }
	inline void set_textureData_5(intptr_t value)
	{
		___textureData_5 = value;
	}
};


// Oculus.Platform.Message`1_Callback<Oculus.Platform.Models.NetworkingPeer>
struct  Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>
struct  Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707  : public Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350
{
public:
	// T Oculus.Platform.Message`1::data
	NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707, ___data_4)); }
	inline NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * get_data_4() const { return ___data_4; }
	inline NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.Object>
struct  Message_1_t7CA4D6382E61BD402083B1A5D7E5320C2CA38381  : public Message_t9BDD2353FF3A51DFDCC8BC673E76272559319350
{
public:
	// T Oculus.Platform.Message`1::data
	RuntimeObject * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t7CA4D6382E61BD402083B1A5D7E5320C2CA38381, ___data_4)); }
	inline RuntimeObject * get_data_4() const { return ___data_4; }
	inline RuntimeObject ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RuntimeObject * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// assetLoadedCallback
struct  assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022  : public MulticastDelegate_t
{
public:

public:
};


// combinedMeshLoadedCallback
struct  combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36  : public MulticastDelegate_t
{
public:

public:
};


// ovrAvatarControllerComponent
struct  ovrAvatarControllerComponent_tECE41629BD714B8B9E4FB554FE5148622CF65205 
{
public:
	// ovrAvatarHandInputState ovrAvatarControllerComponent::inputState
	ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  ___inputState_0;
	// System.IntPtr ovrAvatarControllerComponent::renderComponent
	intptr_t ___renderComponent_1;

public:
	inline static int32_t get_offset_of_inputState_0() { return static_cast<int32_t>(offsetof(ovrAvatarControllerComponent_tECE41629BD714B8B9E4FB554FE5148622CF65205, ___inputState_0)); }
	inline ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  get_inputState_0() const { return ___inputState_0; }
	inline ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85 * get_address_of_inputState_0() { return &___inputState_0; }
	inline void set_inputState_0(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  value)
	{
		___inputState_0 = value;
	}

	inline static int32_t get_offset_of_renderComponent_1() { return static_cast<int32_t>(offsetof(ovrAvatarControllerComponent_tECE41629BD714B8B9E4FB554FE5148622CF65205, ___renderComponent_1)); }
	inline intptr_t get_renderComponent_1() const { return ___renderComponent_1; }
	inline intptr_t* get_address_of_renderComponent_1() { return &___renderComponent_1; }
	inline void set_renderComponent_1(intptr_t value)
	{
		___renderComponent_1 = value;
	}
};


// ovrAvatarGazeTargets
struct  ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17 
{
public:
	// System.UInt32 ovrAvatarGazeTargets::targetCount
	uint32_t ___targetCount_0;
	// ovrAvatarGazeTarget[] ovrAvatarGazeTargets::targets
	ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64* ___targets_1;

public:
	inline static int32_t get_offset_of_targetCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17, ___targetCount_0)); }
	inline uint32_t get_targetCount_0() const { return ___targetCount_0; }
	inline uint32_t* get_address_of_targetCount_0() { return &___targetCount_0; }
	inline void set_targetCount_0(uint32_t value)
	{
		___targetCount_0 = value;
	}

	inline static int32_t get_offset_of_targets_1() { return static_cast<int32_t>(offsetof(ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17, ___targets_1)); }
	inline ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64* get_targets_1() const { return ___targets_1; }
	inline ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64** get_address_of_targets_1() { return &___targets_1; }
	inline void set_targets_1(ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64* value)
	{
		___targets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarGazeTargets
struct ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_pinvoke
{
	uint32_t ___targetCount_0;
	ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  ___targets_1[128];
};
// Native definition for COM marshalling of ovrAvatarGazeTargets
struct ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_com
{
	uint32_t ___targetCount_0;
	ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  ___targets_1[128];
};

// ovrAvatarHandComponent
struct  ovrAvatarHandComponent_tCFCC5AE3E5D3FC0FDD2D006E1FCA2A5B0F0F7E07 
{
public:
	// ovrAvatarHandInputState ovrAvatarHandComponent::inputState
	ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  ___inputState_0;
	// System.IntPtr ovrAvatarHandComponent::renderComponent
	intptr_t ___renderComponent_1;

public:
	inline static int32_t get_offset_of_inputState_0() { return static_cast<int32_t>(offsetof(ovrAvatarHandComponent_tCFCC5AE3E5D3FC0FDD2D006E1FCA2A5B0F0F7E07, ___inputState_0)); }
	inline ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  get_inputState_0() const { return ___inputState_0; }
	inline ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85 * get_address_of_inputState_0() { return &___inputState_0; }
	inline void set_inputState_0(ovrAvatarHandInputState_t3B16F3924E3563CF7802B85280CFB2A8DC883C85  value)
	{
		___inputState_0 = value;
	}

	inline static int32_t get_offset_of_renderComponent_1() { return static_cast<int32_t>(offsetof(ovrAvatarHandComponent_tCFCC5AE3E5D3FC0FDD2D006E1FCA2A5B0F0F7E07, ___renderComponent_1)); }
	inline intptr_t get_renderComponent_1() const { return ___renderComponent_1; }
	inline intptr_t* get_address_of_renderComponent_1() { return &___renderComponent_1; }
	inline void set_renderComponent_1(intptr_t value)
	{
		___renderComponent_1 = value;
	}
};


// ovrAvatarLights
struct  ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE 
{
public:
	// System.Single ovrAvatarLights::ambientIntensity
	float ___ambientIntensity_0;
	// System.UInt32 ovrAvatarLights::lightCount
	uint32_t ___lightCount_1;
	// ovrAvatarLight[] ovrAvatarLights::lights
	ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A* ___lights_2;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_lightCount_1() { return static_cast<int32_t>(offsetof(ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE, ___lightCount_1)); }
	inline uint32_t get_lightCount_1() const { return ___lightCount_1; }
	inline uint32_t* get_address_of_lightCount_1() { return &___lightCount_1; }
	inline void set_lightCount_1(uint32_t value)
	{
		___lightCount_1 = value;
	}

	inline static int32_t get_offset_of_lights_2() { return static_cast<int32_t>(offsetof(ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE, ___lights_2)); }
	inline ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A* get_lights_2() const { return ___lights_2; }
	inline ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A** get_address_of_lights_2() { return &___lights_2; }
	inline void set_lights_2(ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A* value)
	{
		___lights_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lights_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarLights
struct ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_pinvoke
{
	float ___ambientIntensity_0;
	uint32_t ___lightCount_1;
	ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  ___lights_2[16];
};
// Native definition for COM marshalling of ovrAvatarLights
struct ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_com
{
	float ___ambientIntensity_0;
	uint32_t ___lightCount_1;
	ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  ___lights_2[16];
};

// ovrAvatarMaterialState
struct  ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 
{
public:
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseColor
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseColor_0;
	// ovrAvatarMaterialMaskType ovrAvatarMaterialState::baseMaskType
	int32_t ___baseMaskType_1;
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseMaskParameters
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskParameters_2;
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseMaskAxis
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskAxis_3;
	// ovrAvatarMaterialLayerSampleMode ovrAvatarMaterialState::sampleMode
	int32_t ___sampleMode_4;
	// System.UInt64 ovrAvatarMaterialState::alphaMaskTextureID
	uint64_t ___alphaMaskTextureID_5;
	// UnityEngine.Vector4 ovrAvatarMaterialState::alphaMaskScaleOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___alphaMaskScaleOffset_6;
	// System.UInt64 ovrAvatarMaterialState::normalMapTextureID
	uint64_t ___normalMapTextureID_7;
	// UnityEngine.Vector4 ovrAvatarMaterialState::normalMapScaleOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___normalMapScaleOffset_8;
	// System.UInt64 ovrAvatarMaterialState::parallaxMapTextureID
	uint64_t ___parallaxMapTextureID_9;
	// UnityEngine.Vector4 ovrAvatarMaterialState::parallaxMapScaleOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___parallaxMapScaleOffset_10;
	// System.UInt64 ovrAvatarMaterialState::roughnessMapTextureID
	uint64_t ___roughnessMapTextureID_11;
	// UnityEngine.Vector4 ovrAvatarMaterialState::roughnessMapScaleOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___roughnessMapScaleOffset_12;
	// System.UInt32 ovrAvatarMaterialState::layerCount
	uint32_t ___layerCount_13;
	// ovrAvatarMaterialLayerState[] ovrAvatarMaterialState::layers
	ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* ___layers_14;

public:
	inline static int32_t get_offset_of_baseColor_0() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___baseColor_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_baseColor_0() const { return ___baseColor_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_baseColor_0() { return &___baseColor_0; }
	inline void set_baseColor_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___baseColor_0 = value;
	}

	inline static int32_t get_offset_of_baseMaskType_1() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___baseMaskType_1)); }
	inline int32_t get_baseMaskType_1() const { return ___baseMaskType_1; }
	inline int32_t* get_address_of_baseMaskType_1() { return &___baseMaskType_1; }
	inline void set_baseMaskType_1(int32_t value)
	{
		___baseMaskType_1 = value;
	}

	inline static int32_t get_offset_of_baseMaskParameters_2() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___baseMaskParameters_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_baseMaskParameters_2() const { return ___baseMaskParameters_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_baseMaskParameters_2() { return &___baseMaskParameters_2; }
	inline void set_baseMaskParameters_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___baseMaskParameters_2 = value;
	}

	inline static int32_t get_offset_of_baseMaskAxis_3() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___baseMaskAxis_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_baseMaskAxis_3() const { return ___baseMaskAxis_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_baseMaskAxis_3() { return &___baseMaskAxis_3; }
	inline void set_baseMaskAxis_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___baseMaskAxis_3 = value;
	}

	inline static int32_t get_offset_of_sampleMode_4() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___sampleMode_4)); }
	inline int32_t get_sampleMode_4() const { return ___sampleMode_4; }
	inline int32_t* get_address_of_sampleMode_4() { return &___sampleMode_4; }
	inline void set_sampleMode_4(int32_t value)
	{
		___sampleMode_4 = value;
	}

	inline static int32_t get_offset_of_alphaMaskTextureID_5() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___alphaMaskTextureID_5)); }
	inline uint64_t get_alphaMaskTextureID_5() const { return ___alphaMaskTextureID_5; }
	inline uint64_t* get_address_of_alphaMaskTextureID_5() { return &___alphaMaskTextureID_5; }
	inline void set_alphaMaskTextureID_5(uint64_t value)
	{
		___alphaMaskTextureID_5 = value;
	}

	inline static int32_t get_offset_of_alphaMaskScaleOffset_6() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___alphaMaskScaleOffset_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_alphaMaskScaleOffset_6() const { return ___alphaMaskScaleOffset_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_alphaMaskScaleOffset_6() { return &___alphaMaskScaleOffset_6; }
	inline void set_alphaMaskScaleOffset_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___alphaMaskScaleOffset_6 = value;
	}

	inline static int32_t get_offset_of_normalMapTextureID_7() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___normalMapTextureID_7)); }
	inline uint64_t get_normalMapTextureID_7() const { return ___normalMapTextureID_7; }
	inline uint64_t* get_address_of_normalMapTextureID_7() { return &___normalMapTextureID_7; }
	inline void set_normalMapTextureID_7(uint64_t value)
	{
		___normalMapTextureID_7 = value;
	}

	inline static int32_t get_offset_of_normalMapScaleOffset_8() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___normalMapScaleOffset_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_normalMapScaleOffset_8() const { return ___normalMapScaleOffset_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_normalMapScaleOffset_8() { return &___normalMapScaleOffset_8; }
	inline void set_normalMapScaleOffset_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___normalMapScaleOffset_8 = value;
	}

	inline static int32_t get_offset_of_parallaxMapTextureID_9() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___parallaxMapTextureID_9)); }
	inline uint64_t get_parallaxMapTextureID_9() const { return ___parallaxMapTextureID_9; }
	inline uint64_t* get_address_of_parallaxMapTextureID_9() { return &___parallaxMapTextureID_9; }
	inline void set_parallaxMapTextureID_9(uint64_t value)
	{
		___parallaxMapTextureID_9 = value;
	}

	inline static int32_t get_offset_of_parallaxMapScaleOffset_10() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___parallaxMapScaleOffset_10)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_parallaxMapScaleOffset_10() const { return ___parallaxMapScaleOffset_10; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_parallaxMapScaleOffset_10() { return &___parallaxMapScaleOffset_10; }
	inline void set_parallaxMapScaleOffset_10(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___parallaxMapScaleOffset_10 = value;
	}

	inline static int32_t get_offset_of_roughnessMapTextureID_11() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___roughnessMapTextureID_11)); }
	inline uint64_t get_roughnessMapTextureID_11() const { return ___roughnessMapTextureID_11; }
	inline uint64_t* get_address_of_roughnessMapTextureID_11() { return &___roughnessMapTextureID_11; }
	inline void set_roughnessMapTextureID_11(uint64_t value)
	{
		___roughnessMapTextureID_11 = value;
	}

	inline static int32_t get_offset_of_roughnessMapScaleOffset_12() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___roughnessMapScaleOffset_12)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_roughnessMapScaleOffset_12() const { return ___roughnessMapScaleOffset_12; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_roughnessMapScaleOffset_12() { return &___roughnessMapScaleOffset_12; }
	inline void set_roughnessMapScaleOffset_12(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___roughnessMapScaleOffset_12 = value;
	}

	inline static int32_t get_offset_of_layerCount_13() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___layerCount_13)); }
	inline uint32_t get_layerCount_13() const { return ___layerCount_13; }
	inline uint32_t* get_address_of_layerCount_13() { return &___layerCount_13; }
	inline void set_layerCount_13(uint32_t value)
	{
		___layerCount_13 = value;
	}

	inline static int32_t get_offset_of_layers_14() { return static_cast<int32_t>(offsetof(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849, ___layers_14)); }
	inline ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* get_layers_14() const { return ___layers_14; }
	inline ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069** get_address_of_layers_14() { return &___layers_14; }
	inline void set_layers_14(ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* value)
	{
		___layers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layers_14), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarMaterialState
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseColor_0;
	int32_t ___baseMaskType_1;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskParameters_2;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskAxis_3;
	int32_t ___sampleMode_4;
	uint64_t ___alphaMaskTextureID_5;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___alphaMaskScaleOffset_6;
	uint64_t ___normalMapTextureID_7;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___normalMapScaleOffset_8;
	uint64_t ___parallaxMapTextureID_9;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___parallaxMapScaleOffset_10;
	uint64_t ___roughnessMapTextureID_11;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___roughnessMapScaleOffset_12;
	uint32_t ___layerCount_13;
	ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  ___layers_14[8];
};
// Native definition for COM marshalling of ovrAvatarMaterialState
struct ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseColor_0;
	int32_t ___baseMaskType_1;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskParameters_2;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___baseMaskAxis_3;
	int32_t ___sampleMode_4;
	uint64_t ___alphaMaskTextureID_5;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___alphaMaskScaleOffset_6;
	uint64_t ___normalMapTextureID_7;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___normalMapScaleOffset_8;
	uint64_t ___parallaxMapTextureID_9;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___parallaxMapScaleOffset_10;
	uint64_t ___roughnessMapTextureID_11;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___roughnessMapScaleOffset_12;
	uint32_t ___layerCount_13;
	ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  ___layers_14[8];
};

// ovrAvatarMeshAssetData
struct  ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD 
{
public:
	// System.UInt32 ovrAvatarMeshAssetData::vertexCount
	uint32_t ___vertexCount_0;
	// System.IntPtr ovrAvatarMeshAssetData::vertexBuffer
	intptr_t ___vertexBuffer_1;
	// System.UInt32 ovrAvatarMeshAssetData::indexCount
	uint32_t ___indexCount_2;
	// System.IntPtr ovrAvatarMeshAssetData::indexBuffer
	intptr_t ___indexBuffer_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarMeshAssetData::skinnedBindPose
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  ___skinnedBindPose_4;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD, ___vertexCount_0)); }
	inline uint32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline uint32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(uint32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertexBuffer_1() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD, ___vertexBuffer_1)); }
	inline intptr_t get_vertexBuffer_1() const { return ___vertexBuffer_1; }
	inline intptr_t* get_address_of_vertexBuffer_1() { return &___vertexBuffer_1; }
	inline void set_vertexBuffer_1(intptr_t value)
	{
		___vertexBuffer_1 = value;
	}

	inline static int32_t get_offset_of_indexCount_2() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD, ___indexCount_2)); }
	inline uint32_t get_indexCount_2() const { return ___indexCount_2; }
	inline uint32_t* get_address_of_indexCount_2() { return &___indexCount_2; }
	inline void set_indexCount_2(uint32_t value)
	{
		___indexCount_2 = value;
	}

	inline static int32_t get_offset_of_indexBuffer_3() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD, ___indexBuffer_3)); }
	inline intptr_t get_indexBuffer_3() const { return ___indexBuffer_3; }
	inline intptr_t* get_address_of_indexBuffer_3() { return &___indexBuffer_3; }
	inline void set_indexBuffer_3(intptr_t value)
	{
		___indexBuffer_3 = value;
	}

	inline static int32_t get_offset_of_skinnedBindPose_4() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD, ___skinnedBindPose_4)); }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  get_skinnedBindPose_4() const { return ___skinnedBindPose_4; }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 * get_address_of_skinnedBindPose_4() { return &___skinnedBindPose_4; }
	inline void set_skinnedBindPose_4(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  value)
	{
		___skinnedBindPose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointTransform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointParents_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointNames_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarMeshAssetData
struct ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_pinvoke
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke ___skinnedBindPose_4;
};
// Native definition for COM marshalling of ovrAvatarMeshAssetData
struct ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_com
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com ___skinnedBindPose_4;
};

// ovrAvatarMeshAssetDataV2
struct  ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3 
{
public:
	// System.UInt32 ovrAvatarMeshAssetDataV2::vertexCount
	uint32_t ___vertexCount_0;
	// System.IntPtr ovrAvatarMeshAssetDataV2::vertexBuffer
	intptr_t ___vertexBuffer_1;
	// System.UInt32 ovrAvatarMeshAssetDataV2::indexCount
	uint32_t ___indexCount_2;
	// System.IntPtr ovrAvatarMeshAssetDataV2::indexBuffer
	intptr_t ___indexBuffer_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarMeshAssetDataV2::skinnedBindPose
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  ___skinnedBindPose_4;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3, ___vertexCount_0)); }
	inline uint32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline uint32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(uint32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertexBuffer_1() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3, ___vertexBuffer_1)); }
	inline intptr_t get_vertexBuffer_1() const { return ___vertexBuffer_1; }
	inline intptr_t* get_address_of_vertexBuffer_1() { return &___vertexBuffer_1; }
	inline void set_vertexBuffer_1(intptr_t value)
	{
		___vertexBuffer_1 = value;
	}

	inline static int32_t get_offset_of_indexCount_2() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3, ___indexCount_2)); }
	inline uint32_t get_indexCount_2() const { return ___indexCount_2; }
	inline uint32_t* get_address_of_indexCount_2() { return &___indexCount_2; }
	inline void set_indexCount_2(uint32_t value)
	{
		___indexCount_2 = value;
	}

	inline static int32_t get_offset_of_indexBuffer_3() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3, ___indexBuffer_3)); }
	inline intptr_t get_indexBuffer_3() const { return ___indexBuffer_3; }
	inline intptr_t* get_address_of_indexBuffer_3() { return &___indexBuffer_3; }
	inline void set_indexBuffer_3(intptr_t value)
	{
		___indexBuffer_3 = value;
	}

	inline static int32_t get_offset_of_skinnedBindPose_4() { return static_cast<int32_t>(offsetof(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3, ___skinnedBindPose_4)); }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  get_skinnedBindPose_4() const { return ___skinnedBindPose_4; }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 * get_address_of_skinnedBindPose_4() { return &___skinnedBindPose_4; }
	inline void set_skinnedBindPose_4(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  value)
	{
		___skinnedBindPose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointTransform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointParents_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedBindPose_4))->___jointNames_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarMeshAssetDataV2
struct ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_pinvoke
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke ___skinnedBindPose_4;
};
// Native definition for COM marshalling of ovrAvatarMeshAssetDataV2
struct ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_com
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com ___skinnedBindPose_4;
};

// ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct  ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6 
{
public:
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRenderPBS::localTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRenderPBS::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::meshAssetID
	uint64_t ___meshAssetID_2;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::albedoTextureAssetID
	uint64_t ___albedoTextureAssetID_3;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::surfaceTextureAssetID
	uint64_t ___surfaceTextureAssetID_4;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRenderPBS::skinnedPose
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  ___skinnedPose_5;

public:
	inline static int32_t get_offset_of_localTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___localTransform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_localTransform_0() const { return ___localTransform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_localTransform_0() { return &___localTransform_0; }
	inline void set_localTransform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___localTransform_0 = value;
	}

	inline static int32_t get_offset_of_visibilityMask_1() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___visibilityMask_1)); }
	inline int32_t get_visibilityMask_1() const { return ___visibilityMask_1; }
	inline int32_t* get_address_of_visibilityMask_1() { return &___visibilityMask_1; }
	inline void set_visibilityMask_1(int32_t value)
	{
		___visibilityMask_1 = value;
	}

	inline static int32_t get_offset_of_meshAssetID_2() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___meshAssetID_2)); }
	inline uint64_t get_meshAssetID_2() const { return ___meshAssetID_2; }
	inline uint64_t* get_address_of_meshAssetID_2() { return &___meshAssetID_2; }
	inline void set_meshAssetID_2(uint64_t value)
	{
		___meshAssetID_2 = value;
	}

	inline static int32_t get_offset_of_albedoTextureAssetID_3() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___albedoTextureAssetID_3)); }
	inline uint64_t get_albedoTextureAssetID_3() const { return ___albedoTextureAssetID_3; }
	inline uint64_t* get_address_of_albedoTextureAssetID_3() { return &___albedoTextureAssetID_3; }
	inline void set_albedoTextureAssetID_3(uint64_t value)
	{
		___albedoTextureAssetID_3 = value;
	}

	inline static int32_t get_offset_of_surfaceTextureAssetID_4() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___surfaceTextureAssetID_4)); }
	inline uint64_t get_surfaceTextureAssetID_4() const { return ___surfaceTextureAssetID_4; }
	inline uint64_t* get_address_of_surfaceTextureAssetID_4() { return &___surfaceTextureAssetID_4; }
	inline void set_surfaceTextureAssetID_4(uint64_t value)
	{
		___surfaceTextureAssetID_4 = value;
	}

	inline static int32_t get_offset_of_skinnedPose_5() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6, ___skinnedPose_5)); }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  get_skinnedPose_5() const { return ___skinnedPose_5; }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 * get_address_of_skinnedPose_5() { return &___skinnedPose_5; }
	inline void set_skinnedPose_5(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  value)
	{
		___skinnedPose_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_5))->___jointTransform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_5))->___jointParents_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_5))->___jointNames_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_pinvoke
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	uint64_t ___albedoTextureAssetID_3;
	uint64_t ___surfaceTextureAssetID_4;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke ___skinnedPose_5;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_com
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	uint64_t ___albedoTextureAssetID_3;
	uint64_t ___surfaceTextureAssetID_4;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com ___skinnedPose_5;
};

// ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct  ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620 
{
public:
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::localTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::meshAssetID
	uint64_t ___meshAssetID_2;
	// ovrAvatarPBSMaterialState ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::materialState
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  ___materialState_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::skinnedPose
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  ___skinnedPose_4;

public:
	inline static int32_t get_offset_of_localTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620, ___localTransform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_localTransform_0() const { return ___localTransform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_localTransform_0() { return &___localTransform_0; }
	inline void set_localTransform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___localTransform_0 = value;
	}

	inline static int32_t get_offset_of_visibilityMask_1() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620, ___visibilityMask_1)); }
	inline int32_t get_visibilityMask_1() const { return ___visibilityMask_1; }
	inline int32_t* get_address_of_visibilityMask_1() { return &___visibilityMask_1; }
	inline void set_visibilityMask_1(int32_t value)
	{
		___visibilityMask_1 = value;
	}

	inline static int32_t get_offset_of_meshAssetID_2() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620, ___meshAssetID_2)); }
	inline uint64_t get_meshAssetID_2() const { return ___meshAssetID_2; }
	inline uint64_t* get_address_of_meshAssetID_2() { return &___meshAssetID_2; }
	inline void set_meshAssetID_2(uint64_t value)
	{
		___meshAssetID_2 = value;
	}

	inline static int32_t get_offset_of_materialState_3() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620, ___materialState_3)); }
	inline ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  get_materialState_3() const { return ___materialState_3; }
	inline ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * get_address_of_materialState_3() { return &___materialState_3; }
	inline void set_materialState_3(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  value)
	{
		___materialState_3 = value;
	}

	inline static int32_t get_offset_of_skinnedPose_4() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620, ___skinnedPose_4)); }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  get_skinnedPose_4() const { return ___skinnedPose_4; }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 * get_address_of_skinnedPose_4() { return &___skinnedPose_4; }
	inline void set_skinnedPose_4(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  value)
	{
		___skinnedPose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointTransform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointParents_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointNames_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_pinvoke
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  ___materialState_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke ___skinnedPose_4;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_com
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  ___materialState_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com ___skinnedPose_4;
};

// specificationCallback
struct  specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ovrAvatarRenderPart_ProjectorRender
struct  ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D 
{
public:
	// ovrAvatarTransform ovrAvatarRenderPart_ProjectorRender::localTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	// System.UInt32 ovrAvatarRenderPart_ProjectorRender::componentIndex
	uint32_t ___componentIndex_1;
	// System.UInt32 ovrAvatarRenderPart_ProjectorRender::renderPartIndex
	uint32_t ___renderPartIndex_2;
	// ovrAvatarMaterialState ovrAvatarRenderPart_ProjectorRender::materialState
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  ___materialState_3;

public:
	inline static int32_t get_offset_of_localTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D, ___localTransform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_localTransform_0() const { return ___localTransform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_localTransform_0() { return &___localTransform_0; }
	inline void set_localTransform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___localTransform_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D, ___componentIndex_1)); }
	inline uint32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline uint32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(uint32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_renderPartIndex_2() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D, ___renderPartIndex_2)); }
	inline uint32_t get_renderPartIndex_2() const { return ___renderPartIndex_2; }
	inline uint32_t* get_address_of_renderPartIndex_2() { return &___renderPartIndex_2; }
	inline void set_renderPartIndex_2(uint32_t value)
	{
		___renderPartIndex_2 = value;
	}

	inline static int32_t get_offset_of_materialState_3() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D, ___materialState_3)); }
	inline ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  get_materialState_3() const { return ___materialState_3; }
	inline ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * get_address_of_materialState_3() { return &___materialState_3; }
	inline void set_materialState_3(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  value)
	{
		___materialState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialState_3))->___layers_14), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_ProjectorRender
struct ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_pinvoke
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	uint32_t ___componentIndex_1;
	uint32_t ___renderPartIndex_2;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke ___materialState_3;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_ProjectorRender
struct ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_com
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	uint32_t ___componentIndex_1;
	uint32_t ___renderPartIndex_2;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com ___materialState_3;
};

// ovrAvatarRenderPart_SkinnedMeshRender
struct  ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF 
{
public:
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRender::localTransform
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRender::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRender::meshAssetID
	uint64_t ___meshAssetID_2;
	// ovrAvatarMaterialState ovrAvatarRenderPart_SkinnedMeshRender::materialState
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  ___materialState_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRender::skinnedPose
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  ___skinnedPose_4;

public:
	inline static int32_t get_offset_of_localTransform_0() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF, ___localTransform_0)); }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  get_localTransform_0() const { return ___localTransform_0; }
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * get_address_of_localTransform_0() { return &___localTransform_0; }
	inline void set_localTransform_0(ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		___localTransform_0 = value;
	}

	inline static int32_t get_offset_of_visibilityMask_1() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF, ___visibilityMask_1)); }
	inline int32_t get_visibilityMask_1() const { return ___visibilityMask_1; }
	inline int32_t* get_address_of_visibilityMask_1() { return &___visibilityMask_1; }
	inline void set_visibilityMask_1(int32_t value)
	{
		___visibilityMask_1 = value;
	}

	inline static int32_t get_offset_of_meshAssetID_2() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF, ___meshAssetID_2)); }
	inline uint64_t get_meshAssetID_2() const { return ___meshAssetID_2; }
	inline uint64_t* get_address_of_meshAssetID_2() { return &___meshAssetID_2; }
	inline void set_meshAssetID_2(uint64_t value)
	{
		___meshAssetID_2 = value;
	}

	inline static int32_t get_offset_of_materialState_3() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF, ___materialState_3)); }
	inline ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  get_materialState_3() const { return ___materialState_3; }
	inline ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * get_address_of_materialState_3() { return &___materialState_3; }
	inline void set_materialState_3(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  value)
	{
		___materialState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialState_3))->___layers_14), (void*)NULL);
	}

	inline static int32_t get_offset_of_skinnedPose_4() { return static_cast<int32_t>(offsetof(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF, ___skinnedPose_4)); }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  get_skinnedPose_4() const { return ___skinnedPose_4; }
	inline ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4 * get_address_of_skinnedPose_4() { return &___skinnedPose_4; }
	inline void set_skinnedPose_4(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  value)
	{
		___skinnedPose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointTransform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointParents_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___skinnedPose_4))->___jointNames_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRender
struct ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_pinvoke
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke ___materialState_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke ___skinnedPose_4;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRender
struct ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_com
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com ___materialState_3;
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com ___skinnedPose_4;
};

// LocomotionTeleport
struct  LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean LocomotionTeleport::EnableMovementDuringReady
	bool ___EnableMovementDuringReady_4;
	// System.Boolean LocomotionTeleport::EnableMovementDuringAim
	bool ___EnableMovementDuringAim_5;
	// System.Boolean LocomotionTeleport::EnableMovementDuringPreTeleport
	bool ___EnableMovementDuringPreTeleport_6;
	// System.Boolean LocomotionTeleport::EnableMovementDuringPostTeleport
	bool ___EnableMovementDuringPostTeleport_7;
	// System.Boolean LocomotionTeleport::EnableRotationDuringReady
	bool ___EnableRotationDuringReady_8;
	// System.Boolean LocomotionTeleport::EnableRotationDuringAim
	bool ___EnableRotationDuringAim_9;
	// System.Boolean LocomotionTeleport::EnableRotationDuringPreTeleport
	bool ___EnableRotationDuringPreTeleport_10;
	// System.Boolean LocomotionTeleport::EnableRotationDuringPostTeleport
	bool ___EnableRotationDuringPostTeleport_11;
	// LocomotionTeleport_States LocomotionTeleport::<CurrentState>k__BackingField
	int32_t ___U3CCurrentStateU3Ek__BackingField_12;
	// TeleportAimHandler LocomotionTeleport::AimHandler
	TeleportAimHandler_t42D9AABB16D2C76E8C5D54E5690BECC7C7F9F26F * ___AimHandler_13;
	// TeleportDestination LocomotionTeleport::TeleportDestinationPrefab
	TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * ___TeleportDestinationPrefab_14;
	// System.Int32 LocomotionTeleport::TeleportDestinationLayer
	int32_t ___TeleportDestinationLayer_15;
	// System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>> LocomotionTeleport::UpdateTeleportDestination
	Action_4_tBC197DC1F875F378C032800413E9B90C86C0E86B * ___UpdateTeleportDestination_16;
	// TeleportInputHandler LocomotionTeleport::InputHandler
	TeleportInputHandler_t5490F63C64553F46BD71E577FF8AF187C8010FD4 * ___InputHandler_17;
	// LocomotionTeleport_TeleportIntentions LocomotionTeleport::CurrentIntention
	int32_t ___CurrentIntention_18;
	// System.Boolean LocomotionTeleport::IsPreTeleportRequested
	bool ___IsPreTeleportRequested_19;
	// System.Boolean LocomotionTeleport::IsTransitioning
	bool ___IsTransitioning_20;
	// System.Boolean LocomotionTeleport::IsPostTeleportRequested
	bool ___IsPostTeleportRequested_21;
	// TeleportDestination LocomotionTeleport::_teleportDestination
	TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * ____teleportDestination_22;
	// LocomotionController LocomotionTeleport::<LocomotionController>k__BackingField
	LocomotionController_tA907F9E139EBDD71711738652E6B15242831F03C * ___U3CLocomotionControllerU3Ek__BackingField_23;
	// LocomotionTeleport_AimCollisionTypes LocomotionTeleport::AimCollisionType
	int32_t ___AimCollisionType_24;
	// System.Boolean LocomotionTeleport::UseCharacterCollisionData
	bool ___UseCharacterCollisionData_25;
	// System.Single LocomotionTeleport::AimCollisionRadius
	float ___AimCollisionRadius_26;
	// System.Single LocomotionTeleport::AimCollisionHeight
	float ___AimCollisionHeight_27;
	// System.Action LocomotionTeleport::EnterStateReady
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStateReady_28;
	// System.Action LocomotionTeleport::EnterStateAim
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStateAim_29;
	// System.Action`1<LocomotionTeleport_AimData> LocomotionTeleport::UpdateAimData
	Action_1_tC61630CFDAE4C1FF52EEEF9511C9247A9034C500 * ___UpdateAimData_30;
	// System.Action LocomotionTeleport::ExitStateAim
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___ExitStateAim_31;
	// System.Action LocomotionTeleport::EnterStateCancelAim
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStateCancelAim_32;
	// System.Action LocomotionTeleport::EnterStatePreTeleport
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStatePreTeleport_33;
	// System.Action LocomotionTeleport::EnterStateCancelTeleport
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStateCancelTeleport_34;
	// System.Action LocomotionTeleport::EnterStateTeleporting
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStateTeleporting_35;
	// System.Action LocomotionTeleport::EnterStatePostTeleport
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnterStatePostTeleport_36;
	// System.Action`3<UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion> LocomotionTeleport::Teleported
	Action_3_tCB8DDC66911F91B32CCE6F69169873E3C1A69A74 * ___Teleported_37;

public:
	inline static int32_t get_offset_of_EnableMovementDuringReady_4() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableMovementDuringReady_4)); }
	inline bool get_EnableMovementDuringReady_4() const { return ___EnableMovementDuringReady_4; }
	inline bool* get_address_of_EnableMovementDuringReady_4() { return &___EnableMovementDuringReady_4; }
	inline void set_EnableMovementDuringReady_4(bool value)
	{
		___EnableMovementDuringReady_4 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringAim_5() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableMovementDuringAim_5)); }
	inline bool get_EnableMovementDuringAim_5() const { return ___EnableMovementDuringAim_5; }
	inline bool* get_address_of_EnableMovementDuringAim_5() { return &___EnableMovementDuringAim_5; }
	inline void set_EnableMovementDuringAim_5(bool value)
	{
		___EnableMovementDuringAim_5 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringPreTeleport_6() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableMovementDuringPreTeleport_6)); }
	inline bool get_EnableMovementDuringPreTeleport_6() const { return ___EnableMovementDuringPreTeleport_6; }
	inline bool* get_address_of_EnableMovementDuringPreTeleport_6() { return &___EnableMovementDuringPreTeleport_6; }
	inline void set_EnableMovementDuringPreTeleport_6(bool value)
	{
		___EnableMovementDuringPreTeleport_6 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringPostTeleport_7() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableMovementDuringPostTeleport_7)); }
	inline bool get_EnableMovementDuringPostTeleport_7() const { return ___EnableMovementDuringPostTeleport_7; }
	inline bool* get_address_of_EnableMovementDuringPostTeleport_7() { return &___EnableMovementDuringPostTeleport_7; }
	inline void set_EnableMovementDuringPostTeleport_7(bool value)
	{
		___EnableMovementDuringPostTeleport_7 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringReady_8() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableRotationDuringReady_8)); }
	inline bool get_EnableRotationDuringReady_8() const { return ___EnableRotationDuringReady_8; }
	inline bool* get_address_of_EnableRotationDuringReady_8() { return &___EnableRotationDuringReady_8; }
	inline void set_EnableRotationDuringReady_8(bool value)
	{
		___EnableRotationDuringReady_8 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringAim_9() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableRotationDuringAim_9)); }
	inline bool get_EnableRotationDuringAim_9() const { return ___EnableRotationDuringAim_9; }
	inline bool* get_address_of_EnableRotationDuringAim_9() { return &___EnableRotationDuringAim_9; }
	inline void set_EnableRotationDuringAim_9(bool value)
	{
		___EnableRotationDuringAim_9 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringPreTeleport_10() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableRotationDuringPreTeleport_10)); }
	inline bool get_EnableRotationDuringPreTeleport_10() const { return ___EnableRotationDuringPreTeleport_10; }
	inline bool* get_address_of_EnableRotationDuringPreTeleport_10() { return &___EnableRotationDuringPreTeleport_10; }
	inline void set_EnableRotationDuringPreTeleport_10(bool value)
	{
		___EnableRotationDuringPreTeleport_10 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringPostTeleport_11() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnableRotationDuringPostTeleport_11)); }
	inline bool get_EnableRotationDuringPostTeleport_11() const { return ___EnableRotationDuringPostTeleport_11; }
	inline bool* get_address_of_EnableRotationDuringPostTeleport_11() { return &___EnableRotationDuringPostTeleport_11; }
	inline void set_EnableRotationDuringPostTeleport_11(bool value)
	{
		___EnableRotationDuringPostTeleport_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentStateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___U3CCurrentStateU3Ek__BackingField_12)); }
	inline int32_t get_U3CCurrentStateU3Ek__BackingField_12() const { return ___U3CCurrentStateU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCurrentStateU3Ek__BackingField_12() { return &___U3CCurrentStateU3Ek__BackingField_12; }
	inline void set_U3CCurrentStateU3Ek__BackingField_12(int32_t value)
	{
		___U3CCurrentStateU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_AimHandler_13() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___AimHandler_13)); }
	inline TeleportAimHandler_t42D9AABB16D2C76E8C5D54E5690BECC7C7F9F26F * get_AimHandler_13() const { return ___AimHandler_13; }
	inline TeleportAimHandler_t42D9AABB16D2C76E8C5D54E5690BECC7C7F9F26F ** get_address_of_AimHandler_13() { return &___AimHandler_13; }
	inline void set_AimHandler_13(TeleportAimHandler_t42D9AABB16D2C76E8C5D54E5690BECC7C7F9F26F * value)
	{
		___AimHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AimHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportDestinationPrefab_14() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___TeleportDestinationPrefab_14)); }
	inline TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * get_TeleportDestinationPrefab_14() const { return ___TeleportDestinationPrefab_14; }
	inline TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D ** get_address_of_TeleportDestinationPrefab_14() { return &___TeleportDestinationPrefab_14; }
	inline void set_TeleportDestinationPrefab_14(TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * value)
	{
		___TeleportDestinationPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportDestinationPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportDestinationLayer_15() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___TeleportDestinationLayer_15)); }
	inline int32_t get_TeleportDestinationLayer_15() const { return ___TeleportDestinationLayer_15; }
	inline int32_t* get_address_of_TeleportDestinationLayer_15() { return &___TeleportDestinationLayer_15; }
	inline void set_TeleportDestinationLayer_15(int32_t value)
	{
		___TeleportDestinationLayer_15 = value;
	}

	inline static int32_t get_offset_of_UpdateTeleportDestination_16() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___UpdateTeleportDestination_16)); }
	inline Action_4_tBC197DC1F875F378C032800413E9B90C86C0E86B * get_UpdateTeleportDestination_16() const { return ___UpdateTeleportDestination_16; }
	inline Action_4_tBC197DC1F875F378C032800413E9B90C86C0E86B ** get_address_of_UpdateTeleportDestination_16() { return &___UpdateTeleportDestination_16; }
	inline void set_UpdateTeleportDestination_16(Action_4_tBC197DC1F875F378C032800413E9B90C86C0E86B * value)
	{
		___UpdateTeleportDestination_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateTeleportDestination_16), (void*)value);
	}

	inline static int32_t get_offset_of_InputHandler_17() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___InputHandler_17)); }
	inline TeleportInputHandler_t5490F63C64553F46BD71E577FF8AF187C8010FD4 * get_InputHandler_17() const { return ___InputHandler_17; }
	inline TeleportInputHandler_t5490F63C64553F46BD71E577FF8AF187C8010FD4 ** get_address_of_InputHandler_17() { return &___InputHandler_17; }
	inline void set_InputHandler_17(TeleportInputHandler_t5490F63C64553F46BD71E577FF8AF187C8010FD4 * value)
	{
		___InputHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentIntention_18() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___CurrentIntention_18)); }
	inline int32_t get_CurrentIntention_18() const { return ___CurrentIntention_18; }
	inline int32_t* get_address_of_CurrentIntention_18() { return &___CurrentIntention_18; }
	inline void set_CurrentIntention_18(int32_t value)
	{
		___CurrentIntention_18 = value;
	}

	inline static int32_t get_offset_of_IsPreTeleportRequested_19() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___IsPreTeleportRequested_19)); }
	inline bool get_IsPreTeleportRequested_19() const { return ___IsPreTeleportRequested_19; }
	inline bool* get_address_of_IsPreTeleportRequested_19() { return &___IsPreTeleportRequested_19; }
	inline void set_IsPreTeleportRequested_19(bool value)
	{
		___IsPreTeleportRequested_19 = value;
	}

	inline static int32_t get_offset_of_IsTransitioning_20() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___IsTransitioning_20)); }
	inline bool get_IsTransitioning_20() const { return ___IsTransitioning_20; }
	inline bool* get_address_of_IsTransitioning_20() { return &___IsTransitioning_20; }
	inline void set_IsTransitioning_20(bool value)
	{
		___IsTransitioning_20 = value;
	}

	inline static int32_t get_offset_of_IsPostTeleportRequested_21() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___IsPostTeleportRequested_21)); }
	inline bool get_IsPostTeleportRequested_21() const { return ___IsPostTeleportRequested_21; }
	inline bool* get_address_of_IsPostTeleportRequested_21() { return &___IsPostTeleportRequested_21; }
	inline void set_IsPostTeleportRequested_21(bool value)
	{
		___IsPostTeleportRequested_21 = value;
	}

	inline static int32_t get_offset_of__teleportDestination_22() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ____teleportDestination_22)); }
	inline TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * get__teleportDestination_22() const { return ____teleportDestination_22; }
	inline TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D ** get_address_of__teleportDestination_22() { return &____teleportDestination_22; }
	inline void set__teleportDestination_22(TeleportDestination_t5C3D78FE57FA29F6662875DC59797F5875B7402D * value)
	{
		____teleportDestination_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____teleportDestination_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocomotionControllerU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___U3CLocomotionControllerU3Ek__BackingField_23)); }
	inline LocomotionController_tA907F9E139EBDD71711738652E6B15242831F03C * get_U3CLocomotionControllerU3Ek__BackingField_23() const { return ___U3CLocomotionControllerU3Ek__BackingField_23; }
	inline LocomotionController_tA907F9E139EBDD71711738652E6B15242831F03C ** get_address_of_U3CLocomotionControllerU3Ek__BackingField_23() { return &___U3CLocomotionControllerU3Ek__BackingField_23; }
	inline void set_U3CLocomotionControllerU3Ek__BackingField_23(LocomotionController_tA907F9E139EBDD71711738652E6B15242831F03C * value)
	{
		___U3CLocomotionControllerU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocomotionControllerU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_AimCollisionType_24() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___AimCollisionType_24)); }
	inline int32_t get_AimCollisionType_24() const { return ___AimCollisionType_24; }
	inline int32_t* get_address_of_AimCollisionType_24() { return &___AimCollisionType_24; }
	inline void set_AimCollisionType_24(int32_t value)
	{
		___AimCollisionType_24 = value;
	}

	inline static int32_t get_offset_of_UseCharacterCollisionData_25() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___UseCharacterCollisionData_25)); }
	inline bool get_UseCharacterCollisionData_25() const { return ___UseCharacterCollisionData_25; }
	inline bool* get_address_of_UseCharacterCollisionData_25() { return &___UseCharacterCollisionData_25; }
	inline void set_UseCharacterCollisionData_25(bool value)
	{
		___UseCharacterCollisionData_25 = value;
	}

	inline static int32_t get_offset_of_AimCollisionRadius_26() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___AimCollisionRadius_26)); }
	inline float get_AimCollisionRadius_26() const { return ___AimCollisionRadius_26; }
	inline float* get_address_of_AimCollisionRadius_26() { return &___AimCollisionRadius_26; }
	inline void set_AimCollisionRadius_26(float value)
	{
		___AimCollisionRadius_26 = value;
	}

	inline static int32_t get_offset_of_AimCollisionHeight_27() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___AimCollisionHeight_27)); }
	inline float get_AimCollisionHeight_27() const { return ___AimCollisionHeight_27; }
	inline float* get_address_of_AimCollisionHeight_27() { return &___AimCollisionHeight_27; }
	inline void set_AimCollisionHeight_27(float value)
	{
		___AimCollisionHeight_27 = value;
	}

	inline static int32_t get_offset_of_EnterStateReady_28() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStateReady_28)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStateReady_28() const { return ___EnterStateReady_28; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStateReady_28() { return &___EnterStateReady_28; }
	inline void set_EnterStateReady_28(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStateReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateAim_29() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStateAim_29)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStateAim_29() const { return ___EnterStateAim_29; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStateAim_29() { return &___EnterStateAim_29; }
	inline void set_EnterStateAim_29(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStateAim_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateAim_29), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAimData_30() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___UpdateAimData_30)); }
	inline Action_1_tC61630CFDAE4C1FF52EEEF9511C9247A9034C500 * get_UpdateAimData_30() const { return ___UpdateAimData_30; }
	inline Action_1_tC61630CFDAE4C1FF52EEEF9511C9247A9034C500 ** get_address_of_UpdateAimData_30() { return &___UpdateAimData_30; }
	inline void set_UpdateAimData_30(Action_1_tC61630CFDAE4C1FF52EEEF9511C9247A9034C500 * value)
	{
		___UpdateAimData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateAimData_30), (void*)value);
	}

	inline static int32_t get_offset_of_ExitStateAim_31() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___ExitStateAim_31)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_ExitStateAim_31() const { return ___ExitStateAim_31; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_ExitStateAim_31() { return &___ExitStateAim_31; }
	inline void set_ExitStateAim_31(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___ExitStateAim_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExitStateAim_31), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateCancelAim_32() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStateCancelAim_32)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStateCancelAim_32() const { return ___EnterStateCancelAim_32; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStateCancelAim_32() { return &___EnterStateCancelAim_32; }
	inline void set_EnterStateCancelAim_32(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStateCancelAim_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateCancelAim_32), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStatePreTeleport_33() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStatePreTeleport_33)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStatePreTeleport_33() const { return ___EnterStatePreTeleport_33; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStatePreTeleport_33() { return &___EnterStatePreTeleport_33; }
	inline void set_EnterStatePreTeleport_33(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStatePreTeleport_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStatePreTeleport_33), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateCancelTeleport_34() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStateCancelTeleport_34)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStateCancelTeleport_34() const { return ___EnterStateCancelTeleport_34; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStateCancelTeleport_34() { return &___EnterStateCancelTeleport_34; }
	inline void set_EnterStateCancelTeleport_34(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStateCancelTeleport_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateCancelTeleport_34), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateTeleporting_35() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStateTeleporting_35)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStateTeleporting_35() const { return ___EnterStateTeleporting_35; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStateTeleporting_35() { return &___EnterStateTeleporting_35; }
	inline void set_EnterStateTeleporting_35(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStateTeleporting_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateTeleporting_35), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStatePostTeleport_36() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___EnterStatePostTeleport_36)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnterStatePostTeleport_36() const { return ___EnterStatePostTeleport_36; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnterStatePostTeleport_36() { return &___EnterStatePostTeleport_36; }
	inline void set_EnterStatePostTeleport_36(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnterStatePostTeleport_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStatePostTeleport_36), (void*)value);
	}

	inline static int32_t get_offset_of_Teleported_37() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60, ___Teleported_37)); }
	inline Action_3_tCB8DDC66911F91B32CCE6F69169873E3C1A69A74 * get_Teleported_37() const { return ___Teleported_37; }
	inline Action_3_tCB8DDC66911F91B32CCE6F69169873E3C1A69A74 ** get_address_of_Teleported_37() { return &___Teleported_37; }
	inline void set_Teleported_37(Action_3_tCB8DDC66911F91B32CCE6F69169873E3C1A69A74 * value)
	{
		___Teleported_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teleported_37), (void*)value);
	}
};


// TeleportPoint
struct  TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single TeleportPoint::dimmingSpeed
	float ___dimmingSpeed_4;
	// System.Single TeleportPoint::fullIntensity
	float ___fullIntensity_5;
	// System.Single TeleportPoint::lowIntensity
	float ___lowIntensity_6;
	// UnityEngine.Transform TeleportPoint::destTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___destTransform_7;
	// System.Single TeleportPoint::lastLookAtTime
	float ___lastLookAtTime_8;

public:
	inline static int32_t get_offset_of_dimmingSpeed_4() { return static_cast<int32_t>(offsetof(TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887, ___dimmingSpeed_4)); }
	inline float get_dimmingSpeed_4() const { return ___dimmingSpeed_4; }
	inline float* get_address_of_dimmingSpeed_4() { return &___dimmingSpeed_4; }
	inline void set_dimmingSpeed_4(float value)
	{
		___dimmingSpeed_4 = value;
	}

	inline static int32_t get_offset_of_fullIntensity_5() { return static_cast<int32_t>(offsetof(TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887, ___fullIntensity_5)); }
	inline float get_fullIntensity_5() const { return ___fullIntensity_5; }
	inline float* get_address_of_fullIntensity_5() { return &___fullIntensity_5; }
	inline void set_fullIntensity_5(float value)
	{
		___fullIntensity_5 = value;
	}

	inline static int32_t get_offset_of_lowIntensity_6() { return static_cast<int32_t>(offsetof(TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887, ___lowIntensity_6)); }
	inline float get_lowIntensity_6() const { return ___lowIntensity_6; }
	inline float* get_address_of_lowIntensity_6() { return &___lowIntensity_6; }
	inline void set_lowIntensity_6(float value)
	{
		___lowIntensity_6 = value;
	}

	inline static int32_t get_offset_of_destTransform_7() { return static_cast<int32_t>(offsetof(TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887, ___destTransform_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_destTransform_7() const { return ___destTransform_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_destTransform_7() { return &___destTransform_7; }
	inline void set_destTransform_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___destTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lastLookAtTime_8() { return static_cast<int32_t>(offsetof(TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887, ___lastLookAtTime_8)); }
	inline float get_lastLookAtTime_8() const { return ___lastLookAtTime_8; }
	inline float* get_address_of_lastLookAtTime_8() { return &___lastLookAtTime_8; }
	inline void set_lastLookAtTime_8(float value)
	{
		___lastLookAtTime_8 = value;
	}
};


// TeleportSupport
struct  TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LocomotionTeleport TeleportSupport::<LocomotionTeleport>k__BackingField
	LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * ___U3CLocomotionTeleportU3Ek__BackingField_4;
	// System.Boolean TeleportSupport::_eventsActive
	bool ____eventsActive_5;

public:
	inline static int32_t get_offset_of_U3CLocomotionTeleportU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC, ___U3CLocomotionTeleportU3Ek__BackingField_4)); }
	inline LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * get_U3CLocomotionTeleportU3Ek__BackingField_4() const { return ___U3CLocomotionTeleportU3Ek__BackingField_4; }
	inline LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 ** get_address_of_U3CLocomotionTeleportU3Ek__BackingField_4() { return &___U3CLocomotionTeleportU3Ek__BackingField_4; }
	inline void set_U3CLocomotionTeleportU3Ek__BackingField_4(LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * value)
	{
		___U3CLocomotionTeleportU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocomotionTeleportU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of__eventsActive_5() { return static_cast<int32_t>(offsetof(TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC, ____eventsActive_5)); }
	inline bool get__eventsActive_5() const { return ____eventsActive_5; }
	inline bool* get_address_of__eventsActive_5() { return &____eventsActive_5; }
	inline void set__eventsActive_5(bool value)
	{
		____eventsActive_5 = value;
	}
};


// TeleportTargetHandler
struct  TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50  : public TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC
{
public:
	// UnityEngine.LayerMask TeleportTargetHandler::AimCollisionLayerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___AimCollisionLayerMask_6;
	// LocomotionTeleport_AimData TeleportTargetHandler::AimData
	AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * ___AimData_7;
	// System.Action TeleportTargetHandler::_startAimAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____startAimAction_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TeleportTargetHandler::_aimPoints
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ____aimPoints_9;

public:
	inline static int32_t get_offset_of_AimCollisionLayerMask_6() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50, ___AimCollisionLayerMask_6)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_AimCollisionLayerMask_6() const { return ___AimCollisionLayerMask_6; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_AimCollisionLayerMask_6() { return &___AimCollisionLayerMask_6; }
	inline void set_AimCollisionLayerMask_6(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___AimCollisionLayerMask_6 = value;
	}

	inline static int32_t get_offset_of_AimData_7() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50, ___AimData_7)); }
	inline AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * get_AimData_7() const { return ___AimData_7; }
	inline AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 ** get_address_of_AimData_7() { return &___AimData_7; }
	inline void set_AimData_7(AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * value)
	{
		___AimData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AimData_7), (void*)value);
	}

	inline static int32_t get_offset_of__startAimAction_8() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50, ____startAimAction_8)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__startAimAction_8() const { return ____startAimAction_8; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__startAimAction_8() { return &____startAimAction_8; }
	inline void set__startAimAction_8(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____startAimAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startAimAction_8), (void*)value);
	}

	inline static int32_t get_offset_of__aimPoints_9() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50, ____aimPoints_9)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get__aimPoints_9() const { return ____aimPoints_9; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of__aimPoints_9() { return &____aimPoints_9; }
	inline void set__aimPoints_9(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		____aimPoints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____aimPoints_9), (void*)value);
	}
};


// TeleportTransition
struct  TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69  : public TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC
{
public:

public:
};


// TeleportTargetHandlerNode
struct  TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368  : public TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50
{
public:
	// System.Single TeleportTargetHandlerNode::LOSOffset
	float ___LOSOffset_11;
	// UnityEngine.LayerMask TeleportTargetHandlerNode::TeleportLayerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___TeleportLayerMask_12;

public:
	inline static int32_t get_offset_of_LOSOffset_11() { return static_cast<int32_t>(offsetof(TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368, ___LOSOffset_11)); }
	inline float get_LOSOffset_11() const { return ___LOSOffset_11; }
	inline float* get_address_of_LOSOffset_11() { return &___LOSOffset_11; }
	inline void set_LOSOffset_11(float value)
	{
		___LOSOffset_11 = value;
	}

	inline static int32_t get_offset_of_TeleportLayerMask_12() { return static_cast<int32_t>(offsetof(TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368, ___TeleportLayerMask_12)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_TeleportLayerMask_12() const { return ___TeleportLayerMask_12; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_TeleportLayerMask_12() { return &___TeleportLayerMask_12; }
	inline void set_TeleportLayerMask_12(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___TeleportLayerMask_12 = value;
	}
};


// TeleportTargetHandlerPhysical
struct  TeleportTargetHandlerPhysical_tF0B011AC6E536FAD45AD50B25B41FB8D5D7F0AFE  : public TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50
{
public:

public:
};


// TeleportTransitionBlink
struct  TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68  : public TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69
{
public:
	// System.Single TeleportTransitionBlink::TransitionDuration
	float ___TransitionDuration_6;
	// System.Single TeleportTransitionBlink::TeleportDelay
	float ___TeleportDelay_7;
	// UnityEngine.AnimationCurve TeleportTransitionBlink::FadeLevels
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___FadeLevels_8;

public:
	inline static int32_t get_offset_of_TransitionDuration_6() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68, ___TransitionDuration_6)); }
	inline float get_TransitionDuration_6() const { return ___TransitionDuration_6; }
	inline float* get_address_of_TransitionDuration_6() { return &___TransitionDuration_6; }
	inline void set_TransitionDuration_6(float value)
	{
		___TransitionDuration_6 = value;
	}

	inline static int32_t get_offset_of_TeleportDelay_7() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68, ___TeleportDelay_7)); }
	inline float get_TeleportDelay_7() const { return ___TeleportDelay_7; }
	inline float* get_address_of_TeleportDelay_7() { return &___TeleportDelay_7; }
	inline void set_TeleportDelay_7(float value)
	{
		___TeleportDelay_7 = value;
	}

	inline static int32_t get_offset_of_FadeLevels_8() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68, ___FadeLevels_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_FadeLevels_8() const { return ___FadeLevels_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_FadeLevels_8() { return &___FadeLevels_8; }
	inline void set_FadeLevels_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___FadeLevels_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeLevels_8), (void*)value);
	}
};


// TeleportTransitionInstant
struct  TeleportTransitionInstant_tE356C07FACE346A5E927770EB19E2C88BF384FA5  : public TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69
{
public:

public:
};


// TeleportTransitionWarp
struct  TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3  : public TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69
{
public:
	// System.Single TeleportTransitionWarp::TransitionDuration
	float ___TransitionDuration_6;
	// UnityEngine.AnimationCurve TeleportTransitionWarp::PositionLerp
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___PositionLerp_7;

public:
	inline static int32_t get_offset_of_TransitionDuration_6() { return static_cast<int32_t>(offsetof(TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3, ___TransitionDuration_6)); }
	inline float get_TransitionDuration_6() const { return ___TransitionDuration_6; }
	inline float* get_address_of_TransitionDuration_6() { return &___TransitionDuration_6; }
	inline void set_TransitionDuration_6(float value)
	{
		___TransitionDuration_6 = value;
	}

	inline static int32_t get_offset_of_PositionLerp_7() { return static_cast<int32_t>(offsetof(TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3, ___PositionLerp_7)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_PositionLerp_7() const { return ___PositionLerp_7; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_PositionLerp_7() { return &___PositionLerp_7; }
	inline void set_PositionLerp_7(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___PositionLerp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionLerp_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
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
// ovrAvatarGazeTarget[]
struct ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  m_Items[1];

public:
	inline ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarGazeTarget_tA84EC3C71395A81862059A3106208F180BDA428F  value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarLight[]
struct ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  m_Items[1];

public:
	inline ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C  value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarMaterialLayerState[]
struct ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  m_Items[1];

public:
	inline ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarTransform[]
struct ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  m_Items[1];

public:
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  value)
	{
		m_Items[index] = value;
	}
};
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
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled);
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled);
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_back(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_cleanup(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_back(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_cleanup(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled);

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mF28305F73A347AE5CC13697C115AB94986B2CFC9_gshared (Callback_tF2B8D497997828882EE68F6091D09258D33BCAE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 Oculus.Platform.Message`1<System.Object>::get_Data()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_m4FA1621E73F75188B2DDDAD97D51D0FF9F7953CF_gshared_inline (Message_1_t7CA4D6382E61BD402083B1A5D7E5320C2CA38381 * __this, const RuntimeMethod* method);

// LocomotionTeleport TeleportSupport::get_LocomotionTeleport()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline (TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Boolean LocomotionTeleport::AimCollisionTest(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.LayerMask,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocomotionTeleport_AimCollisionTest_m3C88DA046A766E54B802C217771FD10AC6481704 (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___aimCollisionLayerMask2, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo3, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TeleportPoint>()
inline TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * GameObject_GetComponent_TisTeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887_m737BB3A97521F30418B3E1E4FFE86F13D7F8BE3B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void TeleportTargetHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTargetHandler__ctor_mF35E424A8BB85A214E145676FA6F2445AF953AD1 (TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LocomotionTeleport::add_EnterStateTeleporting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_add_EnterStateTeleporting_m6965218E7F15CEAAA733F99686E3679B186E3A1B (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void TeleportSupport::AddEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportSupport_AddEventHandlers_m6F96C8A1848A03AED4BF892E1F0475739360EC87 (TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC * __this, const RuntimeMethod* method);
// System.Void LocomotionTeleport::remove_EnterStateTeleporting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_remove_EnterStateTeleporting_mA4D5CFA097CBE1C63105A899B019939DC4CC0550 (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void TeleportSupport::RemoveEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportSupport_RemoveEventHandlers_mA776D945B199F7B7BA3419C381E4CA436BEC72E1 (TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC * __this, const RuntimeMethod* method);
// System.Void TeleportSupport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportSupport__ctor_m6E57F4FFE1EF2862F2D8E96204F439BCEB7E5961 (TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TeleportTransitionBlink::BlinkCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportTransitionBlink_BlinkCoroutine_m5B178290BBDA95E7F65320142AA299810BA4DA53 (TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void TeleportTransitionBlink/<BlinkCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4__ctor_mB42379A4E397FE71886221A2628E01CA07F86A1D (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___keys0, const RuntimeMethod* method);
// System.Void TeleportTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransition__ctor_mC966D1D648C02B054D42E3BB93D670D556602B25 (TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void LocomotionTeleport::DoTeleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_DoTeleport_mC50FEB2D2FE08AAC77ABAE6A8F41D6B5256BA4FC (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TeleportTransitionWarp::DoWarp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportTransitionWarp_DoWarp_m9399859102B3C797C388171A558EA64905C921AE (TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * __this, const RuntimeMethod* method);
// System.Void TeleportTransitionWarp/<DoWarp>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3__ctor_m835F92DDE475D0BBFC4B5F86474B0B4B4999DE91 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// UnityEngine.Vector3 LocomotionTeleport::GetCharacterPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  LocomotionTeleport_GetCharacterPosition_m9BB7875A89085469AD383B3254EBC0728D6CE8CA (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float ___time0, const RuntimeMethod* method);
// System.Void LocomotionTeleport::DoWarp(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_DoWarp_mF36215C59A2F30B3AD7063DCF6E7A4B752C9CA39 (LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPos0, float ___positionPercent1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7 (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mF28305F73A347AE5CC13697C115AB94986B2CFC9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Voip::SetVoipConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipConnectRequestCallback_m578C179879905C50F3F9CD64FE03E82B0CA18C90 (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::SetVoipStateChangeCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipStateChangeCallback_mDEA5D22F0D1E116F05E114104BDAF7CA36BBAF44 (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 * ___callback0, const RuntimeMethod* method);
// System.UInt64 SocialPlatformManager::get_MyID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SocialPlatformManager_get_MyID_m8D860F97CB733DFFF35F54BAC8EDA96222813481 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Start_m11BA82D772C8F66110425E0CE4B33F64F8DD2EEE (uint64_t ___userID0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void SocialPlatformManager::LogOutput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279 (String_t* ___line0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Stop_m0D91677C02A5733E5BC30D55DAB03FFBB5F5FC8C (uint64_t ___userID0, const RuntimeMethod* method);
// RemotePlayer SocialPlatformManager::GetRemoteUser(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * SocialPlatformManager_GetRemoteUser_m1B076701C602759C8A016E368958957FD5CAC6B8 (uint64_t ___userID0, const RuntimeMethod* method);
// !0 Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>::get_Data()
inline NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline (Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * __this, const RuntimeMethod* method)
{
	return ((  NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * (*) (Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 *, const RuntimeMethod*))Message_1_get_Data_m4FA1621E73F75188B2DDDAD97D51D0FF9F7953CF_gshared_inline)(__this, method);
}
// System.UInt64 Oculus.Platform.Models.NetworkingPeer::get_ID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline (NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Accept_m5988B53FE83EC1E22EDE612C603ED23D4133C385 (uint64_t ___userID0, const RuntimeMethod* method);
// Oculus.Platform.PeerConnectionState Oculus.Platform.Models.NetworkingPeer::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetworkingPeer_get_State_m769B1B11849D9944DC5F7E9AAEAAB09BC0901678_inline (NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::OffsetOf(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357 (Type_t * ___t0, String_t* ___fieldName1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130 (Type_t * ___t0, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean ovrAvatarExpressiveParameters::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Boolean ovrAvatarExpressiveParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D (ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 ovrAvatarExpressiveParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarExpressiveParameters_GetHashCode_mF025C8AEE62518BB31B990DE968C46D45BBA69A2 (ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * __this, const RuntimeMethod* method);
// System.Boolean ovrAvatarMaterialLayerState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Boolean ovrAvatarMaterialLayerState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65 (ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 ovrAvatarMaterialLayerState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarMaterialLayerState_GetHashCode_m065C1B00BFF4E09EE0B57E65B3FADA7315BBB135 (ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * __this, const RuntimeMethod* method);
// System.Boolean ovrAvatarMaterialState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Boolean ovrAvatarMaterialState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57 (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D (uint32_t* __this, const RuntimeMethod* method);
// System.Int32 ovrAvatarMaterialState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarMaterialState_GetHashCode_mEC649C79480E3BC80BCD007017B400E68BFBB1D8 (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * __this, const RuntimeMethod* method);
// System.Boolean ovrAvatarPBSMaterialState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarPBSMaterialState_VectorEquals_m6578A3F0000B810F7AA561E7F4CDD6D34D0FC9FF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Boolean ovrAvatarPBSMaterialState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80 (ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 ovrAvatarPBSMaterialState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarPBSMaterialState_GetHashCode_mBBB7DBA95EA73EA356709CC6C243F93A28E49EA4 (ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TeleportTargetHandlerNode::ConsiderTeleport(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeleportTargetHandlerNode_ConsiderTeleport_m54A45F201FA81DFD61D7E2E1EE21A19E1B464855 (TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTargetHandlerNode_ConsiderTeleport_m54A45F201FA81DFD61D7E2E1EE21A19E1B464855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!LocomotionTeleport.AimCollisionTest(start, end, AimCollisionLayerMask | TeleportLayerMask, out AimData.TargetHitInfo))
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___start0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = ___end1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_4 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimCollisionLayerMask_6();
		int32_t L_5 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_4, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_6 = __this->get_TeleportLayerMask_12();
		int32_t L_7 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_6, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_8 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)((int32_t)L_5|(int32_t)L_7)), /*hidden argument*/NULL);
		AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * L_9 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimData_7();
		NullCheck(L_9);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_10 = L_9->get_address_of_TargetHitInfo_0();
		NullCheck(L_0);
		bool L_11 = LocomotionTeleport_AimCollisionTest_m3C88DA046A766E54B802C217771FD10AC6481704(L_0, L_1, L_3, L_8, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_003d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// TeleportPoint tp = AimData.TargetHitInfo.collider.gameObject.GetComponent<TeleportPoint>();
		AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * L_12 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimData_7();
		NullCheck(L_12);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_13 = L_12->get_address_of_TargetHitInfo_0();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * L_16 = GameObject_GetComponent_TisTeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887_m737BB3A97521F30418B3E1E4FFE86F13D7F8BE3B(L_15, /*hidden argument*/GameObject_GetComponent_TisTeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887_m737BB3A97521F30418B3E1E4FFE86F13D7F8BE3B_RuntimeMethod_var);
		V_0 = L_16;
		// if (tp == null)
		TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0063:
	{
		// var dest = tp.destTransform.position;
		TeleportPoint_tA1F80DB8E0F883585C60DB31B965964B9D299887 * L_19 = V_0;
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = L_19->get_destTransform_7();
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// var offsetEnd = new Vector3(dest.x, dest.y + LOSOffset, dest.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_1;
		float L_23 = L_22.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		float L_25 = L_24.get_y_3();
		float L_26 = __this->get_LOSOffset_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		float L_28 = L_27.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_23, ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), L_28, /*hidden argument*/NULL);
		// if (LocomotionTeleport.AimCollisionTest(start, offsetEnd, AimCollisionLayerMask & ~TeleportLayerMask, out AimData.TargetHitInfo))
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_29 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = ___start0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_2;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_32 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimCollisionLayerMask_6();
		int32_t L_33 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_32, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_34 = __this->get_TeleportLayerMask_12();
		int32_t L_35 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_34, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_36 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)((int32_t)L_33&(int32_t)((~L_35)))), /*hidden argument*/NULL);
		AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * L_37 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimData_7();
		NullCheck(L_37);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_38 = L_37->get_address_of_TargetHitInfo_0();
		NullCheck(L_29);
		bool L_39 = LocomotionTeleport_AimCollisionTest_m3C88DA046A766E54B802C217771FD10AC6481704(L_29, L_30, L_31, L_36, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00c8;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00c8:
	{
		// end = dest;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_40 = ___end1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_1;
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_40 = L_41;
		// return true;
		return (bool)1;
	}
}
// System.Void TeleportTargetHandlerNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTargetHandlerNode__ctor_m5D88B6F114DE3C70C9C35ADBEE5E42F41FB1FC87 (TeleportTargetHandlerNode_t4878BB38853A8A973A7D0487D16E3A4F27387368 * __this, const RuntimeMethod* method)
{
	{
		// public float LOSOffset = 1.0f;
		__this->set_LOSOffset_11((1.0f));
		TeleportTargetHandler__ctor_mF35E424A8BB85A214E145676FA6F2445AF953AD1(__this, /*hidden argument*/NULL);
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
// System.Boolean TeleportTargetHandlerPhysical::ConsiderTeleport(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeleportTargetHandlerPhysical_ConsiderTeleport_m6A772B57A5978B6A75D64D13D4753EE088C5D0D2 (TeleportTargetHandlerPhysical_tF0B011AC6E536FAD45AD50B25B41FB8D5D7F0AFE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTargetHandlerPhysical_ConsiderTeleport_m6A772B57A5978B6A75D64D13D4753EE088C5D0D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (LocomotionTeleport.AimCollisionTest(start, end, AimCollisionLayerMask, out AimData.TargetHitInfo))
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___start0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = ___end1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_4 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimCollisionLayerMask_6();
		AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * L_5 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimData_7();
		NullCheck(L_5);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_6 = L_5->get_address_of_TargetHitInfo_0();
		NullCheck(L_0);
		bool L_7 = LocomotionTeleport_AimCollisionTest_m3C88DA046A766E54B802C217771FD10AC6481704(L_0, L_1, L_3, L_4, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// var d = (end - start).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___end1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_12;
		// end = start + d * AimData.TargetHitInfo.distance;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = ___end1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___start0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		AimData_t8922A2054E22AC66C45ADE46E48651B6AD0E5CD3 * L_16 = ((TeleportTargetHandler_t6E93C507923F18ECC8FF9B4356CA95F5900FAB50 *)__this)->get_AimData_7();
		NullCheck(L_16);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_17 = L_16->get_address_of_TargetHitInfo_0();
		float L_18 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_14, L_19, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_13 = L_20;
		// return true;
		return (bool)1;
	}

IL_005e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TeleportTargetHandlerPhysical::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTargetHandlerPhysical__ctor_m06E857326D4BE4A3957C7101A803770088E6FC51 (TeleportTargetHandlerPhysical_tF0B011AC6E536FAD45AD50B25B41FB8D5D7F0AFE * __this, const RuntimeMethod* method)
{
	{
		TeleportTargetHandler__ctor_mF35E424A8BB85A214E145676FA6F2445AF953AD1(__this, /*hidden argument*/NULL);
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
// System.Void TeleportTransition::AddEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransition_AddEventHandlers_m66DD556F57D4787BF093872D63A5C726881B6070 (TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTransition_AddEventHandlers_m66DD556F57D4787BF093872D63A5C726881B6070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocomotionTeleport.EnterStateTeleporting += LocomotionTeleportOnEnterStateTeleporting;
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/NULL);
		NullCheck(L_0);
		LocomotionTeleport_add_EnterStateTeleporting_m6965218E7F15CEAAA733F99686E3679B186E3A1B(L_0, L_1, /*hidden argument*/NULL);
		// base.AddEventHandlers();
		TeleportSupport_AddEventHandlers_m6F96C8A1848A03AED4BF892E1F0475739360EC87(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TeleportTransition::RemoveEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransition_RemoveEventHandlers_m4954A888112EC9E505D71D9466FE7066F0AC5A7C (TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTransition_RemoveEventHandlers_m4954A888112EC9E505D71D9466FE7066F0AC5A7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocomotionTeleport.EnterStateTeleporting -= LocomotionTeleportOnEnterStateTeleporting;
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/NULL);
		NullCheck(L_0);
		LocomotionTeleport_remove_EnterStateTeleporting_mA4D5CFA097CBE1C63105A899B019939DC4CC0550(L_0, L_1, /*hidden argument*/NULL);
		// base.RemoveEventHandlers();
		TeleportSupport_RemoveEventHandlers_mA776D945B199F7B7BA3419C381E4CA436BEC72E1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TeleportTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransition__ctor_mC966D1D648C02B054D42E3BB93D670D556602B25 (TeleportTransition_t798A0C9A7C469132EA606768CAB3BCAF6AD79C69 * __this, const RuntimeMethod* method)
{
	{
		TeleportSupport__ctor_m6E57F4FFE1EF2862F2D8E96204F439BCEB7E5961(__this, /*hidden argument*/NULL);
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
// System.Void TeleportTransitionBlink::LocomotionTeleportOnEnterStateTeleporting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionBlink_LocomotionTeleportOnEnterStateTeleporting_mC595BBDB97A6BEB2973C221CE31EAD725B1D5B88 (TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(BlinkCoroutine());
		RuntimeObject* L_0 = TeleportTransitionBlink_BlinkCoroutine_m5B178290BBDA95E7F65320142AA299810BA4DA53(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TeleportTransitionBlink::BlinkCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportTransitionBlink_BlinkCoroutine_m5B178290BBDA95E7F65320142AA299810BA4DA53 (TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTransitionBlink_BlinkCoroutine_m5B178290BBDA95E7F65320142AA299810BA4DA53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * L_0 = (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 *)il2cpp_codegen_object_new(U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66_il2cpp_TypeInfo_var);
		U3CBlinkCoroutineU3Ed__4__ctor_mB42379A4E397FE71886221A2628E01CA07F86A1D(L_0, 0, /*hidden argument*/NULL);
		U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TeleportTransitionBlink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionBlink__ctor_mB58C9D33137F82734916A7FCA42F8A9C7236FA9C (TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTransitionBlink__ctor_mB58C9D33137F82734916A7FCA42F8A9C7236FA9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float TransitionDuration = 0.5f;
		__this->set_TransitionDuration_6((0.5f));
		// public float TeleportDelay = 0.5f;
		__this->set_TeleportDelay_7((0.5f));
		// public AnimationCurve FadeLevels = new AnimationCurve(new Keyframe[3] { new Keyframe(0,0), new Keyframe(0.5f, 1.0f), new Keyframe(1.0f, 0.0f) });
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_0 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_1 = L_0;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_FadeLevels_8(L_7);
		TeleportTransition__ctor_mC966D1D648C02B054D42E3BB93D670D556602B25(__this, /*hidden argument*/NULL);
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
// System.Void TeleportTransitionBlink_<BlinkCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4__ctor_mB42379A4E397FE71886221A2628E01CA07F86A1D (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportTransitionBlink_<BlinkCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4_System_IDisposable_Dispose_m0728B8D47CB1099E4F5E11FA9B4979277A4B110D (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportTransitionBlink_<BlinkCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBlinkCoroutineU3Ed__4_MoveNext_m18CAFB7AB59E5AE262B1EE5FBF4CACC13C45A289 (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LocomotionTeleport.IsTransitioning = true;
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_4 = V_1;
		NullCheck(L_4);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_5 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_IsTransitioning_20((bool)1);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		// var teleportTime = TransitionDuration * TeleportDelay;
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_TransitionDuration_6();
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_TeleportDelay_7();
		__this->set_U3CteleportTimeU3E5__3_4(((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)));
		// var teleported = false;
		__this->set_U3CteleportedU3E5__4_5((bool)0);
		goto IL_00a2;
	}

IL_0051:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
		// elapsedTime += Time.deltaTime;
		float L_10 = __this->get_U3CelapsedTimeU3E5__2_3();
		float L_11 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// if (!teleported && elapsedTime >= teleportTime)
		bool L_12 = __this->get_U3CteleportedU3E5__4_5();
		if (L_12)
		{
			goto IL_00a2;
		}
	}
	{
		float L_13 = __this->get_U3CelapsedTimeU3E5__2_3();
		float L_14 = __this->get_U3CteleportTimeU3E5__3_4();
		if ((!(((float)L_13) >= ((float)L_14))))
		{
			goto IL_00a2;
		}
	}
	{
		// teleported = true;
		__this->set_U3CteleportedU3E5__4_5((bool)1);
		// LocomotionTeleport.DoTeleport();
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_15 = V_1;
		NullCheck(L_15);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_16 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		LocomotionTeleport_DoTeleport_mC50FEB2D2FE08AAC77ABAE6A8F41D6B5256BA4FC(L_16, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// while (elapsedTime < TransitionDuration)
		float L_17 = __this->get_U3CelapsedTimeU3E5__2_3();
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_TransitionDuration_6();
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_0051;
		}
	}
	{
		// LocomotionTeleport.IsTransitioning = false;
		TeleportTransitionBlink_tC9CFD3C50DFFECBC0FA896F9D4223ED515D7FA68 * L_20 = V_1;
		NullCheck(L_20);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_21 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_IsTransitioning_20((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TeleportTransitionBlink_<BlinkCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87FB3D114041A10E09EC42FE18DB1983D7BE193E (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportTransitionBlink_<BlinkCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mE852436EDC0E88EBAD3F4F5FFC4E7E0D31E28D36 (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mE852436EDC0E88EBAD3F4F5FFC4E7E0D31E28D36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mE852436EDC0E88EBAD3F4F5FFC4E7E0D31E28D36_RuntimeMethod_var);
	}
}
// System.Object TeleportTransitionBlink_<BlinkCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_m7DC8A71A75B42230219312CE5343995ED8665663 (U3CBlinkCoroutineU3Ed__4_tEB74E3FD9594C82EFC7A2168B8325E37ABA14C66 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TeleportTransitionInstant::LocomotionTeleportOnEnterStateTeleporting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionInstant_LocomotionTeleportOnEnterStateTeleporting_mB1F53106F5816FC36D3314B65D4AF43903679745 (TeleportTransitionInstant_tE356C07FACE346A5E927770EB19E2C88BF384FA5 * __this, const RuntimeMethod* method)
{
	{
		// LocomotionTeleport.DoTeleport();
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocomotionTeleport_DoTeleport_mC50FEB2D2FE08AAC77ABAE6A8F41D6B5256BA4FC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TeleportTransitionInstant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionInstant__ctor_m7100F534EB7660D1CE6FA99AD0B5A2D1FE3F3457 (TeleportTransitionInstant_tE356C07FACE346A5E927770EB19E2C88BF384FA5 * __this, const RuntimeMethod* method)
{
	{
		TeleportTransition__ctor_mC966D1D648C02B054D42E3BB93D670D556602B25(__this, /*hidden argument*/NULL);
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
// System.Void TeleportTransitionWarp::LocomotionTeleportOnEnterStateTeleporting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionWarp_LocomotionTeleportOnEnterStateTeleporting_m784C3DE72081772F7F600D43919A8C6E8ABFFF28 (TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DoWarp());
		RuntimeObject* L_0 = TeleportTransitionWarp_DoWarp_m9399859102B3C797C388171A558EA64905C921AE(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TeleportTransitionWarp::DoWarp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportTransitionWarp_DoWarp_m9399859102B3C797C388171A558EA64905C921AE (TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportTransitionWarp_DoWarp_m9399859102B3C797C388171A558EA64905C921AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * L_0 = (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B *)il2cpp_codegen_object_new(U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B_il2cpp_TypeInfo_var);
		U3CDoWarpU3Ed__3__ctor_m835F92DDE475D0BBFC4B5F86474B0B4B4999DE91(L_0, 0, /*hidden argument*/NULL);
		U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TeleportTransitionWarp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTransitionWarp__ctor_m6700BB20D7EAD0BF941C6EE16055837C52817540 (TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * __this, const RuntimeMethod* method)
{
	{
		// public float TransitionDuration = 0.5f;
		__this->set_TransitionDuration_6((0.5f));
		// public AnimationCurve PositionLerp = AnimationCurve.Linear(0, 0, 1, 1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_PositionLerp_7(L_0);
		TeleportTransition__ctor_mC966D1D648C02B054D42E3BB93D670D556602B25(__this, /*hidden argument*/NULL);
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
// System.Void TeleportTransitionWarp_<DoWarp>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3__ctor_m835F92DDE475D0BBFC4B5F86474B0B4B4999DE91 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportTransitionWarp_<DoWarp>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3_System_IDisposable_Dispose_m76898EC7AD3F0D2EC25AA1E9A5C2D96662DB5765 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportTransitionWarp_<DoWarp>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoWarpU3Ed__3_MoveNext_m3B409CEBC9E75773DAA5D318CD3147A81EB21ED1 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LocomotionTeleport.IsTransitioning = true;
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_4 = V_1;
		NullCheck(L_4);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_5 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_IsTransitioning_20((bool)1);
		// var startPosition = LocomotionTeleport.GetCharacterPosition();
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_6 = V_1;
		NullCheck(L_6);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_7 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = LocomotionTeleport_GetCharacterPosition_m9BB7875A89085469AD383B3254EBC0728D6CE8CA(L_7, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__2_3(L_8);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__3_4((0.0f));
		goto IL_00a1;
	}

IL_004b:
	{
		// elapsedTime += Time.deltaTime;
		float L_9 = __this->get_U3CelapsedTimeU3E5__3_4();
		float L_10 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// var t = elapsedTime / TransitionDuration;
		float L_11 = __this->get_U3CelapsedTimeU3E5__3_4();
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_TransitionDuration_6();
		V_2 = ((float)((float)L_11/(float)L_13));
		// var pLerp = PositionLerp.Evaluate(t);
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_14 = V_1;
		NullCheck(L_14);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_15 = L_14->get_PositionLerp_7();
		float L_16 = V_2;
		NullCheck(L_15);
		float L_17 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// LocomotionTeleport.DoWarp(startPosition, pLerp);
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_18 = V_1;
		NullCheck(L_18);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_19 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = __this->get_U3CstartPositionU3E5__2_3();
		float L_21 = V_3;
		NullCheck(L_19);
		LocomotionTeleport_DoWarp_mF36215C59A2F30B3AD7063DCF6E7A4B752C9CA39(L_19, L_20, L_21, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a1:
	{
		// while (elapsedTime < TransitionDuration)
		float L_22 = __this->get_U3CelapsedTimeU3E5__3_4();
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_TransitionDuration_6();
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_004b;
		}
	}
	{
		// LocomotionTeleport.DoWarp(startPosition, 1.0f);
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_25 = V_1;
		NullCheck(L_25);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_26 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_U3CstartPositionU3E5__2_3();
		NullCheck(L_26);
		LocomotionTeleport_DoWarp_mF36215C59A2F30B3AD7063DCF6E7A4B752C9CA39(L_26, L_27, (1.0f), /*hidden argument*/NULL);
		// LocomotionTeleport.IsTransitioning = false;
		TeleportTransitionWarp_t7B44E3290BA216E917D720B15E38DAA4931D2FD3 * L_28 = V_1;
		NullCheck(L_28);
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_29 = TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_IsTransitioning_20((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TeleportTransitionWarp_<DoWarp>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoWarpU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFBD8DFB5FF14BFF2AB29B8B512444440825DBC08 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportTransitionWarp_<DoWarp>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_m628A26932C9AC1A559B414638A775B0AA1466578 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_m628A26932C9AC1A559B414638A775B0AA1466578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_m628A26932C9AC1A559B414638A775B0AA1466578_RuntimeMethod_var);
	}
}
// System.Object TeleportTransitionWarp_<DoWarp>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoWarpU3Ed__3_System_Collections_IEnumerator_get_Current_m3A17F1A6EC3D6B190A8EA1304A64DC564C2B2630 (U3CDoWarpU3Ed__3_tE235E797031E19D55CC977A058C5099E522B0A3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// UnityEngine.Vector4 VectorUtil::ToVector(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  VectorUtil_ToVector_mEE4FE9B5CB0736A2F4B6DA69FDE6F34294F3D595 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method)
{
	{
		// return new Vector4(rect.x, rect.y, rect.width, rect.height);
		float L_0 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_1 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_3 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void VoipManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager__ctor_mCF8AB0BD831EC0EF61A71ACBD5170D64D02202C8 (VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoipManager__ctor_mCF8AB0BD831EC0EF61A71ACBD5170D64D02202C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoipManager()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Voip.SetVoipConnectRequestCallback(VoipConnectRequestCallback);
		Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 * L_0 = (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 *)il2cpp_codegen_object_new(Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2_il2cpp_TypeInfo_var);
		Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7(L_0, __this, (intptr_t)((intptr_t)VoipManager_VoipConnectRequestCallback_m55432C04D827F6F75FA39642FA44C9DA9739012C_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7_RuntimeMethod_var);
		Voip_SetVoipConnectRequestCallback_m578C179879905C50F3F9CD64FE03E82B0CA18C90(L_0, /*hidden argument*/NULL);
		// Voip.SetVoipStateChangeCallback(VoipStateChangedCallback);
		Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 * L_1 = (Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2 *)il2cpp_codegen_object_new(Callback_tE2560EEE82CF7CDA4251239B4B5DCA19556537E2_il2cpp_TypeInfo_var);
		Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7(L_1, __this, (intptr_t)((intptr_t)VoipManager_VoipStateChangedCallback_m9047934DAA7965D92B7093B72D147520F2FA21A4_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mF46C9E81F32E8FD5B4895B9DA83C5D5E85E398F7_RuntimeMethod_var);
		Voip_SetVoipStateChangeCallback_mDEA5D22F0D1E116F05E114104BDAF7CA36BBAF44(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VoipManager::ConnectTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_ConnectTo_m16B754924A87B966BB287C94299328109ECDCA23 (VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167 * __this, uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoipManager_ConnectTo_m16B754924A87B966BB287C94299328109ECDCA23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SocialPlatformManager.MyID < userID)
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		uint64_t L_0 = SocialPlatformManager_get_MyID_m8D860F97CB733DFFF35F54BAC8EDA96222813481(/*hidden argument*/NULL);
		uint64_t L_1 = ___userID0;
		if ((!(((uint64_t)L_0) < ((uint64_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		// Voip.Start(userID);
		uint64_t L_2 = ___userID0;
		Voip_Start_m11BA82D772C8F66110425E0CE4B33F64F8DD2EEE(L_2, /*hidden argument*/NULL);
		// SocialPlatformManager.LogOutput("Voip connect to " + userID);
		uint64_t L_3 = ___userID0;
		uint64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralF12EC3B4078ADF6E41DD8C0740F51697EE7E5E24, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279(L_6, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void VoipManager::Disconnect(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_Disconnect_m9A2505E76FB17623084F81B7B19AED155A750E4B (VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167 * __this, uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoipManager_Disconnect_m9A2505E76FB17623084F81B7B19AED155A750E4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * V_0 = NULL;
	{
		// if (userID != 0)
		uint64_t L_0 = ___userID0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Voip.Stop(userID);
		uint64_t L_1 = ___userID0;
		Voip_Stop_m0D91677C02A5733E5BC30D55DAB03FFBB5F5FC8C(L_1, /*hidden argument*/NULL);
		// RemotePlayer remote = SocialPlatformManager.GetRemoteUser(userID);
		uint64_t L_2 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_3 = SocialPlatformManager_GetRemoteUser_m1B076701C602759C8A016E368958957FD5CAC6B8(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (remote != null)
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// remote.voipConnectionState = PeerConnectionState.Unknown;
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_voipConnectionState_3(0);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void VoipManager::VoipConnectRequestCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_VoipConnectRequestCallback_m55432C04D827F6F75FA39642FA44C9DA9739012C (VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167 * __this, Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoipManager_VoipConnectRequestCallback_m55432C04D827F6F75FA39642FA44C9DA9739012C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SocialPlatformManager.LogOutput("Voip request from " + msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_0 = ___msg0;
		NullCheck(L_0);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_1 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_0, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_1);
		uint64_t L_2 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_1, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralE33C13105DDF43300A8FC0B1BA9DBEDFC3D3C24D, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279(L_5, /*hidden argument*/NULL);
		// RemotePlayer remote = SocialPlatformManager.GetRemoteUser(msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_6 = ___msg0;
		NullCheck(L_6);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_7 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_6, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_7);
		uint64_t L_8 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_7, /*hidden argument*/NULL);
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_9 = SocialPlatformManager_GetRemoteUser_m1B076701C602759C8A016E368958957FD5CAC6B8(L_8, /*hidden argument*/NULL);
		// if (remote != null)
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// SocialPlatformManager.LogOutput("Voip request accepted from " + msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_10 = ___msg0;
		NullCheck(L_10);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_11 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_10, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_11);
		uint64_t L_12 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_11, /*hidden argument*/NULL);
		uint64_t L_13 = L_12;
		RuntimeObject * L_14 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralBAB97A033E30C7649FDED5C94BB8911061ED0E50, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279(L_15, /*hidden argument*/NULL);
		// Voip.Accept(msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_16 = ___msg0;
		NullCheck(L_16);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_17 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_16, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_17);
		uint64_t L_18 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_17, /*hidden argument*/NULL);
		Voip_Accept_m5988B53FE83EC1E22EDE612C603ED23D4133C385(L_18, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void VoipManager::VoipStateChangedCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_VoipStateChangedCallback_m9047934DAA7965D92B7093B72D147520F2FA21A4 (VoipManager_t782644A43D4E8E3EF428800E637EF7B7AC7A3167 * __this, Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoipManager_VoipStateChangedCallback_m9047934DAA7965D92B7093B72D147520F2FA21A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * V_0 = NULL;
	{
		// SocialPlatformManager.LogOutput("Voip state to " + msg.Data.ID + " changed to  " + msg.Data.State);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF60E03378128CC91BB8F5446D8243E0BD79E5A6A);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF60E03378128CC91BB8F5446D8243E0BD79E5A6A);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_3 = ___msg0;
		NullCheck(L_3);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_4 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_3, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_4);
		uint64_t L_5 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_4, /*hidden argument*/NULL);
		uint64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5178270A987BCF5BDBA02FE80BFE741DFEAD26F2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral5178270A987BCF5BDBA02FE80BFE741DFEAD26F2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_10 = ___msg0;
		NullCheck(L_10);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_11 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_10, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12 = NetworkingPeer_get_State_m769B1B11849D9944DC5F7E9AAEAAB09BC0901678_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(PeerConnectionState_t0755C44D771E33AE60014810A0AE4E2E75ADA49C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279(L_15, /*hidden argument*/NULL);
		// RemotePlayer remote = SocialPlatformManager.GetRemoteUser(msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_16 = ___msg0;
		NullCheck(L_16);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_17 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_16, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_17);
		uint64_t L_18 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_17, /*hidden argument*/NULL);
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_19 = SocialPlatformManager_GetRemoteUser_m1B076701C602759C8A016E368958957FD5CAC6B8(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// if (remote != null)
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_20 = V_0;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		// remote.voipConnectionState = msg.Data.State;
		RemotePlayer_t132D86784C90684F8B38D4B8C48D73A020E25C62 * L_21 = V_0;
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_22 = ___msg0;
		NullCheck(L_22);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_23 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_22, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24 = NetworkingPeer_get_State_m769B1B11849D9944DC5F7E9AAEAAB09BC0901678_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_voipConnectionState_3(L_24);
		// if (msg.Data.State == PeerConnectionState.Timeout && SocialPlatformManager.MyID < msg.Data.ID)
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_25 = ___msg0;
		NullCheck(L_25);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_26 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_25, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_26);
		int32_t L_27 = NetworkingPeer_get_State_m769B1B11849D9944DC5F7E9AAEAAB09BC0901678_inline(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		uint64_t L_28 = SocialPlatformManager_get_MyID_m8D860F97CB733DFFF35F54BAC8EDA96222813481(/*hidden argument*/NULL);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_29 = ___msg0;
		NullCheck(L_29);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_30 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_29, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_30);
		uint64_t L_31 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_30, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_28) < ((uint64_t)L_31))))
		{
			goto IL_00ba;
		}
	}
	{
		// Voip.Start(msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_32 = ___msg0;
		NullCheck(L_32);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_33 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_32, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_33);
		uint64_t L_34 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_33, /*hidden argument*/NULL);
		Voip_Start_m11BA82D772C8F66110425E0CE4B33F64F8DD2EEE(L_34, /*hidden argument*/NULL);
		// SocialPlatformManager.LogOutput("Voip re-connect to " + msg.Data.ID);
		Message_1_t097FD362BBA423486D1F3DCB7ABD222D6476A707 * L_35 = ___msg0;
		NullCheck(L_35);
		NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * L_36 = Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_inline(L_35, /*hidden argument*/Message_1_get_Data_mA50E9207071526231A6FD9E0AB51FAD8ADCC98E6_RuntimeMethod_var);
		NullCheck(L_36);
		uint64_t L_37 = NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline(L_36, /*hidden argument*/NULL);
		uint64_t L_38 = L_37;
		RuntimeObject * L_39 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral1D08358AFC492F61116C510CFA10A1621F8D7FFD, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatformManager_tB663D8CA5491FA700E422E89712E3E09ECC253C9_il2cpp_TypeInfo_var);
		SocialPlatformManager_LogOutput_m190510EE3DB04B6C1CFA8AC0F7DE7F532631B279(L_40, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// }
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
// System.Void assetLoadedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void assetLoadedCallback__ctor_m813387441E476E4FB8F69558877F6340DE30CC70 (assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void assetLoadedCallback::Invoke(OvrAvatarAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void assetLoadedCallback_Invoke_mA78052B754ACD13B1B0039778CD9312AF3A0A865 (assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022 * __this, OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * ___asset0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___asset0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___asset0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___asset0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___asset0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___asset0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___asset0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___asset0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * >::Invoke(targetMethod, targetThis, ___asset0);
					else
						GenericVirtActionInvoker1< OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * >::Invoke(targetMethod, targetThis, ___asset0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___asset0);
					else
						VirtActionInvoker1< OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___asset0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___asset0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___asset0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___asset0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult assetLoadedCallback::BeginInvoke(OvrAvatarAsset,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* assetLoadedCallback_BeginInvoke_m4CDEF43A3127553725C19E28EE11A5DD985B2A86 (assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022 * __this, OvrAvatarAsset_t35CA65B918D7647F25C8C810584C3856E3C3D9D7 * ___asset0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___asset0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void assetLoadedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void assetLoadedCallback_EndInvoke_m84E526BD00D75D635708DD1BA58A60E44CF3FABD (assetLoadedCallback_t2F8CDD6F19D5C6AA076D8D07B897EB224D720022 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 (combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 * __this, intptr_t ___asset0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___asset0);

}
// System.Void combinedMeshLoadedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combinedMeshLoadedCallback__ctor_m9B0CEA87849F4C6763270857CCE4F452800B79AB (combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void combinedMeshLoadedCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combinedMeshLoadedCallback_Invoke_mED64387D47F99C5666DBC9F15540690E624715D6 (combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 * __this, intptr_t ___asset0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___asset0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___asset0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___asset0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___asset0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___asset0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___asset0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___asset0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___asset0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult combinedMeshLoadedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* combinedMeshLoadedCallback_BeginInvoke_mB23505405F5A6241F07BEA92F111AFC848BAD16A (combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 * __this, intptr_t ___asset0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (combinedMeshLoadedCallback_BeginInvoke_mB23505405F5A6241F07BEA92F111AFC848BAD16A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___asset0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void combinedMeshLoadedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combinedMeshLoadedCallback_EndInvoke_m59E00356E5CD10BBFE0E234068C33F505948FB0E (combinedMeshLoadedCallback_tFAF00B7D301034327AF16A4B81D82B43974B4C36 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: ovrAvatarBlendShapeParams
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_pinvoke(const ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE& unmarshaled, ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_pinvoke& marshaled)
{
	marshaled.___blendShapeParamCount_0 = unmarshaled.get_blendShapeParamCount_0();
	if (unmarshaled.get_blendShapeParams_1() != NULL)
	{
		if (64 > (unmarshaled.get_blendShapeParams_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___blendShapeParams_1)[i] = (unmarshaled.get_blendShapeParams_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_pinvoke_back(const ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_pinvoke& marshaled, ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_blendShapeParamCount_temp_0 = 0;
	unmarshaled_blendShapeParamCount_temp_0 = marshaled.___blendShapeParamCount_0;
	unmarshaled.set_blendShapeParamCount_0(unmarshaled_blendShapeParamCount_temp_0);
	unmarshaled.set_blendShapeParams_1(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_blendShapeParams_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendShapeParams_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarBlendShapeParams
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_pinvoke_cleanup(ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarBlendShapeParams
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_com(const ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE& unmarshaled, ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_com& marshaled)
{
	marshaled.___blendShapeParamCount_0 = unmarshaled.get_blendShapeParamCount_0();
	if (unmarshaled.get_blendShapeParams_1() != NULL)
	{
		if (64 > (unmarshaled.get_blendShapeParams_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___blendShapeParams_1)[i] = (unmarshaled.get_blendShapeParams_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_com_back(const ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_com& marshaled, ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_blendShapeParamCount_temp_0 = 0;
	unmarshaled_blendShapeParamCount_temp_0 = marshaled.___blendShapeParamCount_0;
	unmarshaled.set_blendShapeParamCount_0(unmarshaled_blendShapeParamCount_temp_0);
	unmarshaled.set_blendShapeParams_1(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_blendShapeParams_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendShapeParams_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarBlendShapeParams
IL2CPP_EXTERN_C void ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshal_com_cleanup(ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarBlendShapeParams_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarBlendShapeParams_Offsets__cctor_m87C94EC1DC83D32B2D574C25556C940A07DD19D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarBlendShapeParams_Offsets__cctor_m87C94EC1DC83D32B2D574C25556C940A07DD19D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Int32 blendShapeParamCount = Marshal.OffsetOf(typeof(ovrAvatarBlendShapeParams), "blendShapeParamCount").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarBlendShapeParams_t47B87715FCD2DE8E70804846FCEA3801EFB8EEBE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteral2E19F154E8D7A1F153AB9485170C3AD85A7C25DD, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int32_t L_3 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_il2cpp_TypeInfo_var))->set_blendShapeParamCount_0(L_3);
		// public static long blendShapeParams = Marshal.SizeOf(typeof(UInt32));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130(L_5, /*hidden argument*/NULL);
		((ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBlendShapeParams_Offsets_t44B359C8B06AE428ADCB973C95CA60B08D6BE01C_il2cpp_TypeInfo_var))->set_blendShapeParams_1((((int64_t)((int64_t)L_6))));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarBodyComponent_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarBodyComponent_Offsets__cctor_m7EC217D476CC0FA5F6225D6C90E50C2A56E72841 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarBodyComponent_Offsets__cctor_m7EC217D476CC0FA5F6225D6C90E50C2A56E72841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static long leftEyeTransform = Marshal.OffsetOf(typeof(ovrAvatarBodyComponent), "leftEyeTransform").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteral34D550090CBDAB8A6E2ED303EC074BC544F7F32D, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_il2cpp_TypeInfo_var))->set_leftEyeTransform_0(L_3);
		// public static long rightEyeTransform = Marshal.OffsetOf(typeof(ovrAvatarBodyComponent), "rightEyeTransform").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_5, _stringLiteral20C4039A192B265C0814B11D2CAE16D6B96449FC, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
		int64_t L_7 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_il2cpp_TypeInfo_var))->set_rightEyeTransform_1(L_7);
		// public static long centerEyeTransform = Marshal.OffsetOf(typeof(ovrAvatarBodyComponent), "centerEyeTransform").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_9, _stringLiteral6EAE48584890A9F1AEA437B70FF22AF965E9059D, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_10;
		int64_t L_11 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_il2cpp_TypeInfo_var))->set_centerEyeTransform_2(L_11);
		// public static long renderComponent = Marshal.OffsetOf(typeof(ovrAvatarBodyComponent), "renderComponent").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (ovrAvatarBodyComponent_t80C418BC87FAA03F96CD5E17F46F72E2A24C867B_0_0_0_var) };
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		intptr_t L_14 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_13, _stringLiteralEFE0FEE0969C8D615632209D75BA73314C7BDE12, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_14;
		int64_t L_15 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tFF9FAF48A123AFCB752EE3B41679F8FE708FAB66_il2cpp_TypeInfo_var))->set_renderComponent_3(L_15);
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
// Conversion methods for marshalling of: ovrAvatarComponent
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_pinvoke(const ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC& unmarshaled, ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_pinvoke& marshaled)
{
	marshaled.___transform_0 = unmarshaled.get_transform_0();
	marshaled.___renderPartCount_1 = unmarshaled.get_renderPartCount_1();
	marshaled.___renderParts_2 = unmarshaled.get_renderParts_2();
	marshaled.___name_3 = il2cpp_codegen_marshal_string(unmarshaled.get_name_3());
}
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_pinvoke_back(const ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_pinvoke& marshaled, ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_transform_temp_0;
	memset((&unmarshaled_transform_temp_0), 0, sizeof(unmarshaled_transform_temp_0));
	unmarshaled_transform_temp_0 = marshaled.___transform_0;
	unmarshaled.set_transform_0(unmarshaled_transform_temp_0);
	uint32_t unmarshaled_renderPartCount_temp_1 = 0;
	unmarshaled_renderPartCount_temp_1 = marshaled.___renderPartCount_1;
	unmarshaled.set_renderPartCount_1(unmarshaled_renderPartCount_temp_1);
	intptr_t unmarshaled_renderParts_temp_2;
	memset((&unmarshaled_renderParts_temp_2), 0, sizeof(unmarshaled_renderParts_temp_2));
	unmarshaled_renderParts_temp_2 = marshaled.___renderParts_2;
	unmarshaled.set_renderParts_2(unmarshaled_renderParts_temp_2);
	unmarshaled.set_name_3(il2cpp_codegen_marshal_string_result(marshaled.___name_3));
}
// Conversion method for clean up from marshalling of: ovrAvatarComponent
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_pinvoke_cleanup(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_3);
	marshaled.___name_3 = NULL;
}
// Conversion methods for marshalling of: ovrAvatarComponent
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_com(const ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC& unmarshaled, ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_com& marshaled)
{
	marshaled.___transform_0 = unmarshaled.get_transform_0();
	marshaled.___renderPartCount_1 = unmarshaled.get_renderPartCount_1();
	marshaled.___renderParts_2 = unmarshaled.get_renderParts_2();
	marshaled.___name_3 = il2cpp_codegen_marshal_string(unmarshaled.get_name_3());
}
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_com_back(const ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_com& marshaled, ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_transform_temp_0;
	memset((&unmarshaled_transform_temp_0), 0, sizeof(unmarshaled_transform_temp_0));
	unmarshaled_transform_temp_0 = marshaled.___transform_0;
	unmarshaled.set_transform_0(unmarshaled_transform_temp_0);
	uint32_t unmarshaled_renderPartCount_temp_1 = 0;
	unmarshaled_renderPartCount_temp_1 = marshaled.___renderPartCount_1;
	unmarshaled.set_renderPartCount_1(unmarshaled_renderPartCount_temp_1);
	intptr_t unmarshaled_renderParts_temp_2;
	memset((&unmarshaled_renderParts_temp_2), 0, sizeof(unmarshaled_renderParts_temp_2));
	unmarshaled_renderParts_temp_2 = marshaled.___renderParts_2;
	unmarshaled.set_renderParts_2(unmarshaled_renderParts_temp_2);
	unmarshaled.set_name_3(il2cpp_codegen_marshal_string_result(marshaled.___name_3));
}
// Conversion method for clean up from marshalling of: ovrAvatarComponent
IL2CPP_EXTERN_C void ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshal_com_cleanup(ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_3);
	marshaled.___name_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarComponent_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarComponent_Offsets__cctor_mA4937997A56C0EADA5BE1BE5AD926DB094FE92BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarComponent_Offsets__cctor_mA4937997A56C0EADA5BE1BE5AD926DB094FE92BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static long transform = Marshal.OffsetOf(typeof(ovrAvatarComponent), "transform").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_il2cpp_TypeInfo_var))->set_transform_0(L_3);
		// public static Int32 renderPartCount = Marshal.OffsetOf(typeof(ovrAvatarComponent), "renderPartCount").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_5, _stringLiteral86BA9FB4E38E8CCDE6C7D9B19354DD1646B4664D, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
		int32_t L_7 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_il2cpp_TypeInfo_var))->set_renderPartCount_1(L_7);
		// public static Int32 renderParts = Marshal.OffsetOf(typeof(ovrAvatarComponent), "renderParts").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_9, _stringLiteral1E4911ABB800741B11468DABA3E93833B61396E4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_10;
		int32_t L_11 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_il2cpp_TypeInfo_var))->set_renderParts_2(L_11);
		// public static Int32 name = Marshal.OffsetOf(typeof(ovrAvatarComponent), "name").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (ovrAvatarComponent_tCC86D12B7D6FD02D658925968E2A883AA08CE9EC_0_0_0_var) };
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		intptr_t L_14 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_13, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_14;
		int32_t L_15 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1303EC01FF080B8B73E613345A150175151193B3_il2cpp_TypeInfo_var))->set_name_3(L_15);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ovrAvatarExpressiveParameters::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	{
		// return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___b1;
		float L_3 = L_2.get_x_1();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___a0;
		float L_5 = L_4.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___b1;
		float L_7 = L_6.get_y_2();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = ___a0;
		float L_9 = L_8.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = ___b1;
		float L_11 = L_10.get_z_3();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = ___a0;
		float L_13 = L_12.get_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = ___b1;
		float L_15 = L_14.get_w_4();
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean ovrAvatarExpressiveParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D (ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(obj is ovrAvatarExpressiveParameters))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// ovrAvatarExpressiveParameters other = (ovrAvatarExpressiveParameters)obj;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC *)((ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC *)UnBox(L_1, ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC_il2cpp_TypeInfo_var))));
		// if (!VectorEquals(irisColor, other.irisColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = __this->get_irisColor_0();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_3 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_irisColor_0();
		bool L_5 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_2, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!VectorEquals(irisColor, other.irisColor)) return false;
		return (bool)0;
	}

IL_0026:
	{
		// if (!VectorEquals(scleraColor, other.scleraColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = __this->get_scleraColor_1();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_7 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = L_7.get_scleraColor_1();
		bool L_9 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		// if (!VectorEquals(scleraColor, other.scleraColor)) return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (!VectorEquals(lashColor, other.lashColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = __this->get_lashColor_2();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_11 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = L_11.get_lashColor_2();
		bool L_13 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		// if (!VectorEquals(lashColor, other.lashColor)) return false;
		return (bool)0;
	}

IL_0050:
	{
		// if (!VectorEquals(browColor, other.browColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = __this->get_browColor_3();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_15 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = L_15.get_browColor_3();
		bool L_17 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_14, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0065;
		}
	}
	{
		// if (!VectorEquals(browColor, other.browColor)) return false;
		return (bool)0;
	}

IL_0065:
	{
		// if (!VectorEquals(lipColor, other.lipColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_18 = __this->get_lipColor_4();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_19 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_20 = L_19.get_lipColor_4();
		bool L_21 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_18, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_007a;
		}
	}
	{
		// if (!VectorEquals(lipColor, other.lipColor)) return false;
		return (bool)0;
	}

IL_007a:
	{
		// if (!VectorEquals(teethColor, other.teethColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_22 = __this->get_teethColor_5();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_23 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_24 = L_23.get_teethColor_5();
		bool L_25 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_008f;
		}
	}
	{
		// if (!VectorEquals(teethColor, other.teethColor)) return false;
		return (bool)0;
	}

IL_008f:
	{
		// if (!VectorEquals(gumColor, other.gumColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_26 = __this->get_gumColor_6();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_27 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_28 = L_27.get_gumColor_6();
		bool L_29 = ovrAvatarExpressiveParameters_VectorEquals_m64960BB6D089BC15D58A07AE17521EEED79BB58C(L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a4;
		}
	}
	{
		// if (!VectorEquals(gumColor, other.gumColor)) return false;
		return (bool)0;
	}

IL_00a4:
	{
		// if (browLashIntensity != other.browLashIntensity) return false;
		float L_30 = __this->get_browLashIntensity_7();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_31 = V_0;
		float L_32 = L_31.get_browLashIntensity_7();
		if ((((float)L_30) == ((float)L_32)))
		{
			goto IL_00b4;
		}
	}
	{
		// if (browLashIntensity != other.browLashIntensity) return false;
		return (bool)0;
	}

IL_00b4:
	{
		// if (lipSmoothness != other.lipSmoothness) return false;
		float L_33 = __this->get_lipSmoothness_8();
		ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC  L_34 = V_0;
		float L_35 = L_34.get_lipSmoothness_8();
		if ((((float)L_33) == ((float)L_35)))
		{
			goto IL_00c4;
		}
	}
	{
		// if (lipSmoothness != other.lipSmoothness) return false;
		return (bool)0;
	}

IL_00c4:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * _thisAdjusted = reinterpret_cast<ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC *>(__this + _offset);
	return ovrAvatarExpressiveParameters_Equals_m26844DFE4B80093BEE1CA248551B80D229D5CE6D(_thisAdjusted, ___obj0, method);
}
// System.Int32 ovrAvatarExpressiveParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarExpressiveParameters_GetHashCode_mF025C8AEE62518BB31B990DE968C46D45BBA69A2 (ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * __this, const RuntimeMethod* method)
{
	{
		// return irisColor.GetHashCode() ^
		//     scleraColor.GetHashCode() ^
		//     lashColor.GetHashCode() ^
		//     browColor.GetHashCode() ^
		//     lipColor.GetHashCode() ^
		//     teethColor.GetHashCode() ^
		//     gumColor.GetHashCode() ^
		//     browLashIntensity.GetHashCode() ^
		//     lipSmoothness.GetHashCode();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_0 = __this->get_address_of_irisColor_0();
		int32_t L_1 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_2 = __this->get_address_of_scleraColor_1();
		int32_t L_3 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_4 = __this->get_address_of_lashColor_2();
		int32_t L_5 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_6 = __this->get_address_of_browColor_3();
		int32_t L_7 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_6, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_8 = __this->get_address_of_lipColor_4();
		int32_t L_9 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_8, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_10 = __this->get_address_of_teethColor_5();
		int32_t L_11 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_10, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_12 = __this->get_address_of_gumColor_6();
		int32_t L_13 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_12, /*hidden argument*/NULL);
		float* L_14 = __this->get_address_of_browLashIntensity_7();
		int32_t L_15 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_14, /*hidden argument*/NULL);
		float* L_16 = __this->get_address_of_lipSmoothness_8();
		int32_t L_17 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_16, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15))^(int32_t)L_17));
	}
}
IL2CPP_EXTERN_C  int32_t ovrAvatarExpressiveParameters_GetHashCode_mF025C8AEE62518BB31B990DE968C46D45BBA69A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC * _thisAdjusted = reinterpret_cast<ovrAvatarExpressiveParameters_t60A7FDE916853B1333F64F93B328FA8506BBAACC *>(__this + _offset);
	return ovrAvatarExpressiveParameters_GetHashCode_mF025C8AEE62518BB31B990DE968C46D45BBA69A2(_thisAdjusted, method);
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
// System.Void ovrAvatarGazeTarget_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarGazeTarget_Offsets__cctor_m73745ABCC67959CF37A29A938941DF7529DE9242 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarGazeTarget_Offsets__cctor_m73745ABCC67959CF37A29A938941DF7529DE9242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Int32 id = 0;
		((ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_il2cpp_TypeInfo_var))->set_id_0(0);
		// public static Int32 worldPosition = Marshal.SizeOf(typeof(UInt32));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130(L_1, /*hidden argument*/NULL);
		((ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_il2cpp_TypeInfo_var))->set_worldPosition_1(L_2);
		// public static Int32 type = worldPosition + Marshal.SizeOf(typeof(Vector3));
		int32_t L_3 = ((ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_il2cpp_TypeInfo_var))->get_worldPosition_1();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130(L_5, /*hidden argument*/NULL);
		((ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_t378D0DCF524B8DD991743013FF021B6AC1C94B1F_il2cpp_TypeInfo_var))->set_type_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_6)));
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
// Conversion methods for marshalling of: ovrAvatarGazeTargets
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_pinvoke(const ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17& unmarshaled, ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_pinvoke& marshaled)
{
	marshaled.___targetCount_0 = unmarshaled.get_targetCount_0();
	if (unmarshaled.get_targets_1() != NULL)
	{
		if (128 > (unmarshaled.get_targets_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
		{
			(marshaled.___targets_1)[i] = (unmarshaled.get_targets_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_pinvoke_back(const ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_pinvoke& marshaled, ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_targetCount_temp_0 = 0;
	unmarshaled_targetCount_temp_0 = marshaled.___targetCount_0;
	unmarshaled.set_targetCount_0(unmarshaled_targetCount_temp_0);
	unmarshaled.set_targets_1(reinterpret_cast<ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64*>((ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64*)SZArrayNew(ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64_il2cpp_TypeInfo_var, 128)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
	{
		(unmarshaled.get_targets_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___targets_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarGazeTargets
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_pinvoke_cleanup(ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarGazeTargets
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_com(const ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17& unmarshaled, ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_com& marshaled)
{
	marshaled.___targetCount_0 = unmarshaled.get_targetCount_0();
	if (unmarshaled.get_targets_1() != NULL)
	{
		if (128 > (unmarshaled.get_targets_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
		{
			(marshaled.___targets_1)[i] = (unmarshaled.get_targets_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_com_back(const ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_com& marshaled, ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_targetCount_temp_0 = 0;
	unmarshaled_targetCount_temp_0 = marshaled.___targetCount_0;
	unmarshaled.set_targetCount_0(unmarshaled_targetCount_temp_0);
	unmarshaled.set_targets_1(reinterpret_cast<ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64*>((ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64*)SZArrayNew(ovrAvatarGazeTargetU5BU5D_t66980164FECCC5AC59E1AF177A56177E9CD43E64_il2cpp_TypeInfo_var, 128)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
	{
		(unmarshaled.get_targets_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___targets_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarGazeTargets
IL2CPP_EXTERN_C void ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshal_com_cleanup(ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarGazeTargets_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarGazeTargets_Offsets__cctor_m0ADAF7C94330E70C34A69A64AF314B1464D55240 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarGazeTargets_Offsets__cctor_m0ADAF7C94330E70C34A69A64AF314B1464D55240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Int32 targetCount = Marshal.OffsetOf(typeof(ovrAvatarGazeTargets), "targetCount").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarGazeTargets_tC1B70BAB7D3A027FBF777AF3A6BFD89DBF334B17_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteralFEADE4954EC0DC16315D51C6D892DFEA6E762A18, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int32_t L_3 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_il2cpp_TypeInfo_var))->set_targetCount_0(L_3);
		// public static long targets = Marshal.SizeOf(typeof(UInt32));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130(L_5, /*hidden argument*/NULL);
		((ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTargets_Offsets_t7C66B18FB427B17CC34DAB6A7EFC9AD5CC3C3EB5_il2cpp_TypeInfo_var))->set_targets_1((((int64_t)((int64_t)L_6))));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarLight_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarLight_Offsets__cctor_m51A00DD51754A525736947B9E55BAD0CA861337D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarLight_Offsets__cctor_m51A00DD51754A525736947B9E55BAD0CA861337D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static long id = Marshal.OffsetOf(typeof(ovrAvatarLight), "id").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_id_0(L_3);
		// public static long type = Marshal.OffsetOf(typeof(ovrAvatarLight), "type").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_5, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
		int64_t L_7 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_type_1(L_7);
		// public static long intensity = Marshal.OffsetOf(typeof(ovrAvatarLight), "intensity").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_9, _stringLiteral33AB2E3C6F59116175C618B36501AC67FCDEFED6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_10;
		int64_t L_11 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_intensity_2(L_11);
		// public static long worldDirection = Marshal.OffsetOf(typeof(ovrAvatarLight), "worldDirection").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		intptr_t L_14 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_13, _stringLiteralE181B7EB3C1441D7B03757FEE72535796CA5F535, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_14;
		int64_t L_15 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_worldDirection_3(L_15);
		// public static long worldPosition = Marshal.OffsetOf(typeof(ovrAvatarLight), "worldPosition").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
		intptr_t L_18 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_17, _stringLiteral54AA76CCF74AD157FB3728BC89C0E6450373ACF1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_18;
		int64_t L_19 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_worldPosition_4(L_19);
		// public static long range = Marshal.OffsetOf(typeof(ovrAvatarLight), "range").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		intptr_t L_22 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_21, _stringLiteral4D55AF37DBBB6A42088D917CAA1CA25428EC42C9, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_22;
		int64_t L_23 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_range_5(L_23);
		// public static long spotAngleDeg = Marshal.OffsetOf(typeof(ovrAvatarLight), "spotAngleDeg").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tFA6EBF7DE2443991D4885AC8E5BE61CEFDB49B0C_0_0_0_var) };
		Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
		intptr_t L_26 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_25, _stringLiteral9C7B9AC3D1E6A51E1561D9BD6E6A391B6B4937A3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_26;
		int64_t L_27 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLight_Offsets_t450AC55D9C9E3E41E9CD94AD02A73D5A7EB395C2_il2cpp_TypeInfo_var))->set_spotAngleDeg_6(L_27);
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
// Conversion methods for marshalling of: ovrAvatarLights
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_pinvoke(const ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE& unmarshaled, ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_pinvoke& marshaled)
{
	marshaled.___ambientIntensity_0 = unmarshaled.get_ambientIntensity_0();
	marshaled.___lightCount_1 = unmarshaled.get_lightCount_1();
	if (unmarshaled.get_lights_2() != NULL)
	{
		if (16 > (unmarshaled.get_lights_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(16); i++)
		{
			(marshaled.___lights_2)[i] = (unmarshaled.get_lights_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_pinvoke_back(const ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_pinvoke& marshaled, ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_ambientIntensity_temp_0 = 0.0f;
	unmarshaled_ambientIntensity_temp_0 = marshaled.___ambientIntensity_0;
	unmarshaled.set_ambientIntensity_0(unmarshaled_ambientIntensity_temp_0);
	uint32_t unmarshaled_lightCount_temp_1 = 0;
	unmarshaled_lightCount_temp_1 = marshaled.___lightCount_1;
	unmarshaled.set_lightCount_1(unmarshaled_lightCount_temp_1);
	unmarshaled.set_lights_2(reinterpret_cast<ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A*>((ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A*)SZArrayNew(ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(16); i++)
	{
		(unmarshaled.get_lights_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___lights_2)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarLights
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_pinvoke_cleanup(ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarLights
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_com(const ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE& unmarshaled, ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_com& marshaled)
{
	marshaled.___ambientIntensity_0 = unmarshaled.get_ambientIntensity_0();
	marshaled.___lightCount_1 = unmarshaled.get_lightCount_1();
	if (unmarshaled.get_lights_2() != NULL)
	{
		if (16 > (unmarshaled.get_lights_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(16); i++)
		{
			(marshaled.___lights_2)[i] = (unmarshaled.get_lights_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_com_back(const ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_com& marshaled, ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_ambientIntensity_temp_0 = 0.0f;
	unmarshaled_ambientIntensity_temp_0 = marshaled.___ambientIntensity_0;
	unmarshaled.set_ambientIntensity_0(unmarshaled_ambientIntensity_temp_0);
	uint32_t unmarshaled_lightCount_temp_1 = 0;
	unmarshaled_lightCount_temp_1 = marshaled.___lightCount_1;
	unmarshaled.set_lightCount_1(unmarshaled_lightCount_temp_1);
	unmarshaled.set_lights_2(reinterpret_cast<ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A*>((ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A*)SZArrayNew(ovrAvatarLightU5BU5D_t4713044806A9560F5EBE2FEC6AF13FE832C0585A_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(16); i++)
	{
		(unmarshaled.get_lights_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___lights_2)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarLights
IL2CPP_EXTERN_C void ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshal_com_cleanup(ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarLights_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarLights_Offsets__cctor_m27749AD79C46EDF9BBFC79B0EF0ED713E436D6A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarLights_Offsets__cctor_m27749AD79C46EDF9BBFC79B0EF0ED713E436D6A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static long ambientIntensity = Marshal.OffsetOf(typeof(ovrAvatarLights), "ambientIntensity").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteral072E37390BC5C9545A3EE238425021DFE1CCBDE4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_il2cpp_TypeInfo_var))->set_ambientIntensity_0(L_3);
		// public static long lightCount = Marshal.OffsetOf(typeof(ovrAvatarLights), "lightCount").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_5, _stringLiteralD254D7C7C06DAB2E99442830BE0A97A03A9D0FB6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
		int64_t L_7 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_il2cpp_TypeInfo_var))->set_lightCount_1(L_7);
		// public static long lights = Marshal.OffsetOf(typeof(ovrAvatarLights), "lights").ToInt64();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t5912B8186207EB825855EB8C853DEE8A6E8A2CEE_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_9, _stringLiteral9367742C0B53C6327A75AFFB316C1633CA66A8DD, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_10;
		int64_t L_11 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarLights_Offsets_t63CD26877FC94F8A3E1778055EC9A5F4458517FE_il2cpp_TypeInfo_var))->set_lights_2(L_11);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ovrAvatarMaterialLayerState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	{
		// return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___b1;
		float L_3 = L_2.get_x_1();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___a0;
		float L_5 = L_4.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___b1;
		float L_7 = L_6.get_y_2();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = ___a0;
		float L_9 = L_8.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = ___b1;
		float L_11 = L_10.get_z_3();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = ___a0;
		float L_13 = L_12.get_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = ___b1;
		float L_15 = L_14.get_w_4();
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean ovrAvatarMaterialLayerState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65 (ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(obj is ovrAvatarMaterialLayerState))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// ovrAvatarMaterialLayerState other = (ovrAvatarMaterialLayerState)obj;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *)((ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *)UnBox(L_1, ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF_il2cpp_TypeInfo_var))));
		// if (blendMode != other.blendMode) return false;
		int32_t L_2 = __this->get_blendMode_0();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_3 = V_0;
		int32_t L_4 = L_3.get_blendMode_0();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		// if (blendMode != other.blendMode) return false;
		return (bool)0;
	}

IL_0021:
	{
		// if (sampleMode != other.sampleMode) return false;
		int32_t L_5 = __this->get_sampleMode_1();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_6 = V_0;
		int32_t L_7 = L_6.get_sampleMode_1();
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		// if (sampleMode != other.sampleMode) return false;
		return (bool)0;
	}

IL_0031:
	{
		// if (maskType != other.maskType) return false;
		int32_t L_8 = __this->get_maskType_2();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_9 = V_0;
		int32_t L_10 = L_9.get_maskType_2();
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		// if (maskType != other.maskType) return false;
		return (bool)0;
	}

IL_0041:
	{
		// if (!VectorEquals(layerColor, other.layerColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = __this->get_layerColor_3();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_12 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = L_12.get_layerColor_3();
		bool L_14 = ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038(L_11, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0056;
		}
	}
	{
		// if (!VectorEquals(layerColor, other.layerColor)) return false;
		return (bool)0;
	}

IL_0056:
	{
		// if (!VectorEquals(sampleParameters, other.sampleParameters)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_15 = __this->get_sampleParameters_4();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_16 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_17 = L_16.get_sampleParameters_4();
		bool L_18 = ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038(L_15, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		// if (!VectorEquals(sampleParameters, other.sampleParameters)) return false;
		return (bool)0;
	}

IL_006b:
	{
		// if (sampleTexture != other.sampleTexture) return false;
		uint64_t L_19 = __this->get_sampleTexture_5();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_20 = V_0;
		uint64_t L_21 = L_20.get_sampleTexture_5();
		if ((((int64_t)L_19) == ((int64_t)L_21)))
		{
			goto IL_007b;
		}
	}
	{
		// if (sampleTexture != other.sampleTexture) return false;
		return (bool)0;
	}

IL_007b:
	{
		// if (!VectorEquals(sampleScaleOffset, other.sampleScaleOffset)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_22 = __this->get_sampleScaleOffset_6();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_23 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_24 = L_23.get_sampleScaleOffset_6();
		bool L_25 = ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038(L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0090;
		}
	}
	{
		// if (!VectorEquals(sampleScaleOffset, other.sampleScaleOffset)) return false;
		return (bool)0;
	}

IL_0090:
	{
		// if (!VectorEquals(maskParameters, other.maskParameters)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_26 = __this->get_maskParameters_7();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_27 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_28 = L_27.get_maskParameters_7();
		bool L_29 = ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038(L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a5;
		}
	}
	{
		// if (!VectorEquals(maskParameters, other.maskParameters)) return false;
		return (bool)0;
	}

IL_00a5:
	{
		// if (!VectorEquals(maskAxis, other.maskAxis)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_30 = __this->get_maskAxis_8();
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_31 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_32 = L_31.get_maskAxis_8();
		bool L_33 = ovrAvatarMaterialLayerState_VectorEquals_m52BD04FF0EC984CCB3974AD00C8525E8E089E038(L_30, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00ba;
		}
	}
	{
		// if (!VectorEquals(maskAxis, other.maskAxis)) return false;
		return (bool)0;
	}

IL_00ba:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * _thisAdjusted = reinterpret_cast<ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *>(__this + _offset);
	return ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65(_thisAdjusted, ___obj0, method);
}
// System.Int32 ovrAvatarMaterialLayerState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarMaterialLayerState_GetHashCode_m065C1B00BFF4E09EE0B57E65B3FADA7315BBB135 (ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * __this, const RuntimeMethod* method)
{
	{
		// return blendMode.GetHashCode() ^
		//     sampleMode.GetHashCode() ^
		//     maskType.GetHashCode() ^
		//     layerColor.GetHashCode() ^
		//     sampleParameters.GetHashCode() ^
		//     sampleTexture.GetHashCode() ^
		//     sampleScaleOffset.GetHashCode() ^
		//     maskParameters.GetHashCode() ^
		//     maskAxis.GetHashCode();
		int32_t* L_0 = __this->get_address_of_blendMode_0();
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_sampleMode_1();
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_2, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_maskType_2();
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_6 = __this->get_address_of_layerColor_3();
		int32_t L_7 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_6, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_8 = __this->get_address_of_sampleParameters_4();
		int32_t L_9 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_8, /*hidden argument*/NULL);
		uint64_t* L_10 = __this->get_address_of_sampleTexture_5();
		int32_t L_11 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_10, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_12 = __this->get_address_of_sampleScaleOffset_6();
		int32_t L_13 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_12, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_14 = __this->get_address_of_maskParameters_7();
		int32_t L_15 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_14, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_16 = __this->get_address_of_maskAxis_8();
		int32_t L_17 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_16, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15))^(int32_t)L_17));
	}
}
IL2CPP_EXTERN_C  int32_t ovrAvatarMaterialLayerState_GetHashCode_m065C1B00BFF4E09EE0B57E65B3FADA7315BBB135_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF * _thisAdjusted = reinterpret_cast<ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *>(__this + _offset);
	return ovrAvatarMaterialLayerState_GetHashCode_m065C1B00BFF4E09EE0B57E65B3FADA7315BBB135(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ovrAvatarMaterialState
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled)
{
	marshaled.___baseColor_0 = unmarshaled.get_baseColor_0();
	marshaled.___baseMaskType_1 = unmarshaled.get_baseMaskType_1();
	marshaled.___baseMaskParameters_2 = unmarshaled.get_baseMaskParameters_2();
	marshaled.___baseMaskAxis_3 = unmarshaled.get_baseMaskAxis_3();
	marshaled.___sampleMode_4 = unmarshaled.get_sampleMode_4();
	marshaled.___alphaMaskTextureID_5 = unmarshaled.get_alphaMaskTextureID_5();
	marshaled.___alphaMaskScaleOffset_6 = unmarshaled.get_alphaMaskScaleOffset_6();
	marshaled.___normalMapTextureID_7 = unmarshaled.get_normalMapTextureID_7();
	marshaled.___normalMapScaleOffset_8 = unmarshaled.get_normalMapScaleOffset_8();
	marshaled.___parallaxMapTextureID_9 = unmarshaled.get_parallaxMapTextureID_9();
	marshaled.___parallaxMapScaleOffset_10 = unmarshaled.get_parallaxMapScaleOffset_10();
	marshaled.___roughnessMapTextureID_11 = unmarshaled.get_roughnessMapTextureID_11();
	marshaled.___roughnessMapScaleOffset_12 = unmarshaled.get_roughnessMapScaleOffset_12();
	marshaled.___layerCount_13 = unmarshaled.get_layerCount_13();
	if (unmarshaled.get_layers_14() != NULL)
	{
		if (8 > (unmarshaled.get_layers_14())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
		{
			(marshaled.___layers_14)[i] = (unmarshaled.get_layers_14())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_back(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseColor_temp_0;
	memset((&unmarshaled_baseColor_temp_0), 0, sizeof(unmarshaled_baseColor_temp_0));
	unmarshaled_baseColor_temp_0 = marshaled.___baseColor_0;
	unmarshaled.set_baseColor_0(unmarshaled_baseColor_temp_0);
	int32_t unmarshaled_baseMaskType_temp_1 = 0;
	unmarshaled_baseMaskType_temp_1 = marshaled.___baseMaskType_1;
	unmarshaled.set_baseMaskType_1(unmarshaled_baseMaskType_temp_1);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseMaskParameters_temp_2;
	memset((&unmarshaled_baseMaskParameters_temp_2), 0, sizeof(unmarshaled_baseMaskParameters_temp_2));
	unmarshaled_baseMaskParameters_temp_2 = marshaled.___baseMaskParameters_2;
	unmarshaled.set_baseMaskParameters_2(unmarshaled_baseMaskParameters_temp_2);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseMaskAxis_temp_3;
	memset((&unmarshaled_baseMaskAxis_temp_3), 0, sizeof(unmarshaled_baseMaskAxis_temp_3));
	unmarshaled_baseMaskAxis_temp_3 = marshaled.___baseMaskAxis_3;
	unmarshaled.set_baseMaskAxis_3(unmarshaled_baseMaskAxis_temp_3);
	int32_t unmarshaled_sampleMode_temp_4 = 0;
	unmarshaled_sampleMode_temp_4 = marshaled.___sampleMode_4;
	unmarshaled.set_sampleMode_4(unmarshaled_sampleMode_temp_4);
	uint64_t unmarshaled_alphaMaskTextureID_temp_5 = 0;
	unmarshaled_alphaMaskTextureID_temp_5 = marshaled.___alphaMaskTextureID_5;
	unmarshaled.set_alphaMaskTextureID_5(unmarshaled_alphaMaskTextureID_temp_5);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_alphaMaskScaleOffset_temp_6;
	memset((&unmarshaled_alphaMaskScaleOffset_temp_6), 0, sizeof(unmarshaled_alphaMaskScaleOffset_temp_6));
	unmarshaled_alphaMaskScaleOffset_temp_6 = marshaled.___alphaMaskScaleOffset_6;
	unmarshaled.set_alphaMaskScaleOffset_6(unmarshaled_alphaMaskScaleOffset_temp_6);
	uint64_t unmarshaled_normalMapTextureID_temp_7 = 0;
	unmarshaled_normalMapTextureID_temp_7 = marshaled.___normalMapTextureID_7;
	unmarshaled.set_normalMapTextureID_7(unmarshaled_normalMapTextureID_temp_7);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_normalMapScaleOffset_temp_8;
	memset((&unmarshaled_normalMapScaleOffset_temp_8), 0, sizeof(unmarshaled_normalMapScaleOffset_temp_8));
	unmarshaled_normalMapScaleOffset_temp_8 = marshaled.___normalMapScaleOffset_8;
	unmarshaled.set_normalMapScaleOffset_8(unmarshaled_normalMapScaleOffset_temp_8);
	uint64_t unmarshaled_parallaxMapTextureID_temp_9 = 0;
	unmarshaled_parallaxMapTextureID_temp_9 = marshaled.___parallaxMapTextureID_9;
	unmarshaled.set_parallaxMapTextureID_9(unmarshaled_parallaxMapTextureID_temp_9);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_parallaxMapScaleOffset_temp_10;
	memset((&unmarshaled_parallaxMapScaleOffset_temp_10), 0, sizeof(unmarshaled_parallaxMapScaleOffset_temp_10));
	unmarshaled_parallaxMapScaleOffset_temp_10 = marshaled.___parallaxMapScaleOffset_10;
	unmarshaled.set_parallaxMapScaleOffset_10(unmarshaled_parallaxMapScaleOffset_temp_10);
	uint64_t unmarshaled_roughnessMapTextureID_temp_11 = 0;
	unmarshaled_roughnessMapTextureID_temp_11 = marshaled.___roughnessMapTextureID_11;
	unmarshaled.set_roughnessMapTextureID_11(unmarshaled_roughnessMapTextureID_temp_11);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_roughnessMapScaleOffset_temp_12;
	memset((&unmarshaled_roughnessMapScaleOffset_temp_12), 0, sizeof(unmarshaled_roughnessMapScaleOffset_temp_12));
	unmarshaled_roughnessMapScaleOffset_temp_12 = marshaled.___roughnessMapScaleOffset_12;
	unmarshaled.set_roughnessMapScaleOffset_12(unmarshaled_roughnessMapScaleOffset_temp_12);
	uint32_t unmarshaled_layerCount_temp_13 = 0;
	unmarshaled_layerCount_temp_13 = marshaled.___layerCount_13;
	unmarshaled.set_layerCount_13(unmarshaled_layerCount_temp_13);
	unmarshaled.set_layers_14(reinterpret_cast<ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069*>((ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069*)SZArrayNew(ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		(unmarshaled.get_layers_14())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___layers_14)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMaterialState
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_cleanup(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarMaterialState
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled)
{
	marshaled.___baseColor_0 = unmarshaled.get_baseColor_0();
	marshaled.___baseMaskType_1 = unmarshaled.get_baseMaskType_1();
	marshaled.___baseMaskParameters_2 = unmarshaled.get_baseMaskParameters_2();
	marshaled.___baseMaskAxis_3 = unmarshaled.get_baseMaskAxis_3();
	marshaled.___sampleMode_4 = unmarshaled.get_sampleMode_4();
	marshaled.___alphaMaskTextureID_5 = unmarshaled.get_alphaMaskTextureID_5();
	marshaled.___alphaMaskScaleOffset_6 = unmarshaled.get_alphaMaskScaleOffset_6();
	marshaled.___normalMapTextureID_7 = unmarshaled.get_normalMapTextureID_7();
	marshaled.___normalMapScaleOffset_8 = unmarshaled.get_normalMapScaleOffset_8();
	marshaled.___parallaxMapTextureID_9 = unmarshaled.get_parallaxMapTextureID_9();
	marshaled.___parallaxMapScaleOffset_10 = unmarshaled.get_parallaxMapScaleOffset_10();
	marshaled.___roughnessMapTextureID_11 = unmarshaled.get_roughnessMapTextureID_11();
	marshaled.___roughnessMapScaleOffset_12 = unmarshaled.get_roughnessMapScaleOffset_12();
	marshaled.___layerCount_13 = unmarshaled.get_layerCount_13();
	if (unmarshaled.get_layers_14() != NULL)
	{
		if (8 > (unmarshaled.get_layers_14())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
		{
			(marshaled.___layers_14)[i] = (unmarshaled.get_layers_14())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_back(const ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseColor_temp_0;
	memset((&unmarshaled_baseColor_temp_0), 0, sizeof(unmarshaled_baseColor_temp_0));
	unmarshaled_baseColor_temp_0 = marshaled.___baseColor_0;
	unmarshaled.set_baseColor_0(unmarshaled_baseColor_temp_0);
	int32_t unmarshaled_baseMaskType_temp_1 = 0;
	unmarshaled_baseMaskType_temp_1 = marshaled.___baseMaskType_1;
	unmarshaled.set_baseMaskType_1(unmarshaled_baseMaskType_temp_1);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseMaskParameters_temp_2;
	memset((&unmarshaled_baseMaskParameters_temp_2), 0, sizeof(unmarshaled_baseMaskParameters_temp_2));
	unmarshaled_baseMaskParameters_temp_2 = marshaled.___baseMaskParameters_2;
	unmarshaled.set_baseMaskParameters_2(unmarshaled_baseMaskParameters_temp_2);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_baseMaskAxis_temp_3;
	memset((&unmarshaled_baseMaskAxis_temp_3), 0, sizeof(unmarshaled_baseMaskAxis_temp_3));
	unmarshaled_baseMaskAxis_temp_3 = marshaled.___baseMaskAxis_3;
	unmarshaled.set_baseMaskAxis_3(unmarshaled_baseMaskAxis_temp_3);
	int32_t unmarshaled_sampleMode_temp_4 = 0;
	unmarshaled_sampleMode_temp_4 = marshaled.___sampleMode_4;
	unmarshaled.set_sampleMode_4(unmarshaled_sampleMode_temp_4);
	uint64_t unmarshaled_alphaMaskTextureID_temp_5 = 0;
	unmarshaled_alphaMaskTextureID_temp_5 = marshaled.___alphaMaskTextureID_5;
	unmarshaled.set_alphaMaskTextureID_5(unmarshaled_alphaMaskTextureID_temp_5);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_alphaMaskScaleOffset_temp_6;
	memset((&unmarshaled_alphaMaskScaleOffset_temp_6), 0, sizeof(unmarshaled_alphaMaskScaleOffset_temp_6));
	unmarshaled_alphaMaskScaleOffset_temp_6 = marshaled.___alphaMaskScaleOffset_6;
	unmarshaled.set_alphaMaskScaleOffset_6(unmarshaled_alphaMaskScaleOffset_temp_6);
	uint64_t unmarshaled_normalMapTextureID_temp_7 = 0;
	unmarshaled_normalMapTextureID_temp_7 = marshaled.___normalMapTextureID_7;
	unmarshaled.set_normalMapTextureID_7(unmarshaled_normalMapTextureID_temp_7);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_normalMapScaleOffset_temp_8;
	memset((&unmarshaled_normalMapScaleOffset_temp_8), 0, sizeof(unmarshaled_normalMapScaleOffset_temp_8));
	unmarshaled_normalMapScaleOffset_temp_8 = marshaled.___normalMapScaleOffset_8;
	unmarshaled.set_normalMapScaleOffset_8(unmarshaled_normalMapScaleOffset_temp_8);
	uint64_t unmarshaled_parallaxMapTextureID_temp_9 = 0;
	unmarshaled_parallaxMapTextureID_temp_9 = marshaled.___parallaxMapTextureID_9;
	unmarshaled.set_parallaxMapTextureID_9(unmarshaled_parallaxMapTextureID_temp_9);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_parallaxMapScaleOffset_temp_10;
	memset((&unmarshaled_parallaxMapScaleOffset_temp_10), 0, sizeof(unmarshaled_parallaxMapScaleOffset_temp_10));
	unmarshaled_parallaxMapScaleOffset_temp_10 = marshaled.___parallaxMapScaleOffset_10;
	unmarshaled.set_parallaxMapScaleOffset_10(unmarshaled_parallaxMapScaleOffset_temp_10);
	uint64_t unmarshaled_roughnessMapTextureID_temp_11 = 0;
	unmarshaled_roughnessMapTextureID_temp_11 = marshaled.___roughnessMapTextureID_11;
	unmarshaled.set_roughnessMapTextureID_11(unmarshaled_roughnessMapTextureID_temp_11);
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  unmarshaled_roughnessMapScaleOffset_temp_12;
	memset((&unmarshaled_roughnessMapScaleOffset_temp_12), 0, sizeof(unmarshaled_roughnessMapScaleOffset_temp_12));
	unmarshaled_roughnessMapScaleOffset_temp_12 = marshaled.___roughnessMapScaleOffset_12;
	unmarshaled.set_roughnessMapScaleOffset_12(unmarshaled_roughnessMapScaleOffset_temp_12);
	uint32_t unmarshaled_layerCount_temp_13 = 0;
	unmarshaled_layerCount_temp_13 = marshaled.___layerCount_13;
	unmarshaled.set_layerCount_13(unmarshaled_layerCount_temp_13);
	unmarshaled.set_layers_14(reinterpret_cast<ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069*>((ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069*)SZArrayNew(ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		(unmarshaled.get_layers_14())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___layers_14)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMaterialState
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_cleanup(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshaled_com& marshaled)
{
}
// System.Boolean ovrAvatarMaterialState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	{
		// return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___b1;
		float L_3 = L_2.get_x_1();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___a0;
		float L_5 = L_4.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___b1;
		float L_7 = L_6.get_y_2();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = ___a0;
		float L_9 = L_8.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = ___b1;
		float L_11 = L_10.get_z_3();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = ___a0;
		float L_13 = L_12.get_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = ___b1;
		float L_15 = L_14.get_w_4();
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean ovrAvatarMaterialState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57 (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (!(obj is ovrAvatarMaterialState))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// ovrAvatarMaterialState other = (ovrAvatarMaterialState)obj;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 *)((ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 *)UnBox(L_1, ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_il2cpp_TypeInfo_var))));
		// if (!VectorEquals(baseColor, other.baseColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = __this->get_baseColor_0();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_3 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_baseColor_0();
		bool L_5 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_2, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!VectorEquals(baseColor, other.baseColor)) return false;
		return (bool)0;
	}

IL_0026:
	{
		// if (baseMaskType != other.baseMaskType) return false;
		int32_t L_6 = __this->get_baseMaskType_1();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_7 = V_0;
		int32_t L_8 = L_7.get_baseMaskType_1();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		// if (baseMaskType != other.baseMaskType) return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (!VectorEquals(baseMaskParameters, other.baseMaskParameters)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = __this->get_baseMaskParameters_2();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_10 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = L_10.get_baseMaskParameters_2();
		bool L_12 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_9, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		// if (!VectorEquals(baseMaskParameters, other.baseMaskParameters)) return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (!VectorEquals(baseMaskAxis, other.baseMaskAxis)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = __this->get_baseMaskAxis_3();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_14 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_15 = L_14.get_baseMaskAxis_3();
		bool L_16 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_13, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0060;
		}
	}
	{
		// if (!VectorEquals(baseMaskAxis, other.baseMaskAxis)) return false;
		return (bool)0;
	}

IL_0060:
	{
		// if (sampleMode != other.sampleMode) return false;
		int32_t L_17 = __this->get_sampleMode_4();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_18 = V_0;
		int32_t L_19 = L_18.get_sampleMode_4();
		if ((((int32_t)L_17) == ((int32_t)L_19)))
		{
			goto IL_0070;
		}
	}
	{
		// if (sampleMode != other.sampleMode) return false;
		return (bool)0;
	}

IL_0070:
	{
		// if (alphaMaskTextureID != other.alphaMaskTextureID) return false;
		uint64_t L_20 = __this->get_alphaMaskTextureID_5();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_21 = V_0;
		uint64_t L_22 = L_21.get_alphaMaskTextureID_5();
		if ((((int64_t)L_20) == ((int64_t)L_22)))
		{
			goto IL_0080;
		}
	}
	{
		// if (alphaMaskTextureID != other.alphaMaskTextureID) return false;
		return (bool)0;
	}

IL_0080:
	{
		// if (!VectorEquals(alphaMaskScaleOffset, other.alphaMaskScaleOffset)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_23 = __this->get_alphaMaskScaleOffset_6();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_24 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_25 = L_24.get_alphaMaskScaleOffset_6();
		bool L_26 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_23, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		// if (!VectorEquals(alphaMaskScaleOffset, other.alphaMaskScaleOffset)) return false;
		return (bool)0;
	}

IL_0095:
	{
		// if (normalMapTextureID != other.normalMapTextureID) return false;
		uint64_t L_27 = __this->get_normalMapTextureID_7();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_28 = V_0;
		uint64_t L_29 = L_28.get_normalMapTextureID_7();
		if ((((int64_t)L_27) == ((int64_t)L_29)))
		{
			goto IL_00a5;
		}
	}
	{
		// if (normalMapTextureID != other.normalMapTextureID) return false;
		return (bool)0;
	}

IL_00a5:
	{
		// if (!VectorEquals(normalMapScaleOffset, other.normalMapScaleOffset)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_30 = __this->get_normalMapScaleOffset_8();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_31 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_32 = L_31.get_normalMapScaleOffset_8();
		bool L_33 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_30, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00ba;
		}
	}
	{
		// if (!VectorEquals(normalMapScaleOffset, other.normalMapScaleOffset)) return false;
		return (bool)0;
	}

IL_00ba:
	{
		// if (parallaxMapTextureID != other.parallaxMapTextureID) return false;
		uint64_t L_34 = __this->get_parallaxMapTextureID_9();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_35 = V_0;
		uint64_t L_36 = L_35.get_parallaxMapTextureID_9();
		if ((((int64_t)L_34) == ((int64_t)L_36)))
		{
			goto IL_00ca;
		}
	}
	{
		// if (parallaxMapTextureID != other.parallaxMapTextureID) return false;
		return (bool)0;
	}

IL_00ca:
	{
		// if (!VectorEquals(parallaxMapScaleOffset, other.parallaxMapScaleOffset)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_37 = __this->get_parallaxMapScaleOffset_10();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_38 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_39 = L_38.get_parallaxMapScaleOffset_10();
		bool L_40 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_37, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_00df;
		}
	}
	{
		// if (!VectorEquals(parallaxMapScaleOffset, other.parallaxMapScaleOffset)) return false;
		return (bool)0;
	}

IL_00df:
	{
		// if (roughnessMapTextureID != other.roughnessMapTextureID) return false;
		uint64_t L_41 = __this->get_roughnessMapTextureID_11();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_42 = V_0;
		uint64_t L_43 = L_42.get_roughnessMapTextureID_11();
		if ((((int64_t)L_41) == ((int64_t)L_43)))
		{
			goto IL_00ef;
		}
	}
	{
		// if (roughnessMapTextureID != other.roughnessMapTextureID) return false;
		return (bool)0;
	}

IL_00ef:
	{
		// if (!VectorEquals(roughnessMapScaleOffset, other.roughnessMapScaleOffset)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_44 = __this->get_roughnessMapScaleOffset_12();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_45 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_46 = L_45.get_roughnessMapScaleOffset_12();
		bool L_47 = ovrAvatarMaterialState_VectorEquals_mAAEC15C06A2F755E364AA6FCEE7F40731EE93400(L_44, L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0104;
		}
	}
	{
		// if (!VectorEquals(roughnessMapScaleOffset, other.roughnessMapScaleOffset)) return false;
		return (bool)0;
	}

IL_0104:
	{
		// if (layerCount != other.layerCount) return false;
		uint32_t L_48 = __this->get_layerCount_13();
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_49 = V_0;
		uint32_t L_50 = L_49.get_layerCount_13();
		if ((((int32_t)L_48) == ((int32_t)L_50)))
		{
			goto IL_0114;
		}
	}
	{
		// if (layerCount != other.layerCount) return false;
		return (bool)0;
	}

IL_0114:
	{
		// for (int i = 0; i < layerCount; ++i)
		V_1 = 0;
		goto IL_0148;
	}

IL_0118:
	{
		// if (!layers[i].Equals(other.layers[i])) return false;
		ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* L_51 = __this->get_layers_14();
		int32_t L_52 = V_1;
		NullCheck(L_51);
		ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  L_53 = V_0;
		ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* L_54 = L_53.get_layers_14();
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF  L_58 = L_57;
		RuntimeObject * L_59 = Box(ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF_il2cpp_TypeInfo_var, &L_58);
		bool L_60 = ovrAvatarMaterialLayerState_Equals_mD6C8CC9FCCBD7F313BDF504C6646782FF1F20E65((ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))), L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_0144;
		}
	}
	{
		// if (!layers[i].Equals(other.layers[i])) return false;
		return (bool)0;
	}

IL_0144:
	{
		// for (int i = 0; i < layerCount; ++i)
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0148:
	{
		// for (int i = 0; i < layerCount; ++i)
		int32_t L_62 = V_1;
		uint32_t L_63 = __this->get_layerCount_13();
		if ((((int64_t)(((int64_t)((int64_t)L_62)))) < ((int64_t)(((int64_t)((uint64_t)L_63))))))
		{
			goto IL_0118;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * _thisAdjusted = reinterpret_cast<ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 *>(__this + _offset);
	return ovrAvatarMaterialState_Equals_mCB0C8DFA2BE1E379F184518C80F2F6F0D5814D57(_thisAdjusted, ___obj0, method);
}
// System.Int32 ovrAvatarMaterialState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarMaterialState_GetHashCode_mEC649C79480E3BC80BCD007017B400E68BFBB1D8 (ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 0;
		V_0 = 0;
		// hash ^= baseColor.GetHashCode();
		int32_t L_0 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_1 = __this->get_address_of_baseColor_0();
		int32_t L_2 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// hash ^= baseMaskType.GetHashCode();
		int32_t L_3 = V_0;
		int32_t* L_4 = __this->get_address_of_baseMaskType_1();
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_3^(int32_t)L_5));
		// hash ^= baseMaskParameters.GetHashCode();
		int32_t L_6 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_7 = __this->get_address_of_baseMaskParameters_2();
		int32_t L_8 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_6^(int32_t)L_8));
		// hash ^= baseMaskAxis.GetHashCode();
		int32_t L_9 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_10 = __this->get_address_of_baseMaskAxis_3();
		int32_t L_11 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_9^(int32_t)L_11));
		// hash ^= sampleMode.GetHashCode();
		int32_t L_12 = V_0;
		int32_t* L_13 = __this->get_address_of_sampleMode_4();
		int32_t L_14 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_12^(int32_t)L_14));
		// hash ^= alphaMaskTextureID.GetHashCode();
		int32_t L_15 = V_0;
		uint64_t* L_16 = __this->get_address_of_alphaMaskTextureID_5();
		int32_t L_17 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_15^(int32_t)L_17));
		// hash ^= alphaMaskScaleOffset.GetHashCode();
		int32_t L_18 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_19 = __this->get_address_of_alphaMaskScaleOffset_6();
		int32_t L_20 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_18^(int32_t)L_20));
		// hash ^= normalMapTextureID.GetHashCode();
		int32_t L_21 = V_0;
		uint64_t* L_22 = __this->get_address_of_normalMapTextureID_7();
		int32_t L_23 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_21^(int32_t)L_23));
		// hash ^= normalMapScaleOffset.GetHashCode();
		int32_t L_24 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_25 = __this->get_address_of_normalMapScaleOffset_8();
		int32_t L_26 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_24^(int32_t)L_26));
		// hash ^= parallaxMapTextureID.GetHashCode();
		int32_t L_27 = V_0;
		uint64_t* L_28 = __this->get_address_of_parallaxMapTextureID_9();
		int32_t L_29 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_27^(int32_t)L_29));
		// hash ^= parallaxMapScaleOffset.GetHashCode();
		int32_t L_30 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_31 = __this->get_address_of_parallaxMapScaleOffset_10();
		int32_t L_32 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_30^(int32_t)L_32));
		// hash ^= roughnessMapTextureID.GetHashCode();
		int32_t L_33 = V_0;
		uint64_t* L_34 = __this->get_address_of_roughnessMapTextureID_11();
		int32_t L_35 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_33^(int32_t)L_35));
		// hash ^= roughnessMapScaleOffset.GetHashCode();
		int32_t L_36 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_37 = __this->get_address_of_roughnessMapScaleOffset_12();
		int32_t L_38 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_36^(int32_t)L_38));
		// hash ^= layerCount.GetHashCode();
		int32_t L_39 = V_0;
		uint32_t* L_40 = __this->get_address_of_layerCount_13();
		int32_t L_41 = UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D((uint32_t*)L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_39^(int32_t)L_41));
		// for (int i = 0; i < layerCount; ++i)
		V_1 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		// hash ^= layers[i].GetHashCode();
		int32_t L_42 = V_0;
		ovrAvatarMaterialLayerStateU5BU5D_tE9F24F3C8186096993363506E67908DDAA9C9069* L_43 = __this->get_layers_14();
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = ovrAvatarMaterialLayerState_GetHashCode_m065C1B00BFF4E09EE0B57E65B3FADA7315BBB135((ovrAvatarMaterialLayerState_t7D3A88D024B9FC1B57A76DC4738FB29ADFBF86EF *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_42^(int32_t)L_45));
		// for (int i = 0; i < layerCount; ++i)
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_011e:
	{
		// for (int i = 0; i < layerCount; ++i)
		int32_t L_47 = V_1;
		uint32_t L_48 = __this->get_layerCount_13();
		if ((((int64_t)(((int64_t)((int64_t)L_47)))) < ((int64_t)(((int64_t)((uint64_t)L_48))))))
		{
			goto IL_0100;
		}
	}
	{
		// return hash;
		int32_t L_49 = V_0;
		return L_49;
	}
}
IL2CPP_EXTERN_C  int32_t ovrAvatarMaterialState_GetHashCode_mEC649C79480E3BC80BCD007017B400E68BFBB1D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 * _thisAdjusted = reinterpret_cast<ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849 *>(__this + _offset);
	return ovrAvatarMaterialState_GetHashCode_mEC649C79480E3BC80BCD007017B400E68BFBB1D8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: ovrAvatarMeshAssetData
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_pinvoke(const ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD& unmarshaled, ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_pinvoke& marshaled)
{
	marshaled.___vertexCount_0 = unmarshaled.get_vertexCount_0();
	marshaled.___vertexBuffer_1 = unmarshaled.get_vertexBuffer_1();
	marshaled.___indexCount_2 = unmarshaled.get_indexCount_2();
	marshaled.___indexBuffer_3 = unmarshaled.get_indexBuffer_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(unmarshaled.get_skinnedBindPose_4(), marshaled.___skinnedBindPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_pinvoke_back(const ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_pinvoke& marshaled, ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD& unmarshaled)
{
	uint32_t unmarshaled_vertexCount_temp_0 = 0;
	unmarshaled_vertexCount_temp_0 = marshaled.___vertexCount_0;
	unmarshaled.set_vertexCount_0(unmarshaled_vertexCount_temp_0);
	intptr_t unmarshaled_vertexBuffer_temp_1;
	memset((&unmarshaled_vertexBuffer_temp_1), 0, sizeof(unmarshaled_vertexBuffer_temp_1));
	unmarshaled_vertexBuffer_temp_1 = marshaled.___vertexBuffer_1;
	unmarshaled.set_vertexBuffer_1(unmarshaled_vertexBuffer_temp_1);
	uint32_t unmarshaled_indexCount_temp_2 = 0;
	unmarshaled_indexCount_temp_2 = marshaled.___indexCount_2;
	unmarshaled.set_indexCount_2(unmarshaled_indexCount_temp_2);
	intptr_t unmarshaled_indexBuffer_temp_3;
	memset((&unmarshaled_indexBuffer_temp_3), 0, sizeof(unmarshaled_indexBuffer_temp_3));
	unmarshaled_indexBuffer_temp_3 = marshaled.___indexBuffer_3;
	unmarshaled.set_indexBuffer_3(unmarshaled_indexBuffer_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedBindPose_temp_4;
	memset((&unmarshaled_skinnedBindPose_temp_4), 0, sizeof(unmarshaled_skinnedBindPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(marshaled.___skinnedBindPose_4, unmarshaled_skinnedBindPose_temp_4);
	unmarshaled.set_skinnedBindPose_4(unmarshaled_skinnedBindPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshAssetData
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_pinvoke_cleanup(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_pinvoke& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(marshaled.___skinnedBindPose_4);
}


// Conversion methods for marshalling of: ovrAvatarMeshAssetData
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_com(const ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD& unmarshaled, ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_com& marshaled)
{
	marshaled.___vertexCount_0 = unmarshaled.get_vertexCount_0();
	marshaled.___vertexBuffer_1 = unmarshaled.get_vertexBuffer_1();
	marshaled.___indexCount_2 = unmarshaled.get_indexCount_2();
	marshaled.___indexBuffer_3 = unmarshaled.get_indexBuffer_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(unmarshaled.get_skinnedBindPose_4(), marshaled.___skinnedBindPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_com_back(const ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_com& marshaled, ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD& unmarshaled)
{
	uint32_t unmarshaled_vertexCount_temp_0 = 0;
	unmarshaled_vertexCount_temp_0 = marshaled.___vertexCount_0;
	unmarshaled.set_vertexCount_0(unmarshaled_vertexCount_temp_0);
	intptr_t unmarshaled_vertexBuffer_temp_1;
	memset((&unmarshaled_vertexBuffer_temp_1), 0, sizeof(unmarshaled_vertexBuffer_temp_1));
	unmarshaled_vertexBuffer_temp_1 = marshaled.___vertexBuffer_1;
	unmarshaled.set_vertexBuffer_1(unmarshaled_vertexBuffer_temp_1);
	uint32_t unmarshaled_indexCount_temp_2 = 0;
	unmarshaled_indexCount_temp_2 = marshaled.___indexCount_2;
	unmarshaled.set_indexCount_2(unmarshaled_indexCount_temp_2);
	intptr_t unmarshaled_indexBuffer_temp_3;
	memset((&unmarshaled_indexBuffer_temp_3), 0, sizeof(unmarshaled_indexBuffer_temp_3));
	unmarshaled_indexBuffer_temp_3 = marshaled.___indexBuffer_3;
	unmarshaled.set_indexBuffer_3(unmarshaled_indexBuffer_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedBindPose_temp_4;
	memset((&unmarshaled_skinnedBindPose_temp_4), 0, sizeof(unmarshaled_skinnedBindPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(marshaled.___skinnedBindPose_4, unmarshaled_skinnedBindPose_temp_4);
	unmarshaled.set_skinnedBindPose_4(unmarshaled_skinnedBindPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshAssetData
IL2CPP_EXTERN_C void ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshal_com_cleanup(ovrAvatarMeshAssetData_t903E0002BF36BB3C3A821A195EF6500A6719AAAD_marshaled_com& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(marshaled.___skinnedBindPose_4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: ovrAvatarMeshAssetDataV2
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_pinvoke(const ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3& unmarshaled, ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_pinvoke& marshaled)
{
	marshaled.___vertexCount_0 = unmarshaled.get_vertexCount_0();
	marshaled.___vertexBuffer_1 = unmarshaled.get_vertexBuffer_1();
	marshaled.___indexCount_2 = unmarshaled.get_indexCount_2();
	marshaled.___indexBuffer_3 = unmarshaled.get_indexBuffer_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(unmarshaled.get_skinnedBindPose_4(), marshaled.___skinnedBindPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_pinvoke_back(const ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_pinvoke& marshaled, ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3& unmarshaled)
{
	uint32_t unmarshaled_vertexCount_temp_0 = 0;
	unmarshaled_vertexCount_temp_0 = marshaled.___vertexCount_0;
	unmarshaled.set_vertexCount_0(unmarshaled_vertexCount_temp_0);
	intptr_t unmarshaled_vertexBuffer_temp_1;
	memset((&unmarshaled_vertexBuffer_temp_1), 0, sizeof(unmarshaled_vertexBuffer_temp_1));
	unmarshaled_vertexBuffer_temp_1 = marshaled.___vertexBuffer_1;
	unmarshaled.set_vertexBuffer_1(unmarshaled_vertexBuffer_temp_1);
	uint32_t unmarshaled_indexCount_temp_2 = 0;
	unmarshaled_indexCount_temp_2 = marshaled.___indexCount_2;
	unmarshaled.set_indexCount_2(unmarshaled_indexCount_temp_2);
	intptr_t unmarshaled_indexBuffer_temp_3;
	memset((&unmarshaled_indexBuffer_temp_3), 0, sizeof(unmarshaled_indexBuffer_temp_3));
	unmarshaled_indexBuffer_temp_3 = marshaled.___indexBuffer_3;
	unmarshaled.set_indexBuffer_3(unmarshaled_indexBuffer_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedBindPose_temp_4;
	memset((&unmarshaled_skinnedBindPose_temp_4), 0, sizeof(unmarshaled_skinnedBindPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(marshaled.___skinnedBindPose_4, unmarshaled_skinnedBindPose_temp_4);
	unmarshaled.set_skinnedBindPose_4(unmarshaled_skinnedBindPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshAssetDataV2
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_pinvoke_cleanup(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_pinvoke& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(marshaled.___skinnedBindPose_4);
}


// Conversion methods for marshalling of: ovrAvatarMeshAssetDataV2
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_com(const ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3& unmarshaled, ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_com& marshaled)
{
	marshaled.___vertexCount_0 = unmarshaled.get_vertexCount_0();
	marshaled.___vertexBuffer_1 = unmarshaled.get_vertexBuffer_1();
	marshaled.___indexCount_2 = unmarshaled.get_indexCount_2();
	marshaled.___indexBuffer_3 = unmarshaled.get_indexBuffer_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(unmarshaled.get_skinnedBindPose_4(), marshaled.___skinnedBindPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_com_back(const ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_com& marshaled, ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3& unmarshaled)
{
	uint32_t unmarshaled_vertexCount_temp_0 = 0;
	unmarshaled_vertexCount_temp_0 = marshaled.___vertexCount_0;
	unmarshaled.set_vertexCount_0(unmarshaled_vertexCount_temp_0);
	intptr_t unmarshaled_vertexBuffer_temp_1;
	memset((&unmarshaled_vertexBuffer_temp_1), 0, sizeof(unmarshaled_vertexBuffer_temp_1));
	unmarshaled_vertexBuffer_temp_1 = marshaled.___vertexBuffer_1;
	unmarshaled.set_vertexBuffer_1(unmarshaled_vertexBuffer_temp_1);
	uint32_t unmarshaled_indexCount_temp_2 = 0;
	unmarshaled_indexCount_temp_2 = marshaled.___indexCount_2;
	unmarshaled.set_indexCount_2(unmarshaled_indexCount_temp_2);
	intptr_t unmarshaled_indexBuffer_temp_3;
	memset((&unmarshaled_indexBuffer_temp_3), 0, sizeof(unmarshaled_indexBuffer_temp_3));
	unmarshaled_indexBuffer_temp_3 = marshaled.___indexBuffer_3;
	unmarshaled.set_indexBuffer_3(unmarshaled_indexBuffer_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedBindPose_temp_4;
	memset((&unmarshaled_skinnedBindPose_temp_4), 0, sizeof(unmarshaled_skinnedBindPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(marshaled.___skinnedBindPose_4, unmarshaled_skinnedBindPose_temp_4);
	unmarshaled.set_skinnedBindPose_4(unmarshaled_skinnedBindPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshAssetDataV2
IL2CPP_EXTERN_C void ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshal_com_cleanup(ovrAvatarMeshAssetDataV2_t4878035FD3E8E32351D64800397115CBFF62E2E3_marshaled_com& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(marshaled.___skinnedBindPose_4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ovrAvatarMeshVertex
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_pinvoke(const ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D& unmarshaled, ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
	marshaled.___nx_3 = unmarshaled.get_nx_3();
	marshaled.___ny_4 = unmarshaled.get_ny_4();
	marshaled.___nz_5 = unmarshaled.get_nz_5();
	marshaled.___tx_6 = unmarshaled.get_tx_6();
	marshaled.___ty_7 = unmarshaled.get_ty_7();
	marshaled.___tz_8 = unmarshaled.get_tz_8();
	marshaled.___tw_9 = unmarshaled.get_tw_9();
	marshaled.___u_10 = unmarshaled.get_u_10();
	marshaled.___v_11 = unmarshaled.get_v_11();
	if (unmarshaled.get_blendIndices_12() != NULL)
	{
		if (4 > (unmarshaled.get_blendIndices_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendIndices_12)[i] = (unmarshaled.get_blendIndices_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_blendWeights_13() != NULL)
	{
		if (4 > (unmarshaled.get_blendWeights_13())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendWeights_13)[i] = (unmarshaled.get_blendWeights_13())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_pinvoke_back(const ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_pinvoke& marshaled, ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_x_temp_0 = 0.0f;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	float unmarshaled_y_temp_1 = 0.0f;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	float unmarshaled_z_temp_2 = 0.0f;
	unmarshaled_z_temp_2 = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp_2);
	float unmarshaled_nx_temp_3 = 0.0f;
	unmarshaled_nx_temp_3 = marshaled.___nx_3;
	unmarshaled.set_nx_3(unmarshaled_nx_temp_3);
	float unmarshaled_ny_temp_4 = 0.0f;
	unmarshaled_ny_temp_4 = marshaled.___ny_4;
	unmarshaled.set_ny_4(unmarshaled_ny_temp_4);
	float unmarshaled_nz_temp_5 = 0.0f;
	unmarshaled_nz_temp_5 = marshaled.___nz_5;
	unmarshaled.set_nz_5(unmarshaled_nz_temp_5);
	float unmarshaled_tx_temp_6 = 0.0f;
	unmarshaled_tx_temp_6 = marshaled.___tx_6;
	unmarshaled.set_tx_6(unmarshaled_tx_temp_6);
	float unmarshaled_ty_temp_7 = 0.0f;
	unmarshaled_ty_temp_7 = marshaled.___ty_7;
	unmarshaled.set_ty_7(unmarshaled_ty_temp_7);
	float unmarshaled_tz_temp_8 = 0.0f;
	unmarshaled_tz_temp_8 = marshaled.___tz_8;
	unmarshaled.set_tz_8(unmarshaled_tz_temp_8);
	float unmarshaled_tw_temp_9 = 0.0f;
	unmarshaled_tw_temp_9 = marshaled.___tw_9;
	unmarshaled.set_tw_9(unmarshaled_tw_temp_9);
	float unmarshaled_u_temp_10 = 0.0f;
	unmarshaled_u_temp_10 = marshaled.___u_10;
	unmarshaled.set_u_10(unmarshaled_u_temp_10);
	float unmarshaled_v_temp_11 = 0.0f;
	unmarshaled_v_temp_11 = marshaled.___v_11;
	unmarshaled.set_v_11(unmarshaled_v_temp_11);
	unmarshaled.set_blendIndices_12(reinterpret_cast<ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*>((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendIndices_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendIndices_12)[i]);
	}
	unmarshaled.set_blendWeights_13(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendWeights_13())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendWeights_13)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshVertex
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_pinvoke_cleanup(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarMeshVertex
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_com(const ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D& unmarshaled, ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_com& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
	marshaled.___nx_3 = unmarshaled.get_nx_3();
	marshaled.___ny_4 = unmarshaled.get_ny_4();
	marshaled.___nz_5 = unmarshaled.get_nz_5();
	marshaled.___tx_6 = unmarshaled.get_tx_6();
	marshaled.___ty_7 = unmarshaled.get_ty_7();
	marshaled.___tz_8 = unmarshaled.get_tz_8();
	marshaled.___tw_9 = unmarshaled.get_tw_9();
	marshaled.___u_10 = unmarshaled.get_u_10();
	marshaled.___v_11 = unmarshaled.get_v_11();
	if (unmarshaled.get_blendIndices_12() != NULL)
	{
		if (4 > (unmarshaled.get_blendIndices_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendIndices_12)[i] = (unmarshaled.get_blendIndices_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_blendWeights_13() != NULL)
	{
		if (4 > (unmarshaled.get_blendWeights_13())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendWeights_13)[i] = (unmarshaled.get_blendWeights_13())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_com_back(const ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_com& marshaled, ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_x_temp_0 = 0.0f;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	float unmarshaled_y_temp_1 = 0.0f;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	float unmarshaled_z_temp_2 = 0.0f;
	unmarshaled_z_temp_2 = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp_2);
	float unmarshaled_nx_temp_3 = 0.0f;
	unmarshaled_nx_temp_3 = marshaled.___nx_3;
	unmarshaled.set_nx_3(unmarshaled_nx_temp_3);
	float unmarshaled_ny_temp_4 = 0.0f;
	unmarshaled_ny_temp_4 = marshaled.___ny_4;
	unmarshaled.set_ny_4(unmarshaled_ny_temp_4);
	float unmarshaled_nz_temp_5 = 0.0f;
	unmarshaled_nz_temp_5 = marshaled.___nz_5;
	unmarshaled.set_nz_5(unmarshaled_nz_temp_5);
	float unmarshaled_tx_temp_6 = 0.0f;
	unmarshaled_tx_temp_6 = marshaled.___tx_6;
	unmarshaled.set_tx_6(unmarshaled_tx_temp_6);
	float unmarshaled_ty_temp_7 = 0.0f;
	unmarshaled_ty_temp_7 = marshaled.___ty_7;
	unmarshaled.set_ty_7(unmarshaled_ty_temp_7);
	float unmarshaled_tz_temp_8 = 0.0f;
	unmarshaled_tz_temp_8 = marshaled.___tz_8;
	unmarshaled.set_tz_8(unmarshaled_tz_temp_8);
	float unmarshaled_tw_temp_9 = 0.0f;
	unmarshaled_tw_temp_9 = marshaled.___tw_9;
	unmarshaled.set_tw_9(unmarshaled_tw_temp_9);
	float unmarshaled_u_temp_10 = 0.0f;
	unmarshaled_u_temp_10 = marshaled.___u_10;
	unmarshaled.set_u_10(unmarshaled_u_temp_10);
	float unmarshaled_v_temp_11 = 0.0f;
	unmarshaled_v_temp_11 = marshaled.___v_11;
	unmarshaled.set_v_11(unmarshaled_v_temp_11);
	unmarshaled.set_blendIndices_12(reinterpret_cast<ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*>((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendIndices_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendIndices_12)[i]);
	}
	unmarshaled.set_blendWeights_13(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendWeights_13())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendWeights_13)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshVertex
IL2CPP_EXTERN_C void ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshal_com_cleanup(ovrAvatarMeshVertex_t015B5566E6E58577BF2C7C59DC1F1A90FB27A07D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ovrAvatarMeshVertexV2
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_pinvoke(const ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA& unmarshaled, ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
	marshaled.___nx_3 = unmarshaled.get_nx_3();
	marshaled.___ny_4 = unmarshaled.get_ny_4();
	marshaled.___nz_5 = unmarshaled.get_nz_5();
	marshaled.___tx_6 = unmarshaled.get_tx_6();
	marshaled.___ty_7 = unmarshaled.get_ty_7();
	marshaled.___tz_8 = unmarshaled.get_tz_8();
	marshaled.___tw_9 = unmarshaled.get_tw_9();
	marshaled.___u_10 = unmarshaled.get_u_10();
	marshaled.___v_11 = unmarshaled.get_v_11();
	marshaled.___r_12 = unmarshaled.get_r_12();
	marshaled.___g_13 = unmarshaled.get_g_13();
	marshaled.___b_14 = unmarshaled.get_b_14();
	marshaled.___a_15 = unmarshaled.get_a_15();
	if (unmarshaled.get_blendIndices_16() != NULL)
	{
		if (4 > (unmarshaled.get_blendIndices_16())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendIndices_16)[i] = (unmarshaled.get_blendIndices_16())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_blendWeights_17() != NULL)
	{
		if (4 > (unmarshaled.get_blendWeights_17())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendWeights_17)[i] = (unmarshaled.get_blendWeights_17())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_pinvoke_back(const ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_pinvoke& marshaled, ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_x_temp_0 = 0.0f;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	float unmarshaled_y_temp_1 = 0.0f;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	float unmarshaled_z_temp_2 = 0.0f;
	unmarshaled_z_temp_2 = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp_2);
	float unmarshaled_nx_temp_3 = 0.0f;
	unmarshaled_nx_temp_3 = marshaled.___nx_3;
	unmarshaled.set_nx_3(unmarshaled_nx_temp_3);
	float unmarshaled_ny_temp_4 = 0.0f;
	unmarshaled_ny_temp_4 = marshaled.___ny_4;
	unmarshaled.set_ny_4(unmarshaled_ny_temp_4);
	float unmarshaled_nz_temp_5 = 0.0f;
	unmarshaled_nz_temp_5 = marshaled.___nz_5;
	unmarshaled.set_nz_5(unmarshaled_nz_temp_5);
	float unmarshaled_tx_temp_6 = 0.0f;
	unmarshaled_tx_temp_6 = marshaled.___tx_6;
	unmarshaled.set_tx_6(unmarshaled_tx_temp_6);
	float unmarshaled_ty_temp_7 = 0.0f;
	unmarshaled_ty_temp_7 = marshaled.___ty_7;
	unmarshaled.set_ty_7(unmarshaled_ty_temp_7);
	float unmarshaled_tz_temp_8 = 0.0f;
	unmarshaled_tz_temp_8 = marshaled.___tz_8;
	unmarshaled.set_tz_8(unmarshaled_tz_temp_8);
	float unmarshaled_tw_temp_9 = 0.0f;
	unmarshaled_tw_temp_9 = marshaled.___tw_9;
	unmarshaled.set_tw_9(unmarshaled_tw_temp_9);
	float unmarshaled_u_temp_10 = 0.0f;
	unmarshaled_u_temp_10 = marshaled.___u_10;
	unmarshaled.set_u_10(unmarshaled_u_temp_10);
	float unmarshaled_v_temp_11 = 0.0f;
	unmarshaled_v_temp_11 = marshaled.___v_11;
	unmarshaled.set_v_11(unmarshaled_v_temp_11);
	float unmarshaled_r_temp_12 = 0.0f;
	unmarshaled_r_temp_12 = marshaled.___r_12;
	unmarshaled.set_r_12(unmarshaled_r_temp_12);
	float unmarshaled_g_temp_13 = 0.0f;
	unmarshaled_g_temp_13 = marshaled.___g_13;
	unmarshaled.set_g_13(unmarshaled_g_temp_13);
	float unmarshaled_b_temp_14 = 0.0f;
	unmarshaled_b_temp_14 = marshaled.___b_14;
	unmarshaled.set_b_14(unmarshaled_b_temp_14);
	float unmarshaled_a_temp_15 = 0.0f;
	unmarshaled_a_temp_15 = marshaled.___a_15;
	unmarshaled.set_a_15(unmarshaled_a_temp_15);
	unmarshaled.set_blendIndices_16(reinterpret_cast<ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*>((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendIndices_16())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendIndices_16)[i]);
	}
	unmarshaled.set_blendWeights_17(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendWeights_17())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendWeights_17)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshVertexV2
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_pinvoke_cleanup(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarMeshVertexV2
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_com(const ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA& unmarshaled, ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_com& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___z_2 = unmarshaled.get_z_2();
	marshaled.___nx_3 = unmarshaled.get_nx_3();
	marshaled.___ny_4 = unmarshaled.get_ny_4();
	marshaled.___nz_5 = unmarshaled.get_nz_5();
	marshaled.___tx_6 = unmarshaled.get_tx_6();
	marshaled.___ty_7 = unmarshaled.get_ty_7();
	marshaled.___tz_8 = unmarshaled.get_tz_8();
	marshaled.___tw_9 = unmarshaled.get_tw_9();
	marshaled.___u_10 = unmarshaled.get_u_10();
	marshaled.___v_11 = unmarshaled.get_v_11();
	marshaled.___r_12 = unmarshaled.get_r_12();
	marshaled.___g_13 = unmarshaled.get_g_13();
	marshaled.___b_14 = unmarshaled.get_b_14();
	marshaled.___a_15 = unmarshaled.get_a_15();
	if (unmarshaled.get_blendIndices_16() != NULL)
	{
		if (4 > (unmarshaled.get_blendIndices_16())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendIndices_16)[i] = (unmarshaled.get_blendIndices_16())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_blendWeights_17() != NULL)
	{
		if (4 > (unmarshaled.get_blendWeights_17())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
		{
			(marshaled.___blendWeights_17)[i] = (unmarshaled.get_blendWeights_17())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_com_back(const ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_com& marshaled, ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_x_temp_0 = 0.0f;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	float unmarshaled_y_temp_1 = 0.0f;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	float unmarshaled_z_temp_2 = 0.0f;
	unmarshaled_z_temp_2 = marshaled.___z_2;
	unmarshaled.set_z_2(unmarshaled_z_temp_2);
	float unmarshaled_nx_temp_3 = 0.0f;
	unmarshaled_nx_temp_3 = marshaled.___nx_3;
	unmarshaled.set_nx_3(unmarshaled_nx_temp_3);
	float unmarshaled_ny_temp_4 = 0.0f;
	unmarshaled_ny_temp_4 = marshaled.___ny_4;
	unmarshaled.set_ny_4(unmarshaled_ny_temp_4);
	float unmarshaled_nz_temp_5 = 0.0f;
	unmarshaled_nz_temp_5 = marshaled.___nz_5;
	unmarshaled.set_nz_5(unmarshaled_nz_temp_5);
	float unmarshaled_tx_temp_6 = 0.0f;
	unmarshaled_tx_temp_6 = marshaled.___tx_6;
	unmarshaled.set_tx_6(unmarshaled_tx_temp_6);
	float unmarshaled_ty_temp_7 = 0.0f;
	unmarshaled_ty_temp_7 = marshaled.___ty_7;
	unmarshaled.set_ty_7(unmarshaled_ty_temp_7);
	float unmarshaled_tz_temp_8 = 0.0f;
	unmarshaled_tz_temp_8 = marshaled.___tz_8;
	unmarshaled.set_tz_8(unmarshaled_tz_temp_8);
	float unmarshaled_tw_temp_9 = 0.0f;
	unmarshaled_tw_temp_9 = marshaled.___tw_9;
	unmarshaled.set_tw_9(unmarshaled_tw_temp_9);
	float unmarshaled_u_temp_10 = 0.0f;
	unmarshaled_u_temp_10 = marshaled.___u_10;
	unmarshaled.set_u_10(unmarshaled_u_temp_10);
	float unmarshaled_v_temp_11 = 0.0f;
	unmarshaled_v_temp_11 = marshaled.___v_11;
	unmarshaled.set_v_11(unmarshaled_v_temp_11);
	float unmarshaled_r_temp_12 = 0.0f;
	unmarshaled_r_temp_12 = marshaled.___r_12;
	unmarshaled.set_r_12(unmarshaled_r_temp_12);
	float unmarshaled_g_temp_13 = 0.0f;
	unmarshaled_g_temp_13 = marshaled.___g_13;
	unmarshaled.set_g_13(unmarshaled_g_temp_13);
	float unmarshaled_b_temp_14 = 0.0f;
	unmarshaled_b_temp_14 = marshaled.___b_14;
	unmarshaled.set_b_14(unmarshaled_b_temp_14);
	float unmarshaled_a_temp_15 = 0.0f;
	unmarshaled_a_temp_15 = marshaled.___a_15;
	unmarshaled.set_a_15(unmarshaled_a_temp_15);
	unmarshaled.set_blendIndices_16(reinterpret_cast<ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*>((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendIndices_16())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendIndices_16)[i]);
	}
	unmarshaled.set_blendWeights_17(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 4)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(4); i++)
	{
		(unmarshaled.get_blendWeights_17())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___blendWeights_17)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarMeshVertexV2
IL2CPP_EXTERN_C void ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshal_com_cleanup(ovrAvatarMeshVertexV2_t740F0FC3F28243BE986AB1350BFB1760F7EC32AA_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ovrAvatarPBSMaterialState::VectorEquals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarPBSMaterialState_VectorEquals_m6578A3F0000B810F7AA561E7F4CDD6D34D0FC9FF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	{
		// return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___b1;
		float L_3 = L_2.get_x_1();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___a0;
		float L_5 = L_4.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___b1;
		float L_7 = L_6.get_y_2();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = ___a0;
		float L_9 = L_8.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = ___b1;
		float L_11 = L_10.get_z_3();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = ___a0;
		float L_13 = L_12.get_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = ___b1;
		float L_15 = L_14.get_w_4();
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean ovrAvatarPBSMaterialState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80 (ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(obj is ovrAvatarPBSMaterialState))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// ovrAvatarPBSMaterialState other = (ovrAvatarPBSMaterialState)obj;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F *)((ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F *)UnBox(L_1, ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F_il2cpp_TypeInfo_var))));
		// if (!VectorEquals(baseColor, other.baseColor)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = __this->get_baseColor_0();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_3 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_baseColor_0();
		bool L_5 = ovrAvatarPBSMaterialState_VectorEquals_m6578A3F0000B810F7AA561E7F4CDD6D34D0FC9FF(L_2, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!VectorEquals(baseColor, other.baseColor)) return false;
		return (bool)0;
	}

IL_0026:
	{
		// if (albedoTextureID != other.albedoTextureID) return false;
		uint64_t L_6 = __this->get_albedoTextureID_1();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_7 = V_0;
		uint64_t L_8 = L_7.get_albedoTextureID_1();
		if ((((int64_t)L_6) == ((int64_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		// if (albedoTextureID != other.albedoTextureID) return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (!VectorEquals(albedoMultiplier, other.albedoMultiplier)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = __this->get_albedoMultiplier_2();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_10 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = L_10.get_albedoMultiplier_2();
		bool L_12 = ovrAvatarPBSMaterialState_VectorEquals_m6578A3F0000B810F7AA561E7F4CDD6D34D0FC9FF(L_9, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		// if (!VectorEquals(albedoMultiplier, other.albedoMultiplier)) return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (metallicnessTextureID != other.metallicnessTextureID) return false;
		uint64_t L_13 = __this->get_metallicnessTextureID_3();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_14 = V_0;
		uint64_t L_15 = L_14.get_metallicnessTextureID_3();
		if ((((int64_t)L_13) == ((int64_t)L_15)))
		{
			goto IL_005b;
		}
	}
	{
		// if (metallicnessTextureID != other.metallicnessTextureID) return false;
		return (bool)0;
	}

IL_005b:
	{
		// if (glossinessScale != other.glossinessScale) return false;
		float L_16 = __this->get_glossinessScale_4();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_17 = V_0;
		float L_18 = L_17.get_glossinessScale_4();
		if ((((float)L_16) == ((float)L_18)))
		{
			goto IL_006b;
		}
	}
	{
		// if (glossinessScale != other.glossinessScale) return false;
		return (bool)0;
	}

IL_006b:
	{
		// if (normalTextureID != other.normalTextureID) return false;
		uint64_t L_19 = __this->get_normalTextureID_5();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_20 = V_0;
		uint64_t L_21 = L_20.get_normalTextureID_5();
		if ((((int64_t)L_19) == ((int64_t)L_21)))
		{
			goto IL_007b;
		}
	}
	{
		// if (normalTextureID != other.normalTextureID) return false;
		return (bool)0;
	}

IL_007b:
	{
		// if (heightTextureID != other.heightTextureID) return false;
		uint64_t L_22 = __this->get_heightTextureID_6();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_23 = V_0;
		uint64_t L_24 = L_23.get_heightTextureID_6();
		if ((((int64_t)L_22) == ((int64_t)L_24)))
		{
			goto IL_008b;
		}
	}
	{
		// if (heightTextureID != other.heightTextureID) return false;
		return (bool)0;
	}

IL_008b:
	{
		// if (occlusionTextureID != other.occlusionTextureID) return false;
		uint64_t L_25 = __this->get_occlusionTextureID_7();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_26 = V_0;
		uint64_t L_27 = L_26.get_occlusionTextureID_7();
		if ((((int64_t)L_25) == ((int64_t)L_27)))
		{
			goto IL_009b;
		}
	}
	{
		// if (occlusionTextureID != other.occlusionTextureID) return false;
		return (bool)0;
	}

IL_009b:
	{
		// if (emissionTextureID != other.emissionTextureID) return false;
		uint64_t L_28 = __this->get_emissionTextureID_8();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_29 = V_0;
		uint64_t L_30 = L_29.get_emissionTextureID_8();
		if ((((int64_t)L_28) == ((int64_t)L_30)))
		{
			goto IL_00ab;
		}
	}
	{
		// if (emissionTextureID != other.emissionTextureID) return false;
		return (bool)0;
	}

IL_00ab:
	{
		// if (!VectorEquals(emissionMultiplier, other.emissionMultiplier)) return false;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_31 = __this->get_emissionMultiplier_9();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_32 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_33 = L_32.get_emissionMultiplier_9();
		bool L_34 = ovrAvatarPBSMaterialState_VectorEquals_m6578A3F0000B810F7AA561E7F4CDD6D34D0FC9FF(L_31, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00c0;
		}
	}
	{
		// if (!VectorEquals(emissionMultiplier, other.emissionMultiplier)) return false;
		return (bool)0;
	}

IL_00c0:
	{
		// if (detailMaskTextureID != other.detailMaskTextureID) return false;
		uint64_t L_35 = __this->get_detailMaskTextureID_10();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_36 = V_0;
		uint64_t L_37 = L_36.get_detailMaskTextureID_10();
		if ((((int64_t)L_35) == ((int64_t)L_37)))
		{
			goto IL_00d0;
		}
	}
	{
		// if (detailMaskTextureID != other.detailMaskTextureID) return false;
		return (bool)0;
	}

IL_00d0:
	{
		// if (detailAlbedoTextureID != other.detailAlbedoTextureID) return false;
		uint64_t L_38 = __this->get_detailAlbedoTextureID_11();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_39 = V_0;
		uint64_t L_40 = L_39.get_detailAlbedoTextureID_11();
		if ((((int64_t)L_38) == ((int64_t)L_40)))
		{
			goto IL_00e0;
		}
	}
	{
		// if (detailAlbedoTextureID != other.detailAlbedoTextureID) return false;
		return (bool)0;
	}

IL_00e0:
	{
		// if (detailNormalTextureID != other.detailNormalTextureID) return false;
		uint64_t L_41 = __this->get_detailNormalTextureID_12();
		ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  L_42 = V_0;
		uint64_t L_43 = L_42.get_detailNormalTextureID_12();
		if ((((int64_t)L_41) == ((int64_t)L_43)))
		{
			goto IL_00f0;
		}
	}
	{
		// if (detailNormalTextureID != other.detailNormalTextureID) return false;
		return (bool)0;
	}

IL_00f0:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * _thisAdjusted = reinterpret_cast<ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F *>(__this + _offset);
	return ovrAvatarPBSMaterialState_Equals_m3D76A8F778E8903255C4C3522917592C7EFA2B80(_thisAdjusted, ___obj0, method);
}
// System.Int32 ovrAvatarPBSMaterialState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ovrAvatarPBSMaterialState_GetHashCode_mBBB7DBA95EA73EA356709CC6C243F93A28E49EA4 (ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * __this, const RuntimeMethod* method)
{
	{
		// return baseColor.GetHashCode() ^
		//     albedoTextureID.GetHashCode() ^
		//     albedoMultiplier.GetHashCode() ^
		//     metallicnessTextureID.GetHashCode() ^
		//     glossinessScale.GetHashCode() ^
		//     normalTextureID.GetHashCode() ^
		//     heightTextureID.GetHashCode() ^
		//     occlusionTextureID.GetHashCode() ^
		//     emissionTextureID.GetHashCode() ^
		//     emissionMultiplier.GetHashCode() ^
		//     detailMaskTextureID.GetHashCode() ^
		//     detailAlbedoTextureID.GetHashCode() ^
		//     detailNormalTextureID.GetHashCode();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_0 = __this->get_address_of_baseColor_0();
		int32_t L_1 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_albedoTextureID_1();
		int32_t L_3 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_4 = __this->get_address_of_albedoMultiplier_2();
		int32_t L_5 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_4, /*hidden argument*/NULL);
		uint64_t* L_6 = __this->get_address_of_metallicnessTextureID_3();
		int32_t L_7 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_6, /*hidden argument*/NULL);
		float* L_8 = __this->get_address_of_glossinessScale_4();
		int32_t L_9 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_8, /*hidden argument*/NULL);
		uint64_t* L_10 = __this->get_address_of_normalTextureID_5();
		int32_t L_11 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_10, /*hidden argument*/NULL);
		uint64_t* L_12 = __this->get_address_of_heightTextureID_6();
		int32_t L_13 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_12, /*hidden argument*/NULL);
		uint64_t* L_14 = __this->get_address_of_occlusionTextureID_7();
		int32_t L_15 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_14, /*hidden argument*/NULL);
		uint64_t* L_16 = __this->get_address_of_emissionTextureID_8();
		int32_t L_17 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_16, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_18 = __this->get_address_of_emissionMultiplier_9();
		int32_t L_19 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_18, /*hidden argument*/NULL);
		uint64_t* L_20 = __this->get_address_of_detailMaskTextureID_10();
		int32_t L_21 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_20, /*hidden argument*/NULL);
		uint64_t* L_22 = __this->get_address_of_detailAlbedoTextureID_11();
		int32_t L_23 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_22, /*hidden argument*/NULL);
		uint64_t* L_24 = __this->get_address_of_detailNormalTextureID_12();
		int32_t L_25 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_24, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15))^(int32_t)L_17))^(int32_t)L_19))^(int32_t)L_21))^(int32_t)L_23))^(int32_t)L_25));
	}
}
IL2CPP_EXTERN_C  int32_t ovrAvatarPBSMaterialState_GetHashCode_mBBB7DBA95EA73EA356709CC6C243F93A28E49EA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F * _thisAdjusted = reinterpret_cast<ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F *>(__this + _offset);
	return ovrAvatarPBSMaterialState_GetHashCode_mBBB7DBA95EA73EA356709CC6C243F93A28E49EA4(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: ovrAvatarRenderPart_ProjectorRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_pinvoke(const ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D& unmarshaled, ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_pinvoke& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___componentIndex_1 = unmarshaled.get_componentIndex_1();
	marshaled.___renderPartIndex_2 = unmarshaled.get_renderPartIndex_2();
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke(unmarshaled.get_materialState_3(), marshaled.___materialState_3);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_pinvoke_back(const ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_pinvoke& marshaled, ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	uint32_t unmarshaled_componentIndex_temp_1 = 0;
	unmarshaled_componentIndex_temp_1 = marshaled.___componentIndex_1;
	unmarshaled.set_componentIndex_1(unmarshaled_componentIndex_temp_1);
	uint32_t unmarshaled_renderPartIndex_temp_2 = 0;
	unmarshaled_renderPartIndex_temp_2 = marshaled.___renderPartIndex_2;
	unmarshaled.set_renderPartIndex_2(unmarshaled_renderPartIndex_temp_2);
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_back(marshaled.___materialState_3, unmarshaled_materialState_temp_3);
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_ProjectorRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_pinvoke_cleanup(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_pinvoke& marshaled)
{
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_cleanup(marshaled.___materialState_3);
}


// Conversion methods for marshalling of: ovrAvatarRenderPart_ProjectorRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_com(const ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D& unmarshaled, ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_com& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___componentIndex_1 = unmarshaled.get_componentIndex_1();
	marshaled.___renderPartIndex_2 = unmarshaled.get_renderPartIndex_2();
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com(unmarshaled.get_materialState_3(), marshaled.___materialState_3);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_com_back(const ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_com& marshaled, ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	uint32_t unmarshaled_componentIndex_temp_1 = 0;
	unmarshaled_componentIndex_temp_1 = marshaled.___componentIndex_1;
	unmarshaled.set_componentIndex_1(unmarshaled_componentIndex_temp_1);
	uint32_t unmarshaled_renderPartIndex_temp_2 = 0;
	unmarshaled_renderPartIndex_temp_2 = marshaled.___renderPartIndex_2;
	unmarshaled.set_renderPartIndex_2(unmarshaled_renderPartIndex_temp_2);
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_back(marshaled.___materialState_3, unmarshaled_materialState_temp_3);
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_ProjectorRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshal_com_cleanup(ovrAvatarRenderPart_ProjectorRender_t196650F4EBB57DF98455FAC3B253E9CB9C7A370D_marshaled_com& marshaled)
{
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_cleanup(marshaled.___materialState_3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_pinvoke(const ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_pinvoke& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke(unmarshaled.get_materialState_3(), marshaled.___materialState_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(unmarshaled.get_skinnedPose_4(), marshaled.___skinnedPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_pinvoke_back(const ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_pinvoke& marshaled, ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_back(marshaled.___materialState_3, unmarshaled_materialState_temp_3);
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_4;
	memset((&unmarshaled_skinnedPose_temp_4), 0, sizeof(unmarshaled_skinnedPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(marshaled.___skinnedPose_4, unmarshaled_skinnedPose_temp_4);
	unmarshaled.set_skinnedPose_4(unmarshaled_skinnedPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_pinvoke_cleanup(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_pinvoke& marshaled)
{
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_pinvoke_cleanup(marshaled.___materialState_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(marshaled.___skinnedPose_4);
}




// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_com(const ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_com& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com(unmarshaled.get_materialState_3(), marshaled.___materialState_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(unmarshaled.get_skinnedPose_4(), marshaled.___skinnedPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_com_back(const ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_com& marshaled, ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_back(marshaled.___materialState_3, unmarshaled_materialState_temp_3);
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_4;
	memset((&unmarshaled_skinnedPose_temp_4), 0, sizeof(unmarshaled_skinnedPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(marshaled.___skinnedPose_4, unmarshaled_skinnedPose_temp_4);
	unmarshaled.set_skinnedPose_4(unmarshaled_skinnedPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRender
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshal_com_cleanup(ovrAvatarRenderPart_SkinnedMeshRender_t32D6E9AEDB8A4CF8DCEC278197B058145BC01BEF_marshaled_com& marshaled)
{
	ovrAvatarMaterialState_tE1DC1D94BD7E3AE6F3B762BD6A1794F097713849_marshal_com_cleanup(marshaled.___materialState_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(marshaled.___skinnedPose_4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_pinvoke(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_pinvoke& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	marshaled.___albedoTextureAssetID_3 = unmarshaled.get_albedoTextureAssetID_3();
	marshaled.___surfaceTextureAssetID_4 = unmarshaled.get_surfaceTextureAssetID_4();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(unmarshaled.get_skinnedPose_5(), marshaled.___skinnedPose_5);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_pinvoke_back(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_pinvoke& marshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	uint64_t unmarshaled_albedoTextureAssetID_temp_3 = 0;
	unmarshaled_albedoTextureAssetID_temp_3 = marshaled.___albedoTextureAssetID_3;
	unmarshaled.set_albedoTextureAssetID_3(unmarshaled_albedoTextureAssetID_temp_3);
	uint64_t unmarshaled_surfaceTextureAssetID_temp_4 = 0;
	unmarshaled_surfaceTextureAssetID_temp_4 = marshaled.___surfaceTextureAssetID_4;
	unmarshaled.set_surfaceTextureAssetID_4(unmarshaled_surfaceTextureAssetID_temp_4);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_5;
	memset((&unmarshaled_skinnedPose_temp_5), 0, sizeof(unmarshaled_skinnedPose_temp_5));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(marshaled.___skinnedPose_5, unmarshaled_skinnedPose_temp_5);
	unmarshaled.set_skinnedPose_5(unmarshaled_skinnedPose_temp_5);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_pinvoke_cleanup(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_pinvoke& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(marshaled.___skinnedPose_5);
}


// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_com(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_com& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	marshaled.___albedoTextureAssetID_3 = unmarshaled.get_albedoTextureAssetID_3();
	marshaled.___surfaceTextureAssetID_4 = unmarshaled.get_surfaceTextureAssetID_4();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(unmarshaled.get_skinnedPose_5(), marshaled.___skinnedPose_5);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_com_back(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_com& marshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	uint64_t unmarshaled_albedoTextureAssetID_temp_3 = 0;
	unmarshaled_albedoTextureAssetID_temp_3 = marshaled.___albedoTextureAssetID_3;
	unmarshaled.set_albedoTextureAssetID_3(unmarshaled_albedoTextureAssetID_temp_3);
	uint64_t unmarshaled_surfaceTextureAssetID_temp_4 = 0;
	unmarshaled_surfaceTextureAssetID_temp_4 = marshaled.___surfaceTextureAssetID_4;
	unmarshaled.set_surfaceTextureAssetID_4(unmarshaled_surfaceTextureAssetID_temp_4);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_5;
	memset((&unmarshaled_skinnedPose_temp_5), 0, sizeof(unmarshaled_skinnedPose_temp_5));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(marshaled.___skinnedPose_5, unmarshaled_skinnedPose_temp_5);
	unmarshaled.set_skinnedPose_5(unmarshaled_skinnedPose_temp_5);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshal_com_cleanup(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t8062C391890652168143DF50F7EBFA7B93A42EB6_marshaled_com& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(marshaled.___skinnedPose_5);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_pinvoke(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_pinvoke& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	marshaled.___materialState_3 = unmarshaled.get_materialState_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(unmarshaled.get_skinnedPose_4(), marshaled.___skinnedPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_pinvoke_back(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_pinvoke& marshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	unmarshaled_materialState_temp_3 = marshaled.___materialState_3;
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_4;
	memset((&unmarshaled_skinnedPose_temp_4), 0, sizeof(unmarshaled_skinnedPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(marshaled.___skinnedPose_4, unmarshaled_skinnedPose_temp_4);
	unmarshaled.set_skinnedPose_4(unmarshaled_skinnedPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_pinvoke_cleanup(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_pinvoke& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(marshaled.___skinnedPose_4);
}


// Conversion methods for marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_com(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620& unmarshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_com& marshaled)
{
	marshaled.___localTransform_0 = unmarshaled.get_localTransform_0();
	marshaled.___visibilityMask_1 = unmarshaled.get_visibilityMask_1();
	marshaled.___meshAssetID_2 = unmarshaled.get_meshAssetID_2();
	marshaled.___materialState_3 = unmarshaled.get_materialState_3();
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(unmarshaled.get_skinnedPose_4(), marshaled.___skinnedPose_4);
}
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_com_back(const ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_com& marshaled, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620& unmarshaled)
{
	ovrAvatarTransform_tB85763B74CE2A8892C6360AEC312327DD5C620B3  unmarshaled_localTransform_temp_0;
	memset((&unmarshaled_localTransform_temp_0), 0, sizeof(unmarshaled_localTransform_temp_0));
	unmarshaled_localTransform_temp_0 = marshaled.___localTransform_0;
	unmarshaled.set_localTransform_0(unmarshaled_localTransform_temp_0);
	int32_t unmarshaled_visibilityMask_temp_1 = 0;
	unmarshaled_visibilityMask_temp_1 = marshaled.___visibilityMask_1;
	unmarshaled.set_visibilityMask_1(unmarshaled_visibilityMask_temp_1);
	uint64_t unmarshaled_meshAssetID_temp_2 = 0;
	unmarshaled_meshAssetID_temp_2 = marshaled.___meshAssetID_2;
	unmarshaled.set_meshAssetID_2(unmarshaled_meshAssetID_temp_2);
	ovrAvatarPBSMaterialState_tA12EB05BBA7BCB782BF45B15379B49F03DFBDD6F  unmarshaled_materialState_temp_3;
	memset((&unmarshaled_materialState_temp_3), 0, sizeof(unmarshaled_materialState_temp_3));
	unmarshaled_materialState_temp_3 = marshaled.___materialState_3;
	unmarshaled.set_materialState_3(unmarshaled_materialState_temp_3);
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4  unmarshaled_skinnedPose_temp_4;
	memset((&unmarshaled_skinnedPose_temp_4), 0, sizeof(unmarshaled_skinnedPose_temp_4));
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(marshaled.___skinnedPose_4, unmarshaled_skinnedPose_temp_4);
	unmarshaled.set_skinnedPose_4(unmarshaled_skinnedPose_temp_4);
}
// Conversion method for clean up from marshalling of: ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
IL2CPP_EXTERN_C void ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshal_com_cleanup(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_t85DF152E926FDC74FF78028045CBF0B9B4C31620_marshaled_com& marshaled)
{
	ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(marshaled.___skinnedPose_4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ovrAvatarSkinnedMeshPose
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled)
{
	marshaled.___jointCount_0 = unmarshaled.get_jointCount_0();
	if (unmarshaled.get_jointTransform_1() != NULL)
	{
		if (64 > (unmarshaled.get_jointTransform_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointTransform_1)[i] = (unmarshaled.get_jointTransform_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_jointParents_2() != NULL)
	{
		if (64 > (unmarshaled.get_jointParents_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointParents_2)[i] = (unmarshaled.get_jointParents_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_jointNames_3() != NULL)
	{
		if (64 > (unmarshaled.get_jointNames_3())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointNames_3)[i] = (unmarshaled.get_jointNames_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_back(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_jointCount_temp_0 = 0;
	unmarshaled_jointCount_temp_0 = marshaled.___jointCount_0;
	unmarshaled.set_jointCount_0(unmarshaled_jointCount_temp_0);
	unmarshaled.set_jointTransform_1(reinterpret_cast<ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D*>((ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D*)SZArrayNew(ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointTransform_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointTransform_1)[i]);
	}
	unmarshaled.set_jointParents_2(reinterpret_cast<Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*>((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointParents_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointParents_2)[i]);
	}
	unmarshaled.set_jointNames_3(reinterpret_cast<IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*>((IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointNames_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointNames_3)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarSkinnedMeshPose
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_pinvoke_cleanup(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarSkinnedMeshPose
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled)
{
	marshaled.___jointCount_0 = unmarshaled.get_jointCount_0();
	if (unmarshaled.get_jointTransform_1() != NULL)
	{
		if (64 > (unmarshaled.get_jointTransform_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointTransform_1)[i] = (unmarshaled.get_jointTransform_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_jointParents_2() != NULL)
	{
		if (64 > (unmarshaled.get_jointParents_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointParents_2)[i] = (unmarshaled.get_jointParents_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_jointNames_3() != NULL)
	{
		if (64 > (unmarshaled.get_jointNames_3())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
		{
			(marshaled.___jointNames_3)[i] = (unmarshaled.get_jointNames_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_back(const ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled, ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_jointCount_temp_0 = 0;
	unmarshaled_jointCount_temp_0 = marshaled.___jointCount_0;
	unmarshaled.set_jointCount_0(unmarshaled_jointCount_temp_0);
	unmarshaled.set_jointTransform_1(reinterpret_cast<ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D*>((ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D*)SZArrayNew(ovrAvatarTransformU5BU5D_t709BFB02E85AE13EDBDD3DC14031A54FAA99558D_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointTransform_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointTransform_1)[i]);
	}
	unmarshaled.set_jointParents_2(reinterpret_cast<Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*>((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointParents_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointParents_2)[i]);
	}
	unmarshaled.set_jointNames_3(reinterpret_cast<IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*>((IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, 64)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(64); i++)
	{
		(unmarshaled.get_jointNames_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointNames_3)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarSkinnedMeshPose
IL2CPP_EXTERN_C void ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshal_com_cleanup(ovrAvatarSkinnedMeshPose_t6278533E68F334B5A619BFCA32D18C5B85AB35C4_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ovrAvatarVisemes
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_pinvoke(const ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF& unmarshaled, ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_pinvoke& marshaled)
{
	marshaled.___visemeParamCount_0 = unmarshaled.get_visemeParamCount_0();
	if (unmarshaled.get_visemeParams_1() != NULL)
	{
		if (32 > (unmarshaled.get_visemeParams_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			(marshaled.___visemeParams_1)[i] = (unmarshaled.get_visemeParams_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_pinvoke_back(const ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_pinvoke& marshaled, ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_visemeParamCount_temp_0 = 0;
	unmarshaled_visemeParamCount_temp_0 = marshaled.___visemeParamCount_0;
	unmarshaled.set_visemeParamCount_0(unmarshaled_visemeParamCount_temp_0);
	unmarshaled.set_visemeParams_1(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		(unmarshaled.get_visemeParams_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___visemeParams_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarVisemes
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_pinvoke_cleanup(ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ovrAvatarVisemes
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_com(const ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF& unmarshaled, ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_com& marshaled)
{
	marshaled.___visemeParamCount_0 = unmarshaled.get_visemeParamCount_0();
	if (unmarshaled.get_visemeParams_1() != NULL)
	{
		if (32 > (unmarshaled.get_visemeParams_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			(marshaled.___visemeParams_1)[i] = (unmarshaled.get_visemeParams_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_com_back(const ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_com& marshaled, ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_visemeParamCount_temp_0 = 0;
	unmarshaled_visemeParamCount_temp_0 = marshaled.___visemeParamCount_0;
	unmarshaled.set_visemeParamCount_0(unmarshaled_visemeParamCount_temp_0);
	unmarshaled.set_visemeParams_1(reinterpret_cast<SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*>((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		(unmarshaled.get_visemeParams_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___visemeParams_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: ovrAvatarVisemes
IL2CPP_EXTERN_C void ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshal_com_cleanup(ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ovrAvatarVisemes_Offsets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrAvatarVisemes_Offsets__cctor_m59530B2B1128568A33E28EAB8032C11EB87FDBFA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ovrAvatarVisemes_Offsets__cctor_m59530B2B1128568A33E28EAB8032C11EB87FDBFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Int32 visemeParamCount = Marshal.OffsetOf(typeof(ovrAvatarVisemes), "visemeParamCount").ToInt32();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ovrAvatarVisemes_t4943E7E22A8400F0F4CC064E975A67B539B85CAF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_OffsetOf_m715A36E98C2D742902A9E57FE93231966ED98357(L_1, _stringLiteral0DDE60391A06CE9DA77F770C3B21E274A8C3D4A6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int32_t L_3 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_0), /*hidden argument*/NULL);
		((ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_il2cpp_TypeInfo_var))->set_visemeParamCount_0(L_3);
		// public static long visemeParams = Marshal.SizeOf(typeof(UInt32));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Marshal_SizeOf_m4F7DA827FA7A720395E6FDD2ABE78D4B00D43130(L_5, /*hidden argument*/NULL);
		((ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarVisemes_Offsets_tDCD527DC56D1B02173954969FF35736E352B95E8_il2cpp_TypeInfo_var))->set_visemeParams_1((((int64_t)((int64_t)L_6))));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C (specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C * __this, intptr_t ___specification0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___specification0);

}
// System.Void specificationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void specificationCallback__ctor_m3709AA14F99811D92A26CB7416BDA5A2DC8D9FE9 (specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void specificationCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void specificationCallback_Invoke_m0A88FDC39EAABE696C224B5D487544ACFAE6582E (specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C * __this, intptr_t ___specification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___specification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___specification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___specification0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___specification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___specification0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___specification0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___specification0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___specification0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult specificationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* specificationCallback_BeginInvoke_mCC5A7E70EC78E7FFE7E4D60A6ADC558642581628 (specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C * __this, intptr_t ___specification0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (specificationCallback_BeginInvoke_mCC5A7E70EC78E7FFE7E4D60A6ADC558642581628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___specification0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void specificationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void specificationCallback_EndInvoke_mD0779FDD325BCB4EB55E7DCB7C4C4F737BB0699A (specificationCallback_tD756AB708E609D9BA970FA69A2799DB0B533063C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * TeleportSupport_get_LocomotionTeleport_m485410CBBE59035293AEF57C1D5375887D5A3D57_inline (TeleportSupport_tC67684C2A5A521AF9BAAF685D50ED639C1EBC3AC * __this, const RuntimeMethod* method)
{
	{
		// protected LocomotionTeleport LocomotionTeleport { get; private set; }
		LocomotionTeleport_t5AF2C1291E97C30918B0A039BC11511A366B9F60 * L_0 = __this->get_U3CLocomotionTeleportU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t NetworkingPeer_get_ID_m702F869A5B6F223EB7364B065C0FD8321889A7DB_inline (NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * __this, const RuntimeMethod* method)
{
	{
		// public UInt64 ID { get; private set; }
		uint64_t L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetworkingPeer_get_State_m769B1B11849D9944DC5F7E9AAEAAB09BC0901678_inline (NetworkingPeer_tA7BB35BD7BC53BDCEEA4BB897414938F3BE362B5 * __this, const RuntimeMethod* method)
{
	{
		// public PeerConnectionState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_m4FA1621E73F75188B2DDDAD97D51D0FF9F7953CF_gshared_inline (Message_1_t7CA4D6382E61BD402083B1A5D7E5320C2CA38381 * __this, const RuntimeMethod* method)
{
	{
		// public T Data { get { return data; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_data_4();
		return (RuntimeObject *)L_0;
	}
}
