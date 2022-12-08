// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
    char res, rm;
    int bill = 0;
    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state:" << endl;
    cin >> res;
    while ((res != 'O') && (res != 'I')) {
        cout << "Invalid input, needs to be \"I\" or \"O\". Try Agin: " << endl;
        cin >> res;
    }

    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:" << endl;
    cin >> rm;
    while ((rm != 'Y') && (rm != 'N')) {
        cout << "Invalud input, needs to be \"Y\" or \"N\". Try again: " << endl;
        cin >> rm;
    }

    if (res == 'I') {
        bill += 3000;
        if (rm == 'Y') {
            bill += 2500;
        }
    } else {
        bill += 4500;
        if (rm == 'Y') {
            bill += 3500;
        }
    }

        cout << "Your total bill for this semester is $" << bill << endl;

}


