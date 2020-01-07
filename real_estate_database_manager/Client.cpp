/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Client.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS AND DESTRUCTORS
Client::Client() : Person() {

	m_socialInsuranceNumber = "";
}

Client::Client(string name, string address, string socialInsuranceNumber) : Person(name, address) {

	m_socialInsuranceNumber = socialInsuranceNumber;
}

Client::~Client() {
	
	cout << "Destructor called. Client object deleted." << endl;
}

void Client::setSocialInsuranceNumber(string socialInsuranceNumber) {

	m_socialInsuranceNumber = socialInsuranceNumber;
}

string Client::getSocialInsuranceNumber() const {

	return m_socialInsuranceNumber;
}

void Client::print() const {

	Person::print();
	cout << "Social Insurance Number: " << getSocialInsuranceNumber() << endl;
}