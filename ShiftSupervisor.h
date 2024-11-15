#pragma once

#include "Employee.h"

class ShiftSupervisor : public Employee {

private:
	double annualSalary;
	double annualBonus;

public:
	ShiftSupervisor(string = "", int = 0, string = "XX-XX-XXXX", double = 0, double = 0);

	//Accessors
	
	double getSalary() const { return annualSalary; }

	double getBonus() const { return annualBonus; }


	//Mutators

	void setSalary(double salary);
	void setBonus(double bonus);

    //Print function
	void print() const override;
};