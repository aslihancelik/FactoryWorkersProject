
#include "Employee.h"

//constructors
Employee::Employee(string employeeName, int employeeID, string employeeHireDate) {
	name = employeeName;
	id = employeeID;
	hireDate = employeeHireDate;
}


//Mutator Functions

void setName(const string& employeeName) {
	name = employeeName;
}

void setID(int employeeNumber) {

	id = employeeNumber;
}
void setHireDate(const string& employeeHireDate){

	hireDate = employeeHireDate;
}


void Employee::print() {
	cout << "Name: " <<  name << endl;
	cout << "Employee Number: " << id << endl;
	cout << "Hire Date: " << hireDate << endl;
}

