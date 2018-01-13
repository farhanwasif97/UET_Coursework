// Lab 9 - Struct-Functions (Sum).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int n)
{
	if (n > 1)
	{
		return n+sum(n - 1);
	}
	else
	{
		return 0;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Please enter some value" << endl;
	cin >> x;

	sum(x);



	return 0;
}

