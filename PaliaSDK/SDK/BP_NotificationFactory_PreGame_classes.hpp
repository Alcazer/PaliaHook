#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationFactory_PreGame

#include "Basic.hpp"

#include "ValeriaUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NotificationFactory_PreGame.BP_NotificationFactory_PreGame_C
// 0x0020 (0x0048 - 0x0028)
class UBP_NotificationFactory_PreGame_C final  : public UVALUI_NotificationFactory
{
public:
	class UVALUI_NotificationQueue*               NotificationQueue_Banner;                          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               NotificationQueue_Major;                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               NotificationQueue_Minor;                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LastNotification;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Generic_Notification_To_Queue(const struct FNotification& Notification, TSoftClassPtr<class UClass> NotificationWidgetClass, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_Controller, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IBP_NotificationInterface_Simple_C> K2Node_DynamicCast_AsBP_Notification_Interface_Simple, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_PushNotification_ReturnValue);
	void GetValeriaPlayerController(class AVAL_PlayerControllerBase** Controller, class UObject* CallFunc_GetOuterObject_ReturnValue, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AVAL_PlayerControllerBase* K2Node_DynamicCast_AsVAL_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1);
	void HandleOnGenericNotificationRequested(const struct FNotification& Notification, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IVALUI_NotificationWidgetInterface> K2Node_DynamicCast_AsVALUI_Notification_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class UWidget* CallFunc_GetLastNotificationOnStack_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_MatchesNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Initialize(TDelegate<void(const struct FNotification& Notification)> K2Node_CreateDelegate_OutputDelegate, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_Controller);
	void InitializeNotificationQueues(class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue, class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue_1, class UVALUI_NotificationQueue* CallFunc_SpawnObject_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NotificationFactory_PreGame_C">();
	}
	static class UBP_NotificationFactory_PreGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NotificationFactory_PreGame_C>();
	}
};
static_assert(alignof(UBP_NotificationFactory_PreGame_C) == 0x000008, "Wrong alignment on UBP_NotificationFactory_PreGame_C");
static_assert(sizeof(UBP_NotificationFactory_PreGame_C) == 0x000048, "Wrong size on UBP_NotificationFactory_PreGame_C");
static_assert(offsetof(UBP_NotificationFactory_PreGame_C, NotificationQueue_Banner) == 0x000028, "Member 'UBP_NotificationFactory_PreGame_C::NotificationQueue_Banner' has a wrong offset!");
static_assert(offsetof(UBP_NotificationFactory_PreGame_C, NotificationQueue_Major) == 0x000030, "Member 'UBP_NotificationFactory_PreGame_C::NotificationQueue_Major' has a wrong offset!");
static_assert(offsetof(UBP_NotificationFactory_PreGame_C, NotificationQueue_Minor) == 0x000038, "Member 'UBP_NotificationFactory_PreGame_C::NotificationQueue_Minor' has a wrong offset!");
static_assert(offsetof(UBP_NotificationFactory_PreGame_C, LastNotification) == 0x000040, "Member 'UBP_NotificationFactory_PreGame_C::LastNotification' has a wrong offset!");

}

