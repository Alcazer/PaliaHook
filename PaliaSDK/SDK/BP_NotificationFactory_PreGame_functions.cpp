#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationFactory_PreGame

#include "Basic.hpp"

#include "BP_NotificationFactory_PreGame_classes.hpp"
#include "BP_NotificationFactory_PreGame_parameters.hpp"


namespace SDK
{

// Function BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C.Add Generic Notification To Queue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification                    Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftClassPtr<class UClass>             NotificationWidgetClass                                (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CallFunc_LoadClassAsset_Blocking_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsUser_Widget                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue  (UObjectWrapper, HasGetValueTypeHash)
// class AVAL_PlayerControllerBase*        CallFunc_GetValeriaPlayerController_Controller         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_NotificationInterface_Simple_C>K2Node_DynamicCast_AsBP_Notification_Interface_Simple  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_PushNotification_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NotificationFactory_PreGame_C::Add_Generic_Notification_To_Queue(const struct FNotification& Notification, TSoftClassPtr<class UClass> NotificationWidgetClass, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_Controller, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IBP_NotificationInterface_Simple_C> K2Node_DynamicCast_AsBP_Notification_Interface_Simple, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_PushNotification_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationFactory_PreGame_C", "Add Generic Notification To Queue");

	Params::BP_NotificationFactory_PreGame_C_Add_Generic_Notification_To_Queue Parms{};

	Parms.Notification = std::move(Notification);
	Parms.NotificationWidgetClass = NotificationWidgetClass;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetValeriaPlayerController_Controller = CallFunc_GetValeriaPlayerController_Controller;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Notification_Interface_Simple = K2Node_DynamicCast_AsBP_Notification_Interface_Simple;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PushNotification_ReturnValue = std::move(CallFunc_PushNotification_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C.GetValeriaPlayerController
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVAL_PlayerControllerBase*        Controller                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_GetOuterObject_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_DynamicCast_AsWidget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AVAL_PlayerControllerBase*        K2Node_DynamicCast_AsVAL_Player_Controller_Base        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NotificationFactory_PreGame_C::GetValeriaPlayerController(class AVAL_PlayerControllerBase** Controller, class UObject* CallFunc_GetOuterObject_ReturnValue, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AVAL_PlayerControllerBase* K2Node_DynamicCast_AsVAL_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationFactory_PreGame_C", "GetValeriaPlayerController");

	Params::BP_NotificationFactory_PreGame_C_GetValeriaPlayerController Parms{};

	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWidget = K2Node_DynamicCast_AsWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVAL_Player_Controller_Base = K2Node_DynamicCast_AsVAL_Player_Controller_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}


// Function BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C.HandleOnGenericNotificationRequested
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification                    Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IVALUI_NotificationWidgetInterface>K2Node_DynamicCast_AsVALUI_Notification_Widget_Interface(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetLastNotificationOnStack_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue  (UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_MatchesNotification_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NotificationFactory_PreGame_C::HandleOnGenericNotificationRequested(const struct FNotification& Notification, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IVALUI_NotificationWidgetInterface> K2Node_DynamicCast_AsVALUI_Notification_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class UWidget* CallFunc_GetLastNotificationOnStack_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_MatchesNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationFactory_PreGame_C", "HandleOnGenericNotificationRequested");

	Params::BP_NotificationFactory_PreGame_C_HandleOnGenericNotificationRequested Parms{};

	Parms.Notification = std::move(Notification);
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsVALUI_Notification_Widget_Interface = K2Node_DynamicCast_AsVALUI_Notification_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetLastNotificationOnStack_ReturnValue = CallFunc_GetLastNotificationOnStack_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_MatchesNotification_ReturnValue = CallFunc_MatchesNotification_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(const struct FNotification& Notification)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AVAL_PlayerControllerBase*        CallFunc_GetValeriaPlayerController_Controller         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_NotificationFactory_PreGame_C::Initialize(TDelegate<void(const struct FNotification& Notification)> K2Node_CreateDelegate_OutputDelegate, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationFactory_PreGame_C", "Initialize");

	Params::BP_NotificationFactory_PreGame_C_Initialize Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValeriaPlayerController_Controller = CallFunc_GetValeriaPlayerController_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C.InitializeNotificationQueues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*         CallFunc_SpawnObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         CallFunc_SpawnObject_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         CallFunc_SpawnObject_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_NotificationFactory_PreGame_C::InitializeNotificationQueues(class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue, class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue_1, class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationFactory_PreGame_C", "InitializeNotificationQueues");

	Params::BP_NotificationFactory_PreGame_C_InitializeNotificationQueues Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);
}

}

