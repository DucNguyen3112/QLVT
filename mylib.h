#pragma once
#include<iostream>
#include<conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <fstream>
#include <math.h>
#include <cstdlib>

using namespace std;
#define widthWindow 1520
#define heightWindow 800
#define enter 13
#define ESC 27
#define Tab 9
#define Up 72
#define Down 80
#define Left 75
#define Right 77
#define Space 32
#define insert 224
//========================
#define Xmenu 2
#define ymenu 2
#define Xhuongdan 3
#define yhuongdan 23
#define Xthongbao 4
#define ythongbao 38
#define xdulieu2 62
#define xdulieu3 82
#define xdulieu4 158
#define xdulieu5 178
#define xkedoc1 50
#define xkedoc2 60
#define xkedoc3 80
#define xkedoc4 156
#define xkedoc5 176
#define xkedoc6 196
#define xstt 54
using namespace std;
#define widthWindow 1520
#define heightWindow 800
void set_color ( int code );
void khoiTaoManHinh();
void clrscr();
void ShowCur(bool CursorVisibility);
void gotoxy(short x,short y);