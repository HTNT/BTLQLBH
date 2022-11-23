#pragma once
#include<windows.h>
void SetWindowSize(SHORT width, SHORT height);
void gotoxy(int x, int y);
void DisableResizeWindow();
void SetColor(int backgound_color, int text_color);
void ShowCur(bool CursorVisibility);
