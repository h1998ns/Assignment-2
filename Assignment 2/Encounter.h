#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files
#include "Hero.h"

using namespace std;

#ifndef ENCOUNTER_H
#define ENCOUNTER_H

class Encounter : public Hero
{
public:
	void encounterLoot();
	void encounterMonster();
	void encounterPrisoner();
	void encounterTrap();
	void encounterMerchant();
	void encounterKey();
	void encounterGate();
};

#endif