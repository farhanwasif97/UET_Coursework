// power using loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a = 1, b = 1,n;
	cout << "Input integer=";
	cin >> x;
	cout << "Input power=";
	cin >> n;
	while (a <= n)
	{
		b = b*x;
		a++;
	}
	cout <<"Power of function="<< b << endl;
	return 0;
}

