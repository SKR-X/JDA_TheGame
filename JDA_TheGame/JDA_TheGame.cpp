//------------------------
// Github: Skrillexazem
//------------------------
// Just Die Already! v?
//------------------------

#include <iostream>
#include <string>
#include "windows.h"


using namespace std;

class Game {
private:
	string cur_version = "1.0";
	string GameName = "Just Die Already!";
public:
	string playername;
	string accept;
	void intro() {
		cout << "Version: " + cur_version << endl;
		cout << "Game: " + GameName << endl;
	}
	void start() {
		cout << endl;
		cout << "- Hi stranger! What is your name?" << endl;
		cout << endl;
		cout << " ";
		cin >> this->playername;
		cout << endl;
		cout << "- Ok, " + this->playername + " this game is about how well do you\nknow the web programming languages!"<<endl;
		Sleep(2000);
		cout << endl;
		cout << endl;
		cout << "- Are you ready to play this game? Y/N" << endl;
		cout << endl;
		cout << " ";
		cin >> this->accept;
		if (this->accept == "Y" || this->accept == "Yes") {
			cout << endl;
			cout << "- Okay. Lets begin.";
			Sleep(2000);
			system("cls");
		}
		else {
			cout << endl;
			cout << "- You are pathetic.";
			Sleep(2000);
			exit(0);
		}
	}
};
class Player {
private:
	int health = 100;
	int cash = 50;
	int attempts = 5;
	float level = 0;
public:
	string name;
	void info() {
		cout << "-------------------" << endl;
		cout << "| Your level is ";
		cout << this->level;
		cout << " |" << endl;
		cout << "-------------------" << endl;
		cout << "| Your health is ";
		cout << this->health << endl;
		cout << "| Your cash is ";
		cout << this->cash << endl;
		cout << "| Your attemps is ";
		cout << this->attempts << endl;
	}
};

//скоро обнова залетит

int main()
{
	Player Player;
	Game Game;
	Game.intro();
	Game.start();
	Player.name = Game.playername;
	Player.info();
}
