// The ProductionWorker class extends the Employee class to represent a production worker. 
// It includes additional attributes like shift and hourly pay rate, with corresponding accessor and mutator functions.

#pragma once

#include "Employee.h"

class ProductionWorker : public Employee {

public:

	//constructors
	// Postcondition: Initializes a ProductionWorker object with the given name, ID, hire date, shift, and hourly pay rate
	ProductionWorker(string = "", int = 0, string = "XX-XX-XXXX", int = 0, double = 0);

	// Accessor functions 

	// Postcondition: Returns the shift of the production worker
	int getShift() const { return shift; }

	// Postcondition: Returns the hourly pay rate of the production worker
	double getHourlyPayRate() const { return hourlyPay; }

	// Mutator functions 

	// Precondition: employeeShift is a valid integer (1 for day shift, 2 for night shift) 
	// Postcondition: Sets the shift of the production worker to employeeShift
	void setShift(int employeeShift);

	// Precondition: employeePayRate is a valid double
	// Postcondition: Sets the hourly pay rate of the production worker to employeePayRate
	void setHourlyPayRate(double employeePayRate);

	// Postcondition: Prints the production worker's information, including name, ID, hire date, shift, and hourly pay rate
	void print() const override;


private:

	//the day shift is 1 and night shift is 2
	int shift;
	double hourlyPay;
};
