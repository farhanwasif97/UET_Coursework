// Assignment 3 - Task 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Enter a number" << endl;
	cin >> x;

	if (x == 0)
	{
		cout << "Number is neither positive nor negative" << endl;
	}
	
	else if (x > 0)
	{
		cout << "Number is positive" << endl;
	}
	
	else if (x < 0)
	{
		cout << "Number is negative" << endl;
	}
	
	
	return 0;
}

