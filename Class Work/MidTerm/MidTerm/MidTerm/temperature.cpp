//ask user input a positive integer to represent temperature (assume the temperature > 0) at Salisbury from keyboard; 
//if the input is not valid, ask user input again till the input is valid;
//based on the input temperature, output the corresponding word(s) using the following rules :
/*

- temperature >  90: Hot
- 60 <  temperature  <= 90: Pleasant
- 40 <= temperature <= 60: Cold
- temperature < 40: Very cold

*/

//Charles Reigle
#include <iostream>

using namespace std;
int main()
{
	int temp;

	cout << "Please input a temperature greater than 0" << endl;
	cin >> temp;

	while (temp < 0) {
		cout << "Invalid input. Please try again" << endl;
		cin >> temp;
	}

	string resp;

	if (temp > 90) resp = "Hot";
	else if (temp > 60 && temp <= 90) resp = "Pleasant";
	else if (temp >= 40 && temp <= 60) resp = "Cold";
	else resp = "Very Cold";
	
	cout << "The temperature outside is " << resp << endl;


}


