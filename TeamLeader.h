#pragma once
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {

private:
	double monthlyBonus;
	double trainingHours;
	double attendedTrainingHours;

public:

	TeamLeader(string = "", int = 0, string = "XX-XX-XXXX", int = 0, double = 0, double = 0, double = 0, double = 0);

	//Getters

	double getMonthlyBonus() const { return monthlyBonus; }
	double getTrainingHours() const { return trainingHours; }
	double getAttendedTrainingHours() const { return attendedTrainingHours; }

	//Setters

	void setMonthlyBonus(double bonus);
	void setTrainingHours(double train_hour);
	void setAttendedTrainingHours(double attended_train_hour);

	//Print

	void print() const override;
};