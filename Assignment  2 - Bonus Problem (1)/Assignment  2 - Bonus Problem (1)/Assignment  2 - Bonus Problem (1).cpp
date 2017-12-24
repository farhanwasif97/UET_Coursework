// Assignment  2 - Bonus Problem (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x  ;
	int x1 ;
	int x2 ;
	int x3 ;

	cout << "Please enter an integer" << endl;
	cin >> x;

	x1 = x / 100;
	x2 = (x - (x1 * 100)) / 10;
	x3 = (x - (x1 * 100 + x2 * 10));

	if (x1 == x3)
	{
		cout << x << " Is a palindrome" << endl;
	}

	else
	{
		cout << x << " Is not a palindrome" << endl;
	}
	
	return 0;
}

