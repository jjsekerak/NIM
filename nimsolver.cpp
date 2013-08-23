// NIM Solver using C++
/*
This is a practice c++ script to see how much i've learned
*/

#include <iostream>
#include <string>
#include <sstream>
#include <new>

using namespace std;

/*
int takeaway (int a, int b) { // a = # of flags, b = # to remove
	return (a-b);
}
*/


int nimSolver (int nimarray[], int length) {
	int nimXOR=0;
	for (int n=0; n<length; n++) {
		nimXOR ^= nimarray[n];
	}
	return nimXOR;
}

//void recommend

int main()
{
	int numPiles=0, n=0, totalFlags=0, pileSelect=0, takeFlags=0, nimNum=0;
	int * pilesArray;
	cout << "How many piles will you play with?: ";
	cin >> numPiles;
	pilesArray = new (nothrow) int[numPiles];

	if (pilesArray == 0)
		cout << "Error: memory could not be allocated.";
	else {
		for (n=0; n<numPiles; n++) {
			cout << "How many flags in Pile " << n << ": ";
			cin >> pilesArray[n];
			totalFlags += pilesArray[n];
		}
		cout << "You have entered " << totalFlags << " total flags: \n";
		for (n=0; n<numPiles; n++) {
			cout << pilesArray[n] << " in Pile " << n << "\n";
		}
	}

	do {

// Add a function here to calculate NIM # using XOR ^
		nimNum = nimSolver(pilesArray, numPiles);
		cout << "NIM number is: " << nimNum << endl;

// have the function make a recommendation move or output your fucked.

		cout << "How many flags will you take?: ";
		cin >> takeFlags;
		cout << "From which pile?: ";
		cin >> pileSelect;

		pilesArray[pileSelect] -= takeFlags;
		totalFlags -= takeFlags;

		cout << "There are " << totalFlags << " flags left.\n";
		for (n=0; n<numPiles; n++) {
			cout << pilesArray[n] << " in Pile " << n << "\n";
		}

	} while (totalFlags > 0);



	return 0;
}
