#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingSafeArea

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ExecuteUbergraph_BP_FishingSafeArea
// 0x0070 (0x0070 - 0x0000)
struct BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Ak_Object_Velocity_Set_Previous_Location; // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Ak_Object_Velocity_VectorLength;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Ak_Object_Velocity_VectorLengthClamped;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea) == 0x000008, "Wrong alignment on BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea");
static_assert(sizeof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea) == 0x000070, "Wrong size on BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, EntryPoint) == 0x000000, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_Ak_Object_Velocity_Set_Previous_Location) == 0x000008, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_Ak_Object_Velocity_Set_Previous_Location' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_Ak_Object_Velocity_VectorLength) == 0x000020, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_Ak_Object_Velocity_VectorLength' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_Ak_Object_Velocity_VectorLengthClamped) == 0x000028, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_Ak_Object_Velocity_VectorLengthClamped' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_AkEventComponent_ReturnValue) == 0x000030, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000038, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_VLerp_ReturnValue) == 0x000050, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea, CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast) == 0x000068, "Member 'BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea::CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast' has a wrong offset!");

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.HandleFishLost
// 0x0038 (0x0038 - 0x0000)
struct BP_FishingSafeArea_C_HandleFishLost final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSafeZoneLength_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FishingSafeArea_C_HandleFishLost) == 0x000008, "Wrong alignment on BP_FishingSafeArea_C_HandleFishLost");
static_assert(sizeof(BP_FishingSafeArea_C_HandleFishLost) == 0x000038, "Wrong size on BP_FishingSafeArea_C_HandleFishLost");
static_assert(offsetof(BP_FishingSafeArea_C_HandleFishLost, FishingView) == 0x000000, "Member 'BP_FishingSafeArea_C_HandleFishLost::FishingView' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_HandleFishLost, CallFunc_GetSafeZoneLength_ReturnValue) == 0x000008, "Member 'BP_FishingSafeArea_C_HandleFishLost::CallFunc_GetSafeZoneLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_HandleFishLost, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_FishingSafeArea_C_HandleFishLost::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_HandleFishLost, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000018, "Member 'BP_FishingSafeArea_C_HandleFishLost::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_HandleFishLost, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'BP_FishingSafeArea_C_HandleFishLost::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.InitSafeZoneColorParams
// 0x0050 (0x0050 - 0x0000)
struct BP_FishingSafeArea_C_InitSafeZoneColorParams final 
{
public:
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue_1;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue_2;    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue_3;    // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue_4;    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FishingSafeArea_C_InitSafeZoneColorParams) == 0x000004, "Wrong alignment on BP_FishingSafeArea_C_InitSafeZoneColorParams");
static_assert(sizeof(BP_FishingSafeArea_C_InitSafeZoneColorParams) == 0x000050, "Wrong size on BP_FishingSafeArea_C_InitSafeZoneColorParams");
static_assert(offsetof(BP_FishingSafeArea_C_InitSafeZoneColorParams, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000000, "Member 'BP_FishingSafeArea_C_InitSafeZoneColorParams::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_InitSafeZoneColorParams, CallFunc_GetVectorParameterValue_ReturnValue_1) == 0x000010, "Member 'BP_FishingSafeArea_C_InitSafeZoneColorParams::CallFunc_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_InitSafeZoneColorParams, CallFunc_GetVectorParameterValue_ReturnValue_2) == 0x000020, "Member 'BP_FishingSafeArea_C_InitSafeZoneColorParams::CallFunc_GetVectorParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_InitSafeZoneColorParams, CallFunc_GetVectorParameterValue_ReturnValue_3) == 0x000030, "Member 'BP_FishingSafeArea_C_InitSafeZoneColorParams::CallFunc_GetVectorParameterValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_InitSafeZoneColorParams, CallFunc_GetVectorParameterValue_ReturnValue_4) == 0x000040, "Member 'BP_FishingSafeArea_C_InitSafeZoneColorParams::CallFunc_GetVectorParameterValue_ReturnValue_4' has a wrong offset!");

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FishingSafeArea_C_ReceiveTick final 
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FishingSafeArea_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FishingSafeArea_C_ReceiveTick");
static_assert(sizeof(BP_FishingSafeArea_C_ReceiveTick) == 0x000004, "Wrong size on BP_FishingSafeArea_C_ReceiveTick");
static_assert(offsetof(BP_FishingSafeArea_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FishingSafeArea_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.UpdateFishingSafeZone
// 0x04D0 (0x04D0 - 0x0000)
struct BP_FishingSafeArea_C_UpdateFishingSafeZone final 
{
public:
	struct FFishingMiniGameViewState              ViewState;                                         // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFishingComponent*                      Fishing;                                           // 0x0120(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingViewComponent*                  FishingView;                                       // 0x0128(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EFishingSafeTier                              Temp_byte_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453C[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFishingSafeTier                              CallFunc_GetCurrentSafetyTier_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453D[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453E[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalController_ReturnValue;            // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalController_ReturnValue_1;          // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453F[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventComponent_ReturnValue_1;           // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0178(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x018C(0x0014)()
	float                                         CallFunc_GetSafeZoneLength_ReturnValue;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4540[0xC];                                     // 0x01A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFishingMiniGameViewState              CallFunc_GetViewState_ReturnValue;                 // 0x01B0(0x0120)()
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSafeZoneCenter_ReturnValue;            // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0368(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4541[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0458(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0488(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0498(0x0014)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x04AC(0x0014)(ConstParm)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FishingSafeArea_C_UpdateFishingSafeZone) == 0x000010, "Wrong alignment on BP_FishingSafeArea_C_UpdateFishingSafeZone");
static_assert(sizeof(BP_FishingSafeArea_C_UpdateFishingSafeZone) == 0x0004D0, "Wrong size on BP_FishingSafeArea_C_UpdateFishingSafeZone");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, ViewState) == 0x000000, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::ViewState' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, Fishing) == 0x000120, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::Fishing' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, FishingView) == 0x000128, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::FishingView' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, Temp_byte_Variable) == 0x000130, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_AkEventComponent_ReturnValue) == 0x000134, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetCurrentSafetyTier_ReturnValue) == 0x000138, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetCurrentSafetyTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000140, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000158, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000159, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_BooleanOR_ReturnValue) == 0x00015A, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_IsVisible_ReturnValue) == 0x00015B, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_BooleanAND_ReturnValue) == 0x00015C, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetPlayerController_ReturnValue_1) == 0x000168, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_IsLocalController_ReturnValue) == 0x000170, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_IsLocalController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_IsLocalController_ReturnValue_1) == 0x000171, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_IsLocalController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_AkEventComponent_ReturnValue_1) == 0x000174, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_AkEventComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, K2Node_MakeStruct_SlateColor) == 0x000178, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, K2Node_MakeStruct_SlateColor_1) == 0x00018C, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetSafeZoneLength_ReturnValue) == 0x0001A0, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetSafeZoneLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetViewState_ReturnValue) == 0x0001B0, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetViewState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0002D0, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0002D8, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_BreakTransform_Location) == 0x0002F0, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_BreakTransform_Rotation) == 0x000308, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_BreakTransform_Scale) == 0x000320, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_GetSafeZoneCenter_ReturnValue) == 0x000338, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_GetSafeZoneCenter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Add_VectorVector_ReturnValue) == 0x000350, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000368, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000450, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000458, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Vector_Distance_ReturnValue) == 0x000470, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000478, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_FClamp_ReturnValue) == 0x000480, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_LinearColorLerp_ReturnValue) == 0x000488, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, K2Node_MakeStruct_SlateColor_2) == 0x000498, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, K2Node_Select_Default) == 0x0004AC, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0004C0, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FishingSafeArea_C_UpdateFishingSafeZone, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x0004C8, "Member 'BP_FishingSafeArea_C_UpdateFishingSafeZone::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");

}

