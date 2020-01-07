/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "RealEstateManager.h"
#include <iostream>
using namespace std;

RealEstateManager::RealEstateManager() {

	for (int i = 0; i < m_maxNumberOfAgents; i++) {
		m_agentRecordsArray[i] = nullptr;
	}

	for (int j = 0; j < m_listingSize; j++) {
		m_propertyListingArray[j] = nullptr;
	}

	for (int k = 0; k < m_archiveSize; k++) {
		m_archiveRecordsArray[k] = nullptr;
	}
}

RealEstateManager::~RealEstateManager() {

	cout << "Destructor called. RealEstateManager object deleted." << endl;
}

bool RealEstateManager::insertAgent(RealEstateAgent* agent) {

	for (int i = 0; i < m_maxNumberOfAgents; i++) {
		
		if (m_agentRecordsArray[i] == nullptr) {
			
			m_agentRecordsArray[i] = agent;
			return true;
		}
	}

	return false;
}

bool RealEstateManager::insertProperty(Property* property) {

	for (int i = 0; i < m_listingSize; i++) {

		if (m_propertyListingArray[i] == nullptr) {

			m_propertyListingArray[i] = property;
			return true;
		}
	}

	return false;
}

bool RealEstateManager::propertySold(Property* property, Client* client) {

	for (int i = 0; i < m_listingSize; i++) {
		
		if (m_propertyListingArray[i] == property) {

			property->setBuyer(client);


			for (int j = 0; j < m_archiveSize; j++) {

				if (m_archiveRecordsArray[j] == nullptr) {

					m_archiveRecordsArray[j] = property;
					m_propertyListingArray[i] = nullptr;

					cout << endl << "Property in " << property->getCityName() << " has been purchased by: " << client->getName() << endl;
					
					return true;
				}
			}
		}
	}
	
	return false;
}

void RealEstateManager::findHousesCity(string cityName) {

	for (int i = 0; i < m_listingSize; i++) {

		if (m_propertyListingArray[i]->getCityName() == cityName) {

			cout << "PROPERTY IN " << cityName << " HAS BEEN FOUND!" << endl;
			m_propertyListingArray[i]->print();
			break;
		}
	}

}

void RealEstateManager::findPropertiesAgent(RealEstateAgent* agent) {

	for (int i = 0; i < m_listingSize; i++) {

		if (m_propertyListingArray[i] != nullptr) {

			if (m_propertyListingArray[i]->getAgent() == agent) {

				m_propertyListingArray[i]->print();
				cout << endl;
			}
		}

	}
}