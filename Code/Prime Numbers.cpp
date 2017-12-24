// Prime Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cout << "Input any integer=";
	cin >> x;
	if (x > 0)
	{
		if (x == 1)
			cout << "Number is not prime" << endl;
		else if (x % 2 == 0 && x > 2)
			cout << "Number is not Prime" << endl;
		else
		if (x % 3 == 0 && x > 3)
			cout << "Number is not Prime" << endl;
		else
		if (x % 5 == 0 && x > 5)
			cout << "Number is not Prime" << endl;
		else
		if (x % 7 == 0 && x > 7)
			cout << "Number is not Prime" << endl;
		if (x % 11 == 0 && x > 11)
			cout << "Numbeer is not prime" << endl;
		else
			cout << "Number is Prime" << endl;
	}
	else cout << "0 and negative integers are not prime" << endl;
	return 0;
}

