// Arrays - 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int var[6];
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a value" << endl;
		cin >> var[i];
	}

	for (int i = 0; i < 5; i++)
	{
			cout << var[i] << endl;
			sum = sum + var[i];
			avg = sum / 6;
	}

	var[5] = sum;
	cout << "The sum is = " << sum << endl;
	cout << "The average is = " << avg << endl;
	
		return 0;
}

