#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowEngine

#include "Basic.hpp"


namespace SDK::Params
{

// Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
// 0x0018 (0x0018 - 0x0000)
struct DataflowBlueprintLibrary_EvaluateTerminalNodeByName final 
{
public:
	class UDataflow*                              Dataflow;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TerminalNodeName;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ResultAsset;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName) == 0x000008, "Wrong alignment on DataflowBlueprintLibrary_EvaluateTerminalNodeByName");
static_assert(sizeof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName) == 0x000018, "Wrong size on DataflowBlueprintLibrary_EvaluateTerminalNodeByName");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, Dataflow) == 0x000000, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::Dataflow' has a wrong offset!");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, TerminalNodeName) == 0x000008, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::TerminalNodeName' has a wrong offset!");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, ResultAsset) == 0x000010, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::ResultAsset' has a wrong offset!");

}

