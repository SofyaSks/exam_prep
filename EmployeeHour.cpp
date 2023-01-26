#include "EmployeeHour.h"

EmployeeHour::EmployeeHour()
{
	FN = " ";
	LN = " ";
	ID = 0;
	payment =0;
}

EmployeeHour::EmployeeHour(string fn, string ln, int id, int _payment)
{
	FN = fn;
	LN = ln;
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

string EmployeeHour::getName()
{
	return FN;
}

string EmployeeHour::getSurname()
{
	return LN;
}

void EmployeeHour::PrintEmpHour()
{
	cout << FN <<setw(20) << LN << setw(20) << ID << setw(20) << check_employee_hour() << endl;
}

int EmployeeHour::getID()
{
	return ID;
}
