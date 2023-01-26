#pragma once
#include "Employee.h"
class EmployeeFix : public Employee
{

public:
	EmployeeFix();
	EmployeeFix(string ln, string fn, int id, double _paymentfix);

	double check_employee_fix();
	int check_employee_hour();

	string getName();
	string getSurname();
	int getID();

	void PrintEmpFix();


	void searchByNameFix(vector <EmployeeFix>& v, string n);

	void searchBySurnameFix(vector <EmployeeFix>& v, string n);
};

