// sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, z;
	cout << "Input Number=";
	cin >> x;
	cout << "Input Number=";
	cin >> y;
	z = x + y;
	cout << "Sum=" << z << endl;
	return 0;
}

