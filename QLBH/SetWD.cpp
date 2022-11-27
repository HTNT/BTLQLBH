#include"SetWD.h"
void SetWindowSize(SHORT width, SHORT height)// set kích thuoc màn hình console  
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;
 
    SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}
void gotoxy(int x, int y){// di chuyen co tro den vi tri x, y  
	COORD a={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}  
void DisableResizeWindow()// vô hiêu chinh kich thuoc console  
{
    HWND hWnd = GetConsoleWindow();
    SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);
}
void SetColor(int backgound_color, int text_color) //tao màu nen/chu  
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}
void ShowCur(bool CursorVisibility)// an hien con tro chuot  
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;
    
    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = CursorVisibility;
    
    SetConsoleCursorInfo(handle, &ConCurInf);
}
