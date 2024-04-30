#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralMeshComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
// NumValues: 0x0004
enum class EProcMeshSliceCapOption : uint8
{
	NoCap                                    = 0,
	CreateNewSectionForCap                   = 1,
	UseLastSectionForCap                     = 2,
	EProcMeshSliceCapOption_MAX              = 3,
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0020 (0x0020 - 0x0000)
struct FProcMeshTangent final 
{
public:
	struct FVector                                TangentX;                                          // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFlipTangentY;                                     // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38FD[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProcMeshTangent) == 0x000008, "Wrong alignment on FProcMeshTangent");
static_assert(sizeof(FProcMeshTangent) == 0x000020, "Wrong size on FProcMeshTangent");
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x000000, "Member 'FProcMeshTangent::TangentX' has a wrong offset!");
static_assert(offsetof(FProcMeshTangent, bFlipTangentY) == 0x000018, "Member 'FProcMeshTangent::bFlipTangentY' has a wrong offset!");

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0098 (0x0098 - 0x0000)
struct FProcMeshVertex final 
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProcMeshTangent                       Tangent;                                           // 0x0030(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38FE[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UV0;                                               // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV1;                                               // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV2;                                               // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV3;                                               // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProcMeshVertex) == 0x000008, "Wrong alignment on FProcMeshVertex");
static_assert(sizeof(FProcMeshVertex) == 0x000098, "Wrong size on FProcMeshVertex");
static_assert(offsetof(FProcMeshVertex, Position) == 0x000000, "Member 'FProcMeshVertex::Position' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Normal) == 0x000018, "Member 'FProcMeshVertex::Normal' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x000030, "Member 'FProcMeshVertex::Tangent' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Color) == 0x000050, "Member 'FProcMeshVertex::Color' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV0) == 0x000058, "Member 'FProcMeshVertex::UV0' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV1) == 0x000068, "Member 'FProcMeshVertex::UV1' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV2) == 0x000078, "Member 'FProcMeshVertex::UV2' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV3) == 0x000088, "Member 'FProcMeshVertex::UV3' has a wrong offset!");

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0060 (0x0060 - 0x0000)
struct FProcMeshSection final 
{
public:
	TArray<struct FProcMeshVertex>                ProcVertexBuffer;                                  // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                ProcIndexBuffer;                                   // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                   SectionLocalBox;                                   // 0x0020(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSectionVisible;                                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38FF[0x6];                                     // 0x005A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProcMeshSection) == 0x000008, "Wrong alignment on FProcMeshSection");
static_assert(sizeof(FProcMeshSection) == 0x000060, "Wrong size on FProcMeshSection");
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x000000, "Member 'FProcMeshSection::ProcVertexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x000010, "Member 'FProcMeshSection::ProcIndexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x000020, "Member 'FProcMeshSection::SectionLocalBox' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bEnableCollision) == 0x000058, "Member 'FProcMeshSection::bEnableCollision' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bSectionVisible) == 0x000059, "Member 'FProcMeshSection::bSectionVisible' has a wrong offset!");

}

