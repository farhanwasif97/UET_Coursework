// Lab 9 - Struct-Functions (Structure Task).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct	food
{
	double rate;
	double weight;
	double price;
};

void input(int x, food a[])
{
	for (int i = 0; i < x; i++)
	{
		cout << "For product" << i + 1 << endl;
		
		cout << "Rate : " << endl;
		cin >> a[i].rate;

		cout << "Weight : " << endl;
		cin >> a[i].weight;
	}	
}

void price(int x, food a[])
{
	for (int i = 0; i < x; i++)
	{
		a[i].price = a[i].rate * a[i].weight;

		cout << "For product " << i + 1 << " price is: " << a[i].price << endl;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	int var;

	cout << "Number of products: " << endl;
	cin >> var;

	food * x = new food[var];

	input(var, x);
	price(var, x);


	return 0;
}

