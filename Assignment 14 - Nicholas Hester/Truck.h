#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
protected:
	int towCap;
public:
	Truck();

	int getTowCap();

	void setTowCap(int);

	void displayInfo();
};

#endif