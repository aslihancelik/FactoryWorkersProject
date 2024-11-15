
#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(string employeeName, int employeeID, string employeeHireDate, double salary, double bonus) : Employee(employeeName, employeeID, employeeHireDate) {
	annualSalary = salary;
	annualBonus = bonus;
};

//Mutators

void ShiftSupervisor::setSalary(double salary) {
	annualSalary = salary;
}

void ShiftSupervisor::setBonus(double bonus){
	annualBonus = bonus;
}

//Print function
void ShiftSupervisor::print() const {

	Employee::print();
	cout << "Annual Salary: $" << annualSalary << endl;
	cout << "Annual Bonus: $" << annualBonus << endl;

}