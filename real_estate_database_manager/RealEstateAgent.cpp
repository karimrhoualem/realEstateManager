/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "RealEstateAgent.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS AND DESTRUCTORS
RealEstateAgent::RealEstateAgent() : Person() {

	m_employeeID = 0;
	//m_employmentDate = nullptr;
}

RealEstateAgent::RealEstateAgent(string name, string address, Date employmentDate, int employeeID) : Person (name, address) {

	m_employmentDate = employmentDate;
	m_employeeID = employeeID;
}

RealEstateAgent::~RealEstateAgent() {

	cout << "Destructor called. RealEstateAgent object deleted." << endl;
}


//SET AND GET METHODS
void RealEstateAgent::setEmployeeID(int employeeID) {

	m_employeeID = employeeID;
}

int RealEstateAgent::getEmployeeID() const {

	return m_employeeID;
}

void RealEstateAgent::setEmploymentDate(Date employmentDate) {

	m_employmentDate = employmentDate;
}

Date RealEstateAgent::getEmploymentDate() const {

	return m_employmentDate;
}


//PRINT METHOD
void RealEstateAgent::print() const {

	Person::print();
	cout << "Employee ID: " << getEmployeeID() << endl;
	cout << "Employment Date: "; 
	getEmploymentDate().print();
}