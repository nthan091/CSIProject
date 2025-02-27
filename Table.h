/****************** File:"Table.h" ***************************/
#include<iostream>
#include<ostream>
#include<fstream>
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"
using namespace std;

class Table {
	Player* player1, * player2; //objects of type Player
	Deck* deck; //object of type Deck
	DiscardPile* discards; //object of type DiscardPile
	TradeArea* trades; //object of type TradeArea

public:
	Table(istream&, const CardFactory*); //constructor
	bool win(std::string&); //returns true when a player has won
	void printHand(bool); //prints top card or whole hand
	friend ostream& operator << (ostream& output, Table& Table); //prints a Table 

	Player* getPlayer1();
	Player* getPlayer2();
	Deck* getDeck();
	DiscardPile* getDiscards();
	TradeArea* getTradeArea();

};



