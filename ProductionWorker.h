#pragma once

#include "Employee.h"

class ProductionWorker : public Employee {

public:

	//constructors
	ProductionWorker(string = "", int = 0, string = "XX-XX-XX", int = 0, double = 0);

	// Accessor functions 
	int getShift() const { return shift; }
	double getHourlyPayRate() const { return hourlyPay; }

	// Mutator functions 
	
	void setShift(int employeeShift); 
	void setHourlyPayRate(double employeePayRate);


	void print() const override;

	void employeePrint() const;

private:

	//the day shift is 1 and night shift is 2
	int shift;
	double hourlyPay;
};
