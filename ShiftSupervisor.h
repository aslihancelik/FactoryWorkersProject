// The ShiftSupervisor class extends the Employee class to represent a shift supervisor.
// It includes additional attributes like annual salary and annual bonus, with corresponding accessor and mutator functions.

#pragma once

#include "Employee.h"

class ShiftSupervisor : public Employee {

private:
	double annualSalary;
	double annualBonus;

public:

	//constructor
	// Postcondition: Initializes a ShiftSupervisor object with the given name, ID, hire date, annual salary, and annual bonus
	ShiftSupervisor(string = "", int = 0, string = "XX-XX-XXXX", double = 0, double = 0);

	//Accessors
	
	// Postcondition: Returns the annual salary of the shift supervisor
	double getSalary() const { return annualSalary; }

	// Postcondition: Returns the annual bonus of the shift supervisor
	double getBonus() const { return annualBonus; }


	//Mutators

	// Precondition: salary is a valid double 
	// Postcondition: Sets the annual salary of the shift supervisor to salary
	void setSalary(double salary);

	// Precondition: bonus is a valid double 
	// Postcondition: Sets the annual bonus of the shift supervisor to bonus
	void setBonus(double bonus);

    //Print function
	// Postcondition: Prints the shift supervisor's information, including name, ID, hire date, annual salary, and annual bonus
	void print() const override;
};