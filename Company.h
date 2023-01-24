#pragma once
#include "EmployeeHour.h"
#include "EmployeeFix.h"

//  Для компании - ее название и штат сотрудников.

class Company : public EmployeeHour, public EmployeeFix
{
private:
	string name;
	

public:
	Company();

	vector <EmployeeHour> hourEmp{
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10),
		EmployeeHour(" ", " ", 10, 10)
	};

	vector <EmployeeFix> fixEmp{
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10),
		EmployeeFix("", "", 10, 10)
	};
};

