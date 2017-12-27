// String Practice Questions - Q.4 (concatenate strings).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str1;
	string str2;
	string strg;

	cout << "Enter string str1" << endl;
	cin >> str1;

	cout << "Enter string str2" << endl;
	cin >> str2;

	strg += str1 + " " + str2;
	
	cout << "String after concatenation is " << strg << " ! " << endl;









	
	
	
	return 0;
}

