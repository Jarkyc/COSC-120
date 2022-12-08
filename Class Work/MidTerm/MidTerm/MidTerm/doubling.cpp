//Use a for/while loop to print out the sequence 1, 2, 4, 8, 16, ..., 64. 

//Charles Reigle

#include <iostream>;
using namespace std;

int main() {
	for (int i = 1; i <= 64; i *= 2) {
		cout << i << " ";
	}
}