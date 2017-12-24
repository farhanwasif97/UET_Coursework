// ConsoleApplication37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double m = 0;
	cout << "Enter distance in meters" << endl;
	cin >> m;
	double z = 0;
		z = m / 1000;
		cout << "Distance in kilometers=";
		cout << z << endl;
	return 0;
}

