// In Lab 4 - Task 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include < iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int y;

	cout << "enter a number x" << endl;
	cin >> x;

	cout << "enteer a number y" << endl;
	cin >> y;

	if (x > y)
	{
		cout << "Maximum is: " << x << endl;
	}

	else
	{
		cout << "Maximum is: " << y << endl;
	}


	return 0;

}

