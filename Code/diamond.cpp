// diamond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int z = 1,a=0,y=1;		
	int b = 0;
	cout << "Enter No. of rows=";
	cin >> b;
	int d = 0;
	d = b;	
	a = b;
	for (int x = 0; x <= b; x++)
	{
		for (int c = 0; c <= a; c++)
			cout << "*";
		cout << endl;
		a = a - 2;
		for (int e = 0; e != z; e++)
			cout << " ";
		z = z + 1;
	}
	
return 0;
	}