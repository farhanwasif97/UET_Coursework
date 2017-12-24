// calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x = 0;
	cout << "Enter a number=";
	cin >> x;
	double y = 0;
	cout << "Enter another number=";
	cin >> y;
	
	cout << "the sum of two numbers is=" << x+y << endl;
	
	cout << "Difference of numbers=" << x-y << endl;
	
	cout << "The product of two numbers=" << x*y << endl;
	
	cout << "The Division of Numbers=" << x/y << endl;
	return 0;
}

