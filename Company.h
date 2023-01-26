#pragma once
#include "EmployeeHour.h"
#include "EmployeeFix.h"
#include "Employee.h"


//  Для компании - ее название и штат сотрудников.

class Company : public EmployeeHour, public EmployeeFix
{
private:
	string name;
	

public:
	Company();
	
	void showEmp();

	void showFiveHour(vector <EmployeeHour> &v) {
		cout << "First five surnames: ";
		for (int i = 0; i < 5; i++)
		{
			cout << v[i].getSurname() << ", ";
		}
		cout << "\b\b.";
		cout << endl << endl;
	}

	void showFiveFix(vector <EmployeeFix>& v) {
		cout << "First five surnames: ";
		for (int i = 0; i < 5; i++)
		{
			cout << v[i].getSurname() << ", ";
		}
		cout << "\b\b.";
		cout << endl << endl;
	}

	void showThreeHour(vector <EmployeeHour>& v) {
		cout << "Last three Id: ";
		for (int i = 9; i > 6; i--)
		{
			cout << v[i].getID() << ", ";
		}
		cout << "\b\b.";
		cout << endl << endl;
	}

	void showThreeFix(vector <EmployeeFix>& v) {
		cout << "Last three Id: ";
		for (int i = 9; i > 6; i--)
		{
			cout << v[i].getID() << ", ";
		}
		cout << "\b\b.";
		cout << endl << endl;
	}

	void transtoup(EmployeeHour& e1) {
		cout << "Enter the name: ";
		string n;
		cin >> n;
		transform(n.begin(), n.end(), n.begin(), ::toupper);
		transform(e1.getName().begin(), e1.getName().end(), e1.getName().begin(), ::toupper);

	}


	void searchByNameHour(vector <EmployeeHour>& v, string n) {

		transform(n.begin(), n.end(), n.begin(), ::toupper);
		for (int i = 0; i < v.size(); i++)
		{
			transform(v[i].getName().begin(), v[i].getName().end(), v[i].getName().begin(), ::toupper);
		}

		for (int i = 0; i < v.size(); i++){
			if (v[i].getName() == n) {
				v[i].PrintEmpHour();
			}

		}
	}

	void searchByNameFix(vector <EmployeeFix>& v) {

	}

	void searchBySurnameHour(vector <EmployeeHour>& v) {

	}

	void searchBySurnameFix(vector <EmployeeFix>& v) {

	}

	void searchByIdHour(vector <EmployeeHour>& v, int id) {

		for (int i = 0; i < v.size(); i++) {
			if (v[i].getID() == id) {
				v[i].PrintEmpHour();
			}
		}
		cout << endl << endl;
	}

	void searchByIdFix(vector <EmployeeFix>& v, int id) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getID() == id) {
				v[i].PrintEmpFix();
			}
		}
		cout << endl << endl;
	}

	
};

