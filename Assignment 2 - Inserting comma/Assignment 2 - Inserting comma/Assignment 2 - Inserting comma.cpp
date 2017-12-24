// Assignment 2 - Inserting comma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, x1, x2, x3, x4, x5;

	cout << "input integer between 1,000 & 99,999=" << endl;
	cin >> x;

	x1 =   x / 10000;
	x2 = ( x - ( x1 * 10000)) / 1000;
	x3 = ( x - ((x1 * 10000) + (x2 * 1000))) / 100;
	x4 = ( x - ((x1 * 10000) + (x2 * 1000) + (x3 * 100))) / 10;
	x5 = ( x - ((x1 * 10000) + (x2 * 1000) + (x3 * 100) + (x4 * 10)));


	if (x < 1000)
	{
		cout << x << endl; 
	}
	
	else if (x >= 1000 && x <= 10000)
	{
		cout << x2 << "," << x3 << x4 << x5 << endl;
	}
	
	else if (x >10000 && x <= 99999)
	{
		cout << x1 << x2 << "," << x3 << x4 << x5 << endl;
	}
	
	else if (x > 99999)
	{
		cout << "Your entry is invalid" << endl;
	}
	
	return 0;
}

