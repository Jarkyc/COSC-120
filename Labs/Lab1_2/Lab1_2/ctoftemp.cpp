//A program used to convert Celsius to Fahrenheit

//Charles Reigle
#include <iostream>

using namespace std;

int main()
{
    double c = 0;
    double f = 0;


    cout << "This program will take a temperature in Celsius and return it in Fahrenheit" << endl;
    cout << "Enter in the temperature in Celsius: " << endl;
    cin >> c;

    f = ((9.0/5.0)*c) + 32;

    cout << "The temperature in Fahrenheit is " << f << " degrees." << endl;

    return 0;
}
