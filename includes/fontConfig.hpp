#ifndef FONTCONFIG_H
#define FONTCONFIG_H

#include <cwchar>
#include <string>
#include <windows.h>

using namespace std;

typedef struct _CONSOLE_FONT_INFOEX
{
    ULONG cbSize;
    DWORD nFont;
    COORD dwFontSize;
    UINT  FontFamily;
    UINT  FontWeight;
    WCHAR FaceName[LF_FACESIZE];
}CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;

//the function declaration begins
#ifdef __cplusplus
extern "C" {
#endif
    BOOL WINAPI SetCurrentConsoleFontEx(HANDLE hConsoleOutput, BOOL bMaximumWindow, PCONSOLE_FONT_INFOEX
    lpConsoleCurrentFontEx);
#ifdef __cplusplus
}
#endif

//Methods
// Config the new font size to convert in monospace
void setFontMonoSpace(int newSizeFontWidth, int newSizeFontHeigh);

//Set the window as maximized
void setMaximize();

// Set alll configs of window
void setWindowParameters(int newSizeFontWidth, int newSizeFontHeigh);

#endif