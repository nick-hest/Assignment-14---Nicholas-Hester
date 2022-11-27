#include <iostream>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle()
{
	manufacturer = "";
	buildYear = 0;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getbuildYear()
{
	return buildYear;
}

void Vehicle::setManufacturer(string input)
{
	manufacturer = input;
}

void Vehicle::setBuildYear(int input)
{
	buildYear = input;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information:\nManufacturer: " << manufacturer
		<< "\nYear Built: " << buildYear;
}