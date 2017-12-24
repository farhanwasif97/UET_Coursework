// swap a single integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, x, y, z;
	cout << "Input any Number=";
	cin >> x;
	if (x < 10)
	{
		cout << "Number is reversed=" << x << endl;
		return 0;
	}
	else
	{

		a = x % 10;
		z = x / 10;
	jump:

		if (z == 0)
			cout << "Number is reversed=" << x << endl;
		else
		{
			y = z / 10;
			cout << y;

			if (z == 0)
			{

				return 0;
			}
			else
				z = z / 10;
			goto jump;
		}
		return 0;
	}
}