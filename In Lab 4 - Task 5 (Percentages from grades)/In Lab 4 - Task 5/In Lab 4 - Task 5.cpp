// In Lab 4 - Task 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char grade;

	cout << "Enter your grade" << endl;
	cin >> grade;

	if (grade != 'A' && grade != 'B' && grade != 'C')
	{
		cout << "Your entry is invalid" << endl;
	}
	
	else if (grade == 'A')
	{
		cout << "Percentage is  >= 90 % " << endl;
	}

	else if (grade == 'B')
	{
		cout << "Percentage is >= 80 % & < 90 %" << endl;
	}

	else if (grade == 'C')
	{
		cout << "Percentage is >= 70 % & < 80 %" << endl;
	}

	else if (grade == 'U')
	{
		cout << "Percentage is < 70 %" << endl;
	}
	
		return 0;
}

