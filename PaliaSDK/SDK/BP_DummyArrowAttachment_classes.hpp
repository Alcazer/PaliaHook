#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DummyArrowAttachment

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DummyArrowAttachment.BP_DummyArrowAttachment_C
// 0x0020 (0x02C8 - 0x02A8)
class ABP_DummyArrowAttachment_C final  : public AActor
{
public:
	class UNiagaraComponent*                      ParticleSystem;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Secondary;                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void AssignMesh(class UStaticMesh* DesiredMesh, class UMaterialInterface* DesiredMaterial, class UStaticMesh* DesiredMeshSecondary, class UMaterialInterface* DesiredMaterialSecondary, class UNiagaraSystem* DesiredNiagaraSystem, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool Temp_bool_Variable_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DummyArrowAttachment_C">();
	}
	static class ABP_DummyArrowAttachment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DummyArrowAttachment_C>();
	}
};
static_assert(alignof(ABP_DummyArrowAttachment_C) == 0x000008, "Wrong alignment on ABP_DummyArrowAttachment_C");
static_assert(sizeof(ABP_DummyArrowAttachment_C) == 0x0002C8, "Wrong size on ABP_DummyArrowAttachment_C");
static_assert(offsetof(ABP_DummyArrowAttachment_C, ParticleSystem) == 0x0002A8, "Member 'ABP_DummyArrowAttachment_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_DummyArrowAttachment_C, StaticMesh_Secondary) == 0x0002B0, "Member 'ABP_DummyArrowAttachment_C::StaticMesh_Secondary' has a wrong offset!");
static_assert(offsetof(ABP_DummyArrowAttachment_C, StaticMesh) == 0x0002B8, "Member 'ABP_DummyArrowAttachment_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DummyArrowAttachment_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_DummyArrowAttachment_C::DefaultSceneRoot' has a wrong offset!");

}
