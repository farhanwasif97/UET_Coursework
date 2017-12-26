// Basic if-else statement ( example 2 ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x;

	cout << "enter a value for x" << endl;
	cin >> x;

	if (x == 0)
	{
		cout << "x is neither positive nor negative" << endl;
	}

	else if (x > 0)
	{
		cout << "x is positive" << endl;
	}

	else if (x < 0)
	{
		cout << "x is negative" << endl;
	}

	else
	{
		cout << "Your input is invalid" << endl;
	}
	return 0;
}

