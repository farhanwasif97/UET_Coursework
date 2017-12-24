// Print Asterisks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a=1, b=0, c=0;
	cout << "Input number of lines to print(*)=";
	cin >> x;
	while (a <= x)
	{
		cout << "*";
		a++;
	}
	cout << endl;
	return 0;
}

