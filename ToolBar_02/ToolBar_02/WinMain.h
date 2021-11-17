#ifndef _WINMAIN_H_
#define _WINMAIN_H_

#define IDC_TOOLBAR   1001
#define IDC_STATUSBAR 1002

#define ID_FOPEN  1111
#define ID_FCLOSE 1112
#define ID_FSAVE  1113

HWND CreateToolbar(HWND hParentWnd);
HWND CreateStatusBar(HWND hParentWnd);
static LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM);

#endif