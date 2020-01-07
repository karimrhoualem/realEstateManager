/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
using namespace std;
#include "Date.h"

class Person 
{
private:
	string m_name;
	string m_address;

public: 
	Person(); 
	Person(string name, string address);
	~Person();

	void setName(string name);
	string getName() const;

	void setAddress(string address);
	string getAddress() const;

	virtual void print() const;
};

