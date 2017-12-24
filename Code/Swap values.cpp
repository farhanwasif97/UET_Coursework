// Swap values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x,y,a;
	cout << "Input any Integer";
	cin >> x;
	cout << "Input any other integer";
	cin >> y;
	a = x;
	x = y;
	y = a;
	cout << "X=" << x << endl;
	cout << "Y=" << y << endl;

	return 0;
}

