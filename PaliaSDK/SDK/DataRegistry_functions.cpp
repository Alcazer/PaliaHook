#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataRegistry

#include "Basic.hpp"

#include "DataRegistry_classes.hpp"
#include "DataRegistry_parameters.hpp"


namespace SDK
{

// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDataRegistryId                  ItemId                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, EDataRegistryAcquireStatus Status)>AcquireCallback                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::AcquireItemBP(const struct FDataRegistryId& ItemId, TDelegate<void(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, EDataRegistryAcquireStatus Status)> AcquireCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "AcquireItemBP");

	Params::DataRegistrySubsystem_AcquireItemBP Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.AcquireCallback = AcquireCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId                  DataRegistryId                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryIdToString");

	Params::DataRegistrySubsystem_Conv_DataRegistryIdToString Parms{};

	Parms.DataRegistryId = std::move(DataRegistryId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType                DataRegistryType                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryTypeToString");

	Params::DataRegistrySubsystem_Conv_DataRegistryTypeToString Parms{};

	Parms.DataRegistryType = std::move(DataRegistryType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId                  A                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId                  B                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryId");

	Params::DataRegistrySubsystem_EqualEqual_DataRegistryId Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType                A                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType                B                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryType");

	Params::DataRegistrySubsystem_EqualEqual_DataRegistryType Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId                  ItemId                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InputValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DefaultValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EDataRegistrySubsystemGetItemResult     OutResult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "EvaluateDataRegistryCurve");

	Params::DataRegistrySubsystem_EvaluateDataRegistryCurve Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.InputValue = InputValue;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId                  ItemId                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EDataRegistrySubsystemGetItemResult     OutResult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase                    OutItem                                                (Parm, OutParm, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "FindCachedItemBP");

	Params::DataRegistrySubsystem_FindCachedItemBP Parms{};

	Parms.ItemId = std::move(ItemId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId                  ItemId                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase                    OutItem                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase& OutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "GetCachedItemBP");

	Params::DataRegistrySubsystem_GetCachedItemBP Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.OutItem = std::move(OutItem);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutItem = std::move(Parms.OutItem);

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId                  ItemId                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryLookup              ResolvedLookup                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase                    OutItem                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "GetCachedItemFromLookupBP");

	Params::DataRegistrySubsystem_GetCachedItemFromLookupBP Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.ResolvedLookup = std::move(ResolvedLookup);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId                  DataRegistryId                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryId");

	Params::DataRegistrySubsystem_IsValidDataRegistryId Parms{};

	Parms.DataRegistryId = std::move(DataRegistryId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType                DataRegistryType                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryType");

	Params::DataRegistrySubsystem_IsValidDataRegistryType Parms{};

	Parms.DataRegistryType = std::move(DataRegistryType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId                  A                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId                  B                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryId");

	Params::DataRegistrySubsystem_NotEqual_DataRegistryId Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType                A                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType                B                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryType");

	Params::DataRegistrySubsystem_NotEqual_DataRegistryType Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

