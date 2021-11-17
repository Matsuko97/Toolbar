#include <windows.h>
#include <commctrl.h>
#include <tchar.h>

#pragma comment(lib, "comctl32.lib")

// Windows XP sytle button
#pragma comment(linker,"\"/manifestdependency:type='win32' "\
	"name='Microsoft.Windows.Common-Controls' "\
	"version='6.0.0.0' processorArchitecture='*' "\
	"publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "WinMain.h"