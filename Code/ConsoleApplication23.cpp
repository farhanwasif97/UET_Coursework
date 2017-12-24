// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double PI = 3.14;
	float radius;
	cin >> radius;
	cout << PI << endl;
	cout << "circumference" << 2 * PI*radius << endl;

	return 0;
}

