/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 4 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.
  Update: Benefit class added. iEmployee abstract class added.*/

#ifndef EMPLOYEE_H //inclusion guard
#define EMPLOYEE_H
#include "Benefit.h"
#include "iEmployee.h"
using namespace std;

class Employee : public iEmployee
{
private: //private attributes
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;
	static int numEmployees; //static variable keeps count of total number of employees.
	
public: //member functions
	Employee(); //default constructor
	Employee(string first, string last, char gen, int dep, double salary, Benefit benefit); //multi-arg constructor
	double calculatePay();
	void displayEmployee();
	string getFirstName();
	void setFirstName(string first);
	string getLastName();
	void setLastName(string last);
	char getGender();
	void setGender(char gen);
	int getDependents();
	void setDependents(int dep);
	void setDependents(string dep);
	double getAnnualSalary();
	void setAnnualSalary(double salary);
	void setAnnualSalary(string salary);
	static int getNumEmployees();
	
	Benefit benefit; //public benefit object allows access to Benefit methods in main.
};

#endif