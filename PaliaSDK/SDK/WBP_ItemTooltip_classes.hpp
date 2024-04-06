#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemTooltip.WBP_ItemTooltip_C
// 0x0290 (0x0508 - 0x0278)
class UWBP_ItemTooltip_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Body;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_DestroyWarning;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Header;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Requirements_Funds;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Requirements_Owned;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Requirements_Skill;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_Cost;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_DaysToHarvest;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_Tooltip;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_Value;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CostCurrencyIcon;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ValueCurrencyIcon;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_WaveDivider;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Content;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Category;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_CostAmount;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_DaysToHarvestNumber;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Description;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Name;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Recipe;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Requirements_Skill;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_TotalValueAmount;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_ValueAmount;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Ingredients;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_IngredientsSection;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buff_C*                            WBP_Buff;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FocusPoints_C*                     WBP_FocusPoints;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Requirements;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowDestroyWarning;                               // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_49FD[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FValeriaItem                           Item;                                              // 0x0370(0x0068)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnFadedOut;                                        // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FStoreItem                             Store_Item;                                        // 0x03E8(0x0108)(Edit, BlueprintVisible, ExposeOnSpawn)
	EVALUI_TooltipType                            EItemToolTipType;                                  // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_49FE[0x3];                                     // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecipeConfigId;                                    // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        TooltipGamepadDelay;                               // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FadeInTimerHandle;                                 // 0x0500(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ItemTooltip(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FindConfig(const struct FValeriaItem& Valeria_Item, class UVAL_ItemTypeDefinitionAsset** Loaded_Item_Type, bool* Success, class UVAL_ItemTypeDefinitionAsset* ItemType, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetBodyColor(EItemRarity ItemRarity, struct FLinearColor* Color, EItemRarity Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default);
	void GetBuffIcon(bool IsStarQuality, class UVAL_ItemTypeDefinitionAsset* ItemType, class UTexture2D** BuffIcon, bool Temp_bool_Variable, class UTexture2D* CallFunc_GetQualityBuffIcon_BuffIcon, class UTexture2D* CallFunc_GetNormalBuffIcon_BuffIcon, class UTexture2D* K2Node_Select_Default);
	void GetBuffText(bool StarQuality, class UVAL_ItemTypeDefinitionAsset* Type, class FText* BuffText, bool Temp_bool_Variable, class FText CallFunc_GetNormalBuffText_BuffText, class FText CallFunc_GetQualityBuffText_BuffText, class FText K2Node_Select_Default);
	void GetHeaderColor(EItemRarity ItemRarity, struct FLinearColor* Color, EItemRarity Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default);
	void GetItemName(class UVAL_ItemTypeDefinitionAsset* ItemType, int32 TintPersistID, class FText* Text, bool CallFunc_Greater_IntInt_ReturnValue, TSoftObjectPtr<class UVAL_TintAsset> CallFunc_GetTintFromPersistID_ReturnValue, TSoftObjectPtr<class UVAL_TintAsset> CallFunc_GetTintFromPersistID_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UVAL_TintAsset* K2Node_DynamicCast_AsTint_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetNormalBuffIcon(class UVAL_ItemTypeDefinitionAsset* ItemType, class UTexture2D** BuffIcon, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetBuffDataTableRow_OutResult, const struct FBuffConfig& CallFunc_GetBuffDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetNormalBuffText(class UVAL_ItemTypeDefinitionAsset* ItemType, class FText* BuffText, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetBuffDataTableRow_OutResult, const struct FBuffConfig& CallFunc_GetBuffDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetQualityBuffIcon(class UVAL_ItemTypeDefinitionAsset* ItemType, class UTexture2D** BuffIcon, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetBuffDataTableRow_OutResult, const struct FBuffConfig& CallFunc_GetBuffDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetQualityBuffText(class UVAL_ItemTypeDefinitionAsset* ItemType, class FText* BuffText, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetBuffDataTableRow_OutResult, const struct FBuffConfig& CallFunc_GetBuffDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetSellValuePerItem(const struct FValeriaItem& Param_Item, int32* Amount, int32 CallFunc_ComputeSaleValuePerItem_vitalAmountPerItem, EVitalType CallFunc_ComputeSaleValuePerItem_vitalType, bool CallFunc_ItemIsEmpty_ReturnValue);
	void GetSellValueText(const struct FValeriaItem& Param_Item, class FText* Text, class FText CallFunc_GetSellTextForItem_OutSellText, bool CallFunc_ItemIsEmpty_ReturnValue);
	void GetStarQualityFocusReward(struct FQuestRewardConfig& QuestRewardConfig, int32* FocusAmount, class UQualityGlobalConfig* CallFunc_GetQualityGlobalConfig_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_IntFloat_B_ImplicitCast);
	void GetTotalSellValue(const struct FValeriaItem& Param_Item, int32* Amount, bool CallFunc_ItemIsEmpty_ReturnValue, int32 CallFunc_ComputeSaleValuePerItem_vitalAmountPerItem, EVitalType CallFunc_ComputeSaleValuePerItem_vitalType, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void HideItemRequirements();
	void HideStoreRequirements();
	void IsRecipe(bool* Param_IsRecipe, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void IsStarQuality(const struct FValeriaItem& Param_Item, bool* Param_IsStarQuality, bool CallFunc_Greater_ByteByte_ReturnValue);
	void OnFadedOut__DelegateSignature();
	void PlayFadeInAnimation();
	void PlayTooltipAnimation();
	void Set_Item_for_Tooltip(const struct FValeriaItem& NewItem, class UTexture2D* BuffIcon, class FText BuffText, class UVAL_ItemTypeDefinitionAsset* ItemType, bool bHasAlert);
	void SetCategory(class UVAL_ItemTypeDefinitionAsset* ItemType, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_GetItemCategoryName_Name, class FText K2Node_Select_Default);
	void SetCost(struct FStoreItem& StoreItemToDisplay, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> CallFunc_GetCostIcon_Icon);
	void SetDescription(struct FValeriaItem& Param_Item, class FText CallFunc_GetItemDescription_ReturnValue);
	void SetName(class UVAL_ItemTypeDefinitionAsset* ItemType, int32 TintPersistID, class FText CallFunc_GetItemName_Text);
	void SetRarity(EItemRarity Rarity, const struct FLinearColor& CallFunc_GetBodyColor_Color, const struct FLinearColor& CallFunc_GetHeaderColor_Color);
	void SetRequirement_AlreadyOwned(struct FStoreItem& StoreItemToDisplay, bool* IsRequirementMet, class UWBP_TooltipRequirement_C* CurrentRequirementWidget, bool RequirementMet, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_TooltipRequirement_C* CallFunc_Create_ReturnValue);
	void SetRequirement_CanAfford(struct FStoreItem& StoreItemToDisplay, bool* IsRequirementMet, class UWBP_TooltipRequirement_C* CurrentRequirementWidget, bool RequirementMet, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_TooltipRequirement_C* CallFunc_Create_ReturnValue);
	void SetRequirement_PlayerState(struct FStoreItem& StoreItemToDisplay, bool* IsRequirementMet, class UWBP_TooltipRequirement_C* CurrentRequirementWidget, bool RequirementMet, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_TooltipRequirement_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetRequirement_Skill(const struct FValeriaItem& ItemToDisplay, bool* IsRequirementMet, class UVAL_ItemTypeDefinitionAsset* ItemType, bool RequirementMet, ESlateVisibility Temp_byte_Variable, class UVAL_ItemTypeDefinitionAsset* CallFunc_FindConfig_Loaded_Item_Type, bool CallFunc_FindConfig_Success, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FSkillLevelConfig& CallFunc_GetSkillLevelConfigByType_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void SetupItem(const struct FValeriaItem& ItemToDisplay, bool bHasAlert, class UVAL_ItemTypeDefinitionAsset* ItemType, bool CallFunc_IsRecipe_IsRecipe, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetupItemRequirements_MeetsRequirements, class UVAL_ItemTypeDefinitionAsset* CallFunc_FindConfig_Loaded_Item_Type, bool CallFunc_FindConfig_Success, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void SetupItemRequirements(const struct FValeriaItem& ItemToDisplay, bool* MeetsRequirements, bool ShouldDisplayRequirementsBox, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_SetRequirement_Skill_IsRequirementMet);
	void SetupStoreItem(const struct FStoreItem& StoreItemToDisplay, const struct FValeriaItem& ValeriaItem, class UVAL_ItemTypeDefinitionAsset* ItemType);
	void SetupStoreItemRequirements(struct FStoreItem& StoreItemToDisplay, bool ShouldDisplayRequirementsBox, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_SetRequirement_AlreadyOwned_IsRequirementMet, bool CallFunc_SetRequirement_CanAfford_IsRequirementMet, bool CallFunc_SetRequirement_PlayerState_IsRequirementMet);
	void SetValue(const struct FValeriaItem& ItemToDisplay, bool CanSell, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_1, class UTexture2D* CallFunc_GetSellIconForItem_ReturnValue, bool CallFunc_IsRecipe_IsRecipe, class FText Temp_text_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetTotalSellValue_Amount, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, ESlateVisibility Temp_byte_Variable_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, ESlateVisibility Temp_byte_Variable_3, class FText K2Node_Select_Default, bool CallFunc_CanItemBeSold_ReturnValue, int32 CallFunc_GetSellValuePerItem_Amount, bool Temp_bool_Variable_4, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_GetSellValueText_Text, class FText K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetSellValuePerItem_Amount_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_4);
	void Update_Days_to_Harvest(class UVAL_ItemTypeDefinitionAsset* ItemType, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateBuff(const struct FValeriaItem& ValeriaItem, class FText BuffText, class UTexture2D* BuffIcon, class UVAL_ItemTypeDefinitionAsset* NewLocalVar_0, ESlateVisibility Temp_byte_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsStarQuality_IsStarQuality, class FText CallFunc_GetBuffText_BuffText, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsStarQuality_IsStarQuality_1, class UTexture2D* CallFunc_GetBuffIcon_BuffIcon);
	void UpdateFocusPoints(const struct FValeriaItem& Param_Item, class UWBP_FocusPoints_C* FocusPointsWidget, const struct FQuestRewardConfig& CurrentReward, int32 FocusAmount, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetStarQualityFocusReward_FocusAmount, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsStarQuality_IsStarQuality, class UVAL_ItemTypeDefinitionAsset* CallFunc_FindConfig_Loaded_Item_Type, bool CallFunc_FindConfig_Success, int32 CallFunc_SelectInt_ReturnValue, const struct FQuestRewardConfig& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateRecipeIngredientsForItem(class UVAL_ItemTypeDefinitionAsset* ItemType, const struct FRecipe_RequireItem& CurrentIngredient, const struct FRecipeConfig& RecipeConfig, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_StoreItemToolip_RecipeIngredient_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EValeriaFuncResult CallFunc_FindRecipeConfigById_OutResult, const struct FRecipeConfig& CallFunc_FindRecipeConfigById_ReturnValue, const struct FRecipe_RequireItem& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, class FName CallFunc_GetTagName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FIngredientTagConfig& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_FNameIsNone_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_GetItemName_Text, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_StoreItemToolip_RecipeIngredient_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemTooltip_C">();
	}
	static class UWBP_ItemTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemTooltip_C>();
	}
};
static_assert(alignof(UWBP_ItemTooltip_C) == 0x000008, "Wrong alignment on UWBP_ItemTooltip_C");
static_assert(sizeof(UWBP_ItemTooltip_C) == 0x000508, "Wrong size on UWBP_ItemTooltip_C");
static_assert(offsetof(UWBP_ItemTooltip_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, FadeIn) == 0x000280, "Member 'UWBP_ItemTooltip_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_Body) == 0x000288, "Member 'UWBP_ItemTooltip_C::Border_Body' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_DestroyWarning) == 0x000290, "Member 'UWBP_ItemTooltip_C::Border_DestroyWarning' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_Header) == 0x000298, "Member 'UWBP_ItemTooltip_C::Border_Header' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_Requirements_Funds) == 0x0002A0, "Member 'UWBP_ItemTooltip_C::Border_Requirements_Funds' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_Requirements_Owned) == 0x0002A8, "Member 'UWBP_ItemTooltip_C::Border_Requirements_Owned' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Border_Requirements_Skill) == 0x0002B0, "Member 'UWBP_ItemTooltip_C::Border_Requirements_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, HBox_Cost) == 0x0002B8, "Member 'UWBP_ItemTooltip_C::HBox_Cost' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, HBox_DaysToHarvest) == 0x0002C0, "Member 'UWBP_ItemTooltip_C::HBox_DaysToHarvest' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, HBox_Tooltip) == 0x0002C8, "Member 'UWBP_ItemTooltip_C::HBox_Tooltip' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, HBox_Value) == 0x0002D0, "Member 'UWBP_ItemTooltip_C::HBox_Value' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Image_CostCurrencyIcon) == 0x0002D8, "Member 'UWBP_ItemTooltip_C::Image_CostCurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Image_ValueCurrencyIcon) == 0x0002E0, "Member 'UWBP_ItemTooltip_C::Image_ValueCurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Image_WaveDivider) == 0x0002E8, "Member 'UWBP_ItemTooltip_C::Image_WaveDivider' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, SizeBox_Content) == 0x0002F0, "Member 'UWBP_ItemTooltip_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_Category) == 0x0002F8, "Member 'UWBP_ItemTooltip_C::Text_Category' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_CostAmount) == 0x000300, "Member 'UWBP_ItemTooltip_C::Text_CostAmount' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_DaysToHarvestNumber) == 0x000308, "Member 'UWBP_ItemTooltip_C::Text_DaysToHarvestNumber' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_Description) == 0x000310, "Member 'UWBP_ItemTooltip_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_Name) == 0x000318, "Member 'UWBP_ItemTooltip_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_Recipe) == 0x000320, "Member 'UWBP_ItemTooltip_C::Text_Recipe' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_Requirements_Skill) == 0x000328, "Member 'UWBP_ItemTooltip_C::Text_Requirements_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_TotalValueAmount) == 0x000330, "Member 'UWBP_ItemTooltip_C::Text_TotalValueAmount' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Text_ValueAmount) == 0x000338, "Member 'UWBP_ItemTooltip_C::Text_ValueAmount' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, VBox_Ingredients) == 0x000340, "Member 'UWBP_ItemTooltip_C::VBox_Ingredients' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, VBox_IngredientsSection) == 0x000348, "Member 'UWBP_ItemTooltip_C::VBox_IngredientsSection' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, WBP_Buff) == 0x000350, "Member 'UWBP_ItemTooltip_C::WBP_Buff' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, WBP_FocusPoints) == 0x000358, "Member 'UWBP_ItemTooltip_C::WBP_FocusPoints' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, WrapBox_Requirements) == 0x000360, "Member 'UWBP_ItemTooltip_C::WrapBox_Requirements' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, bShowDestroyWarning) == 0x000368, "Member 'UWBP_ItemTooltip_C::bShowDestroyWarning' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Item) == 0x000370, "Member 'UWBP_ItemTooltip_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, OnFadedOut) == 0x0003D8, "Member 'UWBP_ItemTooltip_C::OnFadedOut' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, Store_Item) == 0x0003E8, "Member 'UWBP_ItemTooltip_C::Store_Item' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, EItemToolTipType) == 0x0004F0, "Member 'UWBP_ItemTooltip_C::EItemToolTipType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, RecipeConfigId) == 0x0004F4, "Member 'UWBP_ItemTooltip_C::RecipeConfigId' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, TooltipGamepadDelay) == 0x0004F8, "Member 'UWBP_ItemTooltip_C::TooltipGamepadDelay' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltip_C, FadeInTimerHandle) == 0x000500, "Member 'UWBP_ItemTooltip_C::FadeInTimerHandle' has a wrong offset!");

}

