/************** File:"TradeArea.cpp" *************/

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

	for (int i = 0; i < cards.size(); i++) {
		if (newC->getName() == cards[i].getName()) {
			return true;
		}
	}

	return false;
}

Card* TradeArea::trade(std::string s) {
	//removes a card of the corresponding bean name from the TradeArea
	Card* card;
	for (int i = 0; i < cards.size(); i++) {
		if (s == cards[i].getname()) {
			card = cards.remove(i);
		}
	}

	return card; 
}

int TradeArea::numCards() {
	//returns the number of cards currently in the trade area.
	numCard = cards.size();
	return numCard;
}

ostream& operator << (ostream& output, Card C)
{
	output << C.getName()<<"\n";
	return output;
}