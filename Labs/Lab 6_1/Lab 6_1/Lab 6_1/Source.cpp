//Takes in a value of miles traveled and hours traveled
//And calculates MPH, and the result is a parameter passed by reference.

//Charles Reigle

#include <iostream>;
#include <iomanip>;

using namespace std;

void calcMPH(int, int, double&);

int main() {
	int miles, hours;
	double mph; //mph will be passed by reference.

	cout << "Please input the miles traveled" << endl;
	cin >> miles;
	cout << "Please input the hours traveled" << endl;
	cin >> hours;
	calcMPH(miles, hours, mph);
	cout << fixed << setprecision(2);
	cout << "Your speed is " << mph << " miles per hour" << endl;
}

void calcMPH(int miles, int hours, double& mph) {
	mph = miles / (double) hours;
}