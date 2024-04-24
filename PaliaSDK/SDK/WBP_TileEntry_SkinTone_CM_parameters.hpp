#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TileEntry_SkinTone_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final 
{
public:
	class UWBP_Template_Button_ColorPicker_01_CM_C* Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged final 
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged final 
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.ExecuteUbergraph_WBP_TileEntry_SkinTone_CM
// 0x0178 (0x0178 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B90[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B91[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B92[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UListViewBase*                          CallFunc_GetOwningListView_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UListView*                              K2Node_DynamicCast_AsList_View;                    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B93[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_CharacterCustomizationItem_SkinTone* K2Node_DynamicCast_AsVAL_Character_Customization_Item_Skin_Tone; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B94[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_CharacterCustomizationItem_SkinTone_PerBodyTypeConfig CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_OutBodyTypeSpecificConfig; // 0x0068(0x00E8)()
	bool                                          CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_ReturnValue; // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B95[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B96[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Template_Button_ColorPicker_01_CM_C* K2Node_ComponentBoundEvent_Button;                 // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0170(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM) == 0x000008, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM) == 0x000178, "Wrong size on WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, EntryPoint) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_Event_bIsExpanded) == 0x000004, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_Event_ListItemObject) == 0x000008, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_Event_bIsSelected) == 0x000010, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_AsTile_Item_Character_Customization_Item) == 0x000018, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_AsTile_Item_Character_Customization_Item' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, CallFunc_GetOwningListView_ReturnValue) == 0x000028, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::CallFunc_GetOwningListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_AsList_View) == 0x000030, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_AsList_View' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, CallFunc_GetListItemObject_ReturnValue) == 0x000040, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, Temp_object_Variable) == 0x000048, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_CustomEvent_Loaded) == 0x000050, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_AsVAL_Character_Customization_Item_Skin_Tone) == 0x000058, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_AsVAL_Character_Customization_Item_Skin_Tone' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_OutBodyTypeSpecificConfig) == 0x000068, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_OutBodyTypeSpecificConfig' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_ReturnValue) == 0x000150, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000154, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_ComponentBoundEvent_Button) == 0x000168, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM, K2Node_Event_InFocusEvent) == 0x000170, "Member 'WBP_TileEntry_SkinTone_CM_C_ExecuteUbergraph_WBP_TileEntry_SkinTone_CM::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_OnFocusLost final 
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_OnFocusLost) == 0x000004, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_OnFocusLost");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_OnFocusLost) == 0x000008, "Wrong size on WBP_TileEntry_SkinTone_CM_C_OnFocusLost");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_TileEntry_SkinTone_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_TileEntry_SkinTone_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_TileEntry_SkinTone_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_TileEntry_SkinTone_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet final 
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C.OnLoaded_FC3ACC8645F0E8957046398EBD58492B
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B final 
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B) == 0x000008, "Wrong alignment on WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B");
static_assert(sizeof(WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B) == 0x000008, "Wrong size on WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B");
static_assert(offsetof(WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B, Loaded) == 0x000000, "Member 'WBP_TileEntry_SkinTone_CM_C_OnLoaded_FC3ACC8645F0E8957046398EBD58492B::Loaded' has a wrong offset!");

}
