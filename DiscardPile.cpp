#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "DiscardPile.h"
#include "Card.h"
#include "CardFactory.h"


//load a new game

DiscardPile::DiscardPile(istream& in, const CardFactory*) {
	string tempCard;
	vector <Card*> cardVec;
	in >> tempCard;
	if (tempCard == "Blue") {
		Card* tempC = new Blue();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "Chilli") {
		Card* tempC = new Chili();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "Stink") {
		Card* tempC = new Stink();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "Green") {
		Card* tempC = new Green();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "soy") {
		Card* tempC = new soy();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "black") {
		Card* tempC = new black();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "garden") {
		Card* tempC = new garden();
		cardVec.push_back(tempCard);
	}
	else if (tempCard == "Red") {
		Card* tempC = new Red();
		cardVec.push_back(tempCard);
	}
	return *this;
}