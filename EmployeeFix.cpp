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
	cout << setw(20) << FN << setw(20) << LN << setw(20) << ID << setw(20) << check_employee_fix() << endl;
}

void EmployeeFix::searchByNameFix(vector<EmployeeFix>& v, string n)
{
	cout << endl;
	transform(n.begin(), n.end(), n.begin(), ::toupper);
	for (int i = 0; i < v.size(); i++)
	{
		transform(v[i].FN.begin(), v[i].FN.end(), v[i].FN.begin(), ::toupper);
		if (v[i].FN == n) {
			v[i].PrintEmpFix();
			cout << endl << endl;
		}
	}
}

void EmployeeFix::searchBySurnameFix(vector<EmployeeFix>& v, string n)
{
	cout << endl;
	transform(n.begin(), n.end(), n.begin(), ::toupper);
	for (int i = 0; i < v.size(); i++)
	{
		transform(v[i].LN.begin(), v[i].LN.end(), v[i].LN.begin(), ::toupper);
		if (v[i].LN == n) {
			v[i].PrintEmpFix();
			cout << endl << endl;
		}
	}
}

int EmployeeFix::getID()
{
	return ID;
}
