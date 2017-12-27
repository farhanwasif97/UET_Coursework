// In Lab 4 - Task 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Enter a number x" << endl;
	cin >> x;

	if (x % 2 == 0)
	{
		cout << x << " is even" << endl;
	}

	else
	{
		cout << x << " is odd" << endl;
	}
	
	return 0;
}

