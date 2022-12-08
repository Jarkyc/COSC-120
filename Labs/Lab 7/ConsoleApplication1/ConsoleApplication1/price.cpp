// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Charles Reigle

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];	// creates a new data type
											// of a 2D array of floats

void getPrices(PriceType, int&, int&);		// gets the prices into the array 
void printPrices(PriceType, int, int);		// prints data as a table
float findHighestPrice(PriceType, int, int);
float findLowestPrice(PriceType, int, int);

int main()
{
	int rowsUsed;			// holds the number of rows used
	int colsUsed;			// holds the number of columns used
	PriceType priceTable;	// a 2D array holding the prices

	getPrices(priceTable, rowsUsed, colsUsed);		// calls getPrices to fill the array 
	printPrices(priceTable, rowsUsed, colsUsed);	// calls printPrices to display array
	cout << endl << "Highest Price: " << findHighestPrice(priceTable, rowsUsed, colsUsed) << endl;
	cout << endl << "Lowest Price: " << findLowestPrice(priceTable, rowsUsed, colsUsed) << endl;

	return 0;
}

//*******************************************************************************
//	getPrices
//
//	task:	  This procedure asks the user to input the number of rows and
//	          columns. It then asks the user to input (rows * columns) number of
//	          prices. The data is placed in the array.
//	data in:  none
//	data out: an array filled with numbers and the number of rows
//	          and columns used.
//
//*******************************************************************************

void getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
	cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
	cin >> numOfRows;

	cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
	cin >> numOfCols;

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			cout << "Please input the price of an item with 2 decimal places" << endl;
			cin >> table[row][col];
		}
	}
}

//***************************************************************************
//	printPrices
//
//	task:	  This procedure prints the table of prices
//	data in:  an array of floating point numbers and the number of rows
//	          and columns used.
//	data out: none
//
//****************************************************************************

void printPrices(PriceType table, int numOfRows, int numOfCols)
{
	cout << fixed << showpoint << setprecision(2);

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			cout << left << setw(7) << table[row][col] << " ";
		}
		cout << endl;
	}
}

float findHighestPrice(PriceType table, int numOfRows, int numOfCols)
// This function returns the highest price in the array
{
	float highestPrice;
	highestPrice = table[0][0]; // make first element the highest price
	for (int row = 0; row < numOfRows; row++)
		for (int col = 0; col < numOfCols; col++)
			if (highestPrice < table[row][col])
				highestPrice = table[row][col];
	return highestPrice;
}

float findLowestPrice(PriceType table, int rows, int cols) {

	float lowest;

	lowest = table[0][0];
	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; cols++) {
			if (table[row][col] < lowest)
				lowest = table[row][col];
		}
	}
	return lowest;
	
}