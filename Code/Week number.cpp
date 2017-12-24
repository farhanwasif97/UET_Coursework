// Week number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x, a;
	cout << "Enter week number=";
	cin >> x;
	if (x >= 1 && x <= 7)
	{
		if (x == 1)
			cout << "Monday" << endl;
		else if (x == 2)
			cout << "Tuesday" << endl;
		else if (x == 3)
			cout << "Wednesday" << endl;
		else if (x == 4)
			cout << "Thursday" << endl;
		else if (x == 5)
			cout << "Friday" << endl;
		else if (x == 6)
			cout << "Saturday" << endl;
		else if (x == 7)
			cout << "Sunday" << endl;
	}
	else
		cout << "Number is invalid" << endl;
	return 0;
}

