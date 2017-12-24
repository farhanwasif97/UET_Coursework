// No. of Eggs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x=0;
	cout << "Price of an egg=";
	cin >> x;
	int y = 0;
	cout << "No. of eggs=";
	cin >> y;
	int a = 0;
	cout << "Price of one bread=";
	cin >> a;
	int b = 0;
	cout << "No. of Breads=";
	cin >> b;
	int z = 0;
	z = x*y;
	int c = 0;
	c = a*b;
	int e = 0;
	e = z + c;
	cout << "Total price of basket=" << e << endl;

	return 0;
}

