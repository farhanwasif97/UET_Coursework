// DEcimal to binary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a, b = 0;
	int v = 1;
	cout << "Input Number to convert into binary=";
	cin >> x;
jump:
	if (x != 0)
	{
		a = x % 2;
		x = x / 2;
		b = b + (v*a);
		v = v * 10;
		goto jump;
	}
	cout <<"Binary="<<b<< endl;
	return 0;
}

