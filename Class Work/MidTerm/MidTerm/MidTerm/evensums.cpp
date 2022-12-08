// Input a positive integer n, use a for/while/do-while loop to calculate and output the sum of all the even numbers between 1 and n.

//Charles Reigle

#include <iostream>;
using namespace std;

int main() {
	int n;

	cout << "Input a postive number: " << endl;
	cin >> n;

	while (n < 0) {
		cout << "Invalid input, number must be positive. Try again." << endl;
		cin >> n;
	}

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}

	cout << "The sum of all even numbers between 1 and " << n << " is " << sum << endl;
}