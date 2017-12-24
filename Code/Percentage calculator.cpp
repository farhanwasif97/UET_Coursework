// Percentage calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a, b, c, d, e, x, y;
	cout << "Total Marks=";
	cin >> x;
	if (x != 0)
	{
		cout << "Physics marks=";
		cin >> a;
		cout << "Chemistry marks=";
		cin >> b;
		cout << "English=";
		cin >> c;
		cout << "Mathematics=";
		cin >> d;
		cout << "Computer=";
		cin >> e;
		y = (a + b + c + d + e) * 100 / x;
		cout << "Percentage=" << y << "%" << endl;
		if (y >= 90)
			cout << "Grade A" << endl;
		else if (y >= 80 && y < 90)
			cout << "Grade B" << endl;
		else if (y >= 70 && y < 80)
			cout << "Grade C" << endl;
		else
			cout << "Grade F" << endl;
	}
	else
		cout << "Error Total Marks cannot be Zero(0)" << endl;
	return 0;
}

