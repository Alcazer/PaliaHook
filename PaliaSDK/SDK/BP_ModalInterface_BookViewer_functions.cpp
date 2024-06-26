#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_BookViewer

#include "Basic.hpp"

#include "BP_ModalInterface_BookViewer_classes.hpp"
#include "BP_ModalInterface_BookViewer_parameters.hpp"


namespace SDK
{

// Function BP_ModalInterface_BookViewer.BP_ModalInterface_BookViewer_C.InitPreOpenModalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BookIdToRead                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ModalInterface_BookViewer_C::InitPreOpenModalWidget(int32 BookIdToRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModalInterface_BookViewer_C", "InitPreOpenModalWidget");

	Params::BP_ModalInterface_BookViewer_C_InitPreOpenModalWidget Parms{};

	Parms.BookIdToRead = BookIdToRead;

	UObject::ProcessEvent(Func, &Parms);
}

}

