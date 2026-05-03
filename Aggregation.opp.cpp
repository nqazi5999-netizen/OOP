#include <iostream>
#include <string>
using namespace std;
class Player {
	string name;
public:
	player (string n){
		name = n;
	}
	void play(){
		cout << name << "is playing.\n";
	}
	~Player() {
		cout << name << "is leaving the field.\n";
	}

	
	
};
class Team{
	Player*  player;
public:
	Team(Player* p){
		player =p;
	}
	void startMatch(){
		cout << "Match started.\n";
		player->play();
	}
};

int main() {
	Player*p1 = new Player("Alice");
	{
		Team t1(p1);
		t1.startMatch();
	}
	p1->play();
	delete p1;
	return 0;
