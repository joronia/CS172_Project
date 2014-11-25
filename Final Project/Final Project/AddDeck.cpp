#include "Notecard.h"
#include "MakeDeck.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void outputuser() {
	string user;
	cout << "Enter the file you want to write in?" << endl;
	cin >> user;
	cout << endl;
	fstream creatingflash;
	creatingflash.open(user, ios::app);
	cin.ignore();

	if (creatingflash.fail()) {
		cout << "Can't open file!" << endl;
	}

	cout << "type 'imdone' when finished" << endl;

	string word;
	string def;
	do {
		cout << "Enter word / phrase" << endl;
		getline(cin, word);
		//exits
		if (word == "imdone") 
			break;
		cout << "Enter definition" << endl;
		getline(cin, def);
		creatingflash << word << endl;
		creatingflash << def << endl;
	} while (def != "imdone");

	creatingflash.close();
}