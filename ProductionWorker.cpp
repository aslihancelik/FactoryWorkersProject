#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int shft, double pay) {
	shift = shft;
	hourlyPay = pay;
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