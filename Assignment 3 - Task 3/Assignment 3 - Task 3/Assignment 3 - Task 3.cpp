// Assignment 3 - Task 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int hours;
	int rate;
	int wage;
	int overtime;
	int days = 5;


	cout << "Hours worked by the employee in a week" << endl;
	cin >> hours;

	rate = hours / days;
	wage = hours * rate;
	 
	cout << "The weekly wage of the employee is: " << wage << " $" << endl;

	if (hours > 40)
	{
		overtime = 1.5 * rate;

		cout << "The overtime of the employee is: " << overtime << " $" << endl;
		wage = (hours * rate) + overtime;

		cout << "The weekly wage of the employee with overtime is: " << wage << " $" << endl;
	}

	else
	{
		cout << "No overtime payment" << endl;
	}
	
	
	

	return 0;
}

