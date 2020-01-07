/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Client.h"
#include "RealEstateAgent.h"
#include "Date.h"

class Property
{
private:
	string m_streetAddress;
	string m_cityName;

	Client* m_seller; // Initialized to the Client parameter of the constructor function. 
	Client* m_buyer; // Initialized to a null pointer. 

	RealEstateAgent* m_agent;

	Date m_listingDate;

public:
	Property();
	Property(string streetAddress, string cityName, Client* seller, RealEstateAgent* agent, Date listingDate);
	Property(const Property& anotherProperty); //Copy constructor
	~Property();

	void setStreetAddress(string streetAddress);
	string getStreetAddress() const;

	void setCityName(string cityName);
	string getCityName() const;

	void setSeller(Client* seller);
	Client* getSeller() const;

	void setBuyer(Client* buyer);
	Client* getBuyer() const;

	void setAgent(RealEstateAgent* agent);
	RealEstateAgent* getAgent() const;

	void setListingDate(Date listingDate);
	Date getListingDate() const;

	virtual void print() const;
};

