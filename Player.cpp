/****************** File:"Player.cpp" ***************************/

#include "player.h"

Player::Player(std::string& pn) {
	//constructor that creates a player with a given name
	playerName = pn;

}

Player::Player(std::istream&, const CardFactory* cardFactory) {
	//<error - type>*
	// is a constructor which accepts an 
	//istreamand reconstruct the Player from file
	ifstream file;
	file.open("Player.txt", ios::in);
	Player* player;
	Card* card;
	list <Card> cards = {};
	file.read((char*)&player, sizeof(player));
	while (!file.eof()) {
		cout << player;
	}
	file.close();


}

std::string Player::getname() {
	//get the name of the player
	cout << "Enter player name: ";
	cin >> playerName;
	return cout << playerName;
}

int Player::getNumCoins() {
	// get the number of coins currently held by the player.
	return .getCoinsPerCard();
}

Player& Player::operator+=(int coinNum) {
	// add a number of coins
	players.getCoinsPerCard(coinNum);
	coins = coinNum;

	return *this;
	
}

int Player::getMaxNumChains() {
	// returns either 2 or 3
	if (card.getCoinsPerCard() == 2) {
		return 2;
	}
	else if (card.getCoinsPerCard() == 3) {
		return 3;
	}
	else {
		return 0;
	}

}

int Player::getNumChains() {
	// returns the number of non - zero chains

	return chains.size();

	
}

int& Player::operator[](int i) {
	// returns the chain at position i.
	return player[i];
}

void Player::buyThirdChain() {
	// adds an empty third chain to the player for three coins. 
	//The functions reduces the coin count for the player by two.
	//If the player does not have enough coins then an exception NotEnoughCoins is thrown.
	chains.push_back(); 
	if (player.getCoinsPerCard(coins) < 2) {
		NotEnoughCoins NEC;
		throw (NEC); 

	}

	coins = coins - 2;

}

void Player::printHand(std::ostream& s, bool arg) {
	//prints the top card of the player's hand (with argument false) 
	//or all of the player's hand(with argument true) to the supplied ostream.
	if (bool) {
		cout << player.front().getname();
	}
	else {
		for (int i = 0; i < player.size(); i++) {
			cout<< player[i].getname();
		}
	}
}

ostream& operator << (ostream& output, Card C)
{
	output << playerName << "\n" << ;
	return output;
}