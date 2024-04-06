#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Master_lampHangingFreeA

#include "Basic.hpp"

#include "BP_Master_lampHangingFreeA_classes.hpp"
#include "BP_Master_lampHangingFreeA_parameters.hpp"


namespace SDK
{

// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.AudioWindUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::AudioWindUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "AudioWindUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.debug_amISleep
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Debug_amISleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "debug_amISleep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.event_windAnimMe
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Event_windAnimMe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "event_windAnimMe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.event_windControl
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Event_windControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "event_windControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.event_windPhysicMe
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Event_windPhysicMe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "event_windPhysicMe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.ExecuteUbergraph_BP_Master_lampHangingFreeA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetScalarParameterValue_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_WasRecentlyRendered_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Add_DoubleDouble_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotator_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetComponentVelocity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_VSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Lerp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FMax_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_NormalizeToRange_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     CallFunc_AkEventLocation_AkComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventLocation_Playing_ID                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_DoubleDouble_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Abs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_DoubleDouble_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Multiply_LinearColorFloat_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Divide_DoubleDouble_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_LinearColorToVector_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_MultiplyMultiply_FloatFloat_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_core_Scalability                   CallFunc_GlobalScalabilitySetting_ScalabilitySetting   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*                  CallFunc_GetWorldSubsystem_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*           CallFunc_GetCurrentEnvManager_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWindIntensityAtPos_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Lerp_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeRotation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetScalarParameterValue_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Multiply_LinearColorFloat_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_LinearColorToVector_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*                  CallFunc_GetWorldSubsystem_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*           CallFunc_GetCurrentEnvManager_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWindIntensityAtPos_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetMassOverrideInKg_MassInKg_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_B_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_B_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_MakeRotator_Pitch_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Lerp_Alpha_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetRTPCValue_Value_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_K2_SetTimerDelegate_Time_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_LinearColorFloat_B_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Master_lampHangingFreeA_C::ExecuteUbergraph_BP_Master_lampHangingFreeA(int32 EntryPoint, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, Enum_core_Scalability CallFunc_GlobalScalabilitySetting_ScalabilitySetting, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, float CallFunc_GetWindIntensityAtPos_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue_1, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue_1, float CallFunc_GetWindIntensityAtPos_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, float CallFunc_SetMassOverrideInKg_MassInKg_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "ExecuteUbergraph_BP_Master_lampHangingFreeA");

	Params::BP_Master_lampHangingFreeA_C_ExecuteUbergraph_BP_Master_lampHangingFreeA Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = std::move(CallFunc_GetVectorParameterValue_ReturnValue);
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_1);
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = std::move(CallFunc_MakeRotator_ReturnValue);
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetComponentVelocity_ReturnValue = std::move(CallFunc_GetComponentVelocity_ReturnValue);
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_AkEventLocation_AkComponent = CallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = CallFunc_AkEventLocation_Playing_ID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = std::move(CallFunc_Multiply_LinearColorFloat_ReturnValue);
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(CallFunc_Conv_LinearColorToVector_ReturnValue);
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GlobalScalabilitySetting_ScalabilitySetting = CallFunc_GlobalScalabilitySetting_ScalabilitySetting;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue = CallFunc_GetCurrentEnvManager_ReturnValue;
	Parms.CallFunc_GetWindIntensityAtPos_ReturnValue = CallFunc_GetWindIntensityAtPos_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = std::move(CallFunc_K2_SetRelativeRotation_SweepHitResult);
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = std::move(CallFunc_GetVectorParameterValue_ReturnValue_1);
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_1 = CallFunc_GetScalarParameterValue_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = std::move(CallFunc_Multiply_LinearColorFloat_ReturnValue_1);
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = std::move(CallFunc_Conv_LinearColorToVector_ReturnValue_1);
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(CallFunc_Multiply_VectorFloat_ReturnValue_1);
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue_1 = CallFunc_GetCurrentEnvManager_ReturnValue_1;
	Parms.CallFunc_GetWindIntensityAtPos_ReturnValue_1 = CallFunc_GetWindIntensityAtPos_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_SetMassOverrideInKg_MassInKg_ImplicitCast = CallFunc_SetMassOverrideInKg_MassInKg_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_1 = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_animWindThis__FinishedFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_animWindThis__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_animWindThis__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_animWindThis__UpdateFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_animWindThis__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_animWindThis__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_changingWind__FinishedFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_changingWind__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_changingWind__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_changingWind__UpdateFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_changingWind__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_changingWind__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_dimLight__FinishedFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_dimLight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_dimLight__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.TL_dimLight__UpdateFunc
// (BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::TL_dimLight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "TL_dimLight__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.update_pushMyLamp
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Update_pushMyLamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "update_pushMyLamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Master_lampHangingFreeA.BP_Master_lampHangingFreeA_C.update_wind2Lamp
// (BlueprintCallable, BlueprintEvent)

void ABP_Master_lampHangingFreeA_C::Update_wind2Lamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Master_lampHangingFreeA_C", "update_wind2Lamp");

	UObject::ProcessEvent(Func, nullptr);
}

}

