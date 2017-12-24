// Step calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x, y;
	cout << "Input any Number=";
	cin >> x;
	cout << "Input any Number=";
	cin >> y;
	cout << "Input any Airthmatic operation(+,-,*,/)=";
	char  a;
	cin >> a;

		switch (a){
		case '+':
			cout << "Sum=" << x + y << endl;
			break;
		case '-':
			cout << "Difference" << x - y << endl;
			break;
		case '*':
			cout << "Multiplcation=" << x*y << endl;
			break;

		case'/':
			if (y != 0)
				cout << "Division=" << x / y << endl;
			else cout << "Undefined" << endl;
			break;
		default:
			cout << "Operation can not be performed" << endl;
		}
	
	
	return 0;
}