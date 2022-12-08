// A program that determines the area and perimeter of a rectangle with a given width and length

// Charles Reigle

#include <iostream>

using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
    int area = 0;
    int perim = 0;
    area = LENGTH * WIDTH;
    perim = (2*LENGTH) + (2*WIDTH);

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perim << endl;
    return 0;
}
