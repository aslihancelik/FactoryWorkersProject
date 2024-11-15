
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
}
void setHireDate(const string& employeeHireDate){


}



void Employee::print() {
	cout << "Name: " <<  name << endl;
	cout << "Employee Number: " << id << endl;
	cout << "Hire Date: " << hireDate << endl;
}

