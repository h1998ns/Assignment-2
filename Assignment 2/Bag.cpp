#include "Bag.h"
#include "Hero.h"
#include "Game.h"

Bag::Bag()
{
	fullPotion = 0;
	key = false;
	coins = 0;
}

void Bag::setFullPotion(int fullPotion)
{
	this->fullPotion = fullPotion;
}
void Bag::setKey(bool key)
{
	this->key = key;
}
void Bag::setCoins(int coins)
{
	this->coins = coins;
}

int Bag::getFullPotion() { return fullPotion; }
bool Bag::getKey() { return key; }
int Bag::getCoins() { return coins; }

void Bag::displayBag()		//show hero's bag
{
	cout << "100% potion: " << fullPotion << "\n";
	if (key == false)
		cout << "Gate Keys: Not required.\n";
	else
		cout << "Gate Keys: Required.\n";
	cout << "Coins required: " << coins << "\n";
}

bool Bag::useFullPotion()	//use the potion
{
	if (fullPotion != 0)
	{
		fullPotion--;
		return true;
	}
	else
		return false;
}

int Bag::healFullPotion()	//gain hp from the potion
{
	if (bag.useFullPotion() == true)
		heroCurrentHealth = heroMaxHealth;
	return heroCurrentHealth;
}