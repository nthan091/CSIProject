/****************** File:"Table.h" ***************************/
#include<iostream>
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"
using namespace std;

class Table {
public:
	Player player1, player2; //objects of type Player
	Deck deck; //object of type Deck
	DiscardPile discards; //object of type DiscardPile
	TradeArea trades; //object of type TradeArea
	Table(istream&, const CardFactory*); //constructor
	bool win(std::string&); //returns true when a player has won
	void printHand(bool); //prints top card or whole hand
	friend ostream& operator << (ostream& output, Table& Table); //prints a Table 
};



