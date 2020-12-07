#pragma once
#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include <vector> 

using namespace std; 

template <class Card>
class Chain {
public: 
	Chain(Card* top); //when starting a new game
	Chain(istream&, const CardFactory*); //resumes from last game
	Chain<T>& operator+=(Card*); //adds a card to chain
	int sell(); //counts the number of cards in the current chain and returns the number of coins
	friend ostream& operator << (ostream& out, Chain<Card> & c); 
	void print() const; //print the chain
	vector<Card*>* chainPoint() {
		return &cardChain; //pointer to chain
	}
private: 
	vector<Card*> cardChain; 

};

template <class Card>
Chain<Card>::Chain(Card* top) {
	cardChain.push_back(top); 
}

template <class Card>
void Chain<Card>::operator+=(Card* c) {
	cardChain.push_back(c); 
} //add a card to the chain

template <class Card>
int Chain<Card>::sell() {
	return (cardChain[0]->getCoinsPerCard(cardChain.size())); 
}

ostream& operator <<(ostream& out, Chain<Card>& chain) {
	for (Card* c : *chain.chainPoint()) {
		//c.print
		//this->print
		//this.print
		c->print(out); 
	}
	return out; 
}

template <class Card>
void Chain<Card>::print::const {
	for (Card* c : cardChain) {
		c->print(cout); 
	}
}



