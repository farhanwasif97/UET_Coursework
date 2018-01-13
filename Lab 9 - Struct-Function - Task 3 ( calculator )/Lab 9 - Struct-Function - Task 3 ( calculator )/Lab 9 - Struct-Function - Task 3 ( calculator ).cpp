// Lab 9 - Struct-Function - Task 3 ( calculator ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum (int a, int b)
{
	int c = a + b;

	return c;
}

int difference(int a, int b)
{
	int c = a - b;
	
	return c;
}

int product(int a, int b)
{
	int c = a * b;

	return c;
}

double quotient(double a, double b)
{
	double c = a / b;

	return  c;
}


int _tmain(int argc, _TCHAR* argv[])
{
	double x, y;
	char oper ;
	

	cout << "Enter a value for x " << endl;
	cin >> x;

	cout << "Enter a value for y " << endl;
	cin >> y;

	cout << "enter operator + , - ,* , /" << endl;
	cin >> oper;

	if (oper == '+')
	{
		int add = sum(x, y);
		cout << add << endl;
	}

	else if (oper == '-')
	{
		int minus = difference(x, y);
		cout << minus << endl;
	}

	else if (oper == '*')
	{
		int multiply = product(x, y);
		cout << multiply << endl;
	}

	else if (oper == '/')
	{
		double divide = quotient(x, y);
		cout << divide << endl;
	}

	
	

	return 0;
}

