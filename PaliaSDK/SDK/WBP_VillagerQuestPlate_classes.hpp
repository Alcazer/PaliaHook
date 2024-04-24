#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerQuestPlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VillagerQuestPlate.WBP_VillagerQuestPlate_C
// 0x0048 (0x0308 - 0x02C0)
class UWBP_VillagerQuestPlate_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_QuestStatus;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*              Villager;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bWorldVillagerType;                                // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BFB[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IdIsVillagerCoreId;                                // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BFC[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      OwningValeriaCharacter;                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDialogueManagerComponent*              DialogueManagerComponent;                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EDialogueTypeCategory                         DialogueTypeCategory;                              // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BFD[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTrackingComponent*                     TrackingComponent;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void DialogueHistoryChanged(class UDialogueManagerComponent* Param_DialogueManagerComponent, bool CallFunc_UpdateQuestStatus_ControlQuestTimer);
	void ExecuteUbergraph_WBP_VillagerQuestPlate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UpdateQuestStatus_ControlQuestTimer, TDelegate<void(class UDialogueManagerComponent* DialogueManagerComponent)> K2Node_CreateDelegate_OutputDelegate, class AValeriaCharacter* CallFunc_WaitForValeriaCharacter_valeriaCharacter, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void(class UTrackingComponent* TrackingComponent)> K2Node_CreateDelegate_OutputDelegate_1, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UTrackingComponent* CallFunc_GetTrackingComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UDialogueManagerComponent* CallFunc_GetDialogueManager_ReturnValue, TDelegate<void(class UTrackingComponent* TrackingComponent)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UDialogueManagerComponent* DialogueManagerComponent)> K2Node_CreateDelegate_OutputDelegate_3);
	void GetQuestStatusIconForVillager(TSoftObjectPtr<class UTexture2D>* QuestStatusIcon, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTrackingComponent* CallFunc_GetTrackingComponent_ReturnValue, EDialogueType CallFunc_GetDialogueTypeForOnMapVillager_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestIconForDialogueType_ReturnValue);
	void GetQuestStatusIconForVillagerCoreId(TSoftObjectPtr<class UTexture2D>* QuestStatusIcon, class UTexture2D* BestTexture, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPrimaryVillagerIdByVillagerCoreId_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class UTrackingComponent* CallFunc_GetTrackingComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EDialogueType CallFunc_GetDialogueTypeForBestVillagerId_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestIconForDialogueType_ReturnValue);
	void GetQuestStatusIconForVillagerId(TSoftObjectPtr<class UTexture2D>* QuestStatusIcon, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTrackingComponent* CallFunc_GetTrackingComponent_ReturnValue, EDialogueType CallFunc_GetDialogueTypeForBestVillagerId_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestIconForDialogueType_ReturnValue);
	void GetQuestStatusIconVisibility(ESlateVisibility* Param_Visibility, ESlateVisibility CallFunc_GetVisibility_ReturnValue);
	void SetDialogueTypeCategory(EDialogueTypeCategory InDialogueTypeCategory);
	void SetIdAndReferenceType(int32 NewId, bool bUseVillagerCoreId, bool CallFunc_UpdateQuestStatus_ControlQuestTimer);
	void SetVillager(class AValeriaVillagerCharacter* InVillager, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetVillagerConfigId_ReturnValue);
	void TrackedVillagerInfosChangedRecently(class UTrackingComponent* Param_TrackingComponent, bool CallFunc_UpdateQuestStatus_ControlQuestTimer);
	void Try_Get_Owning_Valeria_Character();
	void UpdateQuestStatus(bool* ControlQuestTimer, TSoftObjectPtr<class UTexture2D> BestSoftTexture, class UTexture2D* BestTexture, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestStatusIconForVillager_QuestStatusIcon, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestStatusIconForVillagerCoreId_QuestStatusIcon, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestStatusIconForVillagerId_QuestStatusIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VillagerQuestPlate_C">();
	}
	static class UWBP_VillagerQuestPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VillagerQuestPlate_C>();
	}
};
static_assert(alignof(UWBP_VillagerQuestPlate_C) == 0x000008, "Wrong alignment on UWBP_VillagerQuestPlate_C");
static_assert(sizeof(UWBP_VillagerQuestPlate_C) == 0x000308, "Wrong size on UWBP_VillagerQuestPlate_C");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_VillagerQuestPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, Image_QuestStatus) == 0x0002C8, "Member 'UWBP_VillagerQuestPlate_C::Image_QuestStatus' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, Villager) == 0x0002D0, "Member 'UWBP_VillagerQuestPlate_C::Villager' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, bWorldVillagerType) == 0x0002D8, "Member 'UWBP_VillagerQuestPlate_C::bWorldVillagerType' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, ID) == 0x0002DC, "Member 'UWBP_VillagerQuestPlate_C::ID' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, IdIsVillagerCoreId) == 0x0002E0, "Member 'UWBP_VillagerQuestPlate_C::IdIsVillagerCoreId' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, OwningValeriaCharacter) == 0x0002E8, "Member 'UWBP_VillagerQuestPlate_C::OwningValeriaCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, DialogueManagerComponent) == 0x0002F0, "Member 'UWBP_VillagerQuestPlate_C::DialogueManagerComponent' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, DialogueTypeCategory) == 0x0002F8, "Member 'UWBP_VillagerQuestPlate_C::DialogueTypeCategory' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerQuestPlate_C, TrackingComponent) == 0x000300, "Member 'UWBP_VillagerQuestPlate_C::TrackingComponent' has a wrong offset!");

}
