/****************** File:"Hand.h" ***************************/
#include<iostream>
#include "Card.h"
using namespace std; 

class Hand {
public:
	Hand(istream&, const CardFactory*); //constructor 
	Hand& operator+=(Card*); // adds the cars to the rear of the hand 
	Card* play();  // returns and removes the top card from the players hand 
	Card* top();  // returns but does not remove the top card from the player's hand 
	Card* operator[] (int); //returns and removes the Card at a given index
	
	//and the insertion operator (friend) to print Hand on an std::ostream. 
	//The hand should print all the cards in order.
};

Hand::Hand(istream&, const CardFactory*) {
	//s a constructor which accepts an istream
	//and reconstruct the Hand from file.
}

Hand& Hand::operator+=(Card*) {
	// adds the cars to the rear of the hand 
}

Card* Hand::play() {
	// returns and removes the top card from the players hand 
}

Card* Hand::top() {
	// returns but does not remove the top card from the player's hand
}

Card* Hand::operator[] (int) {
	//returns and removes the Card at a given index
}