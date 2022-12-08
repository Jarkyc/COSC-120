//A program that takes an input of miles driven and gallons used to calculate MPG

//Charles Reigle

#include <iostream>

using namespace std;

int main()
{
    double used = 0;
    double distance = 0;
    double mpg = 0;

    cout << "This program will calculate the Miles Per Gallon of your trip." << endl;
    cout << "Enter in the amount of gas, in gallons, used: " << endl;
    cin >> used;
    cout << "Enter in the distance traveled: " << endl;
    cin >> distance;

    cout << distance << endl;
    cout << used << endl;

    mpg = (distance / used);

    cout << "The MPG rate of the car is: " << mpg << " gallons." << endl;

    return 0;
}
