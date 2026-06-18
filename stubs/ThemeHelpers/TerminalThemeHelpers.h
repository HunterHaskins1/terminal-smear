#pragma once

#include <windows.h>

inline void TerminalTrySetTransparentBackground(bool) noexcept {}
inline void TerminalTrySetAutoCompleteAnimationsWhenOccluded(IUnknown*, bool) noexcept {}
inline HRESULT TerminalTrySetWindowAssociatedProcesses(HWND, DWORD, HANDLE*) noexcept { return S_FALSE; }
