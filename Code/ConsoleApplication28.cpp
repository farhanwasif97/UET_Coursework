// ConsoleApplication28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x, y, z ,t ,s,d;
	cout << "enter 1st no=x=" <<endl;
	cin>>x;
	cout << "enter 2nd no=y=" <<endl;
	cin >> y;
	z = x + y;
	cout << "sum of x and y = z =" << z << endl;
	t = x - y;
	cout << "difference of x and y =" << t << endl;
	s = x*y;
	cout << "product of x and y =" << s << endl;
	d = x / y;
	cout << "quotient is = " << d << endl;



	return 0;
}

