// Strings Practice Questions - Q.8 (reverse string).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str;

	cout << "Enter string" << endl;
	cin >> str;

	int l = str.size(); //Hold length of string
	
	int temp;
	for (int i = 0, j = l = 1; i < 1 / 2; i++, j--)
	{
		temp = str[i];	
		str[i] = str[j];
		str[j] = temp;
	}
	cout << "Reverse String " << str << endl;

	return 0;
}

