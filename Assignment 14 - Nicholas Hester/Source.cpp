// Nicholas Hester
// CIS 1202-501
// November 27, 2022

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	string tempString;
	int tempInt;
	Vehicle firstVariable;
	Car secondVariable;
	Truck thirdVariable;

	// --- Vehicle Test --- //
	cout << "Vehicle Program\n\nVehicle:\nEnter the manufacturer: ";
	getline(cin, tempString);
	firstVariable.setManufacturer(tempString);

	cout << "Enter the year built: ";
	cin >> tempInt;
	firstVariable.setBuildYear(tempInt);

	firstVariable.displayInfo();

	// --- Car Test --- //
	cout << "\n\nCar:\nEnter the manufacturer: ";
	getline(cin.ignore(), tempString);
	secondVariable.setManufacturer(tempString);

	cout << "Enter the year built: ";
	cin >> tempInt;
	secondVariable.setBuildYear(tempInt);

	cout << "Enter the number of doors: ";
	cin >> tempInt;
	secondVariable.setDoorCount(tempInt);

	secondVariable.displayInfo();

	// --- Truck Test --- //
	cout << "\n\nTruck:\nEnter the manufacturer: ";
	getline(cin.ignore(), tempString);
	thirdVariable.setManufacturer(tempString);

	cout << "Enter the year built: ";
	cin >> tempInt;
	thirdVariable.setBuildYear(tempInt);

	cout << "Enter the towing capacity: ";
	cin >> tempInt;
	thirdVariable.setTowCap(tempInt);

	thirdVariable.displayInfo();

	cout << "\n\n";
	system("pause");
	return 0;
}