
#include "large_integers.h"

void large_integers::set_a(unsigned int value)
{
	a = value;
}

void large_integers::set_b(unsigned int value)
{
	b = value;
}
bool large_integers::init(int x, int y)
{
	if (x > 0 && y > 0)
	{
		a = x;
		b = y;
		return true;
	}
	else
		cout << "wrong argument" << endl;
	return false;
}

void large_integers::display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void large_integers::read()
{
	int x, y;
	do {
		cout << "a = "; cin >> x;
		cout << "b = "; cin >> y;
	} while (!init(x, y));

}

int large_integers::sum()
{
	
	return a + b;
}

int large_integers::sub()
{
	
	return a - b;
}

int large_integers::mult()
{
	return a * b;
}

double large_integers::divis()
{
	return a / b;
}

void large_integers::comp()
{

	if (a > b)
	{
		cout << "a > b" << endl;
	}
	else
		if (a < b)
		{
			cout << "a < b" << endl;
		}
		else
			if (a == b)
			{
				cout << "a = b" << endl;
			}

}