// comma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a, b;
	cout << "input integer between 1000 to 99,999=";
	cin >> x;
	if (x >= 1000 && x <= 99999)
	{		a = x % 1000;
	b = x / 1000;
	if (a == 0)
	cout <<"The number is="<< b << "," << "000" << endl;
	else
		cout << "The number is=" << b << "," << a << endl;
}
	else
	cout << "Number is not within the range" << endl;
	return 0;
}

