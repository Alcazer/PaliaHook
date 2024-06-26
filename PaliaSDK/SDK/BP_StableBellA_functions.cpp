#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StableBellA

#include "Basic.hpp"

#include "BP_StableBellA_classes.hpp"
#include "BP_StableBellA_parameters.hpp"


namespace SDK
{

// Function BP_StableBellA.BP_StableBellA_C.event_bellWindControl
// (BlueprintCallable, BlueprintEvent)

void ABP_StableBellA_C::Event_bellWindControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "event_bellWindControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StableBellA.BP_StableBellA_C.event_Setup
// (BlueprintCallable, BlueprintEvent)

void ABP_StableBellA_C::Event_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "event_Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StableBellA.BP_StableBellA_C.ExecuteUbergraph_BP_StableBellA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetScalarParameterValue_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_WasRecentlyRendered_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_K2_GetComponentRotation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Roll                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Pitch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Yaw                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Abs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_DoubleDouble_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_DoubleDouble_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_CustomEvent_DeltaTime                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*                  CallFunc_GetWorldSubsystem_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetPlatformType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*           CallFunc_GetCurrentEnvManager_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWindIntensityAtPos_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Multiply_LinearColorFloat_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_LinearColorToVector_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     CallFunc_SpawnAkComponentAtLocation_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventComponent_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Subtract_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Ak_Object_Velocity_Set_Previous_Location      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_VectorLength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_VectorLengthClamped        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Abs_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_DoubleDouble_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*                  CallFunc_GetWorldSubsystem_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*           CallFunc_GetCurrentEnvManager_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWindIntensityAtPos_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_MultiplyMultiply_FloatFloat_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Lerp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Greater_DoubleDouble_A_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Abs_A_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_UpdateAudioBell_DeltaTime_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Delay_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  K2Node_VariableSet_Gust_Current_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_LinearColorFloat_B_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_K2_SetTimerDelegate_Time_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetRTPCValue_Value_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StableBellA_C::ExecuteUbergraph_BP_StableBellA(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable_6, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_Variable_7, bool CallFunc_WasRecentlyRendered_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool Temp_bool_Variable_8, ERedirectsPlatform Temp_byte_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_CustomEvent_DeltaTime, double CallFunc_RandomFloatInRange_ReturnValue, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, float CallFunc_GetWindIntensityAtPos_ReturnValue, bool K2Node_Select_Default, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Ak_Object_Velocity_Set_Previous_Location, double CallFunc_Ak_Object_Velocity_VectorLength, double CallFunc_Ak_Object_Velocity_VectorLengthClamped, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue_1, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue_1, float CallFunc_GetWindIntensityAtPos_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast, float CallFunc_UpdateAudioBell_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double K2Node_VariableSet_Gust_Current_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "ExecuteUbergraph_BP_StableBellA");

	Params::BP_StableBellA_C_ExecuteUbergraph_BP_StableBellA Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = std::move(CallFunc_GetVectorParameterValue_ReturnValue);
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_1);
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = std::move(CallFunc_K2_GetComponentRotation_ReturnValue);
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_DeltaTime = K2Node_CustomEvent_DeltaTime;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue = CallFunc_GetCurrentEnvManager_ReturnValue;
	Parms.CallFunc_GetWindIntensityAtPos_ReturnValue = CallFunc_GetWindIntensityAtPos_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = std::move(CallFunc_Multiply_LinearColorFloat_ReturnValue);
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(CallFunc_Conv_LinearColorToVector_ReturnValue);
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Ak_Object_Velocity_Set_Previous_Location = std::move(CallFunc_Ak_Object_Velocity_Set_Previous_Location);
	Parms.CallFunc_Ak_Object_Velocity_VectorLength = CallFunc_Ak_Object_Velocity_VectorLength;
	Parms.CallFunc_Ak_Object_Velocity_VectorLengthClamped = CallFunc_Ak_Object_Velocity_VectorLengthClamped;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue_1 = CallFunc_GetCurrentEnvManager_ReturnValue_1;
	Parms.CallFunc_GetWindIntensityAtPos_ReturnValue_1 = CallFunc_GetWindIntensityAtPos_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast = CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast;
	Parms.CallFunc_UpdateAudioBell_DeltaTime_ImplicitCast = CallFunc_UpdateAudioBell_DeltaTime_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.K2Node_VariableSet_Gust_Current_ImplicitCast = K2Node_VariableSet_Gust_Current_ImplicitCast;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StableBellA.BP_StableBellA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StableBellA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StableBellA.BP_StableBellA_C.update_pushMyBell
// (BlueprintCallable, BlueprintEvent)

void ABP_StableBellA_C::Update_pushMyBell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "update_pushMyBell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StableBellA.BP_StableBellA_C.update_wind2Bell
// (BlueprintCallable, BlueprintEvent)

void ABP_StableBellA_C::Update_wind2Bell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "update_wind2Bell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StableBellA.BP_StableBellA_C.UpdateAudioBell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StableBellA_C::UpdateAudioBell(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StableBellA_C", "UpdateAudioBell");

	Params::BP_StableBellA_C_UpdateAudioBell Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

