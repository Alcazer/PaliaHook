#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DummyArrowAttachment

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DummyArrowAttachment.BP_DummyArrowAttachment_C.AssignMesh
// 0x0068 (0x0068 - 0x0000)
struct BP_DummyArrowAttachment_C_AssignMesh final 
{
public:
	class UStaticMesh*                            DesiredMesh;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     DesiredMaterial;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            DesiredMeshSecondary;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     DesiredMaterialSecondary;                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         DesiredNiagaraSystem;                              // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2516[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_2;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2517[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2518[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_3;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DummyArrowAttachment_C_AssignMesh) == 0x000008, "Wrong alignment on BP_DummyArrowAttachment_C_AssignMesh");
static_assert(sizeof(BP_DummyArrowAttachment_C_AssignMesh) == 0x000068, "Wrong size on BP_DummyArrowAttachment_C_AssignMesh");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, DesiredMesh) == 0x000000, "Member 'BP_DummyArrowAttachment_C_AssignMesh::DesiredMesh' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, DesiredMaterial) == 0x000008, "Member 'BP_DummyArrowAttachment_C_AssignMesh::DesiredMaterial' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, DesiredMeshSecondary) == 0x000010, "Member 'BP_DummyArrowAttachment_C_AssignMesh::DesiredMeshSecondary' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, DesiredMaterialSecondary) == 0x000018, "Member 'BP_DummyArrowAttachment_C_AssignMesh::DesiredMaterialSecondary' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, DesiredNiagaraSystem) == 0x000020, "Member 'BP_DummyArrowAttachment_C_AssignMesh::DesiredNiagaraSystem' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000028, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_SetStaticMesh_ReturnValue_1) == 0x00002A, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, Temp_bool_Variable) == 0x00002B, "Member 'BP_DummyArrowAttachment_C_AssignMesh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_IsValid_ReturnValue_1) == 0x00002C, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_IsValid_ReturnValue_2) == 0x00002D, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_GetMaterial_ReturnValue) == 0x000030, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_IsValid_ReturnValue_3) == 0x000038, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_SetStaticMesh_ReturnValue_2) == 0x000039, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_SetStaticMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_GetMaterial_ReturnValue_1) == 0x000040, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, Temp_bool_Variable_1) == 0x000048, "Member 'BP_DummyArrowAttachment_C_AssignMesh::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, K2Node_Select_Default) == 0x000050, "Member 'BP_DummyArrowAttachment_C_AssignMesh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, K2Node_Select_Default_1) == 0x000058, "Member 'BP_DummyArrowAttachment_C_AssignMesh::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DummyArrowAttachment_C_AssignMesh, CallFunc_SetStaticMesh_ReturnValue_3) == 0x000060, "Member 'BP_DummyArrowAttachment_C_AssignMesh::CallFunc_SetStaticMesh_ReturnValue_3' has a wrong offset!");

}

