#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_MiscUtils

#include "Basic.hpp"

#include "Enum_core_Scalability_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPFL_MiscUtils.BPFL_MiscUtils_C.BoolToYesNo
// 0x0058 (0x0058 - 0x0000)
struct BPFL_MiscUtils_C_BoolToYesNo final 
{
public:
	bool                                          Bool;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C51[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Result;                                            // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C52[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_MiscUtils_C_BoolToYesNo) == 0x000008, "Wrong alignment on BPFL_MiscUtils_C_BoolToYesNo");
static_assert(sizeof(BPFL_MiscUtils_C_BoolToYesNo) == 0x000058, "Wrong size on BPFL_MiscUtils_C_BoolToYesNo");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, Bool) == 0x000000, "Member 'BPFL_MiscUtils_C_BoolToYesNo::Bool' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, __WorldContext) == 0x000008, "Member 'BPFL_MiscUtils_C_BoolToYesNo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, Result) == 0x000010, "Member 'BPFL_MiscUtils_C_BoolToYesNo::Result' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, Temp_bool_Variable) == 0x000020, "Member 'BPFL_MiscUtils_C_BoolToYesNo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, Temp_string_Variable) == 0x000028, "Member 'BPFL_MiscUtils_C_BoolToYesNo::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, Temp_string_Variable_1) == 0x000038, "Member 'BPFL_MiscUtils_C_BoolToYesNo::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_BoolToYesNo, K2Node_Select_Default) == 0x000048, "Member 'BPFL_MiscUtils_C_BoolToYesNo::K2Node_Select_Default' has a wrong offset!");

// Function BPFL_MiscUtils.BPFL_MiscUtils_C.Get Date Time As Formatted Text
// 0x02E0 (0x02E0 - 0x0000)
struct BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text final 
{
public:
	struct FDateTime                              DateTime;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutputText;                                        // 0x0010(0x0018)(Parm, OutParm)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C53[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0118(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0130(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0148(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0198(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0200(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0218(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0268(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02C8(0x0018)()
};
static_assert(alignof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text) == 0x000008, "Wrong alignment on BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text");
static_assert(sizeof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text) == 0x0002E0, "Wrong size on BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, DateTime) == 0x000000, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::DateTime' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, __WorldContext) == 0x000008, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, OutputText) == 0x000010, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::OutputText' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Year) == 0x000028, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Month) == 0x00002C, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Day) == 0x000030, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Hour) == 0x000034, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Minute) == 0x000038, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Second) == 0x00003C, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_BreakDateTime_Millisecond) == 0x000040, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000060, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C8, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000118, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000130, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData_2) == 0x000148, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData_3) == 0x000198, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0001E8, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000200, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData_4) == 0x000218, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeStruct_FormatArgumentData_5) == 0x000268, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, K2Node_MakeArray_Array) == 0x0002B8, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text, CallFunc_Format_ReturnValue) == 0x0002C8, "Member 'BPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BPFL_MiscUtils.BPFL_MiscUtils_C.GetPointsFromCircle
// 0x0128 (0x0128 - 0x0000)
struct BPFL_MiscUtils_C_GetPointsFromCircle final 
{
public:
	struct FVector                                Center;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Radius;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfPoints;                                    // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C54[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        PointsOnCircle;                                    // 0x0030(0x0010)(Parm, OutParm)
	TArray<struct FVector>                        CirclePoints;                                      // 0x0040(0x0010)(Edit, BlueprintVisible)
	double                                        YLocation;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        XLocation;                                         // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Angle;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C55[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegSin_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegCos_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetPI_ReturnValue;                        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_MiscUtils_C_GetPointsFromCircle) == 0x000008, "Wrong alignment on BPFL_MiscUtils_C_GetPointsFromCircle");
static_assert(sizeof(BPFL_MiscUtils_C_GetPointsFromCircle) == 0x000128, "Wrong size on BPFL_MiscUtils_C_GetPointsFromCircle");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, Center) == 0x000000, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::Center' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, Radius) == 0x000018, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::Radius' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, NumberOfPoints) == 0x000020, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::NumberOfPoints' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, __WorldContext) == 0x000028, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, PointsOnCircle) == 0x000030, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::PointsOnCircle' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CirclePoints) == 0x000040, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CirclePoints' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, YLocation) == 0x000050, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::YLocation' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, XLocation) == 0x000058, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::XLocation' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, Angle) == 0x000060, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::Angle' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_X) == 0x000068, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Y) == 0x000070, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Z) == 0x000078, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_MakeVector_ReturnValue) == 0x000080, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, Temp_int_Variable) == 0x000098, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Array_Add_ReturnValue) == 0x00009C, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0000A0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_DegSin_ReturnValue) == 0x0000B0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_DegSin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_X_1) == 0x0000B8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Y_1) == 0x0000C0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Z_1) == 0x0000C8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_DegCos_ReturnValue) == 0x0000D8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_DegCos_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_X_2) == 0x0000E8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Y_2) == 0x0000F0, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_BreakVector_Z_2) == 0x0000F8, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000100, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_GetPI_ReturnValue) == 0x000108, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000110, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000118, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GetPointsFromCircle, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000120, "Member 'BPFL_MiscUtils_C_GetPointsFromCircle::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");

// Function BPFL_MiscUtils.BPFL_MiscUtils_C.GlobalScalabilitySetting
// 0x0028 (0x0028 - 0x0000)
struct BPFL_MiscUtils_C_GlobalScalabilitySetting final 
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	Enum_core_Scalability                         ScalabilitySetting;                                // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C56[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOverallScalabilityLevel_ReturnValue;   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_MiscUtils_C_GlobalScalabilitySetting) == 0x000008, "Wrong alignment on BPFL_MiscUtils_C_GlobalScalabilitySetting");
static_assert(sizeof(BPFL_MiscUtils_C_GlobalScalabilitySetting) == 0x000028, "Wrong size on BPFL_MiscUtils_C_GlobalScalabilitySetting");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, __WorldContext) == 0x000000, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, ScalabilitySetting) == 0x000008, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::ScalabilitySetting' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, CallFunc_GetGameUserSettings_ReturnValue) == 0x000010, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x000018, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, CallFunc_GetOverallScalabilityLevel_ReturnValue) == 0x00001C, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::CallFunc_GetOverallScalabilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, K2Node_SwitchInteger_CmpSuccess) == 0x000020, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_MiscUtils_C_GlobalScalabilitySetting, K2Node_SwitchInteger_CmpSuccess_1) == 0x000021, "Member 'BPFL_MiscUtils_C_GlobalScalabilitySetting::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");

}

