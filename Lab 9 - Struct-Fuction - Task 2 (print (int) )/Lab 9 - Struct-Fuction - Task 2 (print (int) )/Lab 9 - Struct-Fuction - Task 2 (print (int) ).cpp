// Lab 9 - Struct-Fuction - Task 2 (print (int) ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void print(int a)
{
	cout << "Your number is " << a << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cout << "Enter a number" << endl;
	cin >> x;

	print(x);

	return 0;
}

