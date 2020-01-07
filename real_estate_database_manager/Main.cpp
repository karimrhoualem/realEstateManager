/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include <iostream>
#include <string>
#include "Date.h"
#include "Person.h"
#include "Client.h"
#include "RealEstateAgent.h"
#include "Property.h"
#include "LandSale.h"
#include "HouseSale.h"
#include "ApartmentSale.h"
#include "RealEstateManager.h"
using namespace std;

int main()
{
	Date* date1 = new Date(10, 25, 2019);
	Date* listingDate1 = new Date(8, 5, 2018);

	Client client("Bob", "111 Burger Ave", "9999");
	RealEstateAgent agent("Archer", "456 Sterling Way", *date1, 2222);
	Person* person1 = &client;
	Person* person2 = &agent;

	LandSale landSale("666 Something Street", "Montreal", &client, &agent, *listingDate1, 1000.0, 100000);
	HouseSale houseSale("777 Whatever Street", "Toronto", &client, &agent, *listingDate1, 2009, 3, 950000);
	ApartmentSale apartmentSale("888 This Street", "Ottawa", &client, &agent, *listingDate1, 2011, 4, 1150000, 20000);
	Property* property1 = &landSale;
	Property* property2 = &houseSale;
	Property* property3 = &apartmentSale;

	RealEstateManager* manager = new RealEstateManager();
	manager->insertAgent(&agent);
	manager->insertProperty(property1);
	manager->insertProperty(property2);
	manager->insertProperty(property3);
	manager->findPropertiesAgent(&agent);
	manager->findHousesCity("Toronto");
	manager->propertySold(property1, &client);

	cout << endl;
	delete date1;
	delete listingDate1;
	delete manager;



















	//Date* date[5];
	//Date* listingDate[5];
	//RealEstateAgent* agent[5];
	//Client* client[5];
	//Property* property[5];
	//RealEstateManager* manager = new RealEstateManager();

	////Load date and listingDate pointer arrays with Date objects
	//for (int i = 0; i < 5; i++) {
	//
	//	static int plusOne = 0;
	//
	//	date[i] = new Date(10, 1 + plusOne, 2019);
	//	listingDate[i] = new Date(2, 9 + plusOne, 2017);
	//
	//	plusOne++;
	//}

	//agent[0] = new RealEstateAgent("Karim", "123 Main Street", *date[0], 1111);
	//agent[1] = new RealEstateAgent("Archer", "456 Sterling Way", *date[1], 2222);
	//agent[2] = new RealEstateAgent("Lana", "789 Kane Way", *date[2], 333);
	//agent[3] = new RealEstateAgent("Mallory", "135 Dutchess Blvd", *date[3], 444);
	//agent[4] = new RealEstateAgent("Cheryl", "Tunt Avenue", *date[4], 555);

	//client[0] = new Client("Bob", "111 Burger Ave", "9999");
	//client[1] = new Client("Linda", "222 Teddy Road", "8888");
	//client[2] = new Client("Gene", "333 Jimmy Pesto Blvd", "7777");
	//client[3] = new Client("Louise", "444 Andy Street", "6666");
	//client[4] = new Client("Tina", "555 Olly Lane", "5555");

	//property[0] = new Property("666 Something Street", "Montreal", client[0], agent[0], *listingDate[0]);
	//property[1] = new Property("777 Whatever Street", "Toronto", client[1], agent[1], *listingDate[1]);
	//property[2] = new Property("888 This Street", "Ottawa", client[2], agent[2], *listingDate[2]);
	//property[3] = new Property("999 That Street", "Winnipeg", client[3], agent[3], *listingDate[3]);
	//property[4] = new Property("000 Thing Street", "Vancouver", client[4], agent[4], *listingDate[4]);

	//for (int x = 0; x < 5; x++) {
	//	manager->insertAgent(agent[x]);
	//}
	//	
	//for (int y = 0; y < 5; y++) {
	//
	//	manager->insertProperty(property[y]);
	//}

	//manager->findPropertiesAgent(agent[0]);

	//manager->findHousesCity("Toronto");

	//manager->propertySold(property[0], client[0]);
























	//Date* date[5];
	//Date* listingDate[5];
	//
	////Load date and listingDate pointer arrays with Date objects
	//for (int i = 0; i < 5; i++) {
	//
	//	static int plusOne = 0;
	//
	//	date[i] = new Date(10, 1 + plusOne, 2019);
	//	listingDate[i] = new Date(2, 9 + plusOne, 2017);
	//
	//	plusOne++;
	//}
	//
	////Access agents objects polymorphically through person objects
	//Person* person[10];
	//RealEstateAgent* agent[5];
	//
	//agent[0] = new RealEstateAgent("Karim", "123 Main Street", *date[0], 1111);
	//agent[1] = new RealEstateAgent("Archer", "456 Sterling Way", *date[1], 2222);
	//agent[2] = new RealEstateAgent("Lana", "789 Kane Way", *date[2], 333);
	//agent[3] = new RealEstateAgent("Mallory", "135 Dutchess Blvd", *date[3], 444);
	//agent[4] = new RealEstateAgent("Cheryl", "Tunt Avenue", *date[4], 555);
	//
	////for (int j = 0; j < 5; j++) {
	//
	////	person[j] = agent[j];
	////	/*person[j]->print();
	////	cout << endl;*/
	////}
	//
	////Access landSale objects polymorphically through property objects
	//Property* property[5];
	//LandSale* landSale[5];
	//Client* client[5];
	//
	//client[0] = new Client("Bob", "111 Burger Ave", "9999");
	//client[1] = new Client("Linda", "222 Teddy Road", "8888");
	//client[2] = new Client("Gene", "333 Jimmy Pesto Blvd", "7777");
	//client[3] = new Client("Louise", "444 Andy Street", "6666");
	//client[4] = new Client("Tina", "555 Olly Lane", "5555");
	//
	////for (int k = 5; k < 10; k++) {
	////	
	////	person[k] = client[k-5];
	////	/*person[k]->print();
	////	cout << endl;*/
	////}
	//
	//landSale[0] = new LandSale("666 Something Street", "Montreal", client[0], agent[0], *listingDate[0], 1000.0, 100000);
	//landSale[1] = new LandSale("777 Whatever Street", "Toronto", client[1], agent[1], *listingDate[1], 2000.0, 200000);
	//landSale[2] = new LandSale("888 This Street", "Ottawa", client[2], agent[2], *listingDate[2], 3000.0, 300000);
	//landSale[3] = new LandSale("999 That Street", "Winnipeg", client[3], agent[3], *listingDate[3], 4000.0, 400000);
	//landSale[4] = new LandSale("000 Thing Street", "Vancouver", client[4], agent[4], *listingDate[4], 5000.0, 500000);
	//
	///*for (int l = 0; l < 5; l++) {
	//
	//	property[l] = landSale[l];
	//	property[l]->print();
	//	cout << endl;
	//}*/
	//
	//RealEstateManager* manager1 = new RealEstateManager();
	//
	//for (int x = 0; x < 5; x++) {
	//
	//	manager1->insertAgent(agent[x]);
	//}
	//
	//for (int y = 0; y < 5; y++) {
	//
	//	manager1->insertProperty(property[y]);
	//}
	//
	//manager1->findPropertiesAgent(agent[0]);
	//
	//
	//cout << endl;
	////delete[] agent;
	////delete[] client;
	////delete[] person;
	////delete[] landSale;
	////delete[] property;
	////delete[] date;
	////delete[] listingDate;
	//delete manager1;
	//
	//return 0;
}