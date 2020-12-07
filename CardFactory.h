/****************** File:"CardFactory.h" ***************************/
#include<iostream>
#include<vector>
#include "Deck.h"
#include "Card.h"
using namespace std;

class CardFactory {
public:
	static CardFactory* getFactory(); //returns a pointer
	Deck getDeck(); //returns a deck with all 104 bean cards

private:
	CardFactory(vector<Card>); //constructor
};