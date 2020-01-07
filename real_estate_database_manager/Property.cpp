/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Property.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS AND DESTRUCTORS
Property::Property() {

	m_streetAddress = "";
	m_cityName = "";

	//m_listingDate = nullptr;
	m_seller = nullptr;
	m_buyer = nullptr;
	m_agent = nullptr;
}

Property::Property(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate) {

	m_streetAddress = streetAddress;
	m_cityName = cityName;

	m_seller = seller;
	m_buyer = nullptr;

	m_agent = agent;

	m_listingDate = listingDate;
}

Property::Property(const Property& anotherProperty) { //Copy constructor

	m_streetAddress = anotherProperty.m_streetAddress;
	m_cityName = anotherProperty.m_cityName;

	m_seller = new Client(*anotherProperty.getSeller());
	m_buyer = nullptr;

	m_agent = new RealEstateAgent(*anotherProperty.getAgent());

	m_listingDate = anotherProperty.m_listingDate;
}

Property::~Property() {

	cout << "Destructor called. Property objected deleted." << endl;
}


// SET AND GET METHODS FOR MEMBER VARIABLES OF TYPE STRING
void Property::setStreetAddress(string streetAddress) {

	m_streetAddress = streetAddress;
}

string Property::getStreetAddress() const {

	return m_streetAddress;
}

void Property::setCityName(string cityName) {

	m_cityName = cityName;
}

string Property::getCityName() const {

	return m_cityName;
}


// SET AND GET METHODS FOR MEMBER VARIABLES OF TYPE CLIENT
void Property::setSeller(Client* seller) {

	m_seller = seller;
}

Client* Property::getSeller() const {

	return m_seller;
}

void Property::setBuyer(Client* buyer) {

	m_buyer = buyer;
}

Client* Property::getBuyer() const {

	return m_buyer;
}


// SET AND GET METHODS FOR MEMBER VARIABLES OF TYPE REALESTATEAGENT
void Property::setAgent(RealEstateAgent* agent) {

	m_agent = agent;
}

RealEstateAgent* Property::getAgent() const {

	return m_agent;
}


// SET AND GET METHODS FOR MEMBER VARIABLES OF TYPE DATE
void Property::setListingDate(Date listingDate) {

	m_listingDate = listingDate;
}

Date Property::getListingDate() const {

	return m_listingDate;
}

// PRINT METHOD
void Property::print() const {

	cout << "Property Information: " << endl;
	cout << "Street Address: " << getStreetAddress() << endl;
	cout << "City Name: " << getCityName() << endl;

	cout << endl << "Seller information: ";
	getSeller()->print();

	if (getBuyer() != nullptr) {
		cout << "Buyer Information: ";
		getBuyer()->print();
	 }
	
	cout << endl << "Real Estate Agent Information: ";
	getAgent()->print();

	cout << endl << "Listing Date Information: ";
	getListingDate().print();
}