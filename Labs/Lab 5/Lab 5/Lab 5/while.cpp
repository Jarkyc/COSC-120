// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	char letter;

	do
	{

		cout << "Enter in any letter. If you enter an \'x\', the program will shut down." << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	} while (letter != 'x');

	return 0;
}