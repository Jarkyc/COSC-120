// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	int value;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		
	float mean;		// the average of the first n positive numbers
	int end;

	cout << "Please enter a positive starting integer" << endl;
	cin >> value;
	cout << "Please enter a positive ending integer" << endl;
	cin >> end;

	if (value > 0)
	{
		for (number = value; number <= end; number++)
		{
			total = total + number;

		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / ((end - value) + 1);	// note the use of the typecast
													// operator here
		
		cout << "The mean average of the numbers " << value << " through " << end << " is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}