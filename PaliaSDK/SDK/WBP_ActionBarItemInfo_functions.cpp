#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBarItemInfo

#include "Basic.hpp"

#include "WBP_ActionBarItemInfo_classes.hpp"
#include "WBP_ActionBarItemInfo_parameters.hpp"


namespace SDK
{

// Function WBP_ActionBarItemInfo.WBP_ActionBarItemInfo_C.ExecuteUbergraph_WBP_ActionBarItemInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_Activate                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarItemInfo_C::ExecuteUbergraph_WBP_ActionBarItemInfo(int32 EntryPoint, bool K2Node_CustomEvent_Activate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarItemInfo_C", "ExecuteUbergraph_WBP_ActionBarItemInfo");

	Params::WBP_ActionBarItemInfo_C_ExecuteUbergraph_WBP_ActionBarItemInfo Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Activate = K2Node_CustomEvent_Activate;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarItemInfo.WBP_ActionBarItemInfo_C.OnToggleChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarItemInfo_C::OnToggleChange(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarItemInfo_C", "OnToggleChange");

	Params::WBP_ActionBarItemInfo_C_OnToggleChange Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarItemInfo.WBP_ActionBarItemInfo_C.Set Item Definition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>NewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Displays                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PrimitiveImage_C*            CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PrimitiveImage_C*            CallFunc_Create_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*     K2Node_DynamicCast_AsItem_Type_Definition              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>           Temp_softobject_Variable                               (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_GetConsoleVariableBoolValue_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>           Temp_softobject_Variable_1                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UWBP_PrimitiveImage_C*            CallFunc_Create_ReturnValue_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PrimitiveImage_C*            CallFunc_Create_ReturnValue_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasTag_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue_1         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasTag_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasTag_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasTag_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>           Temp_softobject_Variable_2                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue_2         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>           Temp_softobject_Variable_3                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue_3         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarItemInfo_C::Set_Item_Definition(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> NewItem, bool* Displays, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UObject> Temp_softobject_Variable, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, TSoftObjectPtr<class UObject> Temp_softobject_Variable_1, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_3, bool CallFunc_HasTag_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, TSoftObjectPtr<class UObject> Temp_softobject_Variable_2, bool CallFunc_BooleanOR_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, TSoftObjectPtr<class UObject> Temp_softobject_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarItemInfo_C", "Set Item Definition");

	Params::WBP_ActionBarItemInfo_C_Set_Item_Definition Parms{};

	Parms.NewItem = NewItem;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = K2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_3 = CallFunc_AddChildToHorizontalBox_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Displays != nullptr)
		*Displays = Parms.Displays;
}

}
