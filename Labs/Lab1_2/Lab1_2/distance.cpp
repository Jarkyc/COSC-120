//Program that takes a time in hours and tells you how far you will go based on an input speed


//Charles Reigle
#include <iostream>

using namespace std;

void calcDist(int speed)
{
    int time = 0;
    int distance = 0;


    cout << "To calculate how far you will be, enter a number in hours: " <<endl;
    cin >> time;

    distance = speed * time;

    cout << "The distance the car will travel in " << time << " hours is " << distance << " miles." << endl;

    calcDist(speed);
}

int main()
{
    int speed = 0;

    cout << "Please input how fast you are going, in miles per hour: " << endl;
    cin >> speed;

    //The reason it is setup into 2 functions is to allow the user to calculate as many times as they want
    //without restarting the program. This is mainly because I don't feel like taking multiple screenshots for
    //each output and want to touch up on main loops.

    calcDist(speed);

    return 0;
}
