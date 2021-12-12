#include "Hero.h"
#include "Game.h"
#include "Bag.h"

Hero::Hero()	//the beginning stat of the hero
{
	heroLevel = 1;
	heroMaxHealth = 20;
	heroCurrentHealth = 20;
	heroAttack = 10;
	heroDefense = 10;
	heroSpeed = 10;
	rescuedPrisoners = 0;
	points = 0;
}

void Hero::setHeroLevel(int heroLevel)
{
	this->heroLevel = heroLevel;
}
void Hero::setHeroMaxHealth(int heroMaxHealth)
{
	this->heroMaxHealth = heroMaxHealth;
}
void Hero::setHeroCurrentHealth(int heroCurrentHealth)
{
	this->heroCurrentHealth = heroCurrentHealth;
}
void Hero::setHeroAttack(int heroAttack)
{
	this->heroAttack = heroAttack;
}
void Hero::setHeroDefense(int heroDefense)
{
	this->heroDefense = heroDefense;
}
void Hero::setHeroSpeed(int heroSpeed)
{
	this->heroSpeed = heroSpeed;
}
void Hero::setRescuedPrisoners(int rescuedPrisoners)
{
	this->rescuedPrisoners = rescuedPrisoners;
}
void Hero::setPoints(double points)
{
	this->points = points;
}

int Hero::getHeroLevel() { return heroLevel; }
int Hero::getHeroMaxHealth() { return heroMaxHealth; }
int Hero::getHeroCurrentHealth() { return heroCurrentHealth; }
int Hero::getHeroAttack() { return heroAttack; }
int Hero::getHeroDefense() { return heroDefense; }
int Hero::getHeroSpeed() { return heroSpeed; }
int Hero::getRescuedPrisoners() { return rescuedPrisoners; }
double Hero::getPoints() { return points; }

void Hero::displayStatus()		//show hero's current status
{
	cout << "Lv: " << heroLevel << "\n";
	cout << "HP: " << heroCurrentHealth << "/" << heroMaxHealth << "\n";
	cout << "Attack: " << heroAttack << "\n";
	cout << "Defense: " << heroDefense << "\n";
	cout << "Speed: " << heroSpeed << "\n";
	cout << "Prisoners rescued: " << rescuedPrisoners << "\n";
	cout << "Points required: " << points << "\n";
}

void Hero::heroLevelUp(int heroMaxHealth, int heroCurrentHealth, int heroAttack, int heroDefense, int heroSpeed)	   //when hero levels up, he will have these stats up
{
	this->heroMaxHealth = heroMaxHealth + 5;
	this->heroCurrentHealth = heroCurrentHealth + 5;
	this->heroAttack = heroAttack + 3;
	this->heroDefense = heroDefense + 3;
	this->heroSpeed = heroSpeed + 3;
}