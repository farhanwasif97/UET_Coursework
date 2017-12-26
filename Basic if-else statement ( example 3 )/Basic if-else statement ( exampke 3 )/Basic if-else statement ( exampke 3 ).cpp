// Basic if-else statement ( exampke 3 ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int marks;
	
	cout << "enter ypur marks (out of 100) " << endl;
	cin >> marks;

	if (marks >= 80 && marks <= 100)
	{
		cout << "Your grade is A" << endl;
	}

	else if (marks >= 60 && marks < 80)
	{
		cout << "You have got B grade" << endl;
	}

	else if (marks >= 40 && marks < 60)
	{
		cout << "You have got C grade" << endl;
	}

	else if (marks >= 0 && marks < 40)
	{
		cout << "You are fail" << endl;
	}

	else
	{
		cout << "Invalid input" << endl;
	}
	return 0;
}

