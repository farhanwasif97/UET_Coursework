/ ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	cin >> x;
	if (x == 1)
		cout << "Number is Prime";
	if (x % 2 == 0 && x > 2)
		cout << "Number is not prime";
	if (x % 3 == 0 && x > 3)
		cout << "Number is odd";
	if (x % 5 == 0 && x > 5)
		cout << "Number is not prime";
	if (x % 7 == 0 && x > 7)
		cout << "Number is not Prime";
	else
		cout << "Number is prime ";
	return 0;
}

