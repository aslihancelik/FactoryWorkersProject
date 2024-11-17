// The TeamLeader class extends the ProductionWorker class to represent a team leader. 
// It includes additional attributes like monthly bonus, training hours, and attended training hours, with corresponding accessor and mutator functions.


#pragma once
#include "ProductionWorker.h"


class TeamLeader : public ProductionWorker {

private:
	double monthlyBonus;
	double trainingHours;
	double attendedTrainingHours;

public:

	// Postcondition: Initializes a TeamLeader object with the given name, ID, hire date, shift, pay, monthly bonus, training hours, and attended training hours
	TeamLeader(string = "", int = 0, string = "XX-XX-XXXX", int = 0, double = 0, double = 0, double = 0, double = 0);

	//Getters

	// Postcondition: Returns the monthly bonus of the team leader
	double getMonthlyBonus() const { return monthlyBonus; }
	// Postcondition: Returns the required training hours of the team leader
	double getTrainingHours() const { return trainingHours; }
	// Postcondition: Returns the attended training hours of the team leader
	double getAttendedTrainingHours() const { return attendedTrainingHours; }

	//Setters

	// Postcondition: Sets the monthly bonus of the team leader to bonus
	void setMonthlyBonus(double bonus);
	// Postcondition: Sets the required training hours of the team leader to train_hour
	void setTrainingHours(double train_hour);
	// Postcondition: Sets the attended training hours of the team leader to attended_train_hour
	void setAttendedTrainingHours(double attended_train_hour);

	//Print
	// Postcondition: Prints the team leader's information, including name, ID, hire date, shift, pay, monthly bonus, training hours, and attended training hours
	void print() const override;
};