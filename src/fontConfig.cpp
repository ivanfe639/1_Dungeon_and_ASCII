#include "fontConfig.hpp"

void setFontMonoSpace(int newSizeFontWidth, int newSizeFontHeigh){

    int newWidth=newSizeFontWidth;
    int newHeight=newSizeFontHeigh;
    CONSOLE_FONT_INFOEX fontStructure={0};
    fontStructure.cbSize=sizeof(fontStructure);
    fontStructure.dwFontSize.X = newWidth;
    fontStructure.dwFontSize.Y = newHeight;
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetCurrentConsoleFontEx(hConsole, true, &fontStructure);
   
}

void setMaximize(){

    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd,SW_SHOWMAXIMIZED);

}

// Set the font and the behaivoral of the window
void setWindowParameters(int newSizeFontWidth, int newSizeFontHeigh){

    setFontMonoSpace(newSizeFontWidth, newSizeFontHeigh);
    setMaximize();
}

