#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraFadeScenery

#include "Basic.hpp"

#include "BP_CameraFadeScenery_classes.hpp"
#include "BP_CameraFadeScenery_parameters.hpp"


namespace SDK
{

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.ExecuteUbergraph_BP_CameraFadeScenery
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_CustomEvent_Actor                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   CallFunc_GetAllChildActors_ChildActors                 (ReferenceParm)
// class AActor*                           CallFunc_Array_Get_Item                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraFadeScenery_C::ExecuteUbergraph_BP_CameraFadeScenery(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_CustomEvent_Actor, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "ExecuteUbergraph_BP_CameraFadeScenery");

	Params::BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.CallFunc_GetAllChildActors_ChildActors = std::move(CallFunc_GetAllChildActors_ChildActors);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildActors_ChildActors = std::move(Parms.CallFunc_GetAllChildActors_ChildActors);
}


// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.FilterPrimitive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Primitive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   FilterList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    FilterPawns                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Matches                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   ListToCheck                                            (Edit, BlueprintVisible)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Array_Get_Item                                (ZeroConstructor, HasGetValueTypeHash)
// class FName                             CallFunc_Conv_StringToName_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            K2Node_DynamicCast_AsPawn                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ComponentHasTag_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetPathName_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Array_Get_Item_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Array_Get_Item_2                              (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetCleanFilename_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Contains_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetPathName_ReturnValue_1                     (ZeroConstructor, HasGetValueTypeHash)
// class UStaticMeshComponent*             K2Node_DynamicCast_AsStatic_Mesh_Component             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_AddUnique_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_AddUnique_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraFadeScenery_C::FilterPrimitive(class UPrimitiveComponent* Primitive, TArray<class FString>& FilterList, bool FilterPawns, bool* Matches, const TArray<class FString>& ListToCheck, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ComponentHasTag_ReturnValue, const class FString& CallFunc_GetPathName_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetCleanFilename_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, const class FString& CallFunc_GetPathName_ReturnValue_1, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "FilterPrimitive");

	Params::BP_CameraFadeScenery_C_FilterPrimitive Parms{};

	Parms.Primitive = Primitive;
	Parms.FilterList = std::move(FilterList);
	Parms.FilterPawns = FilterPawns;
	Parms.ListToCheck = std::move(ListToCheck);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;
	Parms.CallFunc_GetPathName_ReturnValue = std::move(CallFunc_GetPathName_ReturnValue);
	Parms.CallFunc_Array_Get_Item_1 = std::move(CallFunc_Array_Get_Item_1);
	Parms.CallFunc_Array_Get_Item_2 = std::move(CallFunc_Array_Get_Item_2);
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetCleanFilename_ReturnValue = std::move(CallFunc_GetCleanFilename_ReturnValue);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetPathName_ReturnValue_1 = std::move(CallFunc_GetPathName_ReturnValue_1);
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	FilterList = std::move(Parms.FilterList);

	if (Matches != nullptr)
		*Matches = Parms.Matches;
}


// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.OnActorSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CameraFadeScenery_C::OnActorSpawned(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "OnActorSpawned");

	Params::BP_CameraFadeScenery_C_OnActorSpawned Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CameraFadeScenery_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.SetActorPrimitiveFadeOut
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Primitive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Set                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaterialIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SetFilter                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   TransparencyFilterStrings                              (Edit, BlueprintVisible)
// TArray<class FString>                   K2Node_MakeArray_Array                                 (ReferenceParm)

void UBP_CameraFadeScenery_C::SetActorPrimitiveFadeOut(class UPrimitiveComponent* Primitive, bool* Set, int32 MaterialIndex, bool SetFilter, const TArray<class FString>& TransparencyFilterStrings, TArray<class FString>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "SetActorPrimitiveFadeOut");

	Params::BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut Parms{};

	Parms.Primitive = Primitive;
	Parms.MaterialIndex = MaterialIndex;
	Parms.SetFilter = SetFilter;
	Parms.TransparencyFilterStrings = std::move(TransparencyFilterStrings);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (Set != nullptr)
		*Set = Parms.Set;
}


// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.SetActorSeeThrough
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    PrimitiveFiltered                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CheckFilter                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   FilterInStrings                                        (Edit, BlueprintVisible)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   K2Node_MakeArray_Array                                 (ReferenceParm)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Temp_name_Variable                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*>      CallFunc_K2_GetComponentsByClass_ReturnValue           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*              CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_AddUnique_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetActorPrimitiveFadeOut_Set                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_FilterPrimitive_matches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraFadeScenery_C::SetActorSeeThrough(class AActor*& Actor, bool PrimitiveFiltered, bool CheckFilter, const TArray<class FString>& FilterInStrings, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_SetActorPrimitiveFadeOut_Set, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_FilterPrimitive_matches)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraFadeScenery_C", "SetActorSeeThrough");

	Params::BP_CameraFadeScenery_C_SetActorSeeThrough Parms{};

	Parms.Actor = Actor;
	Parms.PrimitiveFiltered = PrimitiveFiltered;
	Parms.CheckFilter = CheckFilter;
	Parms.FilterInStrings = std::move(FilterInStrings);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = std::move(CallFunc_K2_GetComponentsByClass_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_SetActorPrimitiveFadeOut_Set = CallFunc_SetActorPrimitiveFadeOut_Set;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FilterPrimitive_matches = CallFunc_FilterPrimitive_matches;

	UObject::ProcessEvent(Func, &Parms);

	Actor = Parms.Actor;
	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	CallFunc_K2_GetComponentsByClass_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentsByClass_ReturnValue);
}

}

