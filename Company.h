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

	void showFiveHour(vector <EmployeeHour>& v);

	void showFiveFix(vector <EmployeeFix>& v);

	void showThreeHour(vector <EmployeeHour>& v);

	void showThreeFix(vector <EmployeeFix>& v);

	void searchByIdHour(vector <EmployeeHour>& v, int id);

	void searchByIdFix(vector <EmployeeFix>& v, int id);

	
};

