#include "TeamLeader.h"

TeamLeader::TeamLeader(string employeeName, int employeeID, string employeeHireDate, int shft, double pay, double bonus, double train_hour, double attended_train_hour)
:ProductionWorker(employeeName, employeeID, employeeHireDate, shft, pay){

	monthlyBonus = bonus;
	trainingHours = train_hour;
	attendedTrainingHours = attended_train_hour;
	
};

void TeamLeader::setMonthlyBonus(double bonus) {
	monthlyBonus = bonus;
}
void TeamLeader::setTrainingHours(double train_hour) {
	trainingHours = train_hour;
}

void TeamLeader::setAttendedTrainingHours(double attended_train_hour) {
	attendedTrainingHours = attended_train_hour;
}

// Print

void TeamLeader::print() const {
	ProductionWorker::print();
	cout << "Monthly Bonus: $" << monthlyBonus << endl;
	cout << "Required Training Hours: " << trainingHours << endl;
	cout << "Attended Training Hours:" << attendedTrainingHours << endl;
}



