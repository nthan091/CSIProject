/****************** File:"Hand.cpp" ***************************/

#include "Hand.h"


Hand::Hand(istream&, const CardFactory*) {
	//accepts an istream and reconstruct the Hand from file
	ifstream file;
	file.open("Hand.txt", ios::in);
	Card* card;
	Hand* hand;
	file.read((char*)&hand, sizeof(hand));
	while (!file.eof()) {
		cout << &hand;
	}
	file.close();
}

Hand& Hand::operator+=(Card* c) {
	// adds the cards to the rear of the hand
	hands.push_back(c);

	return *this;
}

Card* Hand::play() {
	// returns and removes the top card from the players hand 
	Card* card = hands.front();
	hands.erase(hands.end());
	return card;
}

Card* Hand::top() {
	// returns but does not remove the top card from the player's hand
	Card* card = hands.front();

	return card;
}


Card* Hand::operator[] (int index) {
	//returns and removes the Card at a given index
	return hands[index];
}

ostream& operator << (ostream& output, vector <Card> C)
{
	for (int i = 0; i < C.size(); i++) {
		cout << C[i].getName() << "\n";
	}
	return output;
}