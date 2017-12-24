// Assignment 2-Tax Calculation Problem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	double y;
	double z;
	
	cout << "Please enter your income" << endl;
	cin >> x;
	
	if ( x < 10000 )
		cout << "no tax" << endl;
	
	else
	{
		if ( x >= 10000 && x <= 20000 )
		{
			y = x * 0.05;
			cout << "Tax=" << y << endl;
		}
		else
		{
			if ( x > 20000 )
				z = x*0.1;
			cout << "Tax=" << z << endl;
		}
	}
	
	return 0;
}

