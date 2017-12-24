// division for two digits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x ;
	int a,b,c=0;
	cout << "Input any integer between 10-99=";
	cin >> x;
	if (x <= 99 && x >= 10)
	{
		a = x % 10;
		b = x / 10;
		c = b % a;

		if (c ==0)
			cout << "yes" << endl;
		else cout << "No" << endl;
	}
	else cout << "Integer is not within the range" << endl;
	
	return 0;
}

