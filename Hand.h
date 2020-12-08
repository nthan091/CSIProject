/****************** File:"Hand.h" ***************************/
#include<iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Card.h"
#include "CardFactory.h"
using namespace std; 

class Hand {
private: 
	vector <Card*> hands = {};
public:
	Hand(istream&, const CardFactory*); //constructor 
	Hand& operator+=(Card*); // adds the cards to the rear of the hand 
	Card* play();  // returns and removes the top card from the players hand 
	Card* top();  // returns but does not remove the top card from the player's hand 
	Card* operator[] (int); //returns and removes the Card at a given index
	friend ostream& operator<< (ostream&, vector <Card>);
	//and the insertion operator (friend) to print Hand on an std::ostream. 
	//The hand should print all the cards in order.
};

class EmptyHand{};

