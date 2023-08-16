#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_UiHelpers.BPFL_UiHelpers_C
class UBPFL_UiHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPFL_UiHelpers_C");
		return Clss;
	}

	void TryDisplayBonusReceivedModal(const struct FVALUI_PremiumStorefrontResponse& InStorefrontResponse, TSet<struct FGuid> InNewEntitlements, class UObject* In__WorldContext, class UWBP_PetsBonusReceived_ModalWidget_C** InBonus_Received_Modal, class UWBP_PetsBonusReceived_ModalWidget_C* InModal, const struct FVAL_CharacterCustomization_PetPurchaseBonus& InPetPurchaseBonus, class AValeriaPlayerController* InValeriaPlayerController, const TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InNewPets, enum class EValeriaFuncResult InCallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerController_ReturnValue, bool InK2Node_SwitchEnum_CmpSuccess, class US6UI_UIManagerWidgetBase* InCallFunc_GetUIManagerWidget_ReturnValue, class UWBP_PetsBonusReceived_ModalWidget_C* InCallFunc_Create_ReturnValue, TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InCallFunc_GetNewPetsForBonusReceivedModal_ReturnValue, const struct FVAL_CharacterCustomization_PetPurchaseBonus& InCallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue);
	void DoesWorldLocationContextMatchCurrentTravelType(enum class EWorldLocationContext InWorldLocationContext, enum class ETeleportTravelType InTravelType, class UObject* In__WorldContext, bool* InDoesMatch, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_2, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_3, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_4);
	void GetVillagerMarkerTextureForDialogueType(enum class EDialogueType InDialogueType, class UObject* In__WorldContext, class UTexture2D** InDeterminedTexture, bool InK2Node_SwitchEnum_CmpSuccess);
	void GetVillagerMarkerTextureForStatus(enum class EVillagerMarkerStatus InVillagerMarkerStatus, class UObject* In__WorldContext, class UTexture2D** InDeterminedTexture, bool InK2Node_SwitchEnum_CmpSuccess);
	void SetVisibility(class UWidget* InTarget, enum class ESlateVisibility InVisibility, class UObject* In__WorldContext, enum class ESlateVisibility InCallFunc_GetVisibility_ReturnValue, bool InCallFunc_NotEqual_ByteByte_ReturnValue);
	void GetCostIcon(const struct FStoreItem& InStoreItem, class UObject* InContext, class UObject* In__WorldContext, class UTexture2D** InIcon, enum class EValeriaFuncResult InCallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& InCallFunc_FindVitalConfigByType_ReturnValue, const struct FPrimaryAssetId& InK2Node_MakeStruct_PrimaryAssetId, class UObject* InCallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UCurrencyConfig* InK2Node_DynamicCast_AsCurrency_Config, bool InK2Node_DynamicCast_bSuccess, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_FNameIsNone_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue);
	void IsWithinMap(const struct FVector& InLocation, const struct FWorldMapConfig& InWorldMapConfig, class UObject* In__WorldContext, bool* InInsideOf, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, bool InCallFunc_Not_PreBool_ReturnValue, double InCallFunc_BreakVector_X_2, double InCallFunc_BreakVector_Y_2, double InCallFunc_BreakVector_Z_2, double InCallFunc_BreakVector_X_3, double InCallFunc_BreakVector_Y_3, double InCallFunc_BreakVector_Z_3, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_1, double InCallFunc_BreakVector_X_4, double InCallFunc_BreakVector_Y_4, double InCallFunc_BreakVector_Z_4, double InCallFunc_BreakVector_X_5, double InCallFunc_BreakVector_Y_5, double InCallFunc_BreakVector_Z_5, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue_2, bool InCallFunc_BooleanOR_ReturnValue);
	void SortUniformGridPanelByVisibility(class UUniformGridPanel* InUniformGridPanel, int32 InColumnSize, class UObject* In__WorldContext, class UUniformGridSlot* InLocalGridSlot, class UWidget* InLocalWidgetVar, int32 InLocalNumVisibleChildren, int32 InCallFunc_GetChildrenCount_ReturnValue, int32 InCallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility InCallFunc_GetVisibility_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Divide_IntInt_ReturnValue, int32 InCallFunc_Percent_IntInt_ReturnValue, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, class UWidget* InCallFunc_GetChildAt_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_1, class UUniformGridSlot* InCallFunc_SlotAsUniformGridSlot_ReturnValue);
	void Get_World_Map_by_Player_Position(class UObject* In__WorldContext, struct FWorldMapConfig* InWorldMapConfig, bool* InFound, int32 InTemp_int_Array_Index_Variable, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, class APawn* InCallFunc_K2_GetPawn_ReturnValue, const class FString& InCallFunc_GetCurrentLevelName_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, const struct FConfigsManager& InCallFunc_GetConfigsManager_ConfigsManager, bool InCallFunc_GetConfigsManager_IsValid, int32 InCallFunc_Add_IntInt_ReturnValue, const struct FWorldMapConfig& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_IsWithinMap_InsideOf, bool InCallFunc_Contains_ReturnValue);
	void GetConfigsManager(class UObject* In__WorldContext, struct FConfigsManager* InConfigsManager, bool* InIsValid, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess, const struct FConfigsManager& InCallFunc_GetConfigsManager_ReturnValue);
	void AreCheatsEnabled(class UObject* InContext, class UObject* In__WorldContext, bool* InResult, class AValeriaCharacter* InCharacterCached, enum class EValeriaFuncResult InCallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* InCallFunc_GetValeriaCharacter_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InK2Node_SwitchEnum_CmpSuccess, class UDebugInfoComponent* InCallFunc_GetDebugInfoComponent_ReturnValue, bool InCallFunc_AreCheatsEnabled_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1);
	void GetItemStorageCategoryIcon(enum class EItemStorageCategory InCategory, class UObject* In__WorldContext, class UTexture2D** InName, enum class EItemStorageCategory InTemp_byte_Variable, class UTexture2D* InTemp_object_Variable, class UTexture2D* InTemp_object_Variable_1, class UTexture2D* InTemp_object_Variable_2, class UTexture2D* InTemp_object_Variable_3, class UTexture2D* InTemp_object_Variable_4, class UTexture2D* InTemp_object_Variable_5, class UTexture2D* InTemp_object_Variable_6, class UTexture2D* InTemp_object_Variable_7, class UTexture2D* InTemp_object_Variable_8, class UTexture2D* InTemp_object_Variable_9, class UTexture2D* InTemp_object_Variable_10, class UTexture2D* InTemp_object_Variable_11, class UTexture2D* InTemp_object_Variable_12, class UTexture2D* InTemp_object_Variable_13, class UTexture2D* InK2Node_Select_Default);
	void GetItemQualityName(enum class EItemQuality InItemQuality, class UObject* In__WorldContext, class FText* InName, enum class EItemQuality InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InK2Node_Select_Default);
	void GetItemQualityColor(enum class EItemQuality InItemQuality, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemQuality InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InK2Node_Select_Default);
	void GetItemRarityName(enum class EItemRarity InItemRarity, class UObject* In__WorldContext, class FText* InName, enum class EItemRarity InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InK2Node_Select_Default);
	void GetItemRarityColor(enum class EItemRarity InItemRarity, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemRarity InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InK2Node_Select_Default);
	void GetCurrentDay(class UObject* In__WorldContext, int32* InCurrentDay, bool* InIsValid, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool InCallFunc_IsValeriaTimeValid_ReturnValue, int32 InCallFunc_GetCurrentDay_ReturnValue);
	void CanItemBeRequested_(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class UObject* In__WorldContext, bool* InIsRequestable_, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue);
	void GetItemStorageCategoryName(enum class EItemStorageCategory InCategory, class UObject* In__WorldContext, class FText* InName, enum class EItemStorageCategory InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InTemp_text_Variable_7, class FText InTemp_text_Variable_8, class FText InTemp_text_Variable_9, class FText InTemp_text_Variable_10, class FText InTemp_text_Variable_11, class FText InTemp_text_Variable_12, class FText InTemp_text_Variable_13, class FText InK2Node_Select_Default);
	void CheckTimePassed(double InTimePassed, double InDeltaTime, double InPeriod, class UObject* In__WorldContext, double* InNewTimePassed, bool* InHasPassed, double InTmpTimePassed, double InCallFunc_Add_DoubleDouble_ReturnValue, bool InCallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void WorldPositionToUiPosition(const struct FVector& InWorldPosition, const struct FBox2D& InWorldBounds, const struct FVector2D& InUiSize, enum class EWorldToUiScaling InScaling, class UObject* In__WorldContext, struct FVector2D* InUiPosition, const struct FVector2D& InTmpWorldHalfExtents, const struct FVector2D& InTmpWorldCenter, enum class EWorldToUiScaling InTemp_byte_Variable, double InCallFunc_BreakVector2D_X, double InCallFunc_BreakVector2D_Y, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& InK2Node_Select_Default, const struct FVector2D& InCallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& InCallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& InCallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& InCallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& InCallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void IsAlmostBurnt_(class UCrafterComponent* InCrafter, class UObject* In__WorldContext, bool* InIsAlmostBurnt, bool InTemp_bool_Variable, int32 InCallFunc_GetTimeRemainingTillBurntMs_ReturnValue, bool InCallFunc_InRange_IntInt_ReturnValue, enum class ECrafterState InCallFunc_GetCrafterState_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InTemp_bool_Variable_1, bool InTemp_bool_Variable_2, bool InTemp_bool_Variable_3, bool InTemp_bool_Variable_4, enum class ECrafterState InTemp_byte_Variable, bool InK2Node_Select_Default);
	void GetGwgTriplesTeamColor(bool InGoodGuys, class UObject* In__WorldContext, struct FLinearColor* InColor, bool InTemp_bool_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InK2Node_Select_Default);
	void IsDebuggingOn_(class UObject* InContext, class UObject* In__WorldContext, bool* InIsDebuggingOn, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsDebuggingOn_ReturnValue);
	void FormatClockTimInValeriaDHM(const struct FClockTimeInValeria& InTime, class UObject* In__WorldContext, class FString* InResult, const class FString& InCallFunc_FormatClockTimeInValeria_Result, const class FString& InCallFunc_Conv_IntToString_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2);
	void FormatClockTimeInValeria(const struct FClockTimeInValeria& InTime, class UObject* In__WorldContext, class FString* InResult, const class FString& InTemp_string_Variable, bool InCallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& InCallFunc_Conv_IntToString_ReturnValue, bool InCallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 InCallFunc_Percent_IntInt_ReturnValue, const class FString& InTemp_string_Variable_1, bool InCallFunc_EqualEqual_IntInt_ReturnValue, bool InTemp_bool_Variable, int32 InTemp_int_Variable, bool InTemp_bool_Variable_1, int32 InK2Node_Select_Default, const class FString& InCallFunc_Conv_IntToString_ReturnValue_1, const class FString& InTemp_string_Variable_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InTemp_string_Variable_3, bool InTemp_bool_Variable_2, const class FString& InK2Node_Select_Default_1, const class FString& InK2Node_Select_Default_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_3, const class FString& InCallFunc_Concat_StrStr_ReturnValue_4);
	void GetTimeOfDayLerp(class UObject* InContext, class UObject* In__WorldContext, double* InTimeOfDayLerp, bool* InIsValid, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue_1, float InCallFunc_GetTimeOfDayLerp_ReturnValue, bool InCallFunc_IsValeriaTimeValid_ReturnValue, double InK2Node_FunctionResult_TimeOfDayLerp_ImplicitCast);
	void GetItemCategoryName(enum class EItemCategory InItemCategory, class UObject* In__WorldContext, class FText* InName, enum class EItemCategory InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InTemp_text_Variable_7, class FText InTemp_text_Variable_8, class FText InTemp_text_Variable_9, class FText InTemp_text_Variable_10, class FText InTemp_text_Variable_11, class FText InTemp_text_Variable_12, class FText InTemp_text_Variable_13, class FText InTemp_text_Variable_14, class FText InTemp_text_Variable_15, class FText InTemp_text_Variable_16, class FText InTemp_text_Variable_17, class FText InTemp_text_Variable_18, class FText InTemp_text_Variable_19, class FText InTemp_text_Variable_20, class FText InTemp_text_Variable_21, class FText InTemp_text_Variable_22, class FText InTemp_text_Variable_23, class FText InTemp_text_Variable_24, class FText InTemp_text_Variable_25, class FText InTemp_text_Variable_26, class FText InK2Node_Select_Default);
	void SetCanvasSlotToScreenCoords(const struct FVector2D& InScreen_Position, class UCanvasPanelSlot* InCanvas_Slot, class UObject* In__WorldContext, const struct FAnchors& InK2Node_MakeStruct_Anchors);
	void ChangeCanvasSlotPosition(class UCanvasPanelSlot* InToChange, class UCanvasPanelSlot* InToCopyFrom, class UObject* In__WorldContext, int32 InCallFunc_GetZOrder_ReturnValue, const struct FVector2D& InCallFunc_GetSize_ReturnValue, const struct FAnchorData& InCallFunc_GetLayout_ReturnValue, bool InCallFunc_GetAutoSize_ReturnValue, const struct FVector2D& InCallFunc_GetAlignment_ReturnValue, const struct FVector2D& InCallFunc_GetPosition_ReturnValue, const struct FAnchors& InCallFunc_GetAnchors_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue);
	void CenterMousePointer(class UObject* InWorldContextObject, class UObject* In__WorldContext, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, const struct FVector2D& InCallFunc_GetViewportSize_ReturnValue, double InCallFunc_BreakVector2D_X, double InCallFunc_BreakVector2D_Y, double InCallFunc_Divide_DoubleDouble_ReturnValue, double InCallFunc_Divide_DoubleDouble_ReturnValue_1, int32 InCallFunc_FTrunc_ReturnValue, int32 InCallFunc_FTrunc_ReturnValue_1);
	void IsShiftDown_(class APlayerController* InPlayerController, class UObject* In__WorldContext, bool* InResult, float InCallFunc_GetInputKeyTimeDown_ReturnValue, float InCallFunc_GetInputKeyTimeDown_ReturnValue_1, bool InCallFunc_Greater_DoubleDouble_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue_1, bool InCallFunc_BooleanOR_ReturnValue, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void ShowHideWidget(class UUserWidget* InUserWidget, bool InIsVisible_, bool InUiBlocksInput_, class UObject* In__WorldContext, bool InTmpWasVisible, class UUserWidget* InTmpUserWidgetToToggle, enum class ESlateVisibility InTemp_byte_Variable, enum class ESlateVisibility InTemp_byte_Variable_1, bool InTemp_bool_Variable, bool InCallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility InK2Node_Select_Default, bool InCallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class IBPI_VisibilityChanges_C> InK2Node_DynamicCast_AsBPI_Visibility_Changes, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsVisible_ReturnValue);
	void GetItemCategoryColor(enum class EItemCategory InItemCategory, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemCategory InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InTemp_struct_Variable_7, const struct FLinearColor& InTemp_struct_Variable_8, const struct FLinearColor& InTemp_struct_Variable_9, const struct FLinearColor& InTemp_struct_Variable_10, const struct FLinearColor& InTemp_struct_Variable_11, const struct FLinearColor& InTemp_struct_Variable_12, const struct FLinearColor& InTemp_struct_Variable_13, const struct FLinearColor& InTemp_struct_Variable_14, const struct FLinearColor& InTemp_struct_Variable_15, const struct FLinearColor& InTemp_struct_Variable_16, const struct FLinearColor& InTemp_struct_Variable_17, const struct FLinearColor& InTemp_struct_Variable_18, const struct FLinearColor& InTemp_struct_Variable_19, const struct FLinearColor& InTemp_struct_Variable_20, const struct FLinearColor& InTemp_struct_Variable_21, const struct FLinearColor& InTemp_struct_Variable_22, const struct FLinearColor& InTemp_struct_Variable_23, const struct FLinearColor& InTemp_struct_Variable_24, const struct FLinearColor& InTemp_struct_Variable_25, const struct FLinearColor& InTemp_struct_Variable_26, const struct FLinearColor& InK2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
