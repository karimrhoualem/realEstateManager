/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Date.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS AND DESTRUCTORS
Date::Date() {

	m_month = 0;
	m_day = 0;
	m_year = 0;
}

Date::Date(int month, int day, int year) {

	m_month = month;
	m_day = day;
	m_year = year;
}

Date::~Date() {

	cout << "Destructor called. Date object deleted." << endl;
}

// SET AND GET METHODS
void Date::setMonth(int month) {
	
	m_month = month;
}

int Date::getMonth() const {

	return m_month;
}

void Date::setDay(int day) {

	m_day = day;
}

int Date::getDay() const {

	return m_day;
}

void Date::setYear(int year) {

	m_year = year;
}

int Date::getYear() const {

	return m_year;
}


// PRINT METHOD
void Date::print() const {

	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}

