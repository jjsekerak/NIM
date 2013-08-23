// NIM Solver using C++
/*
This is a practice c++ script to see how much i've learned
*/

#include <iostream>
#include <string>
#include <sstream>
#include <new>

using namespace std;


int main()
{
	int numPiles, n, totalflags;
	int * p;
	cout << "How many piles will you play with?: ";
	cin >> numPiles;
	pilesArray = new (nothrow) int[numPiles];
	if (pilesArray == 0)
		cout << "Error: memory could not be allocated.";
	else {
		for (n=0; n<numPiles; n++) {
			cout << "How many flags in Pile " << n << ": ";
			cin >> pilesArray[n];
		}
		cout << "You have entered: \n";
		for (n=0; n<numPiles; n++) {
			cout << pilesArray[n] << " in Pile " << n << "\n";
		}
		delete[] p;
	}

	return 0;
}
