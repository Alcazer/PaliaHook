#include <Windows.h>

#include "../PaliaSDK/SDK.hpp"
#include "PaliaOverlay.h"

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool IsSteamVersion = false;
	if ((uintptr_t)GetModuleHandle("steam_api64.dll")) {
		IsSteamVersion = true;
	}
	else if ((uintptr_t)GetModuleHandle("steamclient64.dll")) {
		IsSteamVersion = true;
	}
	else {
		char fileName[MAX_PATH];
		GetModuleFileName(NULL, fileName, MAX_PATH);
		if (strstr(fileName, "PaliaClientSteam-Win64-Shipping.exe")) {
			IsSteamVersion = true;
		}
	}
	if (IsSteamVersion) {
		SDK::Offsets::GObjects     = 0x089C9C00;
		SDK::Offsets::AppendString = 0x00CF9A50;
		SDK::Offsets::GWorld       = 0x08B3A638;
		SDK::Offsets::ProcessEvent = 0x00ED35D0;
	}
	SDK::InitGObjects();
	auto Overlay = new PaliaOverlay();
	OverlayBase::Instance = Overlay;
	Overlay->SetupColors();
	Overlay->SetupOverlay();
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
