// Lab 7 - Double data type arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double var[3] = { 1.5, 2.9, 3.7 };
	double sum = 0.0;
	double avg = 0.0;

	for (int i = 0; i < 3; i++)
	{
		sum = sum + var[i];
		cout << var[i] << " " << endl;
	}
	avg = sum / 3;
	cout << "The average is = " << avg << endl;
	return 0;
}

