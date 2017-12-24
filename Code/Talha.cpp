// Talha.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char x;
	cout << "Input a Charachter" << endl;
	cin >> x;
	
	int a = int (x);
	cout << "ASCII num= " <<int (a)<< endl;

	return 0;
}

