/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#pragma once
#include <iostream>
using namespace std;
#include "Property.h"

class RealEstateManager 
{
private:
	static const int m_maxNumberOfAgents = 30; 
	static const int m_listingSize = 1000; 
	static const int m_archiveSize = 2000;

	// The followings are arrays of pointers, all the arrays should be initialized to null values. 
	RealEstateAgent* m_agentRecordsArray[m_maxNumberOfAgents];
	
	Property* m_propertyListingArray[m_listingSize]; 
	Property* m_archiveRecordsArray[m_archiveSize];

public: 
	RealEstateManager();
	~RealEstateManager();

	// insertAgent function adds a new agent to the agentRecordsArray 
	bool insertAgent(RealEstateAgent* agent);
		
	// insertProperty function adds a property to the first available location in the  propertyListingArray 
	bool insertProperty(Property* property);
		
	// When a property is sold, the buyer will be stored in the Property object and the object itself will be transferred from propertyListingArray to the archiveRecordsArray and null value will be inserted at its location at the propertyListingArray. 
	bool propertySold(Property* property, Client* client);

	// findHousesCity function determines all the houses for sale in a given city and prints them. String parameter of the function corresponds to a city name. You would need to use dynamic_cast to determine the class of the objects stored in the propertyListingArray. 
	void findHousesCity(string cityName);

	// findPropertiesAgent function determines all the listings of an agent and prints them. 
	void findPropertiesAgent(RealEstateAgent* agent);
};
