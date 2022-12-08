// Lab 6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int compArrays(int[], int[], int);

int main()
{
    int arr1[5], arr2[5], size = 5;

    for (int i = 0; i < size; i++) {
        cout << "Input value " << i + 1 << " for array 1: ";
        cin >> arr1[i]; 
    }

    for (int i = 0; i < size; i++) {
        cout << "Input vale " << i + 1 << " for array 2: ";
        cin >> arr2[i];
    }

    cout << "There are " << compArrays(arr1, arr2, size) << " items in array 1 that are larger than the corresponding items in array 2" << endl;
    
}

int compArrays(int arr1[], int arr2[], int size) {

    int num = 0;

    for (int i = 0; i < size; i++) {
        if (arr1[i] > arr2[i]) num++;
    }
    return num;
}

