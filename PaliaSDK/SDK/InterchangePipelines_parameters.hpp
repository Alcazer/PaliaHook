#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangePipelines

#include "Basic.hpp"

#include "InterchangePipelines_structs.hpp"


namespace SDK::Params
{

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities final 
{
public:
	class UInterchangeBaseNodeContainer*          BaseNodeContainer;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePipelineMeshesUtilities*    ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities");
static_assert(sizeof(InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities");
static_assert(offsetof(InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities, BaseNodeContainer) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities::BaseNodeContainer' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities, ReturnValue) == 0x000008, "Member 'InterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllMeshGeometry final 
{
public:
	TArray<class FString>                         MeshGeometryUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllMeshGeometry) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllMeshGeometry");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllMeshGeometry) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllMeshGeometry");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllMeshGeometry, MeshGeometryUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllMeshGeometry::MeshGeometryUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced final 
{
public:
	TArray<class FString>                         MeshGeometryUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced, MeshGeometryUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced::MeshGeometryUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids final 
{
public:
	TArray<class FString>                         MeshInstanceUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids, MeshInstanceUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllMeshInstanceUids::MeshInstanceUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
// 0x0020 (0x0020 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid final 
{
public:
	class FString                                 MeshGeometryUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         MeshInstanceUids;                                  // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid) == 0x000020, "Wrong size on InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid, MeshGeometryUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid::MeshGeometryUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid, MeshInstanceUids) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid::MeshInstanceUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry final 
{
public:
	TArray<class FString>                         MeshGeometryUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry, MeshGeometryUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry::MeshGeometryUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance final 
{
public:
	TArray<class FString>                         MeshInstanceUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance, MeshInstanceUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance::MeshInstanceUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry final 
{
public:
	TArray<class FString>                         MeshGeometryUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry, MeshGeometryUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry::MeshGeometryUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
// 0x0010 (0x0010 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance final 
{
public:
	TArray<class FString>                         MeshInstanceUids;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance) == 0x000010, "Wrong size on InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance, MeshInstanceUids) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetAllStaticMeshInstance::MeshInstanceUids' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
// 0x0048 (0x0048 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetMeshGeometryByUid final 
{
public:
	class FString                                 MeshGeometryUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangeMeshGeometry               ReturnValue;                                       // 0x0010(0x0038)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetMeshGeometryByUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetMeshGeometryByUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetMeshGeometryByUid) == 0x000048, "Wrong size on InterchangePipelineMeshesUtilities_GetMeshGeometryByUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshGeometryByUid, MeshGeometryUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetMeshGeometryByUid::MeshGeometryUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshGeometryByUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_GetMeshGeometryByUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
// 0x0020 (0x0020 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid final 
{
public:
	class FString                                 MeshGeometryUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid) == 0x000020, "Wrong size on InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid, MeshGeometryUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid::MeshGeometryUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
// 0x0090 (0x0090 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetMeshInstanceByUid final 
{
public:
	class FString                                 MeshInstanceUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangeMeshInstance               ReturnValue;                                       // 0x0010(0x0080)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetMeshInstanceByUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetMeshInstanceByUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetMeshInstanceByUid) == 0x000090, "Wrong size on InterchangePipelineMeshesUtilities_GetMeshInstanceByUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshInstanceByUid, MeshInstanceUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetMeshInstanceByUid::MeshInstanceUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshInstanceByUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_GetMeshInstanceByUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
// 0x0020 (0x0020 - 0x0000)
struct InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid final 
{
public:
	class FString                                 MeshInstanceUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid) == 0x000020, "Wrong size on InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid, MeshInstanceUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid::MeshInstanceUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
// 0x0018 (0x0018 - 0x0000)
struct InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid final 
{
public:
	class FString                                 MeshGeometryUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3BB6[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid) == 0x000018, "Wrong size on InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid, MeshGeometryUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid::MeshGeometryUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_IsValidMeshGeometryUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
// 0x0018 (0x0018 - 0x0000)
struct InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid final 
{
public:
	class FString                                 MeshInstanceUid;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3BB7[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid) == 0x000008, "Wrong alignment on InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid");
static_assert(sizeof(InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid) == 0x000018, "Wrong size on InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid");
static_assert(offsetof(InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid, MeshInstanceUid) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid::MeshInstanceUid' has a wrong offset!");
static_assert(offsetof(InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid, ReturnValue) == 0x000010, "Member 'InterchangePipelineMeshesUtilities_IsValidMeshInstanceUid::ReturnValue' has a wrong offset!");

// Function InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
// 0x0005 (0x0005 - 0x0000)
struct InterchangePipelineMeshesUtilities_SetContext final 
{
public:
	struct FInterchangePipelineMeshesUtilitiesContext Context;                                           // 0x0000(0x0005)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineMeshesUtilities_SetContext) == 0x000001, "Wrong alignment on InterchangePipelineMeshesUtilities_SetContext");
static_assert(sizeof(InterchangePipelineMeshesUtilities_SetContext) == 0x000005, "Wrong size on InterchangePipelineMeshesUtilities_SetContext");
static_assert(offsetof(InterchangePipelineMeshesUtilities_SetContext, Context) == 0x000000, "Member 'InterchangePipelineMeshesUtilities_SetContext::Context' has a wrong offset!");

}

