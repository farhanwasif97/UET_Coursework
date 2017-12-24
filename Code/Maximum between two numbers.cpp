// Maximum between two numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x, y,z, a;
	cout << "Input any Number=";
	cin >> x;
	cout << "Input any Number=";
	cin >> y;
	cout << "Input any Number=";
	cin >> z;
	if (x >= y)
		a = x;
	else
		a = y;
	if (a <= z)
		a = z;
	cout << "Maximum number=" << a << endl;
	return 0;
}

