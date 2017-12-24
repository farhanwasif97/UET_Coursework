// In Lab 5 - Task 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int n;
	int y=1;

	cout << "Enter a number x" << endl;
	cin >> x;

	cout << "Enter power n" << endl;
	cin >> n;

	for (int a = 0; a < n; a++)
	{
		y = y * x;
		
	}
	cout << "The answer is: " << y << endl;
	
	return 0;
}

