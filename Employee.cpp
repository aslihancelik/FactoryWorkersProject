
#include "Employee.h"

//constructors
Employee::Employee(string employeeName, int employeeID, string employeeHireDate) {
	name = employeeName;
	id = employeeID;
	hireDate = employeeHireDate;
}


//Mutator Functions

void Employee::setName(const string& employeeName) {
	name = employeeName;
}

void Employee::setID(int employeeNumber) {

	id = employeeNumber;
}
void Employee::setHireDate(const string& employeeHireDate){

	hireDate = employeeHireDate;
}


void Employee::print() const{
	cout << "Name: " <<  name << endl;
	cout << "Employee Number: " << id << endl;
	cout << "Hire Date: " << hireDate << endl;
}

