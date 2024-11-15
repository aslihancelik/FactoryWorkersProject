#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string employeeName, int employeeID, string employeeHireDate, int shft, double pay) : Employee(employeeName, employeeID, employeeHireDate){
	shift = shft;
	hourlyPay = pay;
}

void setShift(int employeeShift) {

	shift = employeeShift;
}

void setHourlyPayRate(double employeePayRate) {

	hourlyPayRate = employeePayRate;
}


//This is the override of the print method
void ProductionWorker::print() {

	employeePrint();
	string shiftTemp = (shift == 1) ? "Day" : "Night";
	cout << "Shift: " << shiftTemp << endl;
	cout << "Hourly Pay Rate: $" << hourlyPay << endl;


}

void ProductionWorker::employeePrint() {
	Employee::print();
}