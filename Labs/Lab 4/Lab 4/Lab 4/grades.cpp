// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	//The while loop is just so I could keep running the program
	//Without having to restart it, for the sake of the output screenshots.
	while (true) {
		float average;	// holds the grade average

		cout << "Input your average:" << endl;
		cin >> average;

		if (average > 100)
			cout << "Invalid Data" << endl;
		else if (average >= 90)
			cout << "A" << endl;
		else if (average >= 80)
			cout << "B" << endl;
		else if (average >= 60)
			cout << "You pass" << endl;
		else
			cout << "You fail" << endl;

	}
	return 0;
}