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
	cout << setw(20) << FN << setw(20) << LN << setw(20) << ID << setw(20) << check_employee_hour() << endl;
}

void EmployeeHour::searchByNameHour(vector<EmployeeHour>& v, string n)
{
	cout << endl;
	transform(n.begin(), n.end(), n.begin(), ::toupper);
	for (int i = 0; i < v.size(); i++)
	{
		transform(v[i].FN.begin(), v[i].FN.end(), v[i].FN.begin(), ::toupper);
		if (v[i].FN == n) {
			v[i].PrintEmpHour();
			cout << endl << endl;
		}
	}
}

void EmployeeHour::searchBySurnameHour(vector<EmployeeHour>& v, string n)
{
	cout << endl;
	transform(n.begin(), n.end(), n.begin(), ::toupper);
	for (int i = 0; i < v.size(); i++)
	{
		transform(v[i].LN.begin(), v[i].LN.end(), v[i].LN.begin(), ::toupper);
		if (v[i].LN == n) {
			v[i].PrintEmpHour();
			cout << endl << endl;
		}
	}
}

int EmployeeHour::getID()
{
	return ID;
}
