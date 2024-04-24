#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FishingRod

#include "Basic.hpp"

#include "ABP_FishingRod_classes.hpp"
#include "ABP_FishingRod_parameters.hpp"


namespace SDK
{

// Function ABP_FishingRod.ABP_FishingRod_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_FishingRod_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "AnimGraph");

	Params::ABP_FishingRod_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_FishingRod.ABP_FishingRod_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_FishingRod_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_FishingRod_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "BlueprintUpdateAnimation");

	Params::ABP_FishingRod_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_0E4A4A704CC8DDA8483D04A5F93010FC
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_0E4A4A704CC8DDA8483D04A5F93010FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_0E4A4A704CC8DDA8483D04A5F93010FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_166398B0419634E02EA152B398EB94BE
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_166398B0419634E02EA152B398EB94BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_166398B0419634E02EA152B398EB94BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_19BB62714BBFF016C8D7F3B6388F752F
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_19BB62714BBFF016C8D7F3B6388F752F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_19BB62714BBFF016C8D7F3B6388F752F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_25B63C884116486DA0765EB801A7445F
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_25B63C884116486DA0765EB801A7445F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_25B63C884116486DA0765EB801A7445F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_2EE6DAB64F2B1A0CA11E4D9EACBD4CCF
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_2EE6DAB64F2B1A0CA11E4D9EACBD4CCF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_2EE6DAB64F2B1A0CA11E4D9EACBD4CCF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_3DB2B8CF4DA687663F648A8C029EF0D7
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_3DB2B8CF4DA687663F648A8C029EF0D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_3DB2B8CF4DA687663F648A8C029EF0D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_47F5094A4DB48571988B76B0B6671B8B
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_47F5094A4DB48571988B76B0B6671B8B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_47F5094A4DB48571988B76B0B6671B8B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_4BA4B5E543A5F77D2E98058135382DFD
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_4BA4B5E543A5F77D2E98058135382DFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_4BA4B5E543A5F77D2E98058135382DFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_82E41FDF47C60F5CBA53D6A98FD01FF5
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_82E41FDF47C60F5CBA53D6A98FD01FF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_82E41FDF47C60F5CBA53D6A98FD01FF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_87925C814B95D0C14B0766BBFD42215C
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_87925C814B95D0C14B0766BBFD42215C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_87925C814B95D0C14B0766BBFD42215C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8DEE177942464AD293CDC3B3C7014C4B
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8DEE177942464AD293CDC3B3C7014C4B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8DEE177942464AD293CDC3B3C7014C4B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8F7D87A445AEB749CCEE90A192E60521
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8F7D87A445AEB749CCEE90A192E60521()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_8F7D87A445AEB749CCEE90A192E60521");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B7746F1C4A7A7699678A288BA7FCC9AF
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B7746F1C4A7A7699678A288BA7FCC9AF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B7746F1C4A7A7699678A288BA7FCC9AF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B857C48F47E552195EDADE9E8C3257A5
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B857C48F47E552195EDADE9E8C3257A5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_B857C48F47E552195EDADE9E8C3257A5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA4477794C3034BDE14A4B9B2E9BCD08
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA4477794C3034BDE14A4B9B2E9BCD08()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA4477794C3034BDE14A4B9B2E9BCD08");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA63F051462A6DD7F7725D8AA61A32CA
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA63F051462A6DD7F7725D8AA61A32CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BA63F051462A6DD7F7725D8AA61A32CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BF4C2D804CFA91A4DBFC19989E06172D
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BF4C2D804CFA91A4DBFC19989E06172D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_BF4C2D804CFA91A4DBFC19989E06172D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_C1A11F244BE83FB6AD992B9ABA8E6461
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_C1A11F244BE83FB6AD992B9ABA8E6461()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_C1A11F244BE83FB6AD992B9ABA8E6461");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_D87F15984C8B6F30677CF2989F687804
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_D87F15984C8B6F30677CF2989F687804()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_D87F15984C8B6F30677CF2989F687804");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_E00B3FE04D8F1F7C1A9A9696BD6D0383
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_E00B3FE04D8F1F7C1A9A9696BD6D0383()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_E00B3FE04D8F1F7C1A9A9696BD6D0383");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_EAD985944B2D8B423A07EFA4932FE410
// (BlueprintEvent)

void UABP_FishingRod_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_EAD985944B2D8B423A07EFA4932FE410()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FishingRod_AnimGraphNode_TransitionResult_EAD985944B2D8B423A07EFA4932FE410");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_FishingRod.ABP_FishingRod_C.ExecuteUbergraph_ABP_FishingRod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwningActor_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_GameplayTag_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_9             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_GameplayTag_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_10            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_11            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_12            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_13            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_14            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_15            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_16            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_17            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_18            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_19            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_20            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaTimeX                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwningActor_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_21            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*            CallFunc_GetComponentByClass_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFishingMiniGameViewState        CallFunc_GetViewState_ReturnValue                      ()
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_22            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Add_DoubleDouble_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwningActor_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*            K2Node_CustomEvent_FishingView_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFishingComponent*                K2Node_CustomEvent_Source                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_fishNumber                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*            CallFunc_GetComponentByClass_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*            K2Node_CustomEvent_FishingView                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_isBiting                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_23            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_24            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  K2Node_VariableSet_StateLerp_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_Value_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_FishingRod_C::ExecuteUbergraph_ABP_FishingRod(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, bool CallFunc_IsValid_ReturnValue, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, double CallFunc_FClamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_2, class UFishingViewComponent* K2Node_CustomEvent_FishingView_1, class UFishingComponent* K2Node_CustomEvent_Source, int32 K2Node_CustomEvent_fishNumber, class AActor* CallFunc_GetOwner_ReturnValue_2, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UFishingViewComponent* K2Node_CustomEvent_FishingView, bool K2Node_CustomEvent_isBiting, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, double K2Node_VariableSet_StateLerp_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "ExecuteUbergraph_ABP_FishingRod");

	Params::ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_14 = CallFunc_EqualEqual_ByteByte_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_15 = CallFunc_EqualEqual_ByteByte_ReturnValue_15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_16 = CallFunc_EqualEqual_ByteByte_ReturnValue_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_17 = CallFunc_EqualEqual_ByteByte_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_18 = CallFunc_EqualEqual_ByteByte_ReturnValue_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_19 = CallFunc_EqualEqual_ByteByte_ReturnValue_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_20 = CallFunc_EqualEqual_ByteByte_ReturnValue_20;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_21 = CallFunc_EqualEqual_ByteByte_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetViewState_ReturnValue = std::move(CallFunc_GetViewState_ReturnValue);
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_22 = CallFunc_EqualEqual_ByteByte_ReturnValue_22;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_2 = CallFunc_GetOwningActor_ReturnValue_2;
	Parms.K2Node_CustomEvent_FishingView_1 = K2Node_CustomEvent_FishingView_1;
	Parms.K2Node_CustomEvent_Source = K2Node_CustomEvent_Source;
	Parms.K2Node_CustomEvent_fishNumber = K2Node_CustomEvent_fishNumber;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.K2Node_CustomEvent_FishingView = K2Node_CustomEvent_FishingView;
	Parms.K2Node_CustomEvent_isBiting = K2Node_CustomEvent_isBiting;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_23 = CallFunc_EqualEqual_ByteByte_ReturnValue_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_24 = CallFunc_EqualEqual_ByteByte_ReturnValue_24;
	Parms.K2Node_VariableSet_StateLerp_ImplicitCast = K2Node_VariableSet_StateLerp_ImplicitCast;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_FishingRod.ABP_FishingRod_C.OnFishIsBitingChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFishingViewComponent*            FishingView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsBiting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_FishingRod_C::OnFishIsBitingChanged_Event_0(class UFishingViewComponent* FishingView, bool Param_IsBiting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "OnFishIsBitingChanged_Event_0");

	Params::ABP_FishingRod_C_OnFishIsBitingChanged_Event_0 Parms{};

	Parms.FishingView = FishingView;
	Parms.Param_IsBiting = Param_IsBiting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_FishingRod.ABP_FishingRod_C.OnNibbled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFishingViewComponent*            FishingView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFishingComponent*                Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   FishNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_FishingRod_C::OnNibbled_Event_0(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_FishingRod_C", "OnNibbled_Event_0");

	Params::ABP_FishingRod_C_OnNibbled_Event_0 Parms{};

	Parms.FishingView = FishingView;
	Parms.Source = Source;
	Parms.FishNumber = FishNumber;

	UObject::ProcessEvent(Func, &Parms);
}

}
