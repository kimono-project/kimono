#pragma once
#include <windows.h>

#define SVCNAME "Kimono"
#define SVCDISPLAYNAME "Kimono Network Node"
#define SVCDESCRIPTION "A smart, privacy-focused and anonymous blockchain network"

DWORD install_win_service();
DWORD remove_win_service();
