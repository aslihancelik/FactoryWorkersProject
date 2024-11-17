// The Employee class represents a general employee with attributes like name, ID, and hire date. 
// It provides accessor and mutator functions to get and set these attributes, and a virtual print function to display employee details.


#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	//constructor
	Employee(string = "", int = 0, string = "XX-XX-XXXX");

	//Accessor functions

	// Postcondition: Returns the name of the employee
	string getName() const {
		return name;
	};
	// Postcondition: Returns the ID of the employee
	int getID() const {
		return id;
	};
	// Postcondition: Returns the hire date of the employee
	string getHireDate() const {
		return hireDate;
	};

	//Mutator Functions

	// Precondition: employeeName is a valid string 
	// Postcondition: Sets the name of the employee to employeeName
	void setName(const string& employeeName);

	// Precondition: employeeNumber is a valid integer 
	// // Postcondition: Sets the ID of the employee to employeeNumber
	void setID(int employeeNumber);

	// Precondition: employeeHireDate is a valid string in the format "XX-XX-XXXX" 
	// Postcondition: Sets the hire date of the employee to employeeHireDate
	void setHireDate(const string& employeeHireDate);

	//Print function
	// Postcondition: Prints the employee's name, ID, and hire date
	virtual void print() const;

private:

	string name;
	int id;
	string hireDate;

};