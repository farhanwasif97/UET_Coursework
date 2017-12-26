// Assignment 3 - Bonus Problem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	cout << "Enter an integer x" << endl;
	cin >> x;

	if (x >= 0)
	{
		if (x == 1)
		{
			cout << "The number is not prime" << endl;
		}

		else if (x % 2 == 0 && x > 2)
		{
			cout << "The number is not prime" << endl;
		}

		else if (x % 3 == 0 && x > 3)
		{
			cout << "The number is not prime" << endl;
		}

		else if (x % 7 == 0 && x > 7)
		{
			cout << "The number is not prime" << endl;
		}

		else if (x == 0 || x < 0)
		{
			cout << "The number 0 and negative integers are not prime" << endl;
		}

		else
		{
			cout << "The number is prime" << endl;
		}
	}

	return 0;
}

