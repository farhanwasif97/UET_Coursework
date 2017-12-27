// Power function using cmath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int base;
	int power;
	int result;

	cout << "Enter base" << endl; 
	cin >> base;

	cout << "Enter power" << endl;
	cin >> power;

	result = pow(base, power);

	cout << base << "^" << power << " =" << result << endl;

	return 0;
}

