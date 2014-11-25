#ifndef __MAKEDECK_H__
#define __MAKEDECK_H__
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Notecard.h"
using namespace std;

class MakeDeck {
private:
	vector<Notecard> _deck;

public:
	MakeDeck(string);

	void addCard(Notecard);

	void addCard(string, string);

	void removeCard(int);

	Notecard getCard(int);
};

#endif