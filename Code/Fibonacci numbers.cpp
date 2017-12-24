// Fibonacci numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x=0, y=1, n,z=0;
	//cout << "Input Number to which you want print fibonacci numbers=";
	//cin >> n;
	cout << x<<endl;
	while (z<5)
	{
		y = x + y;
		x = y + x;
		z++;
		cout << y<<endl <<x << endl;
	}

	return 0;
}

