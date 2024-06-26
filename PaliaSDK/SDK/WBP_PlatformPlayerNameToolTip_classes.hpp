#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPlayerNameToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6Core_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C
// 0x0050 (0x0310 - 0x02C0)
class UWBP_PlatformPlayerNameToolTip_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                PlatformNameText;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerName_C*              PlayerName;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                PlayerPlatformName;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       OwnerNetId;                                        // 0x02E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void UpdatePlatformData(const struct FUniqueNetIdRepl& NetId, bool CallFunc_IsValid_ReturnValue);
	void Refresh_Platform_Data();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_PlatformPlayerNameToolTip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, ERedirectsPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, class FText K2Node_Select_Default);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlatformPlayerNameToolTip_C">();
	}
	static class UWBP_PlatformPlayerNameToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlatformPlayerNameToolTip_C>();
	}
};
static_assert(alignof(UWBP_PlatformPlayerNameToolTip_C) == 0x000008, "Wrong alignment on UWBP_PlatformPlayerNameToolTip_C");
static_assert(sizeof(UWBP_PlatformPlayerNameToolTip_C) == 0x000310, "Wrong size on UWBP_PlatformPlayerNameToolTip_C");
static_assert(offsetof(UWBP_PlatformPlayerNameToolTip_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_PlatformPlayerNameToolTip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerNameToolTip_C, PlatformNameText) == 0x0002C8, "Member 'UWBP_PlatformPlayerNameToolTip_C::PlatformNameText' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerNameToolTip_C, PlayerName) == 0x0002D0, "Member 'UWBP_PlatformPlayerNameToolTip_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerNameToolTip_C, PlayerPlatformName) == 0x0002D8, "Member 'UWBP_PlatformPlayerNameToolTip_C::PlayerPlatformName' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformPlayerNameToolTip_C, OwnerNetId) == 0x0002E0, "Member 'UWBP_PlatformPlayerNameToolTip_C::OwnerNetId' has a wrong offset!");

}

