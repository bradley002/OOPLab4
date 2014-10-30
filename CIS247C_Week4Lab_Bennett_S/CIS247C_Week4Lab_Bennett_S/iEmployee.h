/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 4 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.
  Update: Benefit class added. iEmployee abstract class added.*/

#ifndef I_EMPLOYEE_H
#define I_EMPLOYEE_H
using namespace std;

class iEmployee
{
public:
	virtual double calculatePay() = 0;
};

#endif