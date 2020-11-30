/************** File:"TradeArea.h" *************/
#include <iostream>
#include <list>
#include "Card.h"
#include "card.cpp"
using namespace std; 


class TradeArea {
private:
	int numCards; 
	list <Card, allocator<Card> > cards;
public:
	TradeArea(istream&, const CardFactory*); //Constructor 
	TradeArea& operator+=(Card*new);			//adds the card to the TradeArea 
	bool legal(Card*new);		// returns true if the card can be legally added to the TradeArea		
	Card* trade(string); //removes a card of the corresponding bean name from the trade area 
	int numCards();  //returns the number of cards currently in the trade area. 
	
	//the insertion operator (friend) to insert all the cards of the TradeArea to an std::ostream

};


TradeArea::TradeArea(istream&, const CardFactory*) {
	//is a constructor which accepts an istream and reconstruct the TradeArea from file.
	//not very sure what to do here 
	cards = istream; 

}

TradeArea& TradeArea::operator+=(Card* new) {
	//adds the card to the trade area but it does 
	//not cheak if it is legal to place the card

	cards.insert(new); 
}

bool TradeArea::legal(Card* new) {
	// returns true if the card can be legally added to the trade area
	// i.e. a card of the same bean is already in the TradeArea

	list <Card, allocator<Card> >::iterator curr;
	
	for (curr = cards.begin()+1; curr != cards.end(); curr++) {
		if (new->getname() == cards.getname()) {
			return true; 
		}
	}

	return false; 
}

Card*TradeArea::trade(std::string) {
	//removes a card of the corresponding bean name from the TradeArea
	list <Card, allocator<Card> >::iterator curr;

	for (curr = cards.begin() + 1; curr != cards.end(); curr++) {
		if (string == cards.getname()) {
			cards.erase(curr);
		}
	}
}

int TradeArea::numCards() {
	//returns the number of cards currently in the trade area.
	numCards = cards.size(); 
	return numCards; 
}
