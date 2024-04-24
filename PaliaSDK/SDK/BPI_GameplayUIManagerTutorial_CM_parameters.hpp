#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameplayUIManagerTutorial_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.Redirect FTUEPopin Type
// 0x0018 (0x0018 - 0x0000)
struct BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type final 
{
public:
	class FName                                   DefaultFTUEPopinType;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_FTUEPopin_CM_C*                    FTUEPopin;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   TutorialModalName;                                 // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type) == 0x000008, "Wrong alignment on BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type");
static_assert(sizeof(BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type) == 0x000018, "Wrong size on BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type, DefaultFTUEPopinType) == 0x000000, "Member 'BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type::DefaultFTUEPopinType' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type, FTUEPopin) == 0x000008, "Member 'BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type::FTUEPopin' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type, TutorialModalName) == 0x000010, "Member 'BPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type::TutorialModalName' has a wrong offset!");

// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectTutorialModalType
// 0x0024 (0x0024 - 0x0000)
struct BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType final 
{
public:
	class FName                                   DefaultTutorialModalName;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets)> OpenModalDelegate;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9A[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TutorialModalName;                                 // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType) == 0x000004, "Wrong alignment on BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType");
static_assert(sizeof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType) == 0x000024, "Wrong size on BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType, DefaultTutorialModalName) == 0x000000, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType::DefaultTutorialModalName' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType, OpenModalDelegate) == 0x000008, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType::OpenModalDelegate' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType, bSuccess) == 0x000018, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType::bSuccess' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType, TutorialModalName) == 0x00001C, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType::TutorialModalName' has a wrong offset!");

// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectType
// 0x0048 (0x0048 - 0x0000)
struct BPI_GameplayUIManagerTutorial_CM_C_RedirectType final 
{
public:
	class FName                                   DefaultFTUEPopinType;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   Content;                                           // 0x0020(0x0018)(Parm, OutParm)
	bool                                          EnableFound;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TutorialModalName;                                 // 0x003C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType) == 0x000008, "Wrong alignment on BPI_GameplayUIManagerTutorial_CM_C_RedirectType");
static_assert(sizeof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType) == 0x000048, "Wrong size on BPI_GameplayUIManagerTutorial_CM_C_RedirectType");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType, DefaultFTUEPopinType) == 0x000000, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectType::DefaultFTUEPopinType' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType, Title) == 0x000008, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectType::Title' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType, Content) == 0x000020, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectType::Content' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType, EnableFound) == 0x000038, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectType::EnableFound' has a wrong offset!");
static_assert(offsetof(BPI_GameplayUIManagerTutorial_CM_C_RedirectType, TutorialModalName) == 0x00003C, "Member 'BPI_GameplayUIManagerTutorial_CM_C_RedirectType::TutorialModalName' has a wrong offset!");

}

