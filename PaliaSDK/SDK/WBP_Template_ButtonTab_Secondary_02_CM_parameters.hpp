#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_ButtonTab_Secondary_02_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.DisplayGamePadIcon
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon final 
{
public:
	bool                                          IsShowIcon;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon) == 0x000001, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon) == 0x000001, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon, IsShowIcon) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DisplayGamePadIcon::IsShowIcon' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.DoSelected
// 0x0068 (0x0068 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected final 
{
public:
	bool                                          IsForward;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFoundValidIndex;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumRetries;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartSelectIndex;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectLength;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSelectedIndex;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ButtonTab_Secondary_02_CM_C*       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511C[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ButtonTab_Secondary_02_CM_C*       CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511D[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511E[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511F[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected) == 0x000068, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, IsForward) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::IsForward' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, bFoundValidIndex) == 0x000001, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::bFoundValidIndex' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, NumRetries) == 0x000004, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::NumRetries' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, StartSelectIndex) == 0x000008, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::StartSelectIndex' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, SelectLength) == 0x00000C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::SelectLength' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CurrentSelectedIndex) == 0x000010, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CurrentSelectedIndex' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Array_Length_ReturnValue_1) == 0x000018, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000028, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_GetIsEnabled_ReturnValue) == 0x000029, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000039, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, Temp_int_Variable) == 0x00003C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000044, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Less_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Add_IntInt_ReturnValue_2) == 0x000058, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, Temp_int_Variable_1) == 0x00005C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, Temp_int_Variable_2) == 0x000060, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000064, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000065, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_DoSelected::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5120[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ButtonTab_Secondary_02_CM_C*       CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5121[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5122[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5123[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_ButtonTab_Secondary_02_CM_C* Selected)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5124[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ButtonTab_Secondary_02_CM_C*       K2Node_CustomEvent_Selected;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5125[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5126[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0080(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5127[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM) == 0x0000A0, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, EntryPoint) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000030, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_HasAnyChildren_ReturnValue) == 0x00003D, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_GetChildIndex_ReturnValue) == 0x000044, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, K2Node_CustomEvent_Selected) == 0x000060, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Array_Get_Item) == 0x000070, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Map_Find_Value) == 0x000080, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM, CallFunc_Array_Add_ReturnValue) == 0x00009C, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.NavigateTab
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab final 
{
public:
	bool                                          bForward;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab) == 0x000001, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab) == 0x000001, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab, bForward) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_NavigateTab::bForward' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.On Tab Selected
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected final 
{
public:
	class UWBP_ButtonTab_Secondary_02_CM_C*       Param_Selected;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected) == 0x000008, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected, Param_Selected) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selected::Param_Selected' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.On Tab Selection Changed__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature final 
{
public:
	int32                                         Tab_Selection;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature) == 0x000004, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature) == 0x000004, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature, Tab_Selection) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_On_Tab_Selection_Changed__DelegateSignature::Tab_Selection' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.SetAlign
// 0x0010 (0x0010 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign final 
{
public:
	class UHorizontalBoxSlot*                     HorizontalBoxSlot;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0008(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign) == 0x000010, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign, HorizontalBoxSlot) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign::HorizontalBoxSlot' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign, K2Node_MakeStruct_SlateChildSize) == 0x000008, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetAlign::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.SetSelectedButton
// 0x0020 (0x0020 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5128[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ButtonTab_Secondary_02_CM_C*       K2Node_DynamicCast_AsWBP_Button_Tab_Secondary_02_CM; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton) == 0x000020, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton, Param_Index) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton, K2Node_DynamicCast_AsWBP_Button_Tab_Secondary_02_CM) == 0x000010, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton::K2Node_DynamicCast_AsWBP_Button_Tab_Secondary_02_CM' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetSelectedButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C.SetTabEnabled
// 0x0018 (0x0018 - 0x0000)
struct WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled final 
{
public:
	bool                                          NewEnabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5129[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TabIndex;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ButtonTab_Secondary_02_CM_C*       CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled) == 0x000008, "Wrong alignment on WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled");
static_assert(sizeof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled) == 0x000018, "Wrong size on WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled, NewEnabled) == 0x000000, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled::NewEnabled' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled, TabIndex) == 0x000004, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled::TabIndex' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'WBP_Template_ButtonTab_Secondary_02_CM_C_SetTabEnabled::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}

