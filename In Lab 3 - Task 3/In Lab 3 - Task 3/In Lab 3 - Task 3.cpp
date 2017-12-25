// In Lab 3 - Task 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, z, a, b, c, d, e;



	cout << " Price of an egg: " << endl;
	cin >> x;

	cout << "Total number of eggs: " << endl;
	cin >> y;

	c = x * y;

	cout << "Price of bread: " << endl;
	cin >> z;

	cout << "Total number of breads: " << endl;
	cin >> a;

	d = z * a;

	e = c + d;
	cout << "Total price: " << e << endl;
	
	return 0;
}

