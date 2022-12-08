// A program that takes in a value representing kilometers, and returns that distance in miles

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{

    float kil;
    float conversion = 0.621;
    float miles;

    cout << "Please enter an amount of kilometers in numerical value, then hit enter" << endl;
    cin >> kil;

    miles = kil * conversion;

    cout << "You entered " << kil << " kilometers. This is equal to " << miles << " miles" << endl;


return 0;
}
