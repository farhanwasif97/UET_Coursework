// Lab 9 - Struct-Functions (Factorial).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n > 1)
	{
		cout << n * factorial (n-1) << endl;
		return n * factorial (n - 1);
	}

	else
	{
		return 1;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Please enter a value as input" << endl;
	cin >> x;

	factorial(x);
	return 0;
}

