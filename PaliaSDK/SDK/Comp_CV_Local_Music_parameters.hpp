#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CV_Local_Music

#include "Basic.hpp"


namespace SDK::Params
{

// Function Comp_CV_Local_Music.Comp_CV_Local_Music_C.ExecuteUbergraph_Comp_CV_Local_Music
// 0x00D0 (0x00D0 - 0x0000)
struct Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43B8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValeriaGameInstance*                   K2Node_DynamicCast_AsValeria_Game_Instance;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43B9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_OverlappedComponent;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_OtherBodyIndex;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BA[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMusicManager*                          CallFunc_GetMusicManager_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MusicManager_C*                     K2Node_DynamicCast_AsBP_Music_Manager;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BB[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSwitchingBetweenNightAndDay_bSwitchingBetweenNightAndDay; // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BC[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BD[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAkRoomComponent*>               CallFunc_GetAudioRoomComponents_ReturnValue;       // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UAkRoomComponent*                       CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkRoomComponent*                       CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UComp_CV_Local_Music_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UComp_CV_Local_Music_C*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BE[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43BF[0x1];                                     // 0x00BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C0[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music) == 0x000008, "Wrong alignment on Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music");
static_assert(sizeof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music) == 0x0000D0, "Wrong size on Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, EntryPoint) == 0x000000, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::EntryPoint' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_AsValeria_Game_Instance) == 0x000010, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_AsValeria_Game_Instance' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_Event_OverlappedComponent) == 0x000020, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_Event_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_Event_OtherActor) == 0x000028, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_Event_OtherComp) == 0x000030, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_Event_OtherBodyIndex) == 0x000038, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_Event_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetMusicManager_ReturnValue) == 0x000040, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetMusicManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_AsBP_Music_Manager) == 0x000048, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_AsBP_Music_Manager' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_AsPawn) == 0x000058, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_IsLocallyControlled_ReturnValue) == 0x000061, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetIsSwitchingBetweenNightAndDay_bSwitchingBetweenNightAndDay) == 0x000062, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetIsSwitchingBetweenNightAndDay_bSwitchingBetweenNightAndDay' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, Temp_int_Array_Index_Variable) == 0x000064, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetAudioRoomComponents_ReturnValue) == 0x000070, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetAudioRoomComponents_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Array_Get_Item) == 0x000080, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetOwner_ReturnValue) == 0x000090, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetOwner_ReturnValue_1) == 0x000098, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000A8, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_IsValid_ReturnValue_2) == 0x0000B1, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, Temp_bool_True_if_break_was_hit_Variable) == 0x0000BC, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Greater_IntInt_ReturnValue) == 0x0000BD, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000BE, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music, CallFunc_BooleanAND_ReturnValue_1) == 0x0000CC, "Member 'Comp_CV_Local_Music_C_ExecuteUbergraph_Comp_CV_Local_Music::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function Comp_CV_Local_Music.Comp_CV_Local_Music_C.OverlapEnd
// 0x0020 (0x0020 - 0x0000)
struct Comp_CV_Local_Music_C_OverlapEnd final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Local_Music_C_OverlapEnd) == 0x000008, "Wrong alignment on Comp_CV_Local_Music_C_OverlapEnd");
static_assert(sizeof(Comp_CV_Local_Music_C_OverlapEnd) == 0x000020, "Wrong size on Comp_CV_Local_Music_C_OverlapEnd");
static_assert(offsetof(Comp_CV_Local_Music_C_OverlapEnd, OverlappedComponent) == 0x000000, "Member 'Comp_CV_Local_Music_C_OverlapEnd::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_OverlapEnd, OtherActor) == 0x000008, "Member 'Comp_CV_Local_Music_C_OverlapEnd::OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_OverlapEnd, OtherComp) == 0x000010, "Member 'Comp_CV_Local_Music_C_OverlapEnd::OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_CV_Local_Music_C_OverlapEnd, OtherBodyIndex) == 0x000018, "Member 'Comp_CV_Local_Music_C_OverlapEnd::OtherBodyIndex' has a wrong offset!");

}

