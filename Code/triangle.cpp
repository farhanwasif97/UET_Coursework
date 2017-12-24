// triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int z = 1;		//if z=0 then the top star won't print.
	int b = 0;
	cout << "Enter No. of rows=";
	cin >> b;
	int d = 0;
	d = b;		//To add space ==b
	for (int x = 0; x != b; x++)
	{
		for (int c = 0; c < d; c++)
			cout << " ";
		d = d -1;
		for (int d = 0; d < z; d++)
			cout << "*";
		cout << endl;
		z = z +2;			//if z=z+1 then it will form a half triangle.
	}
	
	return 0;
}





