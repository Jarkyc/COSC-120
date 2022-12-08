#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Charles Reigle

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos);

	cout << "$" << dollars << " = " << euros << " Euros and " << pesos << " Pesos." << endl << endl;;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos, yen);

	cout << "$" << dollars << " = " << euros << " Euros " << pesos << " Pesos and " << yen << " Yen." << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;

	yen = convertToYen(dollars);

	cout << "$" << dollars << " = " << yen << " Yen." << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;

	euros = convertToEuros(dollars);

	cout << "$" << dollars << " = " << euros << " Euros." << endl << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;

	pesos = convertToPesos(dollars);
	
	cout << "$" << dollars << " = " << pesos << " Pesos." << endl << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
	yen = convertToYen(dollars);
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
	return dollars * 124.35;
}

//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
	return dollars * 1.06;
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
	return dollars * 9.73;
}