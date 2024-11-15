// FactoryWorkersProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

int main()
{
    // Creating ProductionWorker objects
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 20.50);

    // Print the worker details
    cout << "Production Workers" << endl << endl;
    worker1.print();
    cout << endl;
    worker2.print();
    cout << endl << endl;

    // Creating ShiftSuperVisor objects
    ShiftSupervisor supervisor("Elmer Velasquez", 100325, "1/17/2024", 7000000, 1000);

    // Print the worker details
    cout << "Shift Supervisor" << endl << endl;
    supervisor.print();
    cout << endl;

}
