#include <iostream>
#include "Car.h"
using namespace std;

Car::Car()
{
	doorCount = 0;
}

int Car::getDoorCount()
{
	return doorCount;
}

void Car::setDoorCount(int input)
{
	doorCount = input;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nDoors: " << doorCount;
}