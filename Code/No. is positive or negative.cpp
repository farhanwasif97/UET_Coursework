// No. is positive or negative.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	cout << "Input any number=";
	cin >> x;
	if (x == 0)
		cout << "Number is neither positive nor negative" << endl;
	else{
		if (x > 0)
			cout << "Number is positive" << endl;
		else
			cout << "Number is Negative" << endl;
	}
	return 0;
}

