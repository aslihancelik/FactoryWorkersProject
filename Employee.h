#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	//constructor
	Employee(string = "", int = 0, string = "XX-XX-XXXX");

	//Accessor functions

	string getName() const {
		return name;
	};
	int getID() const {
		return id;
	};
	string getHireDate() const {
		return hireDate;
	};

	//Mutator Functions

	void setName(const string& employeeName);
	void setID(int employeeNumber);
	void setHireDate(const string& employeeHireDate);

	//Print function
	virtual void print() const;

private:

	string name;
	int id;
	string hireDate;

};