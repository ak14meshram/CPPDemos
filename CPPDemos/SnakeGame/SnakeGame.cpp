#include "pch.h"
#include <iostream>
using namespace std;

enum eDirection {
	STOP,
	LEFT,
	RIGHT,
	UP,
	DOWN
};

class Snake 
{
	int x, y;
	int xfruit, yfruit;
	const int width = 30;
	const int height = 15;
	eDirection eDir;
	
public:
	
	Snake()
	{

	}

	void Display()
	{

	}

	void Play()
	{

	}


};

int main()
{
	Snake s1();
	s1.Display();
	s1.Play();



}

