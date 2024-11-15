#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	//constructor
	Employee();

	virtual void print() {};

private:

	string name;
	int id;
	string hireDate;
	//shift?
	//double hourlyPay;

};