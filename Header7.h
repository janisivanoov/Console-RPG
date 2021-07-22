#pragma once
#include"Header11.h"
#include"Header5.h"
#include <vector>
#include <string>
using namespace std;
class Game
{
private:
	int choice;
	bool playing;
	int activeCharacter;
	vector<Character> characters;
	string fileName;
	dArr<Enemy> enemies;
public:
	Game();
	virtual ~Game();
	void initGame();
	void mainMenu();
	void createNewCharacter();
	void levelUpCharacter();
	void characterMenu();
	void saveCharacters();
	void loadCharacters();
	void selectCharacter();
	void travel();
	void rest();
	inline bool getPlaying() const { return this->playing; }
};