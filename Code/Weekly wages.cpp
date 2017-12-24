// Weekly wages.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x, y,a,b,c;
	cout << "Input No. of hours worked=";
	cin >> x;
	cout << "Input wage per hour=";
	cin >> y;
	if (x <= 168 && x > 0){
		if (x >= 40)
		{
			a = x - 40;
			cout << "Wage=" << (40 * y) + (1.5*y*a) << endl;
		}
		else
			cout << "Wage=" << (x*y) << endl;
	}
	else cout << "You hours should be between 0 to 168" << endl;
	return 0;
}

