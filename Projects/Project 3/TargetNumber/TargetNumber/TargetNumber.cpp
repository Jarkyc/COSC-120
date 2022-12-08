// TargetNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charles Reigle

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNum();
int* initArray(int);
int linearSearch(int*, int, int);
int* mutatedArray(int*, int, bool);
bool targetFound(int*, int, int);

int main()
{
    srand(time(0));
    int target, len = 3, iteration = 1;
    int* array = initArray(len);
    bool gameLoop = true, inputPhase = true, arrayVal;

    while (gameLoop) {

        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        }
        cout << endl;

        while (inputPhase) {
            cout << "Enter a target number between 3 and 27: ";
            cin >> target;

            if (target >= 3 && target <= 27) inputPhase = false;
        }

        len = (sizeof(&array)) / sizeof(int);
        cout << len << endl;
        if (len >= 3 && targetFound(array, len, target)) return 0;
        // check 3 numbers
        // if ==, return end of game.
        // else, continue out of if statement
        cout << "There are no numbers in ";
        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        } 
        cout << "that add to equal " << target << endl;

        //generate a new number
        int newRand = randomNum();
        // new number = num in array, delete. repeat until no ==.
        int searchResult = linearSearch(array, sizeof(array) / sizeof(int), newRand);

        while (searchResult != -1) {
            //TODO: Change main game loop to pass to functions by reference?
            array = mutatedArray(array, searchResult, false);
            newRand = randomNum();
            searchResult = linearSearch(array, sizeof(array) / sizeof(int), newRand);
        }


        inputPhase = true;
        iteration++;
    }

}

int randomNum()
{
    return rand() % 11;
}

int* initArray(int len)
{
    int* array = new int[len];
    int newNum;
    for (int i = 0; i < len; i++) {
        newNum = randomNum();
        bool exists;
        (linearSearch(array, len, newNum) != -1) ? exists = true : exists = false;
        while (exists) {
            newNum = randomNum();
            (linearSearch(array, len, newNum) != -1) ? exists = true : exists = false;
        }
        array[i] = newNum;
    }
    return array;
}

int linearSearch(int* array, int len, int target)
{
    for (int i = 0; i < 10; i++) {
        if (array[i] == target) {
            return array[i];
        }
    }
    return -1;
}

int* mutatedArray(int* array, int number, bool type) {
    // type == true  : add to the array.
    // type == false : remove the number from the array.
    int arrayLength = sizeof(array) / sizeof(int);
    cout << "Size during mutation: " << arrayLength << endl;
    int* newArray;
    if (type) 
    {
        newArray = new int[arrayLength + 1];

        for (int i = 0; i < arrayLength; i++) {
            newArray[i] = array[i];
        }
        newArray[arrayLength + 1] = number;
    }
    else 
    {
        newArray = new int[arrayLength - 1];

        for (int i = 0; i < arrayLength; i++) {
            if (array[i] == number) continue;
            else newArray[i] = array[i];
        }
    }
    return newArray;
}

bool targetFound(int* arr, int size, int target) {
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "Find three numbers whose sum equals to the target!" << endl;
                    cout << "These numbers are " << arr[i] << ", " << arr[j] << ", and " << arr[k] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}