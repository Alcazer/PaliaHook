#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPlayerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6Core_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlatformPlayerName.WBP_PlatformPlayerName_C
// 0x00C8 (0x0340 - 0x0278)
class UWBP_PlatformPlayerName_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlatformIcon;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Icon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_PlayerName;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bDebugIcon;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF6[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NameText;                                          // 0x02A0(0x0018)(Edit, BlueprintVisible)
	TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>> PlatformStyleMap;                                  // 0x02B8(0x0050)(Edit, BlueprintVisible)
	struct FUniqueNetIdRepl                       OwnerNetId;                                        // 0x0308(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bEnablePlatformName;                               // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PlatformPlayerName(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Name, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NetId_1, class FText K2Node_CustomEvent_PlayerName, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NetId, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(const struct FPresence& OldPresence, const struct FPresence& NewPresence)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsPS5Platform_ReturnValue);
	void GetOwnerPlatform(ERedirectsPlatform* OwnerPlatform, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue);
	void InitTextStyleAppearance();
	bool IsLocalPlayer(class APlayerState* CallFunc_GetPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_BP_GetUniqueId_ReturnValue, bool CallFunc_EqualEqual_ReturnValue);
	void IsOnline(bool* bOnline, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	bool IsOverrideUsingPlatformId(bool CallFunc_IsLocalPlayer_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_IsSamePlatformWithLocalPayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsSamePlatformWithLocalPayer(ERedirectsPlatform CallFunc_GetOwnerPlatform_OwnerPlatform, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnFailure_5E7966E34BB7A82AC4C791BB7228478B(struct FGuid& AccountId);
	void OnPresenceChangeHandle(const struct FPresence& OldPresence, const struct FPresence& NewPresence, bool CallFunc_EqualEqual_ReturnValue);
	void OnSuccess_5E7966E34BB7A82AC4C791BB7228478B(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void OverrideNameWithPlatformName(class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsOnline_bOnline, bool CallFunc_IsOverrideUsingPlatformId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetDefaultPlatformNameStyled(TSoftObjectPtr<class UVALUI_TextBlockStyle> Styled, TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>& K2Node_MakeMap_Map);
	void SetPlatformNameStyled(TSoftObjectPtr<class UVALUI_TextBlockStyle> Styled, ERedirectsPlatform Platform, TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>& K2Node_MakeMap_Map);
	void SetPlayerName(class FText Param_Name);
	void Update_Platform_Data(const struct FUniqueNetIdRepl& NetId);
	void Update_Platform_Data_And_Assign_Name(const struct FUniqueNetIdRepl& NetId, class FText PlayerName);
	void UpdatePlatformIconAppearance(const TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>& PlatformIconMap, bool CallFunc_IsLocalPlayer_ReturnValue, bool CallFunc_IsSamePlatformWithLocalPayer_ReturnValue, const TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>& K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsOnline_bOnline, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlatformPlayerName_C">();
	}
	static class UWBP_PlatformPlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlatformPlayerName_C>();
	}
};
static_assert(alignof(UWBP_PlatformPlayerName_C) == 0x000008, "Wrong alignment on UWBP_PlatformPlayerName_C");
static_assert(sizeof(UWBP_PlatformPlayerName_C) == 0x000340, "Wrong size on UWBP_PlatformPlayerName_C");
static_assert(offsetof(UWBP_PlatformPlayerName_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PlatformPlayerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, PlatformIcon) == 0x000280, "Member 'UWBP_PlatformPlayerName_C::PlatformIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, SizeBox_Icon) == 0x000288, "Member 'UWBP_PlatformPlayerName_C::SizeBox_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, Text_PlayerName) == 0x000290, "Member 'UWBP_PlatformPlayerName_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, bDebugIcon) == 0x000298, "Member 'UWBP_PlatformPlayerName_C::bDebugIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, NameText) == 0x0002A0, "Member 'UWBP_PlatformPlayerName_C::NameText' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, PlatformStyleMap) == 0x0002B8, "Member 'UWBP_PlatformPlayerName_C::PlatformStyleMap' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, OwnerNetId) == 0x000308, "Member 'UWBP_PlatformPlayerName_C::OwnerNetId' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerName_C, bEnablePlatformName) == 0x000338, "Member 'UWBP_PlatformPlayerName_C::bEnablePlatformName' has a wrong offset!");

}

