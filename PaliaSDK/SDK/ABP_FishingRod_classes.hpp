#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FishingRod

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ABP_FishingRod_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Palia_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_FishingRod.ABP_FishingRod_C
// 0x1010 (0x1360 - 0x0350)
class UABP_FishingRod_C final  : public UAnimInstance
{
public:
	uint8                                         Pad_4554[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_FishingRod::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0018)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0370(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0378(0x0008)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_33;                 // 0x0380(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_32;                 // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_31;                 // 0x03D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_30;                 // 0x03F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_29;                 // 0x0420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_28;                 // 0x0448(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_27;                 // 0x0470(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x0498(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x04C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x04E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x0510(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x0538(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x0560(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x0588(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x05B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x05D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x0600(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x0628(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0650(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0678(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x06A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x06C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x06F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0718(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0740(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0768(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x0790(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_15;                      // 0x07D8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x07F8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x0840(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0860(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0888(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x08B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x08D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0900(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0928(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0950(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0978(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x09C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x09E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x0A28(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0A48(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x0A90(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0AB0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0AF8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x0B40(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0B60(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x0C28(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0C48(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x0C70(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x0CE0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0D00(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0D48(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0D68(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0DD8(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0DF8(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0E40(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0EB0(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0F20(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0F40(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0F88(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0FA8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0FF0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1010(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1058(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1078(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x10C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x10E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1128(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1148(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1210(0x0110)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1320(0x0020)()
	double                                        FishingDirection;                                  // 0x1340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StateLerp;                                         // 0x1348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReelingHeld;                                       // 0x1350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBiting;                                          // 0x1351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFishingMiniGameState                         MinigameState;                                     // 0x1352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFishingMiniGameResult                        EndState;                                          // 0x1353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AnimStateTransition;                               // 0x1354(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_0E4A4A704CC8DDA8483D04A5F93010FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_166398B0419634E02EA152B398EB94BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_19BB62714BBFF016C8D7F3B6388F752F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_25B63C884116486DA0765EB801A7445F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_2EE6DAB64F2B1A0CA11E4D9EACBD4CCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_3DB2B8CF4DA687663F648A8C029EF0D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_47F5094A4DB48571988B76B0B6671B8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_4BA4B5E543A5F77D2E98058135382DFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_82E41FDF47C60F5CBA53D6A98FD01FF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_87925C814B95D0C14B0766BBFD42215C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8DEE177942464AD293CDC3B3C7014C4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8F7D87A445AEB749CCEE90A192E60521();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B7746F1C4A7A7699678A288BA7FCC9AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B857C48F47E552195EDADE9E8C3257A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA4477794C3034BDE14A4B9B2E9BCD08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA63F051462A6DD7F7725D8AA61A32CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BF4C2D804CFA91A4DBFC19989E06172D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_C1A11F244BE83FB6AD992B9ABA8E6461();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_D87F15984C8B6F30677CF2989F687804();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_E00B3FE04D8F1F7C1A9A9696BD6D0383();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_EAD985944B2D8B423A07EFA4932FE410();
	void ExecuteUbergraph_ABP_FishingRod(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, bool CallFunc_IsValid_ReturnValue, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, double CallFunc_FClamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_2, class UFishingViewComponent* K2Node_CustomEvent_FishingView_1, class UFishingComponent* K2Node_CustomEvent_Source, int32 K2Node_CustomEvent_fishNumber, class AActor* CallFunc_GetOwner_ReturnValue_2, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UFishingViewComponent* K2Node_CustomEvent_FishingView, bool K2Node_CustomEvent_isBiting, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, double K2Node_VariableSet_StateLerp_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast);
	void OnFishIsBitingChanged_Event_0(class UFishingViewComponent* FishingView, bool Param_IsBiting);
	void OnNibbled_Event_0(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_FishingRod_C">();
	}
	static class UABP_FishingRod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_FishingRod_C>();
	}
};
static_assert(alignof(UABP_FishingRod_C) == 0x000010, "Wrong alignment on UABP_FishingRod_C");
static_assert(sizeof(UABP_FishingRod_C) == 0x001360, "Wrong size on UABP_FishingRod_C");
static_assert(offsetof(UABP_FishingRod_C, UberGraphFrame) == 0x000350, "Member 'UABP_FishingRod_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, __AnimBlueprintMutables) == 0x000358, "Member 'UABP_FishingRod_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimBlueprintExtension_PropertyAccess) == 0x000370, "Member 'UABP_FishingRod_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimBlueprintExtension_Base) == 0x000378, "Member 'UABP_FishingRod_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_33) == 0x000380, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_33' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_32) == 0x0003A8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_32' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_31) == 0x0003D0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_31' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_30) == 0x0003F8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_30' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_29) == 0x000420, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_29' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_28) == 0x000448, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_28' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_27) == 0x000470, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_27' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_26) == 0x000498, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_25) == 0x0004C0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_24) == 0x0004E8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_23) == 0x000510, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_22) == 0x000538, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_21) == 0x000560, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_20) == 0x000588, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_19) == 0x0005B0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_18) == 0x0005D8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_17) == 0x000600, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_16) == 0x000628, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_15) == 0x000650, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_14) == 0x000678, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_13) == 0x0006A0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_12) == 0x0006C8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_11) == 0x0006F0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_10) == 0x000718, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_9) == 0x000740, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_8) == 0x000768, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_11) == 0x000790, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_15) == 0x0007D8, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_15' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_10) == 0x0007F8, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_14) == 0x000840, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_7) == 0x000860, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_6) == 0x000888, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_5) == 0x0008B0, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_4) == 0x0008D8, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_3) == 0x000900, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_2) == 0x000928, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult_1) == 0x000950, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_9) == 0x000978, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_13) == 0x0009C0, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_8) == 0x0009E0, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_12) == 0x000A28, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_7) == 0x000A48, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_11) == 0x000A90, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_Slot) == 0x000AB0, "Member 'UABP_FishingRod_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_6) == 0x000AF8, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_10) == 0x000B40, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateMachine_1) == 0x000B60, "Member 'UABP_FishingRod_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_9) == 0x000C28, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_TransitionResult) == 0x000C48, "Member 'UABP_FishingRod_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_BlendSpacePlayer_3) == 0x000C70, "Member 'UABP_FishingRod_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_8) == 0x000CE0, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_5) == 0x000D00, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_7) == 0x000D48, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000D68, "Member 'UABP_FishingRod_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_6) == 0x000DD8, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_BlendListByBool) == 0x000DF8, "Member 'UABP_FishingRod_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000E40, "Member 'UABP_FishingRod_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_BlendSpacePlayer) == 0x000EB0, "Member 'UABP_FishingRod_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_5) == 0x000F20, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_4) == 0x000F40, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_4) == 0x000F88, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_3) == 0x000FA8, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_3) == 0x000FF0, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_2) == 0x001010, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_2) == 0x001058, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer_1) == 0x001078, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult_1) == 0x0010C0, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_SequencePlayer) == 0x0010E0, "Member 'UABP_FishingRod_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateResult) == 0x001128, "Member 'UABP_FishingRod_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_StateMachine) == 0x001148, "Member 'UABP_FishingRod_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_Inertialization) == 0x001210, "Member 'UABP_FishingRod_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimGraphNode_Root) == 0x001320, "Member 'UABP_FishingRod_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, FishingDirection) == 0x001340, "Member 'UABP_FishingRod_C::FishingDirection' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, StateLerp) == 0x001348, "Member 'UABP_FishingRod_C::StateLerp' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, ReelingHeld) == 0x001350, "Member 'UABP_FishingRod_C::ReelingHeld' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, IsBiting) == 0x001351, "Member 'UABP_FishingRod_C::IsBiting' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, MinigameState) == 0x001352, "Member 'UABP_FishingRod_C::MinigameState' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, EndState) == 0x001353, "Member 'UABP_FishingRod_C::EndState' has a wrong offset!");
static_assert(offsetof(UABP_FishingRod_C, AnimStateTransition) == 0x001354, "Member 'UABP_FishingRod_C::AnimStateTransition' has a wrong offset!");

}

