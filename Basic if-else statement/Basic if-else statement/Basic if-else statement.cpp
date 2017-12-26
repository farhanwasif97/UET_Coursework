// Basic if-else statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;

	cout << "Enter a value for x" << endl;
	cin >> x;

	if (x == 100)
	{
		cout << "x is 100" << endl;
		x++;
		cout << "After increment, x is  " << x << endl;
	}

	else
	{
		cout << "number is " << x << endl;
	}

	return 0;
}


















}
	

