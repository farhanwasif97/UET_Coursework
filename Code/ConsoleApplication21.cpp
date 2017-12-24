// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0;
	cout << "Enter Base" << endl;
	cin >> a;
	int b = 0;
	cout << "Enter power" << endl;
	cin >> b;
	int result = 0;
	result = pow(a, b);
	cout << result << endl;
	return 0;
}

