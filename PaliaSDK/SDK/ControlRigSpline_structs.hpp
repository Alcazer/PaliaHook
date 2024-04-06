#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlRigSpline

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ControlRigSpline.ESplineType
// NumValues: 0x0003
enum class ESplineType : uint8
{
	BSpline                                  = 0,
	Hermite                                  = 1,
	Max                                      = 2,
};

// ScriptStruct ControlRigSpline.ControlRigSplineImpl
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FControlRigSplineImpl final 
{
public:
	uint8                                         Pad_3A4C[0x58];                                    // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FControlRigSplineImpl) == 0x000008, "Wrong alignment on FControlRigSplineImpl");
static_assert(sizeof(FControlRigSplineImpl) == 0x000058, "Wrong size on FControlRigSplineImpl");

// ScriptStruct ControlRigSpline.ControlRigSpline
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FControlRigSpline final 
{
public:
	uint8                                         Pad_3A4D[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FControlRigSpline) == 0x000008, "Wrong alignment on FControlRigSpline");
static_assert(sizeof(FControlRigSpline) == 0x000018, "Wrong size on FControlRigSpline");

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
};
static_assert(alignof(FRigUnit_ControlRigSplineBase) == 0x000008, "Wrong alignment on FRigUnit_ControlRigSplineBase");
static_assert(sizeof(FRigUnit_ControlRigSplineBase) == 0x000008, "Wrong size on FRigUnit_ControlRigSplineBase");

// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_PositionFromControlRigSpline final  : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A4E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_PositionFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_PositionFromControlRigSpline");
static_assert(sizeof(FRigUnit_PositionFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_PositionFromControlRigSpline");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_PositionFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, U) == 0x000020, "Member 'FRigUnit_PositionFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Position) == 0x000028, "Member 'FRigUnit_PositionFromControlRigSpline::Position' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_TransformFromControlRigSpline final  : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                UpVector;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0040(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_TransformFromControlRigSpline) == 0x000010, "Wrong alignment on FRigUnit_TransformFromControlRigSpline");
static_assert(sizeof(FRigUnit_TransformFromControlRigSpline) == 0x0000A0, "Wrong size on FRigUnit_TransformFromControlRigSpline");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_TransformFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, UpVector) == 0x000020, "Member 'FRigUnit_TransformFromControlRigSpline::UpVector' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Roll) == 0x000038, "Member 'FRigUnit_TransformFromControlRigSpline::Roll' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, U) == 0x00003C, "Member 'FRigUnit_TransformFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Transform) == 0x000040, "Member 'FRigUnit_TransformFromControlRigSpline::Transform' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ControlRigSplineFromPoints final  : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                        Points;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	ESplineType                                   SplineMode;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A4F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SamplesPerSegment;                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Compression;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Stretch;                                           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_ControlRigSplineFromPoints) == 0x000008, "Wrong alignment on FRigUnit_ControlRigSplineFromPoints");
static_assert(sizeof(FRigUnit_ControlRigSplineFromPoints) == 0x000040, "Wrong size on FRigUnit_ControlRigSplineFromPoints");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Points) == 0x000008, "Member 'FRigUnit_ControlRigSplineFromPoints::Points' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SplineMode) == 0x000018, "Member 'FRigUnit_ControlRigSplineFromPoints::SplineMode' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SamplesPerSegment) == 0x00001C, "Member 'FRigUnit_ControlRigSplineFromPoints::SamplesPerSegment' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Compression) == 0x000020, "Member 'FRigUnit_ControlRigSplineFromPoints::Compression' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Stretch) == 0x000024, "Member 'FRigUnit_ControlRigSplineFromPoints::Stretch' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Spline) == 0x000028, "Member 'FRigUnit_ControlRigSplineFromPoints::Spline' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// 0x0028 (0x0068 - 0x0040)
struct FRigUnit_SetSplinePoints final  : public FRigUnitMutable
{
public:
	TArray<struct FVector>                        Points;                                            // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_SetSplinePoints) == 0x000008, "Wrong alignment on FRigUnit_SetSplinePoints");
static_assert(sizeof(FRigUnit_SetSplinePoints) == 0x000068, "Wrong size on FRigUnit_SetSplinePoints");
static_assert(offsetof(FRigUnit_SetSplinePoints, Points) == 0x000040, "Member 'FRigUnit_SetSplinePoints::Points' has a wrong offset!");
static_assert(offsetof(FRigUnit_SetSplinePoints, Spline) == 0x000050, "Member 'FRigUnit_SetSplinePoints::Spline' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_TangentFromControlRigSpline final  : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A50[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Tangent;                                           // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_TangentFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_TangentFromControlRigSpline");
static_assert(sizeof(FRigUnit_TangentFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_TangentFromControlRigSpline");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_TangentFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, U) == 0x000020, "Member 'FRigUnit_TangentFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Tangent) == 0x000028, "Member 'FRigUnit_TangentFromControlRigSpline::Tangent' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// 0x0030 (0x0070 - 0x0040)
struct FRigUnit_DrawControlRigSpline final  : public FRigUnitMutable
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0040(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color;                                             // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Thickness;                                         // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Detail;                                            // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_DrawControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_DrawControlRigSpline");
static_assert(sizeof(FRigUnit_DrawControlRigSpline) == 0x000070, "Wrong size on FRigUnit_DrawControlRigSpline");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Spline) == 0x000040, "Member 'FRigUnit_DrawControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Color) == 0x000058, "Member 'FRigUnit_DrawControlRigSpline::Color' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Thickness) == 0x000068, "Member 'FRigUnit_DrawControlRigSpline::Thickness' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Detail) == 0x00006C, "Member 'FRigUnit_DrawControlRigSpline::Detail' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_GetLengthControlRigSpline final  : public FRigUnit
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A51[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_GetLengthControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_GetLengthControlRigSpline");
static_assert(sizeof(FRigUnit_GetLengthControlRigSpline) == 0x000028, "Wrong size on FRigUnit_GetLengthControlRigSpline");
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_GetLengthControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Length) == 0x000020, "Member 'FRigUnit_GetLengthControlRigSpline::Length' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// 0x01D0 (0x0210 - 0x0040)
struct FRigUnit_FitChainToSplineCurve final  : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection               Items;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EControlRigCurveAlignment                     Alignment;                                         // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A52[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Minimum;                                           // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Maximum;                                           // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SamplingPrecision;                                 // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PrimaryAxis;                                       // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SecondaryAxis;                                     // 0x0090(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoleVectorPosition;                                // 0x00A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                     RotationEaseType;                                  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A53[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Weight;                                            // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPropagateToChildren;                              // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A54[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x00E0(0x0090)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData      WorkData;                                          // 0x0170(0x0098)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A55[0x8];                                     // 0x0208(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_FitChainToSplineCurve) == 0x000010, "Wrong alignment on FRigUnit_FitChainToSplineCurve");
static_assert(sizeof(FRigUnit_FitChainToSplineCurve) == 0x000210, "Wrong size on FRigUnit_FitChainToSplineCurve");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Items) == 0x000040, "Member 'FRigUnit_FitChainToSplineCurve::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Spline) == 0x000050, "Member 'FRigUnit_FitChainToSplineCurve::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Alignment) == 0x000068, "Member 'FRigUnit_FitChainToSplineCurve::Alignment' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Minimum) == 0x00006C, "Member 'FRigUnit_FitChainToSplineCurve::Minimum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Maximum) == 0x000070, "Member 'FRigUnit_FitChainToSplineCurve::Maximum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SamplingPrecision) == 0x000074, "Member 'FRigUnit_FitChainToSplineCurve::SamplingPrecision' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PrimaryAxis) == 0x000078, "Member 'FRigUnit_FitChainToSplineCurve::PrimaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SecondaryAxis) == 0x000090, "Member 'FRigUnit_FitChainToSplineCurve::SecondaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PoleVectorPosition) == 0x0000A8, "Member 'FRigUnit_FitChainToSplineCurve::PoleVectorPosition' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Rotations) == 0x0000C0, "Member 'FRigUnit_FitChainToSplineCurve::Rotations' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, RotationEaseType) == 0x0000D0, "Member 'FRigUnit_FitChainToSplineCurve::RotationEaseType' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Weight) == 0x0000D4, "Member 'FRigUnit_FitChainToSplineCurve::Weight' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, bPropagateToChildren) == 0x0000D8, "Member 'FRigUnit_FitChainToSplineCurve::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, DebugSettings) == 0x0000E0, "Member 'FRigUnit_FitChainToSplineCurve::DebugSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, WorkData) == 0x000170, "Member 'FRigUnit_FitChainToSplineCurve::WorkData' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// 0x01D0 (0x0210 - 0x0040)
struct FRigUnit_FitChainToSplineCurveItemArray final  : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                 Items;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EControlRigCurveAlignment                     Alignment;                                         // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A56[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Minimum;                                           // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Maximum;                                           // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SamplingPrecision;                                 // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PrimaryAxis;                                       // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SecondaryAxis;                                     // 0x0090(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoleVectorPosition;                                // 0x00A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EControlRigAnimEasingType                     RotationEaseType;                                  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A57[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Weight;                                            // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPropagateToChildren;                              // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A58[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x00E0(0x0090)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData      WorkData;                                          // 0x0170(0x0098)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A59[0x8];                                     // 0x0208(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_FitChainToSplineCurveItemArray) == 0x000010, "Wrong alignment on FRigUnit_FitChainToSplineCurveItemArray");
static_assert(sizeof(FRigUnit_FitChainToSplineCurveItemArray) == 0x000210, "Wrong size on FRigUnit_FitChainToSplineCurveItemArray");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Items) == 0x000040, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Spline) == 0x000050, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Alignment) == 0x000068, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Alignment' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Minimum) == 0x00006C, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Minimum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Maximum) == 0x000070, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Maximum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SamplingPrecision) == 0x000074, "Member 'FRigUnit_FitChainToSplineCurveItemArray::SamplingPrecision' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis) == 0x000078, "Member 'FRigUnit_FitChainToSplineCurveItemArray::PrimaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis) == 0x000090, "Member 'FRigUnit_FitChainToSplineCurveItemArray::SecondaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition) == 0x0000A8, "Member 'FRigUnit_FitChainToSplineCurveItemArray::PoleVectorPosition' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Rotations) == 0x0000C0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Rotations' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType) == 0x0000D0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::RotationEaseType' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Weight) == 0x0000D4, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Weight' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, bPropagateToChildren) == 0x0000D8, "Member 'FRigUnit_FitChainToSplineCurveItemArray::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings) == 0x0000E0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::DebugSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, WorkData) == 0x000170, "Member 'FRigUnit_FitChainToSplineCurveItemArray::WorkData' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// 0x0028 (0x0068 - 0x0040)
struct FRigUnit_FitSplineCurveToChain final  : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection               Items;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_FitSplineCurveToChain) == 0x000008, "Wrong alignment on FRigUnit_FitSplineCurveToChain");
static_assert(sizeof(FRigUnit_FitSplineCurveToChain) == 0x000068, "Wrong size on FRigUnit_FitSplineCurveToChain");
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Items) == 0x000040, "Member 'FRigUnit_FitSplineCurveToChain::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Spline) == 0x000050, "Member 'FRigUnit_FitSplineCurveToChain::Spline' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// 0x0028 (0x0068 - 0x0040)
struct FRigUnit_FitSplineCurveToChainItemArray final  : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                 Items;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                      Spline;                                            // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_FitSplineCurveToChainItemArray) == 0x000008, "Wrong alignment on FRigUnit_FitSplineCurveToChainItemArray");
static_assert(sizeof(FRigUnit_FitSplineCurveToChainItemArray) == 0x000068, "Wrong size on FRigUnit_FitSplineCurveToChainItemArray");
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Items) == 0x000040, "Member 'FRigUnit_FitSplineCurveToChainItemArray::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Spline) == 0x000050, "Member 'FRigUnit_FitSplineCurveToChainItemArray::Spline' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ClosestParameterFromControlRigSpline final  : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                Position;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A5A[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_ClosestParameterFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_ClosestParameterFromControlRigSpline");
static_assert(sizeof(FRigUnit_ClosestParameterFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_ClosestParameterFromControlRigSpline");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Position) == 0x000020, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::Position' has a wrong offset!");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, U) == 0x000038, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::U' has a wrong offset!");

// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ParameterAtPercentage final  : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;                                            // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         Percentage;                                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_ParameterAtPercentage) == 0x000008, "Wrong alignment on FRigUnit_ParameterAtPercentage");
static_assert(sizeof(FRigUnit_ParameterAtPercentage) == 0x000028, "Wrong size on FRigUnit_ParameterAtPercentage");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Spline) == 0x000008, "Member 'FRigUnit_ParameterAtPercentage::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Percentage) == 0x000020, "Member 'FRigUnit_ParameterAtPercentage::Percentage' has a wrong offset!");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, U) == 0x000024, "Member 'FRigUnit_ParameterAtPercentage::U' has a wrong offset!");

}

