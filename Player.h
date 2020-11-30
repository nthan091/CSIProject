/****************** File:"Player.h" ***************************/
#include<iostream>
#include "Card.h"
using namespace std;

class Player {
public:
	Player(std::string&); //constructor that creates a player with a given name
	Player(istream&, const CardFactory*); // is a constructor which accepts an istreamand
	std::string getname(); //get the name of the player
	int getNumCoins(); // get the number of coins currently held by the player.
	Player& operator+=(int); // add a number of coins
	int getMaxNumChains(); // returns either 2 or 3
	int getNumChains(); // returns the number of non - zero chains
	Chain& operator[](int i); // returns the chain at position i.
	void buyThirdChain(); // adds an empty third chain to the player for three coins. 
	void printHand(std::ostream&, bool); 
	

	//the insertion operator (friend) to print a Player to an std::ostream.The player's name,
	//the number of coins in the player's possession and each of the chains(2 or 3, some possibly 
	//empty) should be printed.The player printout may look as follows :
	//Dave 3 coins
	//Red R R R R
	//Blue B
};

Player::Player(std::string&) {
	//constructor that creates a player with a given name
}

Player::Player(std::istream&, const <error - type>*) {
	// is a constructor which accepts an 
	//istreamand reconstruct the Player from file
}

std::string Player::getname() {
	//get the name of the player
}

int Player::getNumCoins() {
	// get the number of coins currently held by the player.
}

Player& Player::operator+=(int) {
	// add a number of coins
}

int Player::getMaxNumChains() {
	// returns either 2 or 3
}

int Player::getNumChains() {
	// returns the number of non - zero chains
}

Chain& Player::operator[](int i) {
	// returns the chain at position i.
}

void Player::buyThirdChain() {
	// adds an empty third chain to the player for three coins. 
	//The functions reduces the coin count for the player by two.
	//If the player does not have enough coins then an exception NotEnoughCoins is thrown.
}

void Player::printHand(std::ostream&, bool) {
	//prints the top card of the player's hand (with argument false) 
	//or all of the player's hand(with argument true) to the supplied ostream.
}