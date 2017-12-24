// Reversing of numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, a, b = 0;
	cout << "Input any number=";
	cin >> x;
	y = x;
	d:
	if (y != 0)
	{
		a = y % 10;
		b = (b * 10) + a;
		y = y / 10;
		goto d;
	}
	else cout << "The mirrored number is=" << b << endl;
	return 0;
}

