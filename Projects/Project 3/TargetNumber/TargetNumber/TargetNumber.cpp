// TargetNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charles Reigle

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNum();
int* initArray(int);
int linearSearch(int*, int, int);
int* addTo(int*, int, int&, bool);
int* removeFrom(int*, int, int&);
bool targetFound(int*, int, int);
void sortAscending(int*, int&);
void sortDescending(int*, int&);
bool isEven(int);

int main()
{
    srand(time(0));
    int target, len = 3, iteration = 1;
    int* array = initArray(len);
    bool gameLoop = true, inputPhase = true, arrayVal;

    while (gameLoop) {

        cout << "******************************************************" << endl;
        cout << "Game Iteration: " << iteration << endl;
        cout << "Numebr List : ";
        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        }
        cout << endl;

        while (inputPhase) {
            cout << "Enter a target number between 3 and 27: ";
            cin >> target;

            if (cin.fail()) { 
                cin.clear();
                cin.ignore(256, '\n');
                continue; 
            }

            if ((target >= 3 && target <= 27)) inputPhase = false;
        }

        cout << len << endl;

        //If a the 3 numbers are found, exit
        if (len >= 3 && targetFound(array, len, target)) return 0;


        //3 numbers aren't found, continue game
        cout << "There are no numbers in ";
        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        } 
        cout << "that add to equal " << target << endl;

        //generate a new number
        int newRand = randomNum();
        cout << "New Number Generated: " << newRand << endl;

        //Search if the new number exists in the array already
        int searchResult = linearSearch(array, len, newRand);

        while (searchResult != -1){
            //the function returns -1 if the number doesn't exist. Otherwise it returns said number.
            //Therefore if it returns a number not equal to -1, we need to remove it and generate a new number
            cout << "Number is in array. Removing." << endl;
            array = removeFrom(array, searchResult, len);
            newRand = randomNum();
            cout << "Generating new number: " << newRand << endl;
            searchResult = linearSearch(array, len, newRand);
        }

        cout << "Number is not in the array" << endl;

        bool even = isEven(newRand);
       
        if (even) {
            cout << "Number is even, sorting ascending" << endl;
            sortAscending(array, len);
        }
        else { 
            cout << "Number is odd, sorting descending" << endl;
            sortDescending(array, len);
        }
        
        cout << "Number list: ";
        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        }
        cout << endl;

        //Insert the number to the array
        array = addTo(array, newRand, len, even);

        //Print out the array with the insertion
        cout << "Number list: ";
        for (int i = 0; i < len; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
        
        //We keep goin
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

int* addTo(int* array, int num, int &len, bool type) {
    //Type is corresponding to the position the item is inserted
    //True  : Right
    //False : Left

    cout << "Adding " << num << endl;
    int* newArray = new int[len + 1];

    if (type)
    {
        for (int i = 0; i < len; i++) {
            newArray[i] = array[i];
        }
        newArray[len] = num;

        len++;

        delete[] array;
        array = nullptr;
        cout << "Adding to the right" << endl;
    } else {
        newArray[0] = num;
        for (int i = 0; i < len; i++) {
            newArray[i + 1] = array[i];
        }
        len++;

        delete[] array;
        array = nullptr;
        cout << "Adding to the left" << endl;
    }
    return newArray;
}

int* removeFrom(int* array, int num, int& len) {
    cout << "Removing: " << num << endl;
    int* newArray = new int[len - 1];
    int i = 0;
    for (i; i < len; i++) {
        if (array[i] == num) break;
        newArray[i] = array[i];
    }

    i = i + 1;
    for (i; i < len; i++) {
        newArray[i - 1] = array[i];
    }
    len--;

    return newArray;
}

void sortAscending(int* array, int &len) {
    bool flag;
    
    do {
        flag = false;
        for (int i = 0; i < len - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                flag = true;
            }
        }

    } while (flag);
}

void sortDescending(int* array, int &len) {
    bool flag;
    
    do {
        flag = false;
        for (int i = 0; i < len - 1; i++) {
            if (array[i] < array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                flag = true;
            }
        }

    } while (flag);
}

bool isEven(int n) {
    return (n % 2 == 0);
}