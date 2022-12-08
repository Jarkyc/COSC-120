// Lab 6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void cube(int&);

int main()
{
	int n;

	cout << "Input a number" << endl;
	cin >> n;
	cube(n);
	cout << "The cubed value is " << n << endl;
}
void cube(int& n) {
	n = pow(n, 3);
}
