#pragma once
#include"Header11.h"
#include"Header3.h"
#include"Header4.h"
#include"Header10.h"
#include"Header2.h"
class Event
{
private:

public:
	Event();
	virtual ~Event();
	void generateEvent(Character& character, dArr<Enemy>& enemies);
	void shopEncouter(Character& character);
	void enemyEncouter(Character& character, dArr<Enemy>& enemies);
	void puzzleEncouter(Character& character);
	void bossEncouter(Character& character, Boss& boss);
	static int nrOfEvents;
};