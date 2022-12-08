#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   double first, second, third;

   double avg;

   cout << "Please input the first grade" << endl;

   cin >> first;

   cout << "Please input the second grade" << endl;

   cin >> second;

   cout << "Please input the third grade" << endl;

   cin >> third;

   avg = (first + second + third) / 3;

   cout << setprecision(4) << "The average of the three grades is " << avg << endl;

}
