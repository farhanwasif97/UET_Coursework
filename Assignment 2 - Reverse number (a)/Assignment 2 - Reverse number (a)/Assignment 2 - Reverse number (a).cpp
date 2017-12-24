// Assignment 2 - Reverse number (a).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x  ;
	int x1 ;
	int x2 ;
	
	cout << "Please enter an integer x" << endl;
	cin >> x;

	x1 = x % 10 ; 
	x2 = x / 10 ;

	cout << "Your input has been reversed to: "<< x1 << x2 << endl;
	
	return 0;
}

