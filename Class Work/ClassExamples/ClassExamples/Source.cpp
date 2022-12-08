

#include <iostream>
#include <array>

using namespace std;

void binarySearch();
void linearSearch();
void dynamicMemory();

int main() {
	
	dynamicMemory();

	return 0;

}

void binarySearch() {
	int arr[10] = { 1, 5, 7, 9, 10, 15, 17, 18, 19, 26 };

	int target = 5;

	int left = 0;
	int right = sizeof(arr) / 4;

	while (left < right) {
		int mid = (left + right) / 2;

		if (arr[mid] < target) {
			left = mid + 1;
			
		}
		else if (arr[mid] > target) {
			right = mid;
		}
		else {
			cout << "Found " << target << " at index " << mid << endl;
			break;
		}
	}

}

void linearSearch() {
	int arr[10] = { 1, 5, 7, 9, 10, 15, 17, 18, 19, 26 };

	int target = 5;

	for (int i = 0; i < 10; i++) {
		if (arr[i] == target) {
			cout << "Found " << target << " at index " << i << endl;
		}
	}

}

void dynamicPractice() {

	int count;
	int* arrayPtr;
	cout << "Input the number of elements in the array: "; 
	cin >> count;

	arrayPtr = new int[count];
}

void dynamicMemory() {
	int* arr = nullptr;
	int arrSize;

	cout << "Input the size of the array: ";
	cin >> arrSize;

	arr = new int[arrSize];

	for (int i = 0; i < arrSize; i++) {
		cout << "Input value " << i + 1 << " for the array: ";
		cin  arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < arrSize; i++) {
		if (arr[i] > max) max = arr[i];
	}

	delete [] arr;
	arr = nullptr;

	cout << "The max number is: " << max << endl;
}
