#include "Monster.h"

Monster::Monster()
{
	monsterLevel = 1;
	monsterHealth = 20;
	monsterAttack = 10;
	monsterDefense = 10;
	monsterSpeed = 10;
}

void Monster::setMonsterLevel(int monsterLevel)
{
	this->monsterLevel = monsterLevel;
}
void Monster::setMonsterHealth(int monsterHealth)
{
	this->monsterHealth = monsterHealth;
}
void Monster::setMonsterAttack(int monsterAttack)
{
	this->monsterAttack = monsterAttack;
}
void Monster::setMonsterDefense(int monsterDefense)
{
	this->monsterDefense = monsterDefense;
}
void Monster::setMonsterSpeed(int monsterSpeed)
{
	this->monsterSpeed = monsterSpeed;
}

int Monster::getMonsterLevel() { return monsterLevel; }
int Monster::getMonsterHealth() { return monsterHealth; }
int Monster::getMonsterAttack() { return monsterAttack; }
int Monster::getMonsterDefense() { return monsterDefense; }
int Monster::getMonsterSpeed() { return monsterSpeed; }

void Monster::setMonsterRandomLevel()
{
	monsterHealth += encounter.randomLevel * 5;
	monsterAttack += encounter.randomLevel * 3;
	monsterDefense += encounter.randomLevel * 3;
	monsterSpeed += encounter.randomLevel * 3;
}