// Lab 9 - Struct-Functions (Printing hello recursively).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int print(int a)
{
	if (a >= 1)
	{
		cout << "Hello" << endl;
		
		return print(a - 1);
	}
	else
	{
		return 0;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "How many times would you like to repeat " << endl;
	cin >> x;

	print(x);

	return 0;
}

