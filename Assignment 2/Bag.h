#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files
#include "Hero.h"

using namespace std;

#ifndef BAG_H
#define BAG_H

class Bag : public Hero
{
private:
	int fullPotion;
	bool key;
	int coins;

public:
	Bag();

	void setFullPotion(int);
	void setKey(bool);
	void setCoins(int);

	int getFullPotion();
	bool getKey();
	int getCoins();

	void displayBag();		//show hero's bag
	bool useFullPotion();	//use the potion
	int healFullPotion();	//gain hp from the potion
};

#endif