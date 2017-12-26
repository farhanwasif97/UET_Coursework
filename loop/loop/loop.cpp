// loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

//void pushX(int num);
void pushX(int num){
	for (int i = 0; i < num; i++)
		cout << " ";
}


int _tmain(int argc, _TCHAR* argv[])
{
	for (int j = 0; j < 100; j++)
	{
		system("CLS");
		pushX(j);
		cout << "Hello";
		cout << " : )" << endl;
		//cout<<"";
		Sleep(100);
		}


	return 0;
}

