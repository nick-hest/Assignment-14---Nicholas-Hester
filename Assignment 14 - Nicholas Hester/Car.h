#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
protected:
	int doorCount;
public:
	Car();

	int getDoorCount();

	void setDoorCount(int);

	void displayInfo();
};

#endif