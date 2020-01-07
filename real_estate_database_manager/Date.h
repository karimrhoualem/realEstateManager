/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
using namespace std;

class Date 
{
private:
	int m_month;
	int m_day;
	int m_year;

public: 
	Date(); 
	Date(int month, int day, int year);
	~Date();

	void setMonth(int month);
	int getMonth() const;

	void setDay(int day);
	int getDay() const;

	void setYear(int year);
	int getYear() const;

	void print() const;
};

