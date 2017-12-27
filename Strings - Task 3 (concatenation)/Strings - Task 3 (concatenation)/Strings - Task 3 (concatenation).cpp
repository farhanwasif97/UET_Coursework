// Strings - Task 3 (concatenation).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str = "Hina";
	str += "Arqam";

	cout << "String after concatenation: " << str << endl;

	string strg = "Hina";

	strg = strg + " " + "Arqam";
	
	cout << "String two after concatenation: " << strg << endl;



	return 0;
}

