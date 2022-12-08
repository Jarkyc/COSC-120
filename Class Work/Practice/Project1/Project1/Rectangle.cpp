//Shit relating to OOP and classes
//Inline member functions should be shorter then regular functions. 
//Inline member functions replace the code at the call location with the code inside the inline function, rather than calling to the actual location
//of the function
#include <iostream>

using namespace std;

class Rectangle 
{
private:
	double width;
	double length;
public: 
	void setWidth(double);
	void setLength(double);
	double getWidth() { return width; } //(Inline Member function) Alternative to after class declaration function definition
	double getLength();
	double getArea();
};

void Rectangle::setWidth(double n) {
	width = n;
}

void Rectangle::setLength(double n) {
	length = n;
}

double Rectangle::getLength() {
	return length;
}

double Rectangle::getArea() {
	return width * length; 
}

int main() {

}