/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {

	m_name = "";
	m_address = "";
}

Person::Person(string name, string address) {

	m_name = name;
	m_address = address;
}

Person::~Person() {

	cout << "Destructor called. Person object deleted." << endl;
}

void Person::setName(string name) {

	m_name = name;
}

string Person::getName() const {

	return m_name;
}

void Person::setAddress(string address) {

	m_address = address;
}

string Person::getAddress() const {

	return m_address;
}

void Person::print() const {
	
	cout << "Name: " << getName() << endl;
	cout << "Address: " << getAddress() << endl;
}