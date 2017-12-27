// Strings - Task 2 (find length of string).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string sentence;

	cout << "Enter name" << endl;
	cin >> name;

	cout << "Type a sentence" << endl;
	cin >> sentence;

	cout << "Name is  " << name << "  Sentence is " << sentence << endl;
	cout << "Ma'am's Fullname is " << name << endl;

	int x = name.length();
	int y = sentence.length();

	cout << "Your name length is " <<  x << endl;
	cout << "Sentence length is  " <<  y << endl << endl;


	return 0;
}

