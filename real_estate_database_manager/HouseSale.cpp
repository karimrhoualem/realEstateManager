/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "HouseSale.h"
#include <iostream>
using namespace std;

//CONSTRUCTORS AND DESTRUCTORS
HouseSale::HouseSale() {

	m_yearBuilt = 0;
	m_numberOfRooms = 0;
	m_price = 0;
}
HouseSale::HouseSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, int yearBuilt, int numberOfRooms, int price) : Property(streetAddress, cityName, seller, agent, listingDate) {

	m_yearBuilt = yearBuilt;
	m_numberOfRooms = numberOfRooms;
	m_price = price;
}

HouseSale::~HouseSale() {

	cout << "Destructor called. HouseSale object deleted." << endl;
}


//SET AND GET METHODS
void HouseSale::setYearBuilt(int yearBuilt) {

	m_yearBuilt = yearBuilt;
}

int HouseSale::getYearBuilt() const {

	return m_yearBuilt;
}

void HouseSale::setNumberOfRooms(int numberOfRooms) {

	m_numberOfRooms = numberOfRooms;
}

int HouseSale::getNumberOfRooms() const {

	return m_numberOfRooms;
}

void HouseSale::setPrice(int price) {

	m_price = price;
}

int HouseSale::getPrice() const {

	return m_price;
}


//PRINT METHOD
void HouseSale::print() const {

	Property::print();
	cout << "Year Built: " << getYearBuilt() << endl;
	cout << "Number of Rooms: " << getNumberOfRooms() << endl;
	cout << "Price: $" << getPrice() << endl;
}