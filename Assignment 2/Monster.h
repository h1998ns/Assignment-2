#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <time.h>		//for time() method
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
private:
	int monsterLevel;
	int monsterHealth;
	int monsterAttack;
	int monsterDefense;
	int monsterSpeed;

public:
	Monster();

	void setMonsterLevel(int);
	void setMonsterHealth(int);
	void setMonsterAttack(int);
	void setMonsterDefense(int);
	void setMonsterSpeed(int);

	int getMonsterLevel();
	int getMonsterHealth();
	int getMonsterAttack();
	int getMonsterDefense();
	int getMonsterSpeed();

	void setMonsterRandomLevel();
};

#endif