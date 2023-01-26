#include "EmployeeFix.h"

EmployeeFix::EmployeeFix()
{
	LN = " ";
	FN = " ";
	ID = 0;
	payment_fix = 0;
}

EmployeeFix::EmployeeFix(string fn, string ln, int id, double _paymentfix)
{
	FN = fn;
	LN = ln;
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

string EmployeeFix::getName()
{
	return FN;
}

string EmployeeFix::getSurname()
{
	return LN;
}

void EmployeeFix::PrintEmpFix()
{
	cout << FN << setw(20) << LN << setw(20) << ID << setw(20) << check_employee_fix() << endl;
}

int EmployeeFix::getID()
{
	return ID;
}
