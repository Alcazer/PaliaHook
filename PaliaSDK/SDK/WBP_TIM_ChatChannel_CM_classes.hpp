#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatChannel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatChannel_CM.WBP_TIM_ChatChannel_CM_C
// 0x0078 (0x0338 - 0x02C0)
class UWBP_TIM_ChatChannel_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UnfurlHoverTab;                                    // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Disabled;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Enabled;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ChatChannelHoverTab;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                LongNameTextBlock;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Triangle_Trim;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChatChannelClicked;                              // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVALUI_ChatMessageConfig               MessageConfig;                                     // 0x0318(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_58A9[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TIM_ChatPanel_CM_C*                ChatPanelWidget;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EMessageTargetType                            Type;                                              // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChatChannelClicked__DelegateSignature(class UWBP_TIM_ChatChannel_CM_C* ChannelWidget);
	void BndEvt__WBP_TIM_ChatChannel_CM_Button_Disabled_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TIM_ChatChannel_CM_Button_Enabled_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void DisplayGlow(bool Display);
	void ExecuteUbergraph_WBP_TIM_ChatChannel_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, EVALUI_ChatPanelState CallFunc_GetCurrentChatState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Handle_On_Game_User_Settings_UI_Needs_Update();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void PlayEnteredAudio(EMessageTargetType Temp_byte_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, class UAkAudioEvent* Temp_object_Variable_4, class UAkAudioEvent* Temp_object_Variable_5, class UAkAudioEvent* Temp_object_Variable_6, class UAkAudioEvent* Temp_object_Variable_7, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_AkEventGlobal_ReturnValue);
	void PlayReleasedAudio(EMessageTargetType Temp_byte_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, class UAkAudioEvent* Temp_object_Variable_4, class UAkAudioEvent* Temp_object_Variable_5, class UAkAudioEvent* Temp_object_Variable_6, class UAkAudioEvent* Temp_object_Variable_7, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_AkEventGlobal_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void UpdateStyle(bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVALUI_ChatTab& CallFunc_TryGetTabAndChannelFromMessageConfig_OutTab, const struct FVALUI_ChatChannel& CallFunc_TryGetTabAndChannelFromMessageConfig_OutChannel, bool CallFunc_TryGetTabAndChannelFromMessageConfig_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatChannel_CM_C">();
	}
	static class UWBP_TIM_ChatChannel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatChannel_CM_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatChannel_CM_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatChannel_CM_C");
static_assert(sizeof(UWBP_TIM_ChatChannel_CM_C) == 0x000338, "Wrong size on UWBP_TIM_ChatChannel_CM_C");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatChannel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, UnfurlHoverTab) == 0x0002C8, "Member 'UWBP_TIM_ChatChannel_CM_C::UnfurlHoverTab' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Button_Disabled) == 0x0002D0, "Member 'UWBP_TIM_ChatChannel_CM_C::Button_Disabled' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Button_Enabled) == 0x0002D8, "Member 'UWBP_TIM_ChatChannel_CM_C::Button_Enabled' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, ChatChannelHoverTab) == 0x0002E0, "Member 'UWBP_TIM_ChatChannel_CM_C::ChatChannelHoverTab' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Glow) == 0x0002E8, "Member 'UWBP_TIM_ChatChannel_CM_C::Glow' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Image_Icon) == 0x0002F0, "Member 'UWBP_TIM_ChatChannel_CM_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, LongNameTextBlock) == 0x0002F8, "Member 'UWBP_TIM_ChatChannel_CM_C::LongNameTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Triangle_Trim) == 0x000300, "Member 'UWBP_TIM_ChatChannel_CM_C::Triangle_Trim' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, OnChatChannelClicked) == 0x000308, "Member 'UWBP_TIM_ChatChannel_CM_C::OnChatChannelClicked' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, MessageConfig) == 0x000318, "Member 'UWBP_TIM_ChatChannel_CM_C::MessageConfig' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, ChatPanelWidget) == 0x000328, "Member 'UWBP_TIM_ChatChannel_CM_C::ChatPanelWidget' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatChannel_CM_C, Type) == 0x000330, "Member 'UWBP_TIM_ChatChannel_CM_C::Type' has a wrong offset!");

}

