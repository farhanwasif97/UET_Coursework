// Assignment 3 - Task 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int y;
	int z;
	int s;
	int d;
	int p;
	int q;
	
	cout << "Enter a number x" << endl;
	cin >> x;
	
	cout << "Enter a number y" << endl;
	cin >> y;

	cout << "Input the operation you would like to perform" << endl;
	cin >> z;

	s = x + y;
	d = x - y;
	p = x * y;
	q = x / y;

	if (z ='+')
	{
		cout << s << endl;
	}
	
	else if (z = '-')
	{
		cout << d << endl;
	}

	else if (z = '*')
	{
		cout << p << endl;
	}

	else if (z = '/')
	{
		cout << q << endl;
	}

		

	
	return 0;
}

