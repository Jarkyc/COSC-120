// This project takes in a data file of students and their grades for assigments in a class.
// It uses the grades given to calculate their class grade, and their averages, given specified weights.
/*
10 quizzes | 10 points
10 labs    | 10 points
3 projects | 20 points
3 midterms | 30 points
Final exam | 30 points 

Attendance can only go up to 10%
*/

/* Pseudo Code */
// Initialize the input stream of the file
// Read the first 2 header lines
// Loop through each line representing a different student
// Declare variables for their first and last names
// Declare an array of arrays. The array represents their grade card, and each sub array represents different parts
// (i.e. Array 0 is a list of all their quiz grades. Array 1 is a list of all their lab grades. etc.
// Calculate the minimum grade in the Quiz array.
// Calculate the minimum grade in the Lab array.
// Calculate the maximum grade in the Project array.
// Calculate the maximum grade in the Midterm array
// Use the values in all the arrays to calculate the averages. 
// Use the averages and the weights of the grades to calculate the final grade
// Take the final grade, apply any point deduction from attendance
// Convert the end grade to a letter scale. 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// How many grading sections are there?
// Quizzes, labs, projects, midterms, final, attendance. 
const int NUM_SECTIONS = 6;

//How many of those sections are actually stored in arrays?
// Quizzes, labs, projects, midterms.
const int NUM_ARRAYS = 4;

// Constants for how many grades are in each section
const int QUIZ_SIZE = 10;
const int LAB_SIZE = 10;
const int PROJECT_SIZE = 3;
const int MIDTERM_SIZE = 3;

// Constants for the weights of the grading sections
const float QUIZ_WEIGHT = 0.10;
const float LAB_WEIGHT = 0.10;
const float PROJECT_WEIGHT = 0.20;
const float MIDTERM_WEIGHT = 0.30;
const float FINALEX_WEIGHT = 0.30;

//An array of size equal to the number of grade sections, to contain an array for each section.
//Stores the pointer of every array.

char getLetter(float);
float getMax(float[], int);
float getMin(float[], int);
float getAverage(float[], int);
float getFinalGrade(float[], int);


int main()
{
    ifstream dataIn;
    string headingLine;
    string firstName, lastName;
    float quizes[QUIZ_SIZE], labs[LAB_SIZE], projects[PROJECT_SIZE], midterms[MIDTERM_SIZE];
    float finalEx, attendance, finalGrade;
    float avgQuiz, avgLab, avgProj, avgMT;
    float minQuiz, minLab, maxProject, maxMT;
    char letter;

    // open the file
    dataIn.open("COSC120Grades.txt");

    // exception for file open
    if (dataIn.fail())
    {
        cout << "Input file open error!" << endl;
        return 0;
    }

    //read the header lines
    for (int i = 0; i < 2; i++) {
        getline(dataIn, headingLine);
    }


    cout << "FirstName  LastName  Min_Quiz  Min_Lab  Max_Project  Max_MidT  FinalGrade  FinalLetter" << endl;

    //Read through the file until there is nothing left to read.
    while (!dataIn.eof()) {

        dataIn >> firstName;
        dataIn >> lastName;

        //Read in the quizes.
        for (int q = 0; q < QUIZ_SIZE; q++) {
            dataIn >> quizes[q];
        }
        //Read in the labs.
        for (int l = 0; l < LAB_SIZE; l++) {
            dataIn >> labs[l];
        }
        //Read in the projects
        for (int p = 0; p < PROJECT_SIZE; p++) {
            dataIn >> projects[p];
        }
        //Read in the midterms
        for (int m = 0; m < MIDTERM_SIZE; m++) {
            dataIn >> midterms[m];
        }
        //Read in the final exam
        dataIn >> finalEx;
        //Read in the attendance deduction
        dataIn >> attendance;

        minQuiz = getMin(quizes, QUIZ_SIZE);
        minLab = getMin(labs, LAB_SIZE);
        maxProject = getMax(projects, PROJECT_SIZE);
        maxMT = getMax(midterms, MIDTERM_SIZE);

        avgQuiz = getAverage(quizes, QUIZ_SIZE);
        avgProj = getAverage(projects, PROJECT_SIZE);
        avgMT = getAverage(midterms, MIDTERM_SIZE);
        avgLab = getAverage(labs, LAB_SIZE);


        float card[] = {avgQuiz, avgLab, avgProj, avgMT, finalEx, attendance};
        finalGrade = getFinalGrade(card, NUM_SECTIONS);
        letter = getLetter(finalGrade);

        //Output all the results
        cout << fixed << setprecision(2) << left;
        cout << setw(11) << firstName;
        cout << setw(10) << lastName;
        cout << setw(10) << minQuiz;
        cout << setw(9) << minLab;
        cout << setw(13) << maxProject;
        cout << setw(10) << maxMT;
        cout << setw(12) << finalGrade;
        cout << letter;
        cout << endl;
    }
}

    float getMax(float arr[], int size){
        float max = arr[0];
        
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }

    float getMin(float arr[], int size) {
        float min = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] < min) min = arr[i];
        }
        return min;
    }

    float getAverage(float arr[], int size) {
        float total = 0;

        for (int i = 0; i < size; i++) {
            total += arr[i];
        }
        return (total / size);
    }

    char getLetter(float val){
        if (val >= 90) return 'A';
        else if (val >= 80) return 'B';
        else if (val >= 70) return 'C';
        else if (val >= 60) return 'D';
        else { return 'F'; }
    }

    float getFinalGrade(float card[], int size) {
        
        float grade = ((card[0] * QUIZ_WEIGHT) + (card[1] * LAB_WEIGHT) + (card[2] * PROJECT_WEIGHT) + (card[3] * MIDTERM_WEIGHT) + (card[4] * FINALEX_WEIGHT));

        return (grade - (card[5] * grade));
            

    }
