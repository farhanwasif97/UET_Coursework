// Assignment 3 - Task 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, z;

	cout << "Mention your income" << endl;
	cin >> x;

	if (x <= 10000)
	{
		cout << "No income tax" << endl;
	}

	if (x > 10000 && x <= 20000)
	{
		y = x * 0.05;
		cout << "Tax is: " << y << " $" << endl;
	}
	
	else if (x > 20000)
	{
		z = x * 0.1;
		cout << "Tax is: " << z << " $" << endl;
	}
	 
	
	return 0;
}

