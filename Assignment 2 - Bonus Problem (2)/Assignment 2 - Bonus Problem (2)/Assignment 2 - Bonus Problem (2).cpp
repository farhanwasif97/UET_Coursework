// Assignment 2 - Bonus Problem (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int y;
	int z;

	cout << "Enter an integer x" << endl;
	cin >> x;

	cout << "Enter an integer y" << endl;
	cin >> y;

	z = x + y;
	y = z - y;
	x = z - x;

	cout << " X is: " << x << endl;
	cout << " Y is: " << y << endl;
	
	return 0;
}

