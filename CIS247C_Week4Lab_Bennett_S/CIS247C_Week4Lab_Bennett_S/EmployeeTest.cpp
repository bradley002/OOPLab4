/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 4 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.
  Update: Benefit class added. iEmployee abstract class added.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

//function prototypes from Basic UI program week1
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
string GetInput(string inputType);
void TerminateApplication();

int main()
{
DisplayApplicationInformation();

	Employee employee1; //instantiate employee1 object using default constructor.
	
	DisplayDivider("Employee 1");

	//This section prompts for user input
	string firstName = GetInput("first name");
	employee1.setFirstName(firstName);

	string lastName = GetInput("last name");
	employee1.setLastName(lastName);

	string gender = GetInput("gender");
	char firstCharacterGender = gender[0]; //takes value of gender, places in array, and assigns first charcter to char firstCharacterGender.
	employee1.setGender(firstCharacterGender);

	string dependents = GetInput("dependents");
	employee1.setDependents(dependents);

	string annualSalary = GetInput("annual salary");
	employee1.setAnnualSalary(annualSalary);

	string healthInsurance = GetInput("health insurance");
	employee1.benefit.setHealthInsurance(healthInsurance);

	string lifeInsurance = GetInput("life insurance");
	employee1.benefit.setLifeInsurance(stod(lifeInsurance));

	string vacation = GetInput("vacation");
	employee1.benefit.setVacation(stoi(vacation));

	employee1.displayEmployee();

	cout << "\n----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.

	//This section uses multi-arg constructor to set values for employee2 object.
	Benefit benefit1("Anthem", 15000.25, 48);
	Employee employee2("Mary", "Noia", 'F', 5, 24000.00, benefit1);

	DisplayDivider("Employee 2");
	employee2.displayEmployee();

	cout << "\n----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.


	TerminateApplication();

return 0;
}

//functions defined from Basic UI week 1 lab.
void DisplayApplicationInformation()
{
	cout << "Welcome to the Employee Class Test Program." << endl;
	cout << "CIS247C, Week 4 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "This program has been updated to include Benefit class and iEmployee abstract class." << endl;
}

void DisplayDivider(string outputTitle)
{
	cout << '\n' << "******************************** " + outputTitle + " ***********************************" << endl;
}

string GetInput(string inputType)
{
	cout << "Please enter " + inputType + ": ";
	string strInput;
	getline(cin, strInput);

	return strInput;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the application!" << endl;
}