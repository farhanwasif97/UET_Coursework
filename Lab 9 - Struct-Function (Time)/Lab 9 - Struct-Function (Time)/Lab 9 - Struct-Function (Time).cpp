// Lab 9 - Struct-Function (Time).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

void input(time & a)
{
	cout << "Enter hours" << endl;
	cin >> a.hours;

	cout << "Enter minutes" << endl;
	cin >> a.minutes;

	cout << "Enter seconds" << endl;
	cin >> a.seconds;
}

void output(time & a)
{
	cout << "Your time is " << a.hours << ": " << a.minutes << ": " << a.seconds << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	time x;
	input(x);
	output(x);
	
	return 0;
}

