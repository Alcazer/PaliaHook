#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GearUtils_CM

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CommonInput_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GearUtils_CM.BP_GearUtils_CM_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GearUtils_CM_C final  : public UBlueprintFunctionLibrary
{
public:
	static void UnequipGear(class APlayerController* OwningPlayer, class UGearComponent* GearComponent, class UGearSlotTypeConfig* SlotType, const struct FBagSlotLocation& DesiredSlot, int32 IndexWithinType, class UObject* __WorldContext, class UWidget** Widget, class UUserWidget* PopUpWidget, const TArray<class UWBP_Template_Button_CM_C*>& Buttons, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UCommonInputSubsystem* CallFunc_GetCommonInputSystem_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWBP_PinRemoveConfirmModal_CM_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_2, EGearChangeResult CallFunc_CanRemoveGearBySlotType_ReturnValue, class UWBP_SimpleModalDialog_PF_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UWBP_SimpleModalDialog_CM_C* CallFunc_Create_ReturnValue_2, class FText Temp_text_Variable_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GearUtils_CM_C">();
	}
	static class UBP_GearUtils_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GearUtils_CM_C>();
	}
};
static_assert(alignof(UBP_GearUtils_CM_C) == 0x000008, "Wrong alignment on UBP_GearUtils_CM_C");
static_assert(sizeof(UBP_GearUtils_CM_C) == 0x000028, "Wrong size on UBP_GearUtils_CM_C");

}
