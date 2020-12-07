#pragma once
#include <iostream>
using namespace std;

class Card {
public:
	virtual int getCoinsPerCard(int);
	virtual string getName();
	virtual void print(ostream& out);
};

//Blue
class Blue : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Chili
class Chili : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Stink
class Stink : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Green
class Green : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Soy
class soy : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Black
class black : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Red
class Red : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};

//Garden
class garden : public Card {
public:
	int getCoinsPerCard(int coins);
	string getName();
	void print(ostream& out);
};
