/************** File:"TradeArea.h" *************/
#include <iostream>
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <vector>
#include <iomanip>
#include <string>
#include "Card.h"
#include "card.cpp"
#include "CardFactory.h"
using namespace std; 


class TradeArea {
private:
	int numCard; 
	list <Card*> cards;

public:
	TradeArea(istream&, const CardFactory*); //Constructor 
	TradeArea& operator+=(Card*newC);			//adds the card to the TradeArea 
	bool legal(Card*newC);		// returns true if the card can be legally added to the TradeArea		
	Card* trade(string); //removes a card of the corresponding bean name from the trade area 
	int numCards();  //returns the number of cards currently in the trade area. 
	
	friend ostream& operator<< (ostream&, Card);
	//the insertion operator (friend) to insert all the cards of the TradeArea to an std::ostream

};


