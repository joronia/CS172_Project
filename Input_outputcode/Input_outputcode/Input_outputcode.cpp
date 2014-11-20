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
	cout << " " << endl;
	fstream creatingflash;
	creatingflash.open(user, ios::app);


	if (creatingflash.fail()) {
		cout << "Can't open file!" << endl;
	}

	cout << "How many definitions do you want to enter?" << endl;
	int stay;
	cin >> stay;
	cin.ignore();

	cout << " " << endl;
	string userline;
	for (int i = 0; i < stay; i++) {
		cout << "Please enter each definition one at a time!" << endl;
		getline(cin, userline);
		creatingflash << userline << endl;
	}

	creatingflash.close();

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

}