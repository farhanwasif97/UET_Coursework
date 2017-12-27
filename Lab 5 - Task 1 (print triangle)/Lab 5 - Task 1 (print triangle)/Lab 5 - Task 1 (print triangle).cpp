// Lab 5 - Task 1 (print triangle).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int var = 0;
	int size = 0;

	cout << "Enter size of a triangle" << endl;
	cin >> size;

	for (int x = 0; x < size; x++)
	{
		cout << " " << endl;

		for (int x = 0; x < var; x++)
		{
			cout << " * " << endl;
		}

		cout << endl;
		var++;
	}
	cout << endl;
	cout << "Yes I did it" << endl << endl;
	return 0;
}

