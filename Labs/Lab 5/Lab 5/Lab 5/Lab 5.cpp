
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int coff = 0, tea = 0, coke = 0, oj = 0, opt = 0, person = 1;
	cout << "Menu: " << endl << "1. Coffee" << endl << "2. Tea" << endl << "3. Coke" << endl << "4. Orange Juice" << endl << endl;
	do {
		cout << "Please input the favorite beverage of Person #" << person << ": Chose 1, 2, 3, or 4 from the menu above,"
			<< " or -1 to exit the program." << endl;
		cin >> opt;
		switch (opt) 
		{
		case 1: 
			coff++;
			break;
		case 2: 
			tea++;
			break;
		case 3: 
			coke++;
			break;
		case 4: 
			oj++;
			break;
		default: break;
		}
		person++;
	} while (opt != -1);

	cout << "Beverage" << setw(25) << "Number of Votes" << endl;
	cout << "*********************************" << endl;
	cout << "Coffee" << setw(13) << coff << endl;
	cout << "Tea" << setw(16) << tea << endl;
	cout << "Coke" << setw(15) << coke << endl;
	cout << "Orange Juice" << setw(7) << oj << endl;
}

