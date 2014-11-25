#include "Notecard.h"
#include "MakeDeck.h"
#include "AddDeck.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
void welcome();

int main() {
	welcome();
	outputuser();

	cout << "deck name?" << endl;
	string deck;
	cin >> deck;
	Deck m(deck);
	for (int i = 0; i < m.getSize() - 1; i++) {
		cout << m.getCard(i).getWord() << endl << m.getCard(i).getDef() << endl;
	}
}
void welcome() {
	cout << "Welcome to FlashCards+, we hope you enjoy the program" << endl;

}