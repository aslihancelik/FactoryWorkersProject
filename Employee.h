#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	//constructor
	Employee(string = "", int = 0, string = "XX-XX-XX");

	virtual void print() {};

private:

	string name;
	int id;
	string hireDate;

};