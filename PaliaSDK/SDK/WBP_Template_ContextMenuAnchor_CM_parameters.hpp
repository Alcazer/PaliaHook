#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_ContextMenuAnchor_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_Tick) == 0x000004, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_Tick");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_Tick) == 0x00003C, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_Tick");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_Template_ContextMenuAnchor_CM_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_PreConstruct");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_PreConstruct");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.Open
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_Open final 
{
public:
	bool                                          bFocusMenu;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_Open) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_Open");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_Open) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_Open");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_Open, bFocusMenu) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_Open::bFocusMenu' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.OnMenuOpened__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature final 
{
public:
	class UUserWidget*                            MenuContent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature) == 0x000008, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature, MenuContent) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnMenuOpened__DelegateSignature::MenuContent' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.OnMenuContentCreated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature final 
{
public:
	class UUserWidget*                            MenuContent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature) == 0x000008, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature, MenuContent) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnMenuContentCreated__DelegateSignature::MenuContent' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.OnMenuClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature final 
{
public:
	bool                                          bClosedByLostFocus;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature, bClosedByLostFocus) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnMenuClose__DelegateSignature::bClosedByLostFocus' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged final 
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_Template_ContextMenuAnchor_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_Template_ContextMenuAnchor_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.HandleMenuAnchorGetUserMenuContent
// 0x0030 (0x0030 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent final 
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent) == 0x000030, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, ReturnValue) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000020, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_Template_ContextMenuAnchor_CM_C_HandleMenuAnchorGetUserMenuContent::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AB[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x006C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AC[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputMethodActive_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFocusedDescendants_ReturnValue;        // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM) == 0x000008, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM) == 0x0000D8, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, EntryPoint) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_object_Variable) == 0x000038, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_real_Variable) == 0x000048, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_real_Variable_1) == 0x000050, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_real_Variable_0) == 0x000058, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, Temp_bool_Variable) == 0x000068, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_Event_MyGeometry) == 0x00006C, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_Event_InDeltaTime) == 0x0000A4, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_ComponentBoundEvent_bIsOpen) == 0x0000A8, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_Event_IsDesignTime) == 0x0000AA, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_IsOpen_ReturnValue) == 0x0000AB, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_IsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_BooleanAND_ReturnValue) == 0x0000AC, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000B0, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x0000B8, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_IsInputMethodActive_ReturnValue) == 0x0000C0, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_IsInputMethodActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_HasFocusedDescendants_ReturnValue) == 0x0000C2, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_HasFocusedDescendants_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, CallFunc_HasAnyUserFocus_ReturnValue) == 0x0000C3, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_CreateDelegate_OutputDelegate) == 0x0000C4, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_CustomEvent_bNewInputType) == 0x0000D4, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM, K2Node_SwitchEnum_CmpSuccess) == 0x0000D5, "Member 'WBP_Template_ContextMenuAnchor_CM_C_ExecuteUbergraph_WBP_Template_ContextMenuAnchor_CM::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.Close
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_Close final 
{
public:
	bool                                          bCloseByLostFocus;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_Close) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_Close");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_Close) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_Close");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_Close, bCloseByLostFocus) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_Close::bCloseByLostFocus' has a wrong offset!");

// Function WBP_Template_ContextMenuAnchor_CM.WBP_Template_ContextMenuAnchor_CM_C.BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final 
{
public:
	bool                                          bIsOpen;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'WBP_Template_ContextMenuAnchor_CM_C_BndEvt__WBP_Template_ContextMenuAnchor_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

}

