#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Kick_ModalDialogue_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Kick_ModalDialogue_PF.WBP_Kick_ModalDialogue_PF_C
// 0x0078 (0x05D0 - 0x0558)
class UWBP_Kick_ModalDialogue_PF_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_PopupSecondary_02_PF_C*   KickPopup;                                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupSecondary_02_PF_C*   UnkickPopup;                                       // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Permission_CM_C* WBP_PlayerCharacterRow_Permission_CM_KIck;         // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Permission_CM_C* WBP_PlayerCharacterRow_Permission_CM_UnKick;       // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherKickMode;                            // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       TargetUserId;                                      // 0x0588(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BlockErrorSent;                                    // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Kick;                                              // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BlockErrorSent__DelegateSignature(const struct FUniqueNetIdRepl& UserId, EVAL_SocialBlockError BlockError);
	void BndEvt__WBP_Kick_ModalDialogue_CM_UnkickPopup_K2Node_ComponentBoundEvent_6_Cancel__DelegateSignature();
	void BndEvt__WBP_Kick_ModalDialogue_CM_UnkickPopup_K2Node_ComponentBoundEvent_8_Confirm__DelegateSignature();
	void BndEvt__WBP_Kick_ModalDialogue_CM_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_4_Cancel__DelegateSignature();
	void BndEvt__WBP_Kick_ModalDialogue_CM_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_5_Confirm__DelegateSignature();
	bool BP_OnHandleBackAction();
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_Kick_ModalDialogue_PF(int32 EntryPoint, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_1, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_1, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_AkEventGlobal_ReturnValue_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue_1, class UWBP_PlayerCharacterRow_Permission_CM_C* K2Node_Select_Default);
	void KickPlayer();
	void UnkickPlayer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Kick_ModalDialogue_PF_C">();
	}
	static class UWBP_Kick_ModalDialogue_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Kick_ModalDialogue_PF_C>();
	}
};
static_assert(alignof(UWBP_Kick_ModalDialogue_PF_C) == 0x000008, "Wrong alignment on UWBP_Kick_ModalDialogue_PF_C");
static_assert(sizeof(UWBP_Kick_ModalDialogue_PF_C) == 0x0005D0, "Wrong size on UWBP_Kick_ModalDialogue_PF_C");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_Kick_ModalDialogue_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, KickPopup) == 0x000560, "Member 'UWBP_Kick_ModalDialogue_PF_C::KickPopup' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, UnkickPopup) == 0x000568, "Member 'UWBP_Kick_ModalDialogue_PF_C::UnkickPopup' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, WBP_PlayerCharacterRow_Permission_CM_KIck) == 0x000570, "Member 'UWBP_Kick_ModalDialogue_PF_C::WBP_PlayerCharacterRow_Permission_CM_KIck' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, WBP_PlayerCharacterRow_Permission_CM_UnKick) == 0x000578, "Member 'UWBP_Kick_ModalDialogue_PF_C::WBP_PlayerCharacterRow_Permission_CM_UnKick' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, WidgetSwitcherKickMode) == 0x000580, "Member 'UWBP_Kick_ModalDialogue_PF_C::WidgetSwitcherKickMode' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, TargetUserId) == 0x000588, "Member 'UWBP_Kick_ModalDialogue_PF_C::TargetUserId' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, BlockErrorSent) == 0x0005B8, "Member 'UWBP_Kick_ModalDialogue_PF_C::BlockErrorSent' has a wrong offset!");
static_assert(offsetof(UWBP_Kick_ModalDialogue_PF_C, Kick) == 0x0005C8, "Member 'UWBP_Kick_ModalDialogue_PF_C::Kick' has a wrong offset!");

}

