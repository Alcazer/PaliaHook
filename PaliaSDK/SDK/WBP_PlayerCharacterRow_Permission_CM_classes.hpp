#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerCharacterRow_Permission_CM

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C
// 0x0060 (0x0300 - 0x02A0)
class UWBP_PlayerCharacterRow_Permission_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   Highlight;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            S6UI_CustomNavigationGroup;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_PlayerName;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Role;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterProfileImage_CM_C*  WBP_PlayerCharacterProfileImage_CM;                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       Player_Net_Id;                                     // 0x02D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_CharacterId, struct FOSSVAL_CharacterNameAndId& K2Node_CustomEvent_FetchedCharacter, TDelegate<void(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)> K2Node_CreateDelegate_OutputDelegate, const struct FOSSVAL_CharacterNameAndId& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class FText CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UQueryManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UQueryManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class AValeriaCharacter* CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue, class AValeriaCharacter* CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1, class FText CallFunc_Permission_Enum_To_Text_Text, class FText CallFunc_Permission_Enum_To_Text_Text_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, struct FGuid& K2Node_CustomEvent_CharacterId_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, class UOSSVAL_GetCharacterNameByCharacterIdProxy* CallFunc_GetCharacterNameByCharacterId_ReturnValue, TDelegate<void(struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
	void OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE(struct FGuid& CharacterId);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter);
	void UpdatePlayer(const struct FUniqueNetIdRepl& PlayerNetId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerCharacterRow_Permission_CM_C">();
	}
	static class UWBP_PlayerCharacterRow_Permission_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerCharacterRow_Permission_CM_C>();
	}
};
static_assert(alignof(UWBP_PlayerCharacterRow_Permission_CM_C) == 0x000008, "Wrong alignment on UWBP_PlayerCharacterRow_Permission_CM_C");
static_assert(sizeof(UWBP_PlayerCharacterRow_Permission_CM_C) == 0x000300, "Wrong size on UWBP_PlayerCharacterRow_Permission_CM_C");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, Highlight) == 0x0002A8, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, S6UI_CustomNavigationGroup) == 0x0002B0, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::S6UI_CustomNavigationGroup' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, VALUI_TextBlock_PlayerName) == 0x0002B8, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::VALUI_TextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, VALUI_TextBlock_Role) == 0x0002C0, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::VALUI_TextBlock_Role' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, WBP_PlayerCharacterProfileImage_CM) == 0x0002C8, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::WBP_PlayerCharacterProfileImage_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterRow_Permission_CM_C, Player_Net_Id) == 0x0002D0, "Member 'UWBP_PlayerCharacterRow_Permission_CM_C::Player_Net_Id' has a wrong offset!");

}

