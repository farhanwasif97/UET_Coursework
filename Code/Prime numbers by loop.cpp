// Prime numbers by loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y=1, z=0;
	cout << "Input integer to check whether a number is prime or not=";
	cin >> x;
	while (y<=x)
	{
		if (x%y == 0)
			z++;
		y++;
	}
	if (z == 2)
		cout << "Prime Number" << endl;
	else
		cout << "Not prime" << endl;
	return 0;
}

