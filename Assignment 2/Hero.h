#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef HERO_H
#define HERO_H

class Hero
{
protected:
	int heroLevel;
	int heroMaxHealth;
	int heroCurrentHealth;
	int heroAttack;
	int heroDefense;
	int heroSpeed;
	int rescuedPrisoners;
	double points;

public:
	Hero();

	void setHeroLevel(int);
	void setHeroMaxHealth(int);
	void setHeroCurrentHealth(int);
	void setHeroAttack(int);
	void setHeroDefense(int);
	void setHeroSpeed(int);
	void setRescuedPrisoners(int);
	void setPoints(double);

	int getHeroLevel();
	int getHeroMaxHealth();
	int getHeroCurrentHealth();
	int getHeroAttack();
	int getHeroDefense();
	int getHeroSpeed();
	int getRescuedPrisoners();
	double getPoints();

	void displayStatus();	//show hero's current status

	void heroLevelUp(int heroMaxHealth, int heroCurrentHealth, int heroAttack, int heroDefense, int heroSpeed);	  //when hero levels up, he will have these stats up
};

#endif