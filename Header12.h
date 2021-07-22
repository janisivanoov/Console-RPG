#pragma once
#include"Header11.h"
#include"Header9.h"
#include <string>
using namespace std;
class Weapon :
	public Item
{
private:
	int damageMin;
	int damageMax;
public:
	Weapon();
	Weapon(
		int level,
		int rarity
	);
	Weapon(
		int damageMin,
		int damageMax,
		string name,
		int level,
		int buyValue,
		int sellValue,
		int rarity);
	virtual ~Weapon();
	virtual Weapon* clone()const;
	string toString()const;
	tring toStringSave()const;

	inline int getDamageMin()const { return this->damageMin; }
	inline int getDamageMax()const { return this->damageMax; }
	static dArr<string> names;
	static void initNames();
};