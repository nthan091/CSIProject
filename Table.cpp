#include "Table.h"
#include "Hand.h"

// Constructor which accepts an istream and reconstruct the Table from file
Table::Table(istream& is, const CardFactory* c) {
	/*
	deck = new Deck(is, c);
	trades = new TradeArea(is, c);
	discards = new DiscardPile(is, c);
	player1 = new Player(is, c);
	player2 = new Player(is, c);
*/
	ifstream file;
	file.open("table.txt", std::ios::in);
	Table* table;
	file.read((char*)&table, sizeof(table));
	while (!file.eof()) {
		std::cout << table;
	}
	file.close();
}

// Returns true when a player has won
bool Table::win(std::string&) {
	int coins1, coins2;
	if (deck == 0) {
		coins1 = player1->getNumCoins();
		coins2 = player2->getNumCoins();

		if (coins1 > coins2) {
			cout << player1->getname() << "wins!" << endl;
			return true;
		}
		else if (coins2 > coins1) {
			cout << player2->getname() << "wins!" << endl;
			return true;
		}
		else if (coins1 == coins2) {
			cout << "It's a tie!" << endl;
			return false;
		}
	}
	else {
		return false;
	}
}

// Prints the top card of the player's hand or all of the player's hand
void Table::printHand(bool) {
	Hand* hand;
	if (false) {
		cout << hand->top() << endl;
	}
	else if (true) {
		for (int i = 0; i < 5; i++) {
			cout << hand->top() << endl;
		}
	}
}

// Insertion operator
ostream& operator << (ostream& output, Table& table) {
	output << table.player1 << ", " << table.player2 << ", " << table.discards << ", " << table.trades << endl;
	return output;
}

Player* Table::getPlayer1() {
	return player1;
}

Player* Table::getPlayer2() {
	return player2;
}

Deck* Table::getDeck() {
	return deck;
}

DiscardPile* Table::getDiscards() {
	return discards;
}

TradeArea* Table::getTradeArea() {
	return trades;
}
