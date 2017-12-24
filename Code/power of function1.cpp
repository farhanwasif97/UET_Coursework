// power of function1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
     
	int base = 0;
	

		cout << "Enter base:  ";
		cin >> base;
		int power = 0;
		cout << "Enter power :";
			cin >> power;
			int result = 0;
		result = pow(base, power);

		cout << base << "^" << power << " = " << result << endl;
	return 0;
}

