// LCM by for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, a;
	cout << "Input number=";
	cin >> x;
	cout << "Input number=";
	cin >> y;
	if (x > y)
		a = x;
	else
		a = y;
	if (a%x == 0 && a%y == 0)
		cout << "LCM is=" << a << endl;
	else
	cout << "LCM is=" <<x*y<< endl;
	
	
	
	return 0;

}