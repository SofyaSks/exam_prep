#pragma once
#include "Employee.h"
class EmployeeFix : public Employee
{

public:
	EmployeeFix();
	EmployeeFix(string ln, string fn, int id, double _paymentfix);

	double check_employee_fix();
	int check_employee_hour();

	vector <EmployeeFix> fixEmp{
		EmployeeFix("", "", 10, 10),
	};


};

