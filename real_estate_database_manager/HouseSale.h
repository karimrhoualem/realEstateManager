/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
#include "Property.h"
using namespace std;

class HouseSale : public Property
{
private:
	int m_yearBuilt;
	int m_numberOfRooms;
	int m_price;

public:
	HouseSale();
	HouseSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, int yearBuilt, int numberOfRooms, int price);
	~HouseSale();

	void setYearBuilt(int yearBuilt);
	int getYearBuilt() const;

	void setNumberOfRooms(int numberOfRooms);
	int getNumberOfRooms() const;

	void setPrice(int price);
	int getPrice() const;

	virtual void print() const;
};

