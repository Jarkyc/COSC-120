// This program finds the average time spent programming by a student
// each day over a three day period.

// Charles Reigle

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, pTotal, bTotal, pAverage, bAverage;
	int student, ndays, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
	cout << "How many days are there? " << endl << endl;
	cin >> ndays;

	for (student = 1; student <= numStudents; student++)
	{
		pTotal = 0;
		bTotal = 0;

		for (day = 1; day <= ndays; day++)
		{
			cout << "Please enter the number of hours student "
				 << student << " spent on programming on day " << day << "." << endl;
			cin >> numHours;

			pTotal += numHours;

			numHours = 0;

			cout << "Please enter the number of hours student "
				<< student << " spent on biology on day " << day << "." << endl;
			cin >> numHours;

			bTotal += numHours;
		}

		pAverage = pTotal / ndays;
		bAverage = bTotal / ndays;

		cout << endl;
		if (bAverage > pAverage) cout << "On average, student " << student << " spent more time working on Biology." << endl;
		else if (pAverage > bAverage) cout << "On average, student " << student << " spent more time working on Programming." << endl;
		else if (pAverage == bAverage) cout << "On average, student " << student << " spent the same amount of time working on Programming an Biology" << endl;

		cout << endl;
		
		cout << "Student " << student << " Programming time average: " << pAverage << endl;
		cout << "Student " << student << " Biology time average: " << bAverage << endl;
		
		
	}

	return 0;
}