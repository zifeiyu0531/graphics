// love.cpp: 定义控制台应用程序的入口点。
//

#include<cstdlib>
#include<ctime>
#include "stdafx.h"
#include <graphics.h>//图形库
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

int main()
{
	initgraph(640, 480);
	/*mciSendString(L"open ./music.mp3 alias music ", 0, 0, 0);//读取音频
	mciSendString(L"play music", 0, 0, 0);//播放音频
	int times = 0;
	while (times < 900)
	{
		cleardevice();
		circle(320, 240, rand() % 240);//x，y，半径
		Sleep(25);
		times++;
	}*/
	
	cleardevice();

	int red_top = 0;
	int red_button = 10;
	/*setfillcolor(RED);
	for (int red_yellow = 0; red_yellow < 16; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);//左上角+右下角
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}
	setfillcolor(YELLOW);
	for (int red_yellow = 0; red_yellow < 16; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}
	setfillcolor(GREEN);
	for (int red_yellow = 0; red_yellow < 16; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}
	setfillcolor(BLUE);
	for (int red_yellow = 0; red_yellow < 16; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}

	setfillcolor(WHITE);
	red_top = 0;
	red_button = 10;
	for (int red_yellow = 0; red_yellow < 32; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		solidrectangle(640 - red_top, 0, 640 - red_button, 480);
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}
	
	setfillcolor(BLACK);
	red_top = 0;
	red_button = 10;
	for (int red_yellow = 0; red_yellow < 32; red_yellow++)
	{
		solidrectangle(0, red_top, 640, red_button);
		solidrectangle(0, 480 - red_top, 640, 480 - red_button);
		red_top = red_top + 10;
		red_button = red_button + 10;
		Sleep(100);
	}

	cleardevice();*/

	/*setcolor(YELLOW);
	for (int i = 0; i <= 20; i++)
	{
		circle(320, 240, i * 20);
		Sleep(500);
	}

	setcolor(BLUE);
	for (int i = 20; i >= 0; i--)
	{
		circle(320, 240, i * 20);
		Sleep(500);
	}
	Sleep(2000);

	setcolor(WHITE);
	for (int i = 20; i >= 0; i--)
	{
		circle(320, 240, i * 20);
	}
	Sleep(2000);

	setcolor(GREEN);
	for (int i = 20; i >= 0; i--)
	{
		circle(320, 240, i * 20);
	}
	Sleep(2000);

	cleardevice();

	Sleep(2000);*/

	red_top = 0;
	red_button = 10;
	/*setfillcolor(WHITE);
	for (int red_yellow = 0; red_yellow < 30; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 25;
		red_button = red_button + 25;
		Sleep(200);
	}
	red_top = 0;
	red_button = 10;

	setfillcolor(LIGHTGRAY);
	for (int red_yellow = 0; red_yellow < 30; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 25;
		red_button = red_button + 25;
		Sleep(200);
	}
	red_top = 0;
	red_button = 10;

	setfillcolor(BLACK);
	for (int red_yellow = 0; red_yellow < 30; red_yellow++)
	{
		solidrectangle(red_top, 0, red_button, 480);
		red_top = red_top + 25;
		red_button = red_button + 25;
		Sleep(200);
	}*/
	red_top = 0;
	red_button = 10;

	Sleep(1000);

	setfillcolor(DARKGRAY);
	solidrectangle(0, 0, 640, 480);
	setfillcolor(LIGHTMAGENTA);
	solidrectangle(200, 80, 240, 380);
	solidrectangle(240, 340, 400, 380);
	Sleep(1000);
	setfillcolor(DARKGRAY);
	solidrectangle(0, 0, 640, 480);
	setfillcolor(LIGHTMAGENTA);
	solidrectangle(200, 80, 440, 120);
	solidrectangle(200, 80, 240, 400);
	solidrectangle(200, 360, 440, 400);
	solidrectangle(400, 80, 440, 400);
	Sleep(1000);
	setfillcolor(DARKGRAY);
	solidrectangle(0, 0, 640, 480);
	setlinecolor(LIGHTMAGENTA);
	setlinestyle(0, 40);
	line(180, 80, 320, 400);
	line(420, 80, 320, 400);
	Sleep(1000);
	setfillcolor(DARKGRAY);
	solidrectangle(0, 0, 640, 480);
	setfillcolor(LIGHTMAGENTA);
	solidrectangle(200, 80, 440, 120);
	solidrectangle(200, 80, 240, 400);
	solidrectangle(200, 360, 440, 400);
	solidrectangle(200, 220, 440, 260);
	Sleep(1000);

	cleardevice();

	cin.get();
	return 0;
}

