/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 4 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.
  Update: Benefit class added. iEmployee abstract class added.*/

#ifndef BENEFIT_H
#define BENEFIT_H
using namespace std;

class Benefit
{
private:
	string healthInsurance;
	double lifeInsurance;
	int vacation;

public:
	Benefit(); //default constructor
	Benefit(string health, double life, int vaca); //multi-arg constructor
	void displayBenefits();
	string getHealthInsurance();
	void setHealthInsurance(string healthIns);
	double getLifeInsurance();
	void setLifeInsurance(double lifeIns);
	int getVacation();
	void setVacation(int vaca);
};
#endif

