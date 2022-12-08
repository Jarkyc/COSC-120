// TargetNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charles Reigle

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNum();
int* initArray(int len);
int* linearSearch(int* array, int len, int taget);

int main()
{
    srand(time(0));
    int target, len = 3;
    int* array = initArray(len);
    bool gameLoop = true, inputPhase = true, arrayVal;

    while (gameLoop) {

        while (inputPhase) {
            cout << "Enter a target number between 3 and 27: ";
            cin >> target;

            if (target >= 3 && target <= 27) inputPhase = false;
        }
        int* array = initArray(len);
        //Phase to search for 3 different numbers
        for (int i = 0; i < len; i++) {
            cout << array[i] << endl;
        }
        inputPhase = true;
    }

}

int randomNum()
{
    return rand() % 11;
}

int* initArray(int len)
{
    int* array = new int[len];
    int newNum, arraySize;
    for (int i = 0; i < len; i++) {
        newNum = randomNum();
        for (int k = 0; k < sizeof(array) / sizeof(int); k++) {
            while (array[k] == newNum) {
                newNum = randomNum();
            }
        }
        array[i] = newNum;

    }
    return array;
}

int* linearSearch(int* array, int len, int target)
{
    for (int i = 0; i < 10; i++) {
        if (array[i] == target) {
            cout << "Found " << target << " at index " << i << endl;
        }
    }
}
