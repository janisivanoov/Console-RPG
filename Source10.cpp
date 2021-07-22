#include"Header12.h"
#include <string>
using namespace std;
dArr<std::string> Weapon::names;
void Weapon::initNames()
{
	Weapon::names.push("Butter-Knife");
	Weapon::names.push("Leaf-Cutter");
	Weapon::names.push("Face-Shredder");
	Weapon::names.push("Bro-Knife");
	Weapon::names.push("Katana-Sword");
	Weapon::names.push("Brutal-Murder");
}
Weapon::Weapon()
	:Item()
{
	this->damageMax = 0;
	this->damageMin = 0;
}
Weapon::Weapon(int level, int rarity)
	:Item(itemTypes::WEAPON, level, rarity)
{
	this->damageMax = rand() % level * (rarity + 1);
	this->damageMax += (rarity + 1) * 5;
	this->setName(Weapon::names[rand() % Weapon::names.size()]);
	if (rarity == 3)
		this->damageMax += level * 5;
	else if (rarity == 4)
		this->damageMax += level * 10;

	this->damageMin = this->damageMax / 2;
}
Weapon::Weapon(int damageMin, int damageMax, std::string name, int level, int buyValue, int sellValue, int rarity)
	: Item(itemTypes::WEAPON, name, level, buyValue, sellValue, rarity)
{
	this->damageMin = damageMin;
	this->damageMax = damageMax;
}
Weapon::~Weapon()
{

}
Weapon* Weapon::clone()const
{
	return new Weapon(*this);
}
string Weapon::toString()const
{
	std::string str =
		this->getName()
		 " | Lvl: "
		 to_string(this->getLevel())
		 " | Rarity: "
		 to_string(this->getRarity())
		 " | Damage: "
		 to_string(this->damageMin)
		 " - "
		 to_string(this->damageMax);

	return str;
}
string Weapon::toStringSave()const
{
	string str =
		to_string(this->getItemType())
		 " "
		 this->getName()
		 " "
		 to_string(this->getLevel())
		 " "
		 to_string(this->getRarity())
		 " "
		 to_string(this->getBuyValue())
		 " "
		 to_string(this->getSellValue())
		 " "
		 to_string(this->damageMin)
		 " "
		 to_string(this->damageMax)
		 " ";
	return str;
}