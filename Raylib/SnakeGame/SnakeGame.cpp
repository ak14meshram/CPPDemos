// SnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <deque>
#include "raylib.h"

class Snake 
{
	int x, y;
public:
	std::deque <int> sn;

	Snake()
	{
		
	}
};

void draw()
{
	BeginDrawing();

	ClearBackground(WHITE);


	DrawLine3D({ -125,-125,0 }, { 125,125,0 }, BLUE);

	EndDrawing();
}

int main()
{
	//// Initialization (Note windowTitle is unused on Android)
	////---------------------------------------------------------
	//InitWindow(800, 600, "Snake Game");

	//bool finished = false;
	////DWORD speed = 1000;
	//while (!finished || !WindowShouldClose()) {
	//	/*DWORD currentTick = GetTickCount();
	//	DWORD endTick = currentTick + 1000 / speed;

	//	while (currentTick < endTick) {
	//		
	//		currentTick = GetTickCount();
	//	}*/

	//	//render here

	//	draw();
	//}



}