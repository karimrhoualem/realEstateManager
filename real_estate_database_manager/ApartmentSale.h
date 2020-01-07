/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include "Property.h"
#include <iostream>
using namespace std;

class ApartmentSale : public Property
{
private:
	int m_yearBuilt;
	int m_numberOfRooms;
	int m_price;
	int m_condominiumFee;

public:
	ApartmentSale();
	ApartmentSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, int yearBuilt, int numberOfRooms, int price, int condominiumFee); 
	~ApartmentSale();

	void setYearBuilt(int yearBuilt);
	int getYearBuilt() const;

	void setNumberOfRooms(int numberOfRooms);
	int getNumberOfRooms() const;

	void setPrice(int price);
	int getPrice() const;

	void setCondominiumFee(int condominiumFee);
	int getCondominiumFee() const;

	virtual void print() const;
};

