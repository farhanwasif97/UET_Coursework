// tax callculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x,a,b;
	cout << "Income=";
	cin >> x;
	if (x < 10000)
		cout << "no tax" << endl;
	else
	{

		if (x >= 10000 && x <= 20000)
		{
			a = x *0.05;
			cout <<  "Tax="<<a << endl;
		}
		else
		{
			if (x > 20000)
				b = x*0.1;
			cout <<"Tax=" <<b << endl;
		}
	}
	return 0;
}

