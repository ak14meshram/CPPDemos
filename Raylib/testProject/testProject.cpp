// testProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	MyClass(const MyClass& obj) = delete;
	/*{
		cout << "copy constructor A" << endl;
	}*/

	MyClass operator=(const MyClass& obj) = delete;

	~MyClass();

	int i = 0;
private:

};

MyClass::MyClass()
{
	cout << "constructor A" << endl;
}

MyClass::~MyClass()
{
	cout << "destructor A" << endl;
}



MyClass func()
{
	MyClass a;
	return a;
}

MyClass& func1()
{
	MyClass a;
	return a;
}

const MyClass& func2()
{
	MyClass a;
	return a;
}

int main()
{
	auto x = func();
	x.i = 1;
	auto& y = func1();
	y.i = 1;
	auto& z = func2();
	
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
