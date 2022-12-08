

#include <iostream>
#include <array>

using namespace std;

int binarySearch(int[], int, int);
void linearSearch();
void dynamicMemory();
int* makeArray(int);
float arrayAverage(int*, int);
void bubbleSort(int[], int);
void swap(int&, int&);

int main() {

	

	/*float* pointer;
	float pay = 3.75;
	pointer = &pay;
	cout << pointer;
	return 0;*/
}

int binarySearch(int array[], int size, int value) {
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last) {
		middle = (first + last) / 2;
		if (array[middle] == value) {
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	
	
	if (position == -1) {
		cout << "Not in array. Position if inserted would be: " << first + 1 << endl;
	}
	return position;
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
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < arrSize; i++) {
		if (arr[i] > max) max = arr[i];
	}

	delete[] arr;
	arr = nullptr;

	cout << "The max number is: " << max << endl;
}

int* makeArray(int len) {
	int* myArr = new int[len];
	for (int i = 0; i < len; i++) {
		*(myArr + i) = 0;
	}
	return myArr;
}

float arrayAverage(int* arr, int size) {
	float num = 0;

	for (int i = 0; i < size; i++) {
		num += arr[i];
	}

	return (num / size);
}

/*
int size;
	cout << "Input the size of the array: ";
	cin >> size;

	int* arr = makeArray(size);

	for (int i = 0; i < size; i++) {
		cout << "Input a value for array item " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "The average is " << arrayAverage(arr, size) << endl;
	delete[] arr;
	arr = nullptr;
	return 0;
	*/

void bubbleSort(int array[], int size){

	int maxElement;
	int index, temp;

	for (maxElement = size - 1; maxElement > 0; maxElement--) {
		for (index = 0; index < maxElement; index++) {
			if (array[index] > array[index + 1]) {
				swap(array[index], array[index + 1]);
			}
		}
	}

	/* 
	
	FOR TESTING PUT IN MAIN:
	int arr[] = { 4, 8, 24, 10, 1 };
	bubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}		
	
	*/

}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
