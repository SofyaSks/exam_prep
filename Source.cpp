#include "Company.h"
#include "EmployeeHour.h"

int sortBySalaryHour(EmployeeHour& e1, EmployeeHour& e2) {
	if(e1.check_employee_hour() == e2.check_employee_hour())
		return e1.getName() < e2.getName();
	return e1.check_employee_hour() > e2.check_employee_hour();
}

int sortBySalaryFix(EmployeeFix& e3, EmployeeFix& e4) {
	if (e3.check_employee_hour() == e4.check_employee_hour())
		return e3.getName() < e4.getName();
	return e3.check_employee_fix() > e4.check_employee_fix();
}

bool sortByNameHour(EmployeeHour& e1, EmployeeHour& e2) {
	return e1.getName() < e2.getName();
}

bool sortBySurnameHour(EmployeeHour& e3, EmployeeHour& e4) {
	return e3.getSurname() < e4.getSurname();
}

bool sortByNameFix(EmployeeFix& e1, EmployeeFix& e2) {
	return e1.getName() < e2.getName();
}

bool sortBySurnameFix(EmployeeFix& e3, EmployeeFix& e4) {
	return e3.getSurname() < e4.getSurname();
}


int main() {

	int choice;
	int empchoice;

	Company c;

	

	vector <EmployeeHour> hourEmp{
		EmployeeHour("Oleg", "Romanov",110, 200),
		EmployeeHour("Maria", "Poletaeva", 220, 150),
		EmployeeHour("Katerina", "Vinn", 330, 150),
		EmployeeHour("Kirill","Agarov", 440, 120),
		EmployeeHour("Pavel",  "Pealov", 550, 130),
		EmployeeHour("Anatoliy", "Rossinskiy", 660, 180),
		EmployeeHour("Vladislav","Karelin", 770, 190),
		EmployeeHour("Anna",  "Joy", 880, 210),
		EmployeeHour("Victoria", "Kith", 990, 125),
		EmployeeHour("Inna", "Darskaya", 1110, 220)
	};

	vector <EmployeeFix> fixEmp{
		EmployeeFix("Polina", "Orlova", 101, 80000),
		EmployeeFix("Anton", "Pobedov", 102, 80000),
		EmployeeFix("Rostislav", "Realov", 103, 170000),
		EmployeeFix("Vitalina", "Vinna", 104, 280000),
		EmployeeFix("Karina", "Alisskaya", 105, 130000),
		EmployeeFix("Vitaliy", "Gordin", 106, 50000),
		EmployeeFix("Sofya", "Sur", 107, 160000),
		EmployeeFix("Amalia", "November", 108, 350000),
		EmployeeFix("Konstantin", "Medov", 109, 120000),
		EmployeeFix("Michael", "Struc", 110, 100000)
	};

	/*ofstream fout;
	fout.open("employeehour.txt", ofstream::out);
	if (!fout.is_open()) {
		cout << "ERROR! File is not open\n";
	}
	else {
		cout << "File is open" << endl;
		for (int i = 0; i < hourEmp.size(); i++)
		{
			fout.write((char*)&hourEmp[i], sizeof(EmployeeHour));
		}
		cout << "End of file" << endl;
		fout.close();
	}

	fout.open("employeefix.txt", ofstream::out);
	if (!fout.is_open()) {
		cout << "ERROR! File is not open\n";
	}
	else {
		cout << "File is open" << endl;
		for (int i = 0; i < fixEmp.size(); i++)
		{
			fout.write((char*)&fixEmp[i], sizeof(EmployeeFix));
		}
		cout << "End of file" << endl;
		fout.close();
	}*/

	/*vector <EmployeeHour> hourE;
	ifstream fin;

	fin.open("employeehour.txt");
	if (!fin.is_open()) {
		cout << "Error. File is not open\n";
	}
	else {
		int i = 0;
		cout << "File is open" << endl;
		while (fin.read((char*)&hourE[i], sizeof(hourEmp))) {
			hourE[i].PrintEmpHour();
			i++;
		}
		fin.close();
		cout << "End of read\n";
	}*/

	do {
		try {
			cout << "1 - Show all employers" << endl;
			cout << "2 - Sort employers by salary" << endl;
			cout << "3 - Sort employers by first name" << endl;
			cout << "4 - Sort employers by last name" << endl;
			cout << "5 - Search for employer" << endl;
			cout << "0 - Exit" << endl;
			cin >> choice;
			system("cls");
			if (choice > 5 || choice < 0) {
				throw choice;
			}
		}
		catch (int n) {
			cout << "Error. No available choice at " << choice << endl << endl;
		}
		catch (...) {
			cout << "Error universal" << endl;
		}
		

		if (choice == 1) {
			cout << "Employee list:  " << endl << endl;
			cout << "Hour payment: " << endl << endl;
			c.showEmp();

			for (auto el : hourEmp)
			{
				el.PrintEmpHour();
			}
			cout << endl << endl;

			cout << "Fix payment: " << endl << endl;
			c.showEmp();

			for (auto el : fixEmp)
			{
				el.PrintEmpFix();
			}
			cout << endl << endl;
			
		}

		if (choice == 2) {
			cout << "1 - Sort hour employers" << endl;
			cout << "2 - Sort fix employers" << endl;
			cout << "choose -> ";
			cin >> empchoice;
			system("cls");
			if (empchoice == 1) {
				c.showEmp();
				sort(hourEmp.begin(), hourEmp.end(), sortBySalaryHour);
				for (auto el : hourEmp)
				{
					el.PrintEmpHour();
				}
				cout << endl << endl;
				c.showFiveHour(hourEmp);
				c.showThreeHour(hourEmp);
			}
			else
				if (empchoice == 2) {
					c.showEmp();
					sort(fixEmp.begin(), fixEmp.end(), sortBySalaryFix);
					for (auto el : fixEmp)
					{
						el.PrintEmpFix();
					}
					cout << endl << endl;
					c.showFiveFix(fixEmp);
					c.showThreeFix(fixEmp);
				}
				else {
					cout << "Error\n";
					continue;
				}
			
		}

		if (choice == 3) {
			cout << "1 - Sort hour employers" << endl;
			cout << "2 - Sort fix employers" << endl;
			cout << "choose -> ";
			cin >> empchoice;
			system("cls");
			if (empchoice == 1) {
				c.showEmp();
				sort(hourEmp.begin(), hourEmp.end(), sortByNameHour);
				for (auto el : hourEmp)
				{
					el.PrintEmpHour();
				}
				cout << endl << endl;
			}
			else
				if (empchoice == 2) {
					c.showEmp();
					sort(fixEmp.begin(), fixEmp.end(), sortByNameFix);
					for (auto el : fixEmp)
					{
						el.PrintEmpFix();
					}
					cout << endl << endl;
				}
				else {
					cout << "Error\n";
					continue;
				}
		}

		if (choice == 4) {
			cout << "1 - Sort hour employers" << endl;
			cout << "2 - Sort fix employers" << endl;
			cout << "choose -> ";
			cin >> empchoice;
			system("cls");
			if (empchoice == 1) {
				c.showEmp();
				sort(hourEmp.begin(), hourEmp.end(), sortBySurnameHour);
				for (auto el : hourEmp)
				{
					el.PrintEmpHour();
				}
				cout << endl << endl;
			}
			else
				if (empchoice == 2) {
					c.showEmp();
					sort(fixEmp.begin(), fixEmp.end(), sortBySurnameFix);
					for (auto el : fixEmp)
					{
						el.PrintEmpFix();
					}
					cout << endl << endl;
				}
				else {
					cout << "Error\n";
					continue;
				}
		}

		if (choice == 5) {
			int ch;
			cout << "Choose search method: "<< endl;
			cout << "1 - by name" << endl;
			cout << "2 - by surname" << endl;
			cout << "3 - by id" << endl;
			cin >> ch;
			system("cls");
			if (ch == 1) {
				cout << "1 - Sort hour employers" << endl;
				cout << "2 - Sort fix employers" << endl;
				cout << "choose -> ";
				cin >> empchoice;
				system("cls");
				if (empchoice == 1) {
					cout << "Enter the name: ";
					string n;
					cin >> n;
					system("cls");
					c.showEmp();
					c.searchByNameHour(hourEmp, n);
				}
				else 
					if (empchoice == 2) {
						cout << "Enter the name: ";
						string n;
						cin >> n;
						system("cls");
						c.showEmp();
						c.searchByNameFix(fixEmp, n);
					}
					else {
						cout << "Error\n";
						continue;
					}
			}
			else
				if (ch == 2) {
					cout << "1 - Sort hour employers" << endl;
					cout << "2 - Sort fix employers" << endl;
					cout << "choose -> ";
					cin >> empchoice;
					system("cls");
					if (empchoice == 1) {
						cout << "Enter the surname: ";
						string n;
						cin >> n;
						system("cls");
						c.showEmp();
						c.searchBySurnameHour(hourEmp, n);
					}
					else
						if (empchoice == 2) {
							cout << "Enter the surname: ";
							string n;
							cin >> n;
							system("cls");
							c.showEmp();
							c.searchBySurnameFix(fixEmp, n);
						}
						else {
							cout << "Error\n";
							continue;
						}
				}
				else
					if (ch == 3) {
						cout << "1 - Sort hour employers" << endl;
						cout << "2 - Sort fix employers" << endl;
						cout << "choose -> ";
						cin >> empchoice;
						system("cls");
						if (empchoice == 1) {
							cout << "Enter the id: ";
							int i;
							cin >> i;
							system("cls");
							c.showEmp();
							c.searchByIdHour(hourEmp, i);
						}
						else
							if (empchoice == 2) {
								cout << "Enter the id: ";
								int i;
								cin >> i;
								system("cls");
								c.showEmp();
								c.searchByIdFix(fixEmp, i);
							}
							else {
								cout << "Error\n";
								continue;
							}
					}
					else {
						cout << "Error\n";
						continue;
					}
		}

	} while (choice != 0);


	

	


	return 0;
}


