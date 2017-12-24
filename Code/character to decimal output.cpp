// character to decimal output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Input any Grade Character=";
	char x,A,B,C,D,F;
	cin >> x;
	if (x == 'A')
		cout << "Grade is above 90%" << endl;
	else if (x == 'B')
		cout << "Grade is between 80% and 90%" << endl;
	else if (x == 'C')
		cout << "Grade is between 70% and 80%" << endl;
	else if (x == 'D')
		cout << "Grade is between 60% and 70%" << endl;
	else if (x == 'F')
		cout << "Fail Below 60%" << endl;
	return 0;
}

