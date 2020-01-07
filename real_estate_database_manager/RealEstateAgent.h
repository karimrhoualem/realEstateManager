/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
#include "Date.h"
#include "Person.h"
using namespace std;

class RealEstateAgent : public Person 
{
private:
	int m_employeeID;

	Date m_employmentDate;

public: 
	RealEstateAgent(); 
	RealEstateAgent(string name, string address, Date employmentDate, int employeeID); 
	~RealEstateAgent();

	void setEmployeeID(int employeeID);
	int getEmployeeID() const;

	void setEmploymentDate(Date employmentDate);
	Date getEmploymentDate() const;

	virtual void print() const;
};
