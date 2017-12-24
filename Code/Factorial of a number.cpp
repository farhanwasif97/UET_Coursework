// Factorial of a number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, b = 0,c=1;
	cout << "Input integer=";
	cin >> x;
	while (x!=0)
	{
		b = b + 1;
		c = c*b;
		x--;
	}
	cout << c << endl;
	return 0;
}

