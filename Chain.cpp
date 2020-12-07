// Chain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Chain.h"
#include "Card.h"


//chain is a container that will have to grow and shrink as the
//game progresses

//again, insertion is only to one end of the chain 
//std::vector is fine 

//will have to instatiated in the program by the concrete
//derived card classes 

//ie, chain will hold the red cards by pointer in a std::vector red

//will need an abstract chain interface to be able to reference
//chains of any type from the Player class


Chain<Card>::Chain(char str) : type(str) {
}


//loading a previous game
Chain<Card>::Chain(istream& in) {
	string temp = c->getName()[0]; 
	in >> temp; 
	if (temp == 'B') {
		Card* tempC = new Blue(); 
		chainPoint.push_back(tempCard); 
	}
	else if (temp == 'C') {
		Card* tempC = new Chili();
		chainPoint.push_back(tempCard);
	}
	else if (c == 'S') {
		Card* tempC = new Stink();
		chainPoint.push_back(tempCard);
	}
	else if (c == 'G') {
		Card* tempC = new Green();
		chainPoint.push_back(tempCard);
	}
	else if (c == 's') {
		Card* tempC = new soy();
		chainPoint.push_back(tempCard);
	}
	else if (c == 'b') {
		Card* tempC = new black();
		chainPoint.push_back(tempCard);
	}
	else if (c == 'g') {
		Card* tempC = new garden();
		chainPoint.push_back(tempCard);
	}
	if (c == 'R') {
		Card* tempC = new Red();
		chainPoint.push_back(tempCard);
	}
	return *this;
}

