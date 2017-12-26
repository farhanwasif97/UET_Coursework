// Prime Numbers (while loop).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0;
	int number = 0;
	cout << "number" << endl;
	cin >> number;
	int n = 1;

	while (n < number)
	{
		if ( number % n == 0)
		{
			count++;
		}
		n++;
	}

	//cout<<"Count"<<count<<endl;

	if (count == 2)
	{
		cout << number << " is prime " << endl;
	}

	else
	{
		cout << number << " is not prime " << endl;
	}
	return 0;
}

