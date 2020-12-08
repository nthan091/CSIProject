/************** File:"TradeArea.cpp" *************/

#include <string>
#include "TradeArea.h"
#include "card.h"


TradeArea::TradeArea(istream& s, const CardFactory*) {
	//is a constructor which accepts an istream and reconstruct the TradeArea from file.
	ifstream file;
	file.open("TradeArea.txt", ios::in);
	TradeArea* tradeArea;
	Card* card;
	list <Card> cards = {};
	file.read((char*)&tradeArea, sizeof(tradeArea));
	while (!file.eof()) {
		std::cout <<tradeArea;
	}
	file.close();

	numCard = 0; 

}

TradeArea& TradeArea::operator+=(Card* newC) {
	//adds the card to the trade area but it does 
	//not cheak if it is legal to place the card
	cards.push_back(newC);

	return *this; 

}

bool TradeArea::legal(Card* newC) {
	// returns true if the card can be legally added to the trade area
	// i.e. a card of the same bean is already in the TradeArea

	//list <Card, allocator<Card> >card::iterator curr;
	bool legal = false;
	for (auto & it :cards) {
		if (newC->getName() == it->getName()) {
			return true;
		}
	}

	return false;
}

Card* TradeArea::trade(std::string s) {
	//removes a card of the corresponding bean name from the TradeArea
	list<Card*>::iterator curr;
	bool flag = false; 
	for (curr = cards.begin(); curr != cards.end(); curr++) {
		if (s == (*curr)->getName()) {
			flag = true; 
			auto card = *curr; 
			curr = cards.erase(curr);
			return card; 
		}
	}

	cout << "Null pointer error is returned"; 

	return nullptr; 
}

int TradeArea::numCards() {
	//returns the number of cards currently in the trade area.
	numCard = cards.size();
	return numCard;
}

ostream& operator << (ostream& load, const TradeArea& T)
{
	list<Card*> ::iterator curr;
	for (curr = cards->begin(); curr != cards->end(); curr++) {
		load << cards->getName(); 
	}

	return load;
}