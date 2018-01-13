// Lab 9 - Structs-Functions (Recursive Fuctions).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int a)
{
	cout << a << endl;
	return a;
}
int print2(int b)
{
	cout << b << endl;
	return b;
}
int print(int  c)
{
	cout << c << endl;
	return c;
}
int factorial(int d)
{
	cout << d << endl;
	return d;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int n;

	cout << "Enter a number" << endl;
	cin >> n;

	cout << "Sum of all integers from that number to 1 :  " << endl;
	sum(n);
	
	cout << "Numbers are : " << endl;
	print2(n);

	cout << endl;

	cout << "Print Hello Function" << endl;
	print(n);

	int x = 0;

	cout << "Enter a number for factorial" << endl;
	cin >> x;

	cout << "Factorial of " << x << " is : " << factorial(x) << endl;
	cout << endl;
	
	return 0;
}

