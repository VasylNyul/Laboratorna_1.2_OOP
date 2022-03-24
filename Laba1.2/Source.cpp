#include <iostream>
#include "large_integers.h"

using namespace std;
int main()
{

	large_integers l;

	l.read();
	l.display();

	cout <<" sun ="	   <<l.sum()  << endl;
	cout <<" sub ="	   <<l.sub()  << endl;
	cout <<" mult ="   <<l.mult() << endl;
	cout <<" divis ="  <<l.divis()<< endl;
	
	l.comp();
	return 0;
}
