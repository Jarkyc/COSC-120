// This program illustrates the use of the switch statement.

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
		cout << "YOU PASS!" << endl;
	else if (grade == 'F')
		cout << "You failed" << endl;
	else
		cout << "Invalid input for a grade" << endl;

	return 0;
}