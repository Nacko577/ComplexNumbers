#pragma once
#include <string>

using namespace std;

typedef enum { circuit = 0, city_break = 1,	cruise = 2,	all_inclusive = 3
}OfferType;

class Offer
{
	public:
		Offer();

		unsigned int getPrice() const; //y
		string getId() const; //y
		string getDestination() const; //y
		string getDeparture() const; //y
		string getDate_Start() const; //y
		string getDate_End() const; //y
		OfferType getType() const; //y

		void setPrice(unsigned int price); //y
		void setId(string id); //y
		void setDestination(string dest); //y
		void setDeparture(string dep); //y
		void setDate_Start(string date); //y 
		void setDate_End(string date); //y
		void setType(OfferType type); //y

	private:
		unsigned int price;
		string id;
		string destination;
		string departure;
		string date_start;
		string date_end;
		OfferType type;
};

