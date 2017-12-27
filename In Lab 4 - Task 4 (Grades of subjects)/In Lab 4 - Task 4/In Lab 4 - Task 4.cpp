// In Lab 4 - Task 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, z, a, b, c;

	cout << "Enter your marks of Chemistry" << endl;
	cin >> x;

	cout << "Enter your marks of Physics" << endl;
	cin >> y;

	cout << "Enter your marks of Mathematics" << endl;
	cin >> z;

	cout << "Enter your marks of English" << endl;
	cin >> a;

	cout << "Enter your marks of Computer" << endl; 
	cin >> b;

	c = (x + y + z + a + b) / 5;

	if (c >= 90)
	{
		cout << "Percentage is: " << c << " and the Grade is: A" << endl;
	}

	else if (c >= 80)
	{
		cout << "Percentage is: " << c << " and the Grade is B" << endl;
	}

	else if (c <= 70)
	{
		cout << "Percentage is: " << c << " and the Grade is C" << endl;
	}
	
	
	return 0;
}

