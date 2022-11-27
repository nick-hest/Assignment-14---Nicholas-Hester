#include <iostream>
#include "Truck.h"
using namespace std;

Truck::Truck()
{
	towCap = 0;
}

int Truck::getTowCap()
{
	return towCap;
}

void Truck::setTowCap(int input)
{
	towCap = input;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nTowing Capacity: " << towCap;
}