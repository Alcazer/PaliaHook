#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stables_Sign

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "S6EnhancedInputExtended_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function BP_Stables_Sign.BP_Stables_Sign_C.CheckExperiencePackage
// 0x0038 (0x0038 - 0x0000)
struct BP_Stables_Sign_C_CheckExperiencePackage final 
{
public:
	class UObject*                                ExperiencePackage;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UExperiencePackageConfig*               ExpPkg_FTUE;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_CheckExperiencePackage) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_CheckExperiencePackage");
static_assert(sizeof(BP_Stables_Sign_C_CheckExperiencePackage) == 0x000038, "Wrong size on BP_Stables_Sign_C_CheckExperiencePackage");
static_assert(offsetof(BP_Stables_Sign_C_CheckExperiencePackage, ExperiencePackage) == 0x000000, "Member 'BP_Stables_Sign_C_CheckExperiencePackage::ExperiencePackage' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_CheckExperiencePackage, ExpPkg_FTUE) == 0x000008, "Member 'BP_Stables_Sign_C_CheckExperiencePackage::ExpPkg_FTUE' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_CheckExperiencePackage, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_Stables_Sign_C_CheckExperiencePackage::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_CheckExperiencePackage, CallFunc_GetDisplayName_ReturnValue_1) == 0x000020, "Member 'BP_Stables_Sign_C_CheckExperiencePackage::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_CheckExperiencePackage, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000030, "Member 'BP_Stables_Sign_C_CheckExperiencePackage::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.CurrentExperiencePackage
// 0x0008 (0x0008 - 0x0000)
struct BP_Stables_Sign_C_CurrentExperiencePackage final 
{
public:
	class UExperiencePackageConfig*               ExpPkg;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_CurrentExperiencePackage) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_CurrentExperiencePackage");
static_assert(sizeof(BP_Stables_Sign_C_CurrentExperiencePackage) == 0x000008, "Wrong size on BP_Stables_Sign_C_CurrentExperiencePackage");
static_assert(offsetof(BP_Stables_Sign_C_CurrentExperiencePackage, ExpPkg) == 0x000000, "Member 'BP_Stables_Sign_C_CurrentExperiencePackage::ExpPkg' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.ExecuteUbergraph_BP_Stables_Sign
// 0x0060 (0x0060 - 0x0000)
struct BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UExperiencePackageConfig* ExpPkg)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4930[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UExperiencePackageConfig*               CallFunc_GetExperiencePackage_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_Event_player;                               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FServerUseEventParams                  K2Node_Event_params;                               // 0x0040(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4931[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExperiencePackageConfig*               K2Node_CustomEvent_ExpPkg;                         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign");
static_assert(sizeof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign) == 0x000060, "Wrong size on BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, EntryPoint) == 0x000000, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000010, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, CallFunc_GetExperiencePackage_ReturnValue) == 0x000030, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::CallFunc_GetExperiencePackage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_Event_player) == 0x000038, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_Event_params) == 0x000040, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_Event_params' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign, K2Node_CustomEvent_ExpPkg) == 0x000058, "Member 'BP_Stables_Sign_C_ExecuteUbergraph_BP_Stables_Sign::K2Node_CustomEvent_ExpPkg' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.FindCostForDestination
// 0x0038 (0x0038 - 0x0000)
struct BP_Stables_Sign_C_FindCostForDestination final 
{
public:
	class UTeleportTravelConfigAsset*             DestinationConfig;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         GoldCost;                                          // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4932[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTeleportDestinationConfig             CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_FindCostForDestination) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_FindCostForDestination");
static_assert(sizeof(BP_Stables_Sign_C_FindCostForDestination) == 0x000038, "Wrong size on BP_Stables_Sign_C_FindCostForDestination");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, DestinationConfig) == 0x000000, "Member 'BP_Stables_Sign_C_FindCostForDestination::DestinationConfig' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, GoldCost) == 0x000008, "Member 'BP_Stables_Sign_C_FindCostForDestination::GoldCost' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_Stables_Sign_C_FindCostForDestination::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_Stables_Sign_C_FindCostForDestination::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_Stables_Sign_C_FindCostForDestination::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_Stables_Sign_C_FindCostForDestination::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_Stables_Sign_C_FindCostForDestination::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_Stables_Sign_C_FindCostForDestination::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_FindCostForDestination, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000031, "Member 'BP_Stables_Sign_C_FindCostForDestination::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.OnClientInteract
// 0x0080 (0x0080 - 0x0000)
struct BP_Stables_Sign_C_OnClientInteract final 
{
public:
	class UInteractableComponent*                 Param_Interactable;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   Params_0;                                          // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUseEventResult                        ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4933[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUseEventResult                        CallFunc_UseEventResult_HandledAndSentToServer_ReturnValue; // 0x0040(0x0010)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4934[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_Subsystem_GameplayUIBridge*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUseEventResult                        CallFunc_UseEventResult_Unhandled_ReturnValue;     // 0x0060(0x0010)(NoDestructor)
	TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_OnClientInteract) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_OnClientInteract");
static_assert(sizeof(BP_Stables_Sign_C_OnClientInteract) == 0x000080, "Wrong size on BP_Stables_Sign_C_OnClientInteract");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, Param_Interactable) == 0x000000, "Member 'BP_Stables_Sign_C_OnClientInteract::Param_Interactable' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, Player) == 0x000008, "Member 'BP_Stables_Sign_C_OnClientInteract::Player' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, Params_0) == 0x000010, "Member 'BP_Stables_Sign_C_OnClientInteract::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, ReturnValue) == 0x000028, "Member 'BP_Stables_Sign_C_OnClientInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003A, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_UseEventResult_HandledAndSentToServer_ReturnValue) == 0x000040, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_UseEventResult_HandledAndSentToServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_BooleanAND_ReturnValue_1) == 0x000051, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000058, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_UseEventResult_Unhandled_ReturnValue) == 0x000060, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_UseEventResult_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientInteract, CallFunc_GetUIInterface_ReturnValue) == 0x000070, "Member 'BP_Stables_Sign_C_OnClientInteract::CallFunc_GetUIInterface_ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.OnClientUsedEquippedOnMe
// 0x0040 (0x0040 - 0x0000)
struct BP_Stables_Sign_C_OnClientUsedEquippedOnMe final 
{
public:
	class AValeriaPlayerController*               Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUseEventParams                        Params_0;                                          // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUseEventResult                        ReturnValue;                                       // 0x0030(0x0010)(Parm, OutParm, ReturnParm, NoDestructor)
};
static_assert(alignof(BP_Stables_Sign_C_OnClientUsedEquippedOnMe) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_OnClientUsedEquippedOnMe");
static_assert(sizeof(BP_Stables_Sign_C_OnClientUsedEquippedOnMe) == 0x000040, "Wrong size on BP_Stables_Sign_C_OnClientUsedEquippedOnMe");
static_assert(offsetof(BP_Stables_Sign_C_OnClientUsedEquippedOnMe, Player) == 0x000000, "Member 'BP_Stables_Sign_C_OnClientUsedEquippedOnMe::Player' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientUsedEquippedOnMe, Params_0) == 0x000008, "Member 'BP_Stables_Sign_C_OnClientUsedEquippedOnMe::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnClientUsedEquippedOnMe, ReturnValue) == 0x000030, "Member 'BP_Stables_Sign_C_OnClientUsedEquippedOnMe::ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.OnServerInteract
// 0x0030 (0x0030 - 0x0000)
struct BP_Stables_Sign_C_OnServerInteract final 
{
public:
	class UInteractableComponent*                 Param_Interactable;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   EventParams;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FServerUseEventResult                  ReturnValue;                                       // 0x0028(0x0002)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FServerUseEventResult                  CallFunc_ServerUseEventResult_Unhandled_ReturnValue; // 0x002A(0x0002)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_OnServerInteract) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_OnServerInteract");
static_assert(sizeof(BP_Stables_Sign_C_OnServerInteract) == 0x000030, "Wrong size on BP_Stables_Sign_C_OnServerInteract");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, Param_Interactable) == 0x000000, "Member 'BP_Stables_Sign_C_OnServerInteract::Param_Interactable' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, Character) == 0x000008, "Member 'BP_Stables_Sign_C_OnServerInteract::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, EventParams) == 0x000010, "Member 'BP_Stables_Sign_C_OnServerInteract::EventParams' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, ReturnValue) == 0x000028, "Member 'BP_Stables_Sign_C_OnServerInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, CallFunc_ServerUseEventResult_Unhandled_ReturnValue) == 0x00002A, "Member 'BP_Stables_Sign_C_OnServerInteract::CallFunc_ServerUseEventResult_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'BP_Stables_Sign_C_OnServerInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.OnServerUsedEquippedOnMe
// 0x0018 (0x0018 - 0x0000)
struct BP_Stables_Sign_C_OnServerUsedEquippedOnMe final 
{
public:
	class AValeriaPlayerController*               Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FServerUseEventParams                  Params_0;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_Stables_Sign_C_OnServerUsedEquippedOnMe) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_OnServerUsedEquippedOnMe");
static_assert(sizeof(BP_Stables_Sign_C_OnServerUsedEquippedOnMe) == 0x000018, "Wrong size on BP_Stables_Sign_C_OnServerUsedEquippedOnMe");
static_assert(offsetof(BP_Stables_Sign_C_OnServerUsedEquippedOnMe, Player) == 0x000000, "Member 'BP_Stables_Sign_C_OnServerUsedEquippedOnMe::Player' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_OnServerUsedEquippedOnMe, Params_0) == 0x000008, "Member 'BP_Stables_Sign_C_OnServerUsedEquippedOnMe::Params_0' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.GetEventIndexForInputAction
// 0x0038 (0x0038 - 0x0000)
struct BP_Stables_Sign_C_GetEventIndexForInputAction final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UInputAction>            InputAction;                                       // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	EInteractEventIndex                           OutEventIndex;                                     // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0031(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_GetEventIndexForInputAction) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_GetEventIndexForInputAction");
static_assert(sizeof(BP_Stables_Sign_C_GetEventIndexForInputAction) == 0x000038, "Wrong size on BP_Stables_Sign_C_GetEventIndexForInputAction");
static_assert(offsetof(BP_Stables_Sign_C_GetEventIndexForInputAction, Character) == 0x000000, "Member 'BP_Stables_Sign_C_GetEventIndexForInputAction::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetEventIndexForInputAction, InputAction) == 0x000008, "Member 'BP_Stables_Sign_C_GetEventIndexForInputAction::InputAction' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetEventIndexForInputAction, OutEventIndex) == 0x000030, "Member 'BP_Stables_Sign_C_GetEventIndexForInputAction::OutEventIndex' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetEventIndexForInputAction, ReturnValue) == 0x000031, "Member 'BP_Stables_Sign_C_GetEventIndexForInputAction::ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.GetInputActionForEventIndex
// 0x0038 (0x0038 - 0x0000)
struct BP_Stables_Sign_C_GetInputActionForEventIndex final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           EventIndex;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4935[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UInputAction>            ReturnValue;                                       // 0x0010(0x0028)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_GetInputActionForEventIndex) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_GetInputActionForEventIndex");
static_assert(sizeof(BP_Stables_Sign_C_GetInputActionForEventIndex) == 0x000038, "Wrong size on BP_Stables_Sign_C_GetInputActionForEventIndex");
static_assert(offsetof(BP_Stables_Sign_C_GetInputActionForEventIndex, Character) == 0x000000, "Member 'BP_Stables_Sign_C_GetInputActionForEventIndex::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetInputActionForEventIndex, EventIndex) == 0x000008, "Member 'BP_Stables_Sign_C_GetInputActionForEventIndex::EventIndex' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetInputActionForEventIndex, ReturnValue) == 0x000010, "Member 'BP_Stables_Sign_C_GetInputActionForEventIndex::ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.GetText
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Stables_Sign_C_GetText final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           EventIndex;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4936[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGetTextParams                         Params_0;                                          // 0x0010(0x0050)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4937[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGetTextParams                         K2Node_MakeStruct_GetTextParams;                   // 0x0068(0x0050)()
};
static_assert(alignof(BP_Stables_Sign_C_GetText) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_GetText");
static_assert(sizeof(BP_Stables_Sign_C_GetText) == 0x0000B8, "Wrong size on BP_Stables_Sign_C_GetText");
static_assert(offsetof(BP_Stables_Sign_C_GetText, Character) == 0x000000, "Member 'BP_Stables_Sign_C_GetText::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetText, EventIndex) == 0x000008, "Member 'BP_Stables_Sign_C_GetText::EventIndex' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetText, Params_0) == 0x000010, "Member 'BP_Stables_Sign_C_GetText::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetText, ReturnValue) == 0x000060, "Member 'BP_Stables_Sign_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'BP_Stables_Sign_C_GetText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetText, K2Node_MakeStruct_GetTextParams) == 0x000068, "Member 'BP_Stables_Sign_C_GetText::K2Node_MakeStruct_GetTextParams' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.GetUseableIMC
// 0x0050 (0x0050 - 0x0000)
struct BP_Stables_Sign_C_GetUseableIMC final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           InteractIndex;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4938[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputMappingPriorityData              OutMappingData;                                    // 0x0010(0x0038)(Parm, OutParm)
	struct FModifyContextOptions                  OutOptions;                                        // 0x0048(0x0001)(Parm, OutParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0049(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_GetUseableIMC) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_GetUseableIMC");
static_assert(sizeof(BP_Stables_Sign_C_GetUseableIMC) == 0x000050, "Wrong size on BP_Stables_Sign_C_GetUseableIMC");
static_assert(offsetof(BP_Stables_Sign_C_GetUseableIMC, Character) == 0x000000, "Member 'BP_Stables_Sign_C_GetUseableIMC::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetUseableIMC, InteractIndex) == 0x000008, "Member 'BP_Stables_Sign_C_GetUseableIMC::InteractIndex' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetUseableIMC, OutMappingData) == 0x000010, "Member 'BP_Stables_Sign_C_GetUseableIMC::OutMappingData' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetUseableIMC, OutOptions) == 0x000048, "Member 'BP_Stables_Sign_C_GetUseableIMC::OutOptions' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_GetUseableIMC, ReturnValue) == 0x000049, "Member 'BP_Stables_Sign_C_GetUseableIMC::ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.InteractPriority
// 0x0010 (0x0010 - 0x0000)
struct BP_Stables_Sign_C_InteractPriority final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_InteractPriority) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_InteractPriority");
static_assert(sizeof(BP_Stables_Sign_C_InteractPriority) == 0x000010, "Wrong size on BP_Stables_Sign_C_InteractPriority");
static_assert(offsetof(BP_Stables_Sign_C_InteractPriority, Character) == 0x000000, "Member 'BP_Stables_Sign_C_InteractPriority::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_InteractPriority, ReturnValue) == 0x000008, "Member 'BP_Stables_Sign_C_InteractPriority::ReturnValue' has a wrong offset!");

// Function BP_Stables_Sign.BP_Stables_Sign_C.IsInteractable
// 0x0028 (0x0028 - 0x0000)
struct BP_Stables_Sign_C_IsInteractable final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   EventParams;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Stables_Sign_C_IsInteractable) == 0x000008, "Wrong alignment on BP_Stables_Sign_C_IsInteractable");
static_assert(sizeof(BP_Stables_Sign_C_IsInteractable) == 0x000028, "Wrong size on BP_Stables_Sign_C_IsInteractable");
static_assert(offsetof(BP_Stables_Sign_C_IsInteractable, Character) == 0x000000, "Member 'BP_Stables_Sign_C_IsInteractable::Character' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_IsInteractable, EventParams) == 0x000008, "Member 'BP_Stables_Sign_C_IsInteractable::EventParams' has a wrong offset!");
static_assert(offsetof(BP_Stables_Sign_C_IsInteractable, ReturnValue) == 0x000020, "Member 'BP_Stables_Sign_C_IsInteractable::ReturnValue' has a wrong offset!");

}

