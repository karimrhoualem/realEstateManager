/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Client : public Person 
{
private:
	string m_socialInsuranceNumber;

public: 
	Client(); 
	Client(string name, string address, string socialInsuranceNumber);
	~Client(); 

	void setSocialInsuranceNumber(string socialInsuranceNumber);
	string getSocialInsuranceNumber() const;

	virtual void print() const;
};

