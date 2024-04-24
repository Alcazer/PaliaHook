#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_vfx_gen_waterfall_tallA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_vfx_gen_waterfall_tallA.BP_vfx_gen_waterfall_tallA_C
// 0x0088 (0x0330 - 0x02A8)
class ABP_vfx_gen_waterfall_tallA_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Check_waterZone_Splash;                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Check_waterZone_Fall;                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_fall;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_splash;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MySM_waterfall;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_visual;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Splash_intensity;                                  // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Use_simpleVFX;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          No_vfxSplash;                                      // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IAm_Vista;                                         // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5EC3[0x5];                                     // 0x02F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            SM_waterfall;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     Mat_Waterfall;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Fall_originOffset;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Overwrite_autoVFXadjust;                           // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5EC4[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Splash_width;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Splash_length;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Fall_height;                                       // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Event_Setup();
	void ExecuteUbergraph_BP_vfx_gen_waterfall_tallA(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void Refresh_VFX(const struct FVector& Scale_waterfall, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_vfx_gen_waterfall_tallA_C">();
	}
	static class ABP_vfx_gen_waterfall_tallA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_vfx_gen_waterfall_tallA_C>();
	}
};
static_assert(alignof(ABP_vfx_gen_waterfall_tallA_C) == 0x000008, "Wrong alignment on ABP_vfx_gen_waterfall_tallA_C");
static_assert(sizeof(ABP_vfx_gen_waterfall_tallA_C) == 0x000330, "Wrong size on ABP_vfx_gen_waterfall_tallA_C");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_vfx_gen_waterfall_tallA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Check_waterZone_Splash) == 0x0002B0, "Member 'ABP_vfx_gen_waterfall_tallA_C::Check_waterZone_Splash' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Check_waterZone_Fall) == 0x0002B8, "Member 'ABP_vfx_gen_waterfall_tallA_C::Check_waterZone_Fall' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, NS_fall) == 0x0002C0, "Member 'ABP_vfx_gen_waterfall_tallA_C::NS_fall' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, NS_splash) == 0x0002C8, "Member 'ABP_vfx_gen_waterfall_tallA_C::NS_splash' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, MySM_waterfall) == 0x0002D0, "Member 'ABP_vfx_gen_waterfall_tallA_C::MySM_waterfall' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Root_visual) == 0x0002D8, "Member 'ABP_vfx_gen_waterfall_tallA_C::Root_visual' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_vfx_gen_waterfall_tallA_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Splash_intensity) == 0x0002E8, "Member 'ABP_vfx_gen_waterfall_tallA_C::Splash_intensity' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Use_simpleVFX) == 0x0002F0, "Member 'ABP_vfx_gen_waterfall_tallA_C::Use_simpleVFX' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, No_vfxSplash) == 0x0002F1, "Member 'ABP_vfx_gen_waterfall_tallA_C::No_vfxSplash' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, IAm_Vista) == 0x0002F2, "Member 'ABP_vfx_gen_waterfall_tallA_C::IAm_Vista' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, SM_waterfall) == 0x0002F8, "Member 'ABP_vfx_gen_waterfall_tallA_C::SM_waterfall' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Mat_Waterfall) == 0x000300, "Member 'ABP_vfx_gen_waterfall_tallA_C::Mat_Waterfall' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Fall_originOffset) == 0x000308, "Member 'ABP_vfx_gen_waterfall_tallA_C::Fall_originOffset' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Overwrite_autoVFXadjust) == 0x000310, "Member 'ABP_vfx_gen_waterfall_tallA_C::Overwrite_autoVFXadjust' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Splash_width) == 0x000318, "Member 'ABP_vfx_gen_waterfall_tallA_C::Splash_width' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Splash_length) == 0x000320, "Member 'ABP_vfx_gen_waterfall_tallA_C::Splash_length' has a wrong offset!");
static_assert(offsetof(ABP_vfx_gen_waterfall_tallA_C, Fall_height) == 0x000328, "Member 'ABP_vfx_gen_waterfall_tallA_C::Fall_height' has a wrong offset!");

}

