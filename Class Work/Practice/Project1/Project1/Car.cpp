#include <iostream>

using namespace std;

class Car
{
private:
	string make;
	string model;
	int year;
public:
	void setMake(string m) { make = m; }
	void setModel(string m) { model = m; }
	void setYear(int y) { year = y; }
	string getMake() { return make; }
	string getModel() { return model; }
	int getYear() { return year; }

};

int main() {
	Car myCar;
	string make;
	string model;
	int year;

	cout << "Input the make of the car: ";
	cin >> make;
	myCar.setMake(make);

	cout << "Input the model of the car: ";
	cin >> model;
	myCar.setModel(model);

	cout << "Input the year of the car: "; 
	cin >> year;
	myCar.setYear(year);

	cout << endl;

	cout << "The make of the car is: " << myCar.getMake() << endl;
	cout << "The model of the car is: " << myCar.getModel() << endl;
	cout << "The year of the car is: " << myCar.getYear() << endl;
}

//Pointers can be used to store objects
//Car myCar; 
//Car carPtr = &myCar;
//You can then use -> to access public members of the objects pointer
//carPtr->setMake(make);
//
//This allows for dynamic allocation of objects
//Car *carPtr = nullptr;
//carPtr = new Car();