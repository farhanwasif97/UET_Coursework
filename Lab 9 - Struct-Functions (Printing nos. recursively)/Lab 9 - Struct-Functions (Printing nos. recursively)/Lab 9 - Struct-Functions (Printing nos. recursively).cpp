// Lab 9 - Struct-Functions (Printing nos. recursively).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int print2(int n)
{
	if (n >= 1)
	{
		cout << n << " " << endl;
		
		return print2(n - 1);
	}

	else
	{
		return 0;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Enter a number " << endl;
	cin >> x;

	print2(x);
	return 0;
}

