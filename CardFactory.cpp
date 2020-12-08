#include "CardFactory.h"
#include <algorithm>
#include <random>

//Constructor in which all the cards need to be created in the numbers needed for the game
CardFactory::CardFactory(vector<Card> cards = {}) {
	for (int i = 1; i <= 20; i++) {
		Blue blue;
		cards.push_back(blue);
	}
	for (int i = 1; i <= 18; i++) {
		Chili chili;
		cards.push_back(chili);
	}
	for (int i = 1; i <= 16; i++) {
		Stink stink;
		cards.push_back(stink);
	}
	for (int i = 1; i <= 14; i++) {
		Green green;
		cards.push_back(green);
	}
	for (int i = 1; i <= 12; i++) {
		soy soy;
		cards.push_back(soy);
	}
	for (int i = 1; i <= 10; i++) {
		black black;
		cards.push_back(black);
	}
	for (int i = 1; i <= 8; i++) {
		Red red;
		cards.push_back(red);
	}
	for (int i = 1; i <= 6; i++) {
		garden garden;
		cards.push_back(garden);
	}
}

// Returns a pointer to the only instance of CardFactory
CardFactory* CardFactory::getFactory()
{
	CardFactory* cardfactory = new CardFactory();
	return cardfactory;
}

// Returns a shuffled deck with all 104 bean cards
Deck CardFactory::getDeck()
{
	Deck* newDeck;
	std::random_device rand;
	std::mt19937 shuff(rand());
	std::shuffle(newDeck->begin(), newDeck->end(), shuff);

	return newDeck;
}