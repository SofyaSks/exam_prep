#include "EmployeeFix.h"

EmployeeFix::EmployeeFix()
{
	LN = " ";
	FN = " ";
	ID = 0;
	payment_fix = 0;
}

EmployeeFix::EmployeeFix(string ln, string fn, int id, double _paymentfix)
{
	LN = ln;
	FN = fn;
	ID = id;
	payment_fix = _paymentfix;
}

double EmployeeFix::check_employee_fix()
{
	return payment_fix;
}

int EmployeeFix::check_employee_hour()
{
	return 0;
}
