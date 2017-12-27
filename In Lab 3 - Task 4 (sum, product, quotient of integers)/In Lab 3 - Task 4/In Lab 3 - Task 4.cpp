// In Lab 3 - Task 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double b;
	double x, y, z, a;
	 

	cout << "Enter an integer x" << endl;
	cin >> x;

	cout << "Enter an integer y" << endl;
	cin >> y;

	z = x + y;
	 
	cout << "The sum of the two integers is: " << z << endl;

	a = x * y;
	
	cout << "The product of the two numbers is: " << a << endl;

	b = x / y;

	cout << "The quotient of the two integers is: " << b << endl;


	return 0;
}

