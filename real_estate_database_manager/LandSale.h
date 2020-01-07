/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
#include "Property.h"
using namespace std;

class LandSale : public Property
{
private:
	double m_area;
	int m_price;

public:
	LandSale();
	LandSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, double area, int price);
	~LandSale();

	void setArea(double area);
	double getArea() const;

	void setPrice(int price);
	int getPrice() const;

	virtual void print() const;
};

