#include "Company.h"



Company::Company() 
{
	name = "BUISS";

}

void Company::showEmp()
{
	cout << "Name" << setw(20) << "Surname" << setw(20) << "ID" << setw(20) << "Salary" << endl << endl;
}

void Company::showFiveHour(vector<EmployeeHour>& v)
{
	cout << "First five surnames: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i].getSurname() << ", ";
	}
	cout << "\b\b.";
	cout << endl << endl;
}

void Company::showFiveFix(vector<EmployeeFix>& v)
{
	cout << "First five surnames: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i].getSurname() << ", ";
	}
	cout << "\b\b.";
	cout << endl << endl;
}

void Company::showThreeHour(vector<EmployeeHour>& v)
{
	cout << "Last three Id: ";
	for (int i = 9; i > 6; i--)
	{
		cout << v[i].getID() << ", ";
	}
	cout << "\b\b.";
	cout << endl << endl;
}

void Company::showThreeFix(vector<EmployeeFix>& v)
{
	cout << "Last three Id: ";
	for (int i = 9; i > 6; i--)
	{
		cout << v[i].getID() << ", ";
	}
	cout << "\b\b.";
	cout << endl << endl;
}

void Company::searchByIdHour(vector<EmployeeHour>& v, int id)
{

	for (int i = 0; i < v.size(); i++) {
		if (v[i].getID() == id) {
			v[i].PrintEmpHour();
		}
	}
	cout << endl << endl;
}

void Company::searchByIdFix(vector<EmployeeFix>& v, int id)
{
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getID() == id) {
			v[i].PrintEmpFix();
		}
	}
	cout << endl << endl;
}

