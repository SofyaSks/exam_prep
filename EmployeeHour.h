#pragma once
#include "Employee.h"
class EmployeeHour : public Employee
{

public:
	EmployeeHour();
	EmployeeHour(string ln, string fn, int id, int _payment);

	int check_employee_hour();
	double check_employee_fix();

	string getName();
	string getSurname();
	int getID();

	void PrintEmpHour();

	void searchByNameHour(vector <EmployeeHour>& v, string n);

	void searchBySurnameHour(vector <EmployeeHour>& v, string n);

	/*friend ostream& operator << (ostream& os, EmployeeHour& e) {
		os << setw(20) << e.getName() << setw(20) << e.getSurname() << setw(20) << e.getID() << setw(20) << e.check_employee_hour();
		return os;
	}*/

	/*void Read_file_hour(vector<EmployeeHour>& v)
	{

		ifstream fw;
		fw.open("Students.txt");
		if (!fw.is_open())
		{
			cout << "Error" << endl;
		}
		else
		{
			EmployeeHour tmp;
			while (fw >> tmp.FN >> tmp.LN >> tmp.ID >> tmp.payment)
			{
				v.push_back(tmp);
			}
			fw.close();

			for (int i = 0; i < v.size(); i++)
			{
				v[i].PrintEmpHour();
			}
		}
	}*/

	

};

