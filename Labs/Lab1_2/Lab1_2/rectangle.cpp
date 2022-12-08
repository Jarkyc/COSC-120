//Program takes 2 forms of input, length and width. It then prints a rectangle with the given dimensions

//Charles Reigle

#include <iostream>

using namespace std;

//Because I hate the fact that C++ does not have a println() function line java
void println(string str)
{
    cout << str << endl;
}

int main()
{
    int width = 1;
    int height = 1;
    cout << "This program will print out a rectangle with a specified width and height." << endl;
    cout << "Please input a width in numerical form:" << endl;
    cin >> width;
    cout << "Please input a height in numerical form:" << endl;
    cin >> height;

    //In reality, we only need to form one string and just copy it.
    //There's no need to form a new string for each row, the string should be the same each time

    string line = "";
    for(int j = 1; j <= width; j++)
    {
        line += "*";
    }

    for(int i = 1; i <= height; i++)
    {
        println(line);
    }
    return 0;
}


