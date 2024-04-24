#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginVideo_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoginVideo_PF.WBP_LoginVideo_PF_C
// 0x0030 (0x02F0 - 0x02C0)
class UWBP_LoginVideo_PF_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Background;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Video;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       LoginMediaPlayer;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentVisibleState;                               // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastVisibleState;                                  // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DA1[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TickTimeHandler;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActiveWidget(bool CallFunc_Play_ReturnValue);
	void Construct();
	void DeactiveWidget();
	void Destruct();
	void ExecuteUbergraph_WBP_LoginVideo_PF(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TickWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoginVideo_PF_C">();
	}
	static class UWBP_LoginVideo_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoginVideo_PF_C>();
	}
};
static_assert(alignof(UWBP_LoginVideo_PF_C) == 0x000008, "Wrong alignment on UWBP_LoginVideo_PF_C");
static_assert(sizeof(UWBP_LoginVideo_PF_C) == 0x0002F0, "Wrong size on UWBP_LoginVideo_PF_C");
static_assert(offsetof(UWBP_LoginVideo_PF_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_LoginVideo_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, Image_Background) == 0x0002C8, "Member 'UWBP_LoginVideo_PF_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, Image_Video) == 0x0002D0, "Member 'UWBP_LoginVideo_PF_C::Image_Video' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, LoginMediaPlayer) == 0x0002D8, "Member 'UWBP_LoginVideo_PF_C::LoginMediaPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, CurrentVisibleState) == 0x0002E0, "Member 'UWBP_LoginVideo_PF_C::CurrentVisibleState' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, LastVisibleState) == 0x0002E1, "Member 'UWBP_LoginVideo_PF_C::LastVisibleState' has a wrong offset!");
static_assert(offsetof(UWBP_LoginVideo_PF_C, TickTimeHandler) == 0x0002E8, "Member 'UWBP_LoginVideo_PF_C::TickTimeHandler' has a wrong offset!");

}

