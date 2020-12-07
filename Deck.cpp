#include <iostream>
#include "Deck.h"

// deck is simply derived from std::vector

//deck will have the following functions: 
// Deck (istream): is a constructor that accepts an istream 
//and reconstructs the deck form file 

//card* draw: returns and removes the top card from the deck 
//insertion operator (friend) to insert all the cards in the 
//deck to an std::ostream

Deck::Deck(istream& stream, const CardFactory*) {

}

Card* Deck::draw() {
	Card* topCard = front(); //return a reference to the first element in the vector
	//topCard.erase(card.begin()); 
	//Card.pop_front(); 
	this->erase(this->begin(), this->begin() + 1);
	return topCard;
}