/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "LandSale.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS AND DESTRUCTORS
LandSale::LandSale() : Property() {
	
	m_area = 0.0;
	m_price = 0;
}

LandSale::LandSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, double area, int price) : Property(streetAddress, cityName, seller, agent, listingDate) {

	m_area = area;
	m_price = price;
}

LandSale::~LandSale() {

	cout << "Destructor called. LandSale object deleted." << endl;
}


//SET AND GET METHODS
void LandSale::setArea(double area) {

	m_area = area;
}

double LandSale::getArea() const {

	return m_area;
}

void LandSale::setPrice(int price) {

	m_price = price;
}

int LandSale::getPrice() const {

	return m_price;
}


//PRINT METHOD
void LandSale::print() const {

	Property::print();
	cout << "Property Area: " << getArea() << " sq. ft." << endl;
	cout << "Property Price: $" << getPrice() << endl;
}