#pragma once

#include "Employee.h"

class ProductionWorker : public Employee {

public:

	//constructors
	//ProductionWorker(string = "", string = "", string = "XX", int = 10000);


	void print() override {};

	void employeePrint() {};

private:

	//the day shift is 1 and night shift is 2
	int shift;
	double hourlyPay;

};
