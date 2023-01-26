#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;

//Для сотрудника должны храниться его фамилия, имя, ID, почасовая ставка или фикс-я ставка за месяц.


class Employee 
{
protected:
	string LN;
	string FN;
	int ID;
	int payment;
	double payment_fix;

public:


	virtual int check_employee_hour() = 0;
	virtual double check_employee_fix() = 0;
};

