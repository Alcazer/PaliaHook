#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MinigameQTE_Base

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.BindMinigameInputEvents
// 0x0044 (0x0044 - 0x0000)
struct WBP_MinigameQTE_Base_C_BindMinigameInputEvents final 
{
public:
	TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents) == 0x000004, "Wrong alignment on WBP_MinigameQTE_Base_C_BindMinigameInputEvents");
static_assert(sizeof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents) == 0x000044, "Wrong size on WBP_MinigameQTE_Base_C_BindMinigameInputEvents");
static_assert(offsetof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_BindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_MinigameQTE_Base_C_BindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_MinigameQTE_Base_C_BindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'WBP_MinigameQTE_Base_C_BindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_BindMinigameInputEvents, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_MinigameQTE_Base_C_BindMinigameInputEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.ExecuteUbergraph_WBP_MinigameQTE_Base
// 0x0004 (0x0004 - 0x0000)
struct WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base) == 0x000004, "Wrong alignment on WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base");
static_assert(sizeof(WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base) == 0x000004, "Wrong size on WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base");
static_assert(offsetof(WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base, EntryPoint) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_ExecuteUbergraph_WBP_MinigameQTE_Base::EntryPoint' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.ExpectedInputMissed
// 0x0008 (0x0008 - 0x0000)
struct WBP_MinigameQTE_Base_C_ExpectedInputMissed final 
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_ExpectedInputMissed) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_ExpectedInputMissed");
static_assert(sizeof(WBP_MinigameQTE_Base_C_ExpectedInputMissed) == 0x000008, "Wrong size on WBP_MinigameQTE_Base_C_ExpectedInputMissed");
static_assert(offsetof(WBP_MinigameQTE_Base_C_ExpectedInputMissed, Comp) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_ExpectedInputMissed::Comp' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.FTUE_OnClosing
// 0x0008 (0x0008 - 0x0000)
struct WBP_MinigameQTE_Base_C_FTUE_OnClosing final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_FTUE_OnClosing) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_FTUE_OnClosing");
static_assert(sizeof(WBP_MinigameQTE_Base_C_FTUE_OnClosing) == 0x000008, "Wrong size on WBP_MinigameQTE_Base_C_FTUE_OnClosing");
static_assert(offsetof(WBP_MinigameQTE_Base_C_FTUE_OnClosing, Widget) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_FTUE_OnClosing::Widget' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.HandleOpenTutorialModal
// 0x0078 (0x0078 - 0x0000)
struct WBP_MinigameQTE_Base_C_HandleOpenTutorialModal final 
{
public:
	class UUserWidget*                            ModalWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    TutorialWidgets;                                   // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TDelegate<void(class UWidget* Widget)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_ModalWidgetBase*                  K2Node_DynamicCast_AsS6UI_Modal_Widget_Base;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4494[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_ModalInterface_Tutorial_C> K2Node_DynamicCast_AsBP_Modal_Interface_Tutorial;  // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4495[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_TutorialFlagDefinition*            K2Node_DynamicCast_AsVAL_Tutorial_Flag_Definition; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_HandleOpenTutorialModal");
static_assert(sizeof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal) == 0x000078, "Wrong size on WBP_MinigameQTE_Base_C_HandleOpenTutorialModal");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, ModalWidget) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::ModalWidget' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, TutorialWidgets) == 0x000008, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::TutorialWidgets' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_AsS6UI_Modal_Widget_Base) == 0x000030, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_AsS6UI_Modal_Widget_Base' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000040, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_AsBP_Modal_Interface_Tutorial) == 0x000048, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_AsBP_Modal_Interface_Tutorial' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000060, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_AsVAL_Tutorial_Flag_Definition) == 0x000068, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_AsVAL_Tutorial_Flag_Definition' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_HandleOpenTutorialModal, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'WBP_MinigameQTE_Base_C_HandleOpenTutorialModal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.IsFTUEOpen
// 0x0001 (0x0001 - 0x0000)
struct WBP_MinigameQTE_Base_C_IsFTUEOpen final 
{
public:
	bool                                          IsOpen;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_IsFTUEOpen) == 0x000001, "Wrong alignment on WBP_MinigameQTE_Base_C_IsFTUEOpen");
static_assert(sizeof(WBP_MinigameQTE_Base_C_IsFTUEOpen) == 0x000001, "Wrong size on WBP_MinigameQTE_Base_C_IsFTUEOpen");
static_assert(offsetof(WBP_MinigameQTE_Base_C_IsFTUEOpen, IsOpen) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_IsFTUEOpen::IsOpen' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.LinkMinigame
// 0x0028 (0x0028 - 0x0000)
struct WBP_MinigameQTE_Base_C_LinkMinigame final 
{
public:
	class UMinigameComponentMasterQTE*            NewMinigame;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DefaultAfterImageTexture;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      Crafter;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryOpenFTUE_Open;                         // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaused_ReturnValue;                     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_LinkMinigame) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_LinkMinigame");
static_assert(sizeof(WBP_MinigameQTE_Base_C_LinkMinigame) == 0x000028, "Wrong size on WBP_MinigameQTE_Base_C_LinkMinigame");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, NewMinigame) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::NewMinigame' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, DefaultAfterImageTexture) == 0x000008, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::DefaultAfterImageTexture' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, Crafter) == 0x000010, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::Crafter' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_IsPlaying_ReturnValue) == 0x00001A, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_TryOpenFTUE_Open) == 0x00001B, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_TryOpenFTUE_Open' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_IsPaused_ReturnValue) == 0x00001C, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_IsPaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_IsServer_ReturnValue) == 0x00001F, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_Not_PreBool_ReturnValue_1) == 0x000020, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_LinkMinigame, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000021, "Member 'WBP_MinigameQTE_Base_C_LinkMinigame::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.MinigameOnStateChanged
// 0x0010 (0x0010 - 0x0000)
struct WBP_MinigameQTE_Base_C_MinigameOnStateChanged final 
{
public:
	class UMinigameComponentBase*                 Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                PrevState;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                NewState;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_MinigameOnStateChanged");
static_assert(sizeof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged) == 0x000010, "Wrong size on WBP_MinigameQTE_Base_C_MinigameOnStateChanged");
static_assert(offsetof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged, Comp) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_MinigameOnStateChanged::Comp' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged, PrevState) == 0x000008, "Member 'WBP_MinigameQTE_Base_C_MinigameOnStateChanged::PrevState' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged, NewState) == 0x000009, "Member 'WBP_MinigameQTE_Base_C_MinigameOnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_MinigameOnStateChanged, K2Node_SwitchEnum_CmpSuccess) == 0x00000A, "Member 'WBP_MinigameQTE_Base_C_MinigameOnStateChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.MistimedInputReceived
// 0x0008 (0x0008 - 0x0000)
struct WBP_MinigameQTE_Base_C_MistimedInputReceived final 
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_MistimedInputReceived) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_MistimedInputReceived");
static_assert(sizeof(WBP_MinigameQTE_Base_C_MistimedInputReceived) == 0x000008, "Wrong size on WBP_MinigameQTE_Base_C_MistimedInputReceived");
static_assert(offsetof(WBP_MinigameQTE_Base_C_MistimedInputReceived, Comp) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_MistimedInputReceived::Comp' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.SuccessfulInputReceived
// 0x0008 (0x0008 - 0x0000)
struct WBP_MinigameQTE_Base_C_SuccessfulInputReceived final 
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_SuccessfulInputReceived) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_SuccessfulInputReceived");
static_assert(sizeof(WBP_MinigameQTE_Base_C_SuccessfulInputReceived) == 0x000008, "Wrong size on WBP_MinigameQTE_Base_C_SuccessfulInputReceived");
static_assert(offsetof(WBP_MinigameQTE_Base_C_SuccessfulInputReceived, Comp) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_SuccessfulInputReceived::Comp' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.TryOpenFTUE
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_MinigameQTE_Base_C_TryOpenFTUE final 
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4496[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      OwningPlayer;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_RedirectModalType_ReturnValue;            // 0x0030(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class UClass>>           K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4497[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_TutorialFlagsManager*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_TutorialFlagsManager*              CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanStartTutorialForFlag_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_TryOpenFTUE) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_TryOpenFTUE");
static_assert(sizeof(WBP_MinigameQTE_Base_C_TryOpenFTUE) == 0x0000A0, "Wrong size on WBP_MinigameQTE_Base_C_TryOpenFTUE");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, Open) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::Open' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, OwningPlayer) == 0x000008, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::OwningPlayer' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000028, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_RedirectModalType_ReturnValue) == 0x000030, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_RedirectModalType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000070, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000080, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000088, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000090, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_TryOpenFTUE, CallFunc_CanStartTutorialForFlag_ReturnValue) == 0x000098, "Member 'WBP_MinigameQTE_Base_C_TryOpenFTUE::CallFunc_CanStartTutorialForFlag_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.UnbindMinigameInputEvents
// 0x0044 (0x0044 - 0x0000)
struct WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents final 
{
public:
	TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents) == 0x000004, "Wrong alignment on WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents");
static_assert(sizeof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents) == 0x000044, "Wrong size on WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_MinigameQTE_Base_C_UnbindMinigameInputEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTE_Base.WBP_MinigameQTE_Base_C.UpdatePadding
// 0x0030 (0x0030 - 0x0000)
struct WBP_MinigameQTE_Base_C_UpdatePadding final 
{
public:
	class FString                                 CVarCookingCamera;                                 // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UValeriaGameUserSettings*               CallFunc_GetValeriaGameUserSettings_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetShowCookingCamera_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDesktop_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4498[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UValeriaGameUserSettings*               CallFunc_GetValeriaGameUserSettings_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetShowCookingCamera_ReturnValue_1;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTE_Base_C_UpdatePadding) == 0x000008, "Wrong alignment on WBP_MinigameQTE_Base_C_UpdatePadding");
static_assert(sizeof(WBP_MinigameQTE_Base_C_UpdatePadding) == 0x000030, "Wrong size on WBP_MinigameQTE_Base_C_UpdatePadding");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CVarCookingCamera) == 0x000000, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CVarCookingCamera' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_GetValeriaGameUserSettings_ReturnValue) == 0x000010, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_GetValeriaGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_GetShowCookingCamera_ReturnValue) == 0x000018, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_GetShowCookingCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000019, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_IsDesktop_ReturnValue) == 0x00001A, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_IsDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_GetValeriaGameUserSettings_ReturnValue_1) == 0x000020, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_GetValeriaGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTE_Base_C_UpdatePadding, CallFunc_GetShowCookingCamera_ReturnValue_1) == 0x000028, "Member 'WBP_MinigameQTE_Base_C_UpdatePadding::CallFunc_GetShowCookingCamera_ReturnValue_1' has a wrong offset!");

}

