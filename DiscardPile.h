#pragma once
#include <vector>
#include "Card.h"
#include "CardFactory.h"

//similar to deck 

class DiscardPile {
	vector <Card*> cardVec; 
public: 
    DiscardPile(istream&, const CardFactory*); //loads an old game
	DiscardPile& operator+=(Card*); //discard card to pile
	Card* pickUp(); //returns and removes
	Card* top(); //returns but does not remove top card of discard pile
	void print(std::ostream&); //insert all cards to an std::ostream
	friend std::ostream& operator<<(std::ostream&, const DiscardPile&); 

};

//Dis

DiscardPile& DiscardPile::operator+=(Card* card) {
    cardVec.push_back(card);
}

Card* DiscardPile::pickUp() {
    Card* c = cardVec.back();
    cardVec.pop_back();
    return c;
}

Card* DiscardPile::top() {
    Card* c = cardVec.front();
    return c;
}

void DiscardPile::print(ostream& out) {
    for (Card* card : cardVec) {
        out << *card;
    }
   
}