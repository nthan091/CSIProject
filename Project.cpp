// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"
#include "Hand.h";
#include "Table.h"
#include "Chain.h"
using namespace std;

int main()
{
    cout << "Welcome! Start a new game or load a paused game? Enter new/load:" << endl;
    string response;
    cin >> response;

    Deck* deck; //initialize the deck
    Hand *hand1, *hand2; //initialize players hands
    Card* card; //initialize card
    TradeArea* tradearea; //initialize tradearea
    Table* table; //initialize table
    Chain* chain; //initializes chain
    DiscardPile* discards; //intializes discard pile
    CardFactory* cardfactory; //initializes cardfactory
    cardfactory = CardFactory::getFactory();
    string name1, name2; //initialize Players names
    Player *player1, *player2; // creates two new players
    bool paused = false;
    player1->getname();
    player2->getname();

    if (response == "new") {
        /*
        cout << "Welcome! Please enter the name of the first player:" << endl;
        cin >> name1;
        cout << "Please enter the name of the second player:";
        cin >> name2;
        */
        for (int i = 0; i < 5; i++) { // draws 5 cards from deck
            card = deck->draw();
            hand1->operator+=(card); // adds card to player's hand
        }
        for (int i = 0; i < 5; i++) { // draws 5 cards from deck
            card = deck->draw();
            hand2->operator+=(card); // add card to player's hand
        }
    }
    else if (response == "load") {
        ifstream savedTable("SavedGame.txt");
        table = new Table(savedTable, cardfactory);
        deck = table->getDeck();
        tradearea = table->getTradeArea();
        discards = table->getDiscards();
        player1 = table->getPlayer1();
        player2 = table->getPlayer2();

        savedTable.close();
    }

    while (deck != NULL) {
        if (paused == true) { // save current game and close
            ofstream saveGame;
            saveGame.open("SavedGame.txt");
            std::cout << saveGame.is_open();
            saveGame << (*discards);
            saveGame << endl;
            saveGame << endl;
            (*discards).print(saveGame);
            saveGame << player1->getname() << " " << player1->getMaxNumChains() << " " << player1->getNumCoins() << endl;
            player1->printHand(saveGame, true);
            saveGame << endl;
            saveGame << player2->getname() << " " << player2->getMaxNumChains() << " " << player2->getNumCoins() << endl;
            player2->printHand(saveGame, true);
            saveGame << endl;
            saveGame.flush();
            saveGame.close();
            delete table;
            exit(0);
        }

        std::vector<Player*> players;
        players.push_back(player1);
        players.push_back(player2);

        for (Player *player : players) {
            //Display table
            Hand* hand;
            if (player == player1) {
                hand == hand1;
            }
            else if (player == player2) {
                hand == hand2;
            }
            card = deck->draw(); // takes top card from deck
            hand->operator+=(card); // adds a card to player's hand 

            if (tradearea != NULL) {
                cout << "Enter the name of the bean card you would like to take from the TradeArea:" << endl;
                cin >> response;
                tradearea->trade(response); // removes a given card from the trade area
                cout << "Would you like to add this card to a chain, or discard it? Enter add/discard:" << endl;
                cin >> response;
                if (response == "add") {
                    chain->operator+=(card); // adds a card to a chain
                }
                else if (response == "discard") {
                    discards->operator+=(card); // discards a card
                }
            }
            hand->play(); // plays top card from player's hand
            cout << "Would you like to end this chain? Enter Y/N:" << endl;
            cin >> response;
            if (response == "Y") {
                int coins = chain->sell(); // sells players chain
                player->operator+=(coins); // adds number of coins to player's score
            }
            cout << "Would you like to play the top card from your hand? Enter Y/N:" << endl;
            cin >> response;
            if (response == "Y") {
                hand->play();
            }
            cout << "Would you like to end this chain? Enter Y/N:" << endl;
            cin >> response;
            if (response == "Y") {
                int coins = chain->sell(); // sells players chain
                player->operator+=(coins); // adds number of coins to player's score
            }
            cout << "Would you like to show your full hand and select an arbitrary card? Enter Y/N:" << endl;
            cin >> response;
            if (response == "Y") {
                table->printHand(true); // prints player's full hand
                cout << "Enter the index of the card you would like to remove ([0-4]):" << endl;
                int num;
                cin >> num;
                card = hand->operator+=(num); // removes the card at index num from player's hand
                discards->operator+=(card); // discards that card
            }
            for (int i = 1; i <= 3; i++) {
                card = deck->draw();
                if (tradearea->legal(card)) { // checks if it's legal to add card to trade area
                    tradearea->operator+=(card); // adds the card to the trade area
                }
            }
            while (true) {
                card = discards->top(); // returns top card from discard pile
                if (tradearea->legal(card)) { // checks if it's legal to add card to trade area
                    tradearea->operator+=(card); // if legal, removes and returns top card from discard pile
                }
                else {
                    return false; // if not legal, returns false and ends loop
                }
            }
            int numCards = tradearea->numCards();
            for (int i = 0; i <= numCards; i++) { // checks all cards in trade area
                cout << "Card at index " << i << " is: " << tradearea[i] << endl;
                cout << "Would you like to add this card to a chain? Enter Y/N: " << endl;
                cin >> response;
                if (response == "Y") {
                    chain->operator+=(tradearea[i]); // adds card to a chain
                }
            }
            for (int i = 1; i <= 2; i++) { // draws 2 cards and adds to player's hand
                card = deck->draw(); 
                hand->operator+=(card);
            }
        }
    }
}
