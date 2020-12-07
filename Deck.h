#pragma once
#include <iostream> 
#include <vector>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

class Deck : public vector<Card*> {
public:
	Deck(istream&, const CardFactory*);
	Card* draw();
};
