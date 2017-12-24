// volume of frustum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>;
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	double PI = 3.142;
	double h = 0;
	cout << "Input height=";
	cin >> h;
	double r = 0;
	cout << "Input radius of one side=";
	cin >> r;
	double a = 0;
	cout << "Input radius of other side=";
	cin >> a;
	cout << "Volume of frustrum=" << PI*h*((r*r) + (r*a) + (a*a)) / 3 << endl;
	return 0;
}

