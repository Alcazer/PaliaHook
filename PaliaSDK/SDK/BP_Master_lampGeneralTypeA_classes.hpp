#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Master_lampGeneralTypeA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "S6Core_structs.hpp"
#include "Enum_vfx_schedulerType_structs.hpp"
#include "Enum_vfx_lightOptionsA_structs.hpp"
#include "Enum_vfx_lightType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struc_vfx_LampInfoA_structs.hpp"
#include "Enum_core_Scalability_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Master_lampGeneralTypeA.BP_Master_lampGeneralTypeA_C
// 0x0190 (0x0438 - 0x02A8)
class ABP_Master_lampGeneralTypeA_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkCulledComponent*                     AkCulledMoths;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_mothA;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MySM_Lamp;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_fakeLight;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MyPointLight;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    MySpotLight;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_facing;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkCulledComponent*                     AkCulledMovement;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkCulledComponent*                     AkCulledBuzz;                                      // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_turningOff_B_LightMe_9C25C822444466048603FFA374C156D4; // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_turningOff_B__Direction_9C25C822444466048603FFA374C156D4; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4964[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_turningOff_B;                                   // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_turningOff_A_LightMe_DB6C98924F2DD6052A1CC39186744A95; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_turningOff_A__Direction_DB6C98924F2DD6052A1CC39186744A95; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4965[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_turningOff_A;                                   // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_turningOn_B_lightMe_48334FA74E8FD98C12954DB304A82C38; // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_turningOn_B__Direction_48334FA74E8FD98C12954DB304A82C38; // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4966[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_turningOn_B;                                    // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_turningOn_A_LightMe_622BC5174CD1DACEB835B990B9385AB8; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_turningOn_A__Direction_622BC5174CD1DACEB835B990B9385AB8; // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4967[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_turningOn_A;                                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	Enum_vfx_schedulerType                        Scheduler_type;                                    // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4968[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            SM_Lamp;                                           // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	Enum_vfx_lightType                            Light_type;                                        // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	Enum_vfx_lightOptionsA                        Light_options;                                     // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4969[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LampOn_emissive;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        LightOn_intensity;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_emissiveColor;                            // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_496A[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LampOn_emissiveColor;                              // 0x036C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanSpawnMoths;                                     // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_496B[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Moth_spawnChance;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color_coldRedShift;                                // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Light_colorOn;                                     // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IAmOn;                                             // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_496C[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Ak_Light_On;                                       // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Light_Off;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Light_Buzz;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Movement;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           SM_LampList;                                       // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FStruc_vfx_LampInfoA>           LampInfo_List;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>              NS_Fire_List;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstanceDynamic*               MI_fakeLight;                                      // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          OptimizeMe_4Switch;                                // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_496D[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       MI_LampList;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             NewEventDispatcher;                                // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SpotLight_castShadow;                              // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Event_dayOrNight(bool bIsNight);
	void Event_IAmTheDay();
	void Event_IAmTheNight();
	void Event_lightAnimTurningOff();
	void Event_lightAnimTurningOn();
	void Event_lightingFun();
	void Event_lightStatus(bool TurnOn);
	void Event_setupEverythingEveryWhereAllAtOnce();
	void Event_setupFixtureSM();
	void Event_setupLampSMandMI();
	void Event_setupLights();
	void Event_setupMoreLampSM();
	void Event_setupNS_Fire();
	void ExecuteUbergraph_BP_Master_lampGeneralTypeA(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, Enum_vfx_lightType Temp_byte_Variable, Enum_vfx_lightType Temp_byte_Variable_1, Enum_vfx_lightType Temp_byte_Variable_2, ERedirectsPlatform Temp_byte_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, Enum_vfx_lightType Temp_byte_Variable_4, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, Enum_vfx_lightOptionsA Temp_byte_Variable_5, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, ETimeOfDayPeriod CallFunc_GetTimeOfDayPeriod_ReturnValue, TDelegate<void(ETimeOfDayPeriod Period)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double K2Node_CustomEvent_lighting, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_16, bool K2Node_CustomEvent_turnOn, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_17, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue_1, bool K2Node_CustomEvent_bIsNight, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Variable_21, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess_1, class ULightComponent* K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, class ULightComponent* K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, double CallFunc_Lerp_ReturnValue_1, class USceneComponent* K2Node_Select_Default_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, Enum_vfx_lightOptionsA Temp_byte_Variable_6, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAkRoomComponent* CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom, TArray<class UAkRoomComponent*>& CallFunc_GetAkAudioRoomAtLocation_AllRooms, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class UComp_CV_Local_RTPC_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ERedirectsPlatform Temp_byte_Variable_7, bool K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool Temp_bool_Variable_22, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool Temp_bool_Variable_23, bool CallFunc_IsValid_ReturnValue_8, Enum_vfx_lightType Temp_byte_Variable_8, bool K2Node_Select_Default_4, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_Select_Default_5, bool Temp_bool_Variable_24, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_25, bool K2Node_Select_Default_6, Enum_vfx_lightType Temp_byte_Variable_9, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool K2Node_Select_Default_7, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, Enum_vfx_lightType Temp_byte_Variable_10, double K2Node_Select_Default_8, Enum_vfx_lightType Temp_byte_Variable_11, bool Temp_bool_Variable_26, const struct FLinearColor& K2Node_Select_Default_9, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_Select_Default_10, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool Temp_bool_Variable_27, Enum_vfx_lightType Temp_byte_Variable_12, bool K2Node_Select_Default_11, ETimeOfDayPeriod K2Node_CustomEvent_period, bool K2Node_SwitchEnum_CmpSuccess_4, bool Temp_bool_Variable_28, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, bool Temp_bool_Variable_29, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool K2Node_Select_Default_12, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UAkComponent* CallFunc_AkEventLocation_AkComponent_1, int32 CallFunc_AkEventLocation_Playing_ID_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2, float CallFunc_SetPlayRate_NewRate_ImplicitCast_3, double K2Node_Select_NewEnumerator5_ImplicitCast, double K2Node_Select_NewEnumerator0_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double CallFunc_tick_myLighting_lighting_ImplicitCast, double CallFunc_tick_myLighting_lighting_ImplicitCast_1, double CallFunc_tick_myLighting_lighting_ImplicitCast_2, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_tick_myLighting_lighting_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
	void Fn_canSpotLightCastShadow(Enum_vfx_lightType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, Enum_core_Scalability Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool CallFunc_IsServer_ReturnValue, bool K2Node_Select_Default, Enum_core_Scalability CallFunc_GlobalScalabilitySetting_ScalabilitySetting, bool K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void NewEventDispatcher__DelegateSignature();
	void OnTimeOfDayChanged(ETimeOfDayPeriod Period);
	void ReceiveBeginPlay();
	void Tick_myLighting(double Lighting);
	void TL_turningOff_A__FinishedFunc();
	void TL_turningOff_A__UpdateFunc();
	void TL_turningOff_B__FinishedFunc();
	void TL_turningOff_B__UpdateFunc();
	void TL_turningOn_A__FinishedFunc();
	void TL_turningOn_A__UpdateFunc();
	void TL_turningOn_B__FinishedFunc();
	void TL_turningOn_B__UpdateFunc();
	void TurnOff_lamp(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_5);
	void TurnOn_lamp(Enum_vfx_lightType Temp_byte_Variable, ERedirectsPlatform Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_8, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, Enum_vfx_lightType Temp_byte_Variable_2, Enum_vfx_lightOptionsA Temp_byte_Variable_3, bool K2Node_Select_Default, class UNiagaraComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ULightComponent* K2Node_Select_Default_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_12, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_Select_Default_2, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Master_lampGeneralTypeA_C">();
	}
	static class ABP_Master_lampGeneralTypeA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Master_lampGeneralTypeA_C>();
	}
};
static_assert(alignof(ABP_Master_lampGeneralTypeA_C) == 0x000008, "Wrong alignment on ABP_Master_lampGeneralTypeA_C");
static_assert(sizeof(ABP_Master_lampGeneralTypeA_C) == 0x000438, "Wrong size on ABP_Master_lampGeneralTypeA_C");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Master_lampGeneralTypeA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, AkCulledMoths) == 0x0002B0, "Member 'ABP_Master_lampGeneralTypeA_C::AkCulledMoths' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, NS_mothA) == 0x0002B8, "Member 'ABP_Master_lampGeneralTypeA_C::NS_mothA' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, MySM_Lamp) == 0x0002C0, "Member 'ABP_Master_lampGeneralTypeA_C::MySM_Lamp' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, SM_fakeLight) == 0x0002C8, "Member 'ABP_Master_lampGeneralTypeA_C::SM_fakeLight' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, MyPointLight) == 0x0002D0, "Member 'ABP_Master_lampGeneralTypeA_C::MyPointLight' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, MySpotLight) == 0x0002D8, "Member 'ABP_Master_lampGeneralTypeA_C::MySpotLight' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Root_facing) == 0x0002E0, "Member 'ABP_Master_lampGeneralTypeA_C::Root_facing' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, AkCulledMovement) == 0x0002E8, "Member 'ABP_Master_lampGeneralTypeA_C::AkCulledMovement' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, AkCulledBuzz) == 0x0002F0, "Member 'ABP_Master_lampGeneralTypeA_C::AkCulledBuzz' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_Master_lampGeneralTypeA_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_B_LightMe_9C25C822444466048603FFA374C156D4) == 0x000300, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_B_LightMe_9C25C822444466048603FFA374C156D4' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_B__Direction_9C25C822444466048603FFA374C156D4) == 0x000304, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_B__Direction_9C25C822444466048603FFA374C156D4' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_B) == 0x000308, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_B' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_A_LightMe_DB6C98924F2DD6052A1CC39186744A95) == 0x000310, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_A_LightMe_DB6C98924F2DD6052A1CC39186744A95' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_A__Direction_DB6C98924F2DD6052A1CC39186744A95) == 0x000314, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_A__Direction_DB6C98924F2DD6052A1CC39186744A95' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOff_A) == 0x000318, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOff_A' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_B_lightMe_48334FA74E8FD98C12954DB304A82C38) == 0x000320, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_B_lightMe_48334FA74E8FD98C12954DB304A82C38' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_B__Direction_48334FA74E8FD98C12954DB304A82C38) == 0x000324, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_B__Direction_48334FA74E8FD98C12954DB304A82C38' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_B) == 0x000328, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_B' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_A_LightMe_622BC5174CD1DACEB835B990B9385AB8) == 0x000330, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_A_LightMe_622BC5174CD1DACEB835B990B9385AB8' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_A__Direction_622BC5174CD1DACEB835B990B9385AB8) == 0x000334, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_A__Direction_622BC5174CD1DACEB835B990B9385AB8' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, TL_turningOn_A) == 0x000338, "Member 'ABP_Master_lampGeneralTypeA_C::TL_turningOn_A' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Scheduler_type) == 0x000340, "Member 'ABP_Master_lampGeneralTypeA_C::Scheduler_type' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, SM_Lamp) == 0x000348, "Member 'ABP_Master_lampGeneralTypeA_C::SM_Lamp' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Light_type) == 0x000350, "Member 'ABP_Master_lampGeneralTypeA_C::Light_type' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Light_options) == 0x000351, "Member 'ABP_Master_lampGeneralTypeA_C::Light_options' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, LampOn_emissive) == 0x000358, "Member 'ABP_Master_lampGeneralTypeA_C::LampOn_emissive' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, LightOn_intensity) == 0x000360, "Member 'ABP_Master_lampGeneralTypeA_C::LightOn_intensity' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Override_emissiveColor) == 0x000368, "Member 'ABP_Master_lampGeneralTypeA_C::Override_emissiveColor' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, LampOn_emissiveColor) == 0x00036C, "Member 'ABP_Master_lampGeneralTypeA_C::LampOn_emissiveColor' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, CanSpawnMoths) == 0x00037C, "Member 'ABP_Master_lampGeneralTypeA_C::CanSpawnMoths' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Moth_spawnChance) == 0x000380, "Member 'ABP_Master_lampGeneralTypeA_C::Moth_spawnChance' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Color_coldRedShift) == 0x000388, "Member 'ABP_Master_lampGeneralTypeA_C::Color_coldRedShift' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Light_colorOn) == 0x000398, "Member 'ABP_Master_lampGeneralTypeA_C::Light_colorOn' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, IAmOn) == 0x0003A8, "Member 'ABP_Master_lampGeneralTypeA_C::IAmOn' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Ak_Light_On) == 0x0003B0, "Member 'ABP_Master_lampGeneralTypeA_C::Ak_Light_On' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Ak_Light_Off) == 0x0003B8, "Member 'ABP_Master_lampGeneralTypeA_C::Ak_Light_Off' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Ak_Light_Buzz) == 0x0003C0, "Member 'ABP_Master_lampGeneralTypeA_C::Ak_Light_Buzz' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, Ak_Movement) == 0x0003C8, "Member 'ABP_Master_lampGeneralTypeA_C::Ak_Movement' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, SM_LampList) == 0x0003D0, "Member 'ABP_Master_lampGeneralTypeA_C::SM_LampList' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, LampInfo_List) == 0x0003E0, "Member 'ABP_Master_lampGeneralTypeA_C::LampInfo_List' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, NS_Fire_List) == 0x0003F0, "Member 'ABP_Master_lampGeneralTypeA_C::NS_Fire_List' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, MI_fakeLight) == 0x000400, "Member 'ABP_Master_lampGeneralTypeA_C::MI_fakeLight' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, OptimizeMe_4Switch) == 0x000408, "Member 'ABP_Master_lampGeneralTypeA_C::OptimizeMe_4Switch' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, MI_LampList) == 0x000410, "Member 'ABP_Master_lampGeneralTypeA_C::MI_LampList' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, NewEventDispatcher) == 0x000420, "Member 'ABP_Master_lampGeneralTypeA_C::NewEventDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_Master_lampGeneralTypeA_C, SpotLight_castShadow) == 0x000430, "Member 'ABP_Master_lampGeneralTypeA_C::SpotLight_castShadow' has a wrong offset!");

}

