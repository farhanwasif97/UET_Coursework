// palindromic numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y , a, b = 0;

	cout << "Enter a positive number= ";
	cin >> x;

	y = x;
	g:
	if (x !=0)
	
	{
		a = x % 10;
		b = (b * 10) + a;
		x = x / 10;
		goto g;
	} 


	if (y == b)
		cout << " The number is a palindrome=" << y << endl;
	else
		cout << " The number is not a palindrome="<<y<<endl;

	return 0;
}