// sum of first 10 integers using for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int y = 0;
	for (int x = 0; x <= 10; x++)
	{
		y = y + x;
	}
	cout << y << endl;
	return 0;
}

