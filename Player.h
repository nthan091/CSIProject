/****************** File:"Player.h" ***************************/
#include<iostream>
#include <vector>
#include "Card.h"
#include "CardFactory.h"
using namespace std;

class Player {
	string playerName;
	vector <Card*> players = {};
	int coins;
	vector <int > chains;
public:
	Player(std::string&); //constructor that creates a player with a given name
	Player(istream&, const CardFactory*); // is a constructor which accepts an istreamand
	std::string getname(); //get the name of the player
	int getNumCoins(); // get the number of coins currently held by the player.
	Player& operator+=(int); // add a number of coins
	int getMaxNumChains(); // returns either 2 or 3
	int getNumChains(); // returns the number of non - zero chains
	int& operator[](int i); // returns the chain at position i.
	void buyThirdChain(); // adds an empty third chain to the player for three coins. 
	void printHand(std::ostream&, bool);
	friend ostream& operator<< (ostream&, Card);

	//the insertion operator (friend) to print a Player to an std::ostream.The player's name,
	//the number of coins in the player's possession and each of the chains(2 or 3, some possibly 
	//empty) should be printed.The player printout may look as follows :
	//Dave 3 coins
	//Red R R R R
	//Blue B

};

class  NotEnoughCoins {};
