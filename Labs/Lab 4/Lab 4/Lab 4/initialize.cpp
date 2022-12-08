// This program tests whether or not an initialized value
// is equal to a value input by the user

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;


	cout << "Please enter an integer for value 1" << endl;
	cin >> num1;

	cout << "Please enter an integer for value 2" << endl;
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2) {
		cout << "The values are the same." << endl;
		cout << "Hey, that's a coincidence!" << endl;
	} else {
		cout << "The values are not the same" << endl;
	}

	return 0;
}