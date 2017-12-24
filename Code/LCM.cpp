// LCM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y, a;
	cin >> x;
	cin >> y;
	if (x > y)
		a = x;
	else
		a = y;
	do{
		if (a%x == 0 && a%y == 0)
		{
			cout << "LCM=" << a;
			break;
		}
		else ++a;
	} while (true);
	return 0;
}

