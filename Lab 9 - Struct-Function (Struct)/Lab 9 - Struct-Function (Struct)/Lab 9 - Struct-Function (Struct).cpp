// Lab 9 - Struct-Function (Struct).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct Person
{
	string firstname;
	string lastname;
	int age;
	double salary;

};

void display(struct Person)
{

}

int _tmain(int argc, _TCHAR* argv[])
{
	Person p;

	cout << "Enter first name" << endl;
	cin >> p.firstname;

	cout << "Enter last name" << endl;
	cin >> p.lastname;

	cout << "Enter age" << endl;
	cin >> p.age;

	cout << "Enter salary" << endl;
	cin >> p.salary;

	display(p);

	return 0;
}

