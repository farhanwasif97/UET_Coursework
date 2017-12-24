// guess the numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	cout << "Input number to be guessed and keep it a secret=";
	cin >> x;
	system("CLS");
	for (int y = 0; x != y;)
	{
		cout << "Input a number=";
		cin >> y;
		if (y < x)
			cout << "Number is larger" << endl;
		else if (y>x)
			cout << "Number is smaller" << endl;
	}
	cout << "You have guessed it=" << x << endl;
	return 0;
}