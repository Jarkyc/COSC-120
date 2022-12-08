// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void sort(int *ptra, int *ptrb);

int main()
{
    int a, b;
    int *ptra, *ptrb;

    cout << "Enter a value for a: ";
    cin >> a;

    cout << "Enter a value for b: "; 
    cin >> b;

    ptra = &a;
    ptrb = &b;

    sort(ptra, ptrb);
    cout << "Sorted List: " << a << " " << b << endl;
}

void sort(int* ptra, int* ptrb) {


    if (*ptra > *ptrb){
        int temp = *ptra;
        *ptra = *ptrb;
        *ptrb = temp;
    }
}
