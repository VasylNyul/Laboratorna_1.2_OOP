#include <iostream>
#pragma once
using namespace std;

class large_integers
{
private:
	int a, b;

public:
	int get_a() const { return a; };
	int get_b() const { return b; };
	void set_a(unsigned int value);
	void set_b(unsigned int value);

	bool init(int x, int y);
	void read();
	void display() const;

	int sum();
	int sub();
	int mult();
	double divis();
	void comp();

};

