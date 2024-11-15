#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string employeeName, int employeeID, string employeeHireDate, int shft, double pay) : Employee(employeeName, employeeID, employeeHireDate){
	shift = shft;
	hourlyPay = pay;
}

void ProductionWorker::setShift(int employeeShift) {

	shift = employeeShift;
}

void ProductionWorker::setHourlyPayRate(double employeePayRate) {

	hourlyPay = employeePayRate;
}


//This is the override of the print method
void ProductionWorker::print() const{

	//employeePrint();
	Employee::print();
	string shiftTemp = (shift == 1) ? "Day" : "Night";
	cout << "Shift: " << shiftTemp << endl;
	cout << "Hourly Pay Rate: $" << hourlyPay << endl;


}

//void ProductionWorker::employeePrint() const{
//	Employee::print();
//}