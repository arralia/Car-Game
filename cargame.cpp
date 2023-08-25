#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car [5][9] = { '\\','_','_','_','_','_','_','_','/',
                    '_','/','_','|','_','|','_','\\','_',
                    '/','O','O','_','_','_','O','O','\\',
                    '|','_','/','_','A','_','\\','_','|',
                    '\\','o','o','_','|','_','o','o','/'};
int carPos = WIN_WIDTH/2;
int score = 0;

void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console,CursorPosition);
}

void setcursor(bool visible, DWORD size) 
{
    if(size == 0) size = 20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVsisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}