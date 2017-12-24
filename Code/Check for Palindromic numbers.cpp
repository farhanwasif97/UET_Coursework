// Check for Palindromic numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, x, y,z,c;
	cout << "Input any Number=";
	cin >> x;
	if (x < 10)
		cout << "Number is palindromatic=" << x << endl;
	else
	{

		a = x % 10;
		z = x / 10;
	jump:
		c = z % 10;

		if (a == z)
			cout << "Number is Palindromatic=" <<x<< endl;
		if (a == c)
			cout << "Number is palidromatic";
		else
		{
			y = z / 10;

			if (z == 0)
			{
				cout << "Number is not Palindromatic=" << x << endl;
				return 0;
			}
			else
				z = z / 10;
			goto jump;
		}
	}

	return 0;
}

