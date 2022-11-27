#ifndef VEHICLE_H
#define VEHICLE_H
using namespace std;

class Vehicle
{
protected:
	string manufacturer;
	int buildYear;
public:
	Vehicle();

	string getManufacturer();
	int getbuildYear();

	void setManufacturer(string);
	void setBuildYear(int);

	void displayInfo();
};

#endif