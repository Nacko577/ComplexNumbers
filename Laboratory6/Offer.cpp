#include "Offer.h"

Offer::Offer() {

}

unsigned int Offer::getPrice() const {
	return this->price;
}

string Offer::getId() const {
	return this->id;
}

string Offer::getDestination() const {
	return this->destination;
}

string Offer::getDeparture() const {
	return this->departure;
}

string Offer::getDate_Start() const {
	return this->date_start;
}

string Offer::getDate_End() const {
	return this->date_end;
}

OfferType Offer::getType() const {
	return this->type;
}

void Offer::setPrice(unsigned int price) {
	this->price = price;
}

void Offer::setId(string id) {
	this->id = id;
}

void Offer::setDestination(string dest) {
	this->destination = dest;
}

void Offer::setDeparture(string dep) {
	this->departure = dep;
}
void Offer::setDate_Start(string date) {
	this->date_start = date;
}

void Offer::setDate_End(string date) {
	this->date_end = date;
}

void Offer::setType(OfferType type) {
	this->type = type;
}


