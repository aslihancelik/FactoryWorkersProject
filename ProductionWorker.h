#pragma once

#include "Employee.h"

class ProductionWorker : public Employee {

public:

	//constructors
	ProductionWorker(int = 0, double = 0);

	void print() override {};

	void employeePrint() {};

private:

	//the day shift is 1 and night shift is 2
	int shift;
	double hourlyPay;
};
