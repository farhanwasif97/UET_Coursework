// step function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	cout << "Input any number=";
	cin >> x;
	int z = 0;
	z = x * 10;
	if (z % 10 == 9)
	{
		x = x + 0.1;
		cout << x << endl;
	}
	else
		cout << "Number=" << x << endl;
	return 0;
}

