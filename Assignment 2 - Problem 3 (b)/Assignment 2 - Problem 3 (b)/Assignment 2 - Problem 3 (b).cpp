// Assignment 2 - Problem 3 (b).cpp : Defines the entry point for the console application.
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
	 
	cout << "Enter an integer in the range of 10-99" << endl;
	cin >> x;


	x1 = x / 10;
	x2 = x % 10;
	x3 = x1 % x2;
	
	if (x < 10 || x > 99)
	{
		cout << "Your entry is invalid" << endl;	
		return 0;
	}


	else
	{
		if (x1 % x2 == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}

