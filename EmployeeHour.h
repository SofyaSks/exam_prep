#pragma once
#include "Employee.h"
class EmployeeHour : public Employee
{

public:
	EmployeeHour();
	EmployeeHour(string ln, string fn, int id, int _payment);

	int check_employee_hour();
	double check_employee_fix();

	string getName();
	string getSurname();
	int getID();

	void PrintEmpHour();

	void searchByNameHour(vector <EmployeeHour>& v, string n);

	void searchBySurnameHour(vector <EmployeeHour>& v, string n);

	

};

