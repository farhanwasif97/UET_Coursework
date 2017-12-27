// In Lab 5 - Task 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int counter = 5;

	while (counter <= 50)
	{
		cout << counter << endl;
		counter += 5;
	}
	
	return 0;
}

