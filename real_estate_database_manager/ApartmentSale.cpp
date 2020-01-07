/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "ApartmentSale.h"

//CONSTRUCTORS AND DESTRUCTORS
ApartmentSale::ApartmentSale() {
	
	m_yearBuilt = 0;
	m_numberOfRooms = 0;
	m_price = 0;
	m_condominiumFee = 0;
}

ApartmentSale::ApartmentSale(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate, int yearBuilt, int numberOfRooms, int price, int condominiumFee) : Property(streetAddress, cityName, seller, agent, listingDate) {

	m_yearBuilt = yearBuilt;
	m_numberOfRooms = numberOfRooms;
	m_price = price;
	m_condominiumFee = condominiumFee;
}

ApartmentSale::~ApartmentSale() {

	cout << "Destructor called. ApartmentSale object deleted." << endl;
}


//SET AND GET METHODS
void ApartmentSale::setYearBuilt(int yearBuilt) {
	m_yearBuilt = yearBuilt;
}

int ApartmentSale::getYearBuilt() const {
	
	return m_yearBuilt;
}

void ApartmentSale::setNumberOfRooms(int numberOfRooms) {

	m_numberOfRooms = numberOfRooms;
}

int ApartmentSale::getNumberOfRooms() const {

	return m_numberOfRooms;
}

void ApartmentSale::setPrice(int price) {

	m_price = price;
}

int ApartmentSale::getPrice() const {

	return m_price;
}

void ApartmentSale::setCondominiumFee(int condominiumFee) {

	m_condominiumFee = condominiumFee;
}

int ApartmentSale::getCondominiumFee() const {

	return m_condominiumFee;
}


//PRINT METHOD
void ApartmentSale::print() const {

	Property::print();
	cout << "Year Built: " << getYearBuilt() << endl;
	cout << "Number of Rooms: " << getNumberOfRooms() << endl;
	cout << "Price: $" << getPrice() << endl;
	cout << "Condominium Fee: $" << getCondominiumFee() << endl;
}