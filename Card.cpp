#include <iostream>
#include "Card.h"

//BLUE/////////////
int Blue::getCoinsPerCard(int coins) {

	//this switch block will return the value of chains depending 
	//on how many coins one has
	//each case corresponds with a number of coins, and its 
	//return value it the value of the chains

	switch (coins) {

	case 1:
		return 4;
		break;
	case 2:
		return 6;
		break;
	case 3:
		return 8;
		break;
	case 4:
		return 10;
		break;
	default:
		break;
	} //closes end block
} //closes 

string Blue::getName() {
	return "Blue";
}

void Blue::print(ostream& out) {
	out << "B";
}



//CHILLI///////////////////
int Chili::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 3;
		break;
	case 2:
		return 6;
		break;
	case 3:
		return 8;
		break;
	case 4:
		return 9;
		break;
	default:
		break;
	} //closes end block
} //closes 

string Chili::getName() {
	return "Chilli";
}

void Chili::print(ostream& out) {
	out << "C";
}



//STINK/////////////
int Stink::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 3;
		break;
	case 2:
		return 5;
		break;
	case 3:
		return 7;
		break;
	case 4:
		return 8;
		break;
	default:
		break;
	} //closes end block
} //closes 

string Stink::getName() {
	return "Stink";
}

void Stink::print(ostream& out) {
	out << "S";
}



//GREEN////////////
int Green::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 3;
		break;
	case 2:
		return 5;
		break;
	case 3:
		return 6;
		break;
	case 4:
		return 7;
		break;
	default:
		break;
	} //closes end block
} //closes 

string Green::getName() {
	return "Green";
}

void Green::print(ostream& out) {
	out << "G";
}



//SOY///////////
int soy::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 2;
		break;
	case 2:
		return 4;
		break;
	case 3:
		return 6;
		break;
	case 4:
		return 7;
		break;
	default:
		break;
	} //closes end block
} //closes 

string soy::getName() {
	return "soy";
}

void soy::print(ostream& out) {
	out << "s";
}



//BLACK///
int black::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 2;
		break;
	case 2:
		return 4;
		break;
	case 3:
		return 5;
		break;
	case 4:
		return 6;
		break;
	default:
		break;
	} //closes end block
} //closes 

string black::getName() {
	return "black";
}

void black::print(ostream& out) {
	out << "b";
}



//RED/////////////
int Red::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 2;
		break;
	case 2:
		return 3;
		break;
	case 3:
		return 4;
		break;
	case 4:
		return 5;
		break;
	default:
		break;
	} //closes end block
} //closes 

string Red::getName() {
	return "Red";
}

void Red::print(ostream& out) {
	out << "R";
}



//GARDEN////////////////
int garden::getCoinsPerCard(int coins) {

	switch (coins) {

	case 1:
		return 0;
		break;
	case 2:
		return 2;
		break;
	case 3:
		return 3;
		break;
	case 4:
		return 0;
		break;
	default:
		break;
	} //closes end block
} //closes 

string garden::getName() {
	return "garden";
}

void garden::print(ostream& out) {
	out << "g";
}

