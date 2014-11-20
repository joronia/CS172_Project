#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
void welcome();
void outputuser();


int main() {
	welcome();
	outputuser();
}
void welcome() {
	cout << "Welcome to FlashCards+, we hope you enjoy the program" << endl;

}
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
	/*
	cout << "How many definitions do you want to enter?" << endl;
	
	int stay;
	cin >> stay;
	cin.ignore();
	
	cout << endl;
	string word;
	string def;
	for (int i = 0; i < stay; i++) {
		cout << "Enter word / phrase" << endl;
		getline(cin, word);
		creatingflash << word << endl;
		cout << "Enter definition" << endl;
		getline(cin, def);
		creatingflash << def << endl;
	}
	*/

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
	/*
	creatingflash.open(user);
	
	string line;

	while (!creatingflash.eof()){
		getline(creatingflash, line);
		cout << line << endl;
		stringstream line(line);
		string firstword;
		line >> firstword;
		cout << firstword << endl;

	}
	*/
}