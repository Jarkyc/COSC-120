//Program used to calculate profit based on the input revenue

//Charles Reigle
#include <iostream>

using namespace std;

int main()
{
    const double PROFIT_PERCENT = 0.13;
    double profit = 0;
    int revenue = 0;

    cout << "Enter the total revenue for the year: " << endl;
    cin >> revenue;
    profit = revenue * PROFIT_PERCENT;
    cout << "The profit is: $" << profit << endl;

    return 0;
}
