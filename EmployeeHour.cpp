#include "EmployeeHour.h"

EmployeeHour::EmployeeHour()
{
	LN = " ";
	FN = " ";
	ID = 0;
	payment =0;
}

EmployeeHour::EmployeeHour(string ln, string fn, int id, int _payment)
{
	LN = ln;
	FN = fn;
	ID = id;
	payment = _payment;
}

int EmployeeHour::check_employee_hour()
{
	return (double)payment * 20.8 * 8;
}

double EmployeeHour::check_employee_fix()
{
	return 0.0;
}
