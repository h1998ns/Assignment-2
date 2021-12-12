#include "Orc.h"

Orc::Orc()
{
	orcHealth = 500;
	orcAttack = 150;
	orcDefense = 150;
	orcSpeed = 100;
}

void Orc::setOrcHealth(int orcHealth)
{
	this->orcHealth = orcHealth;
}
void Orc::setOrcAttack(int orcAttack)
{
	this->orcAttack = orcAttack;
}
void Orc::setOrcDefense(int orcDefense)
{
	this->orcDefense = orcDefense;
}
void Orc::setOrcSpeed(int orcSpeed)
{
	this->orcSpeed = orcSpeed;
}

int Orc::getOrcHealth() {return orcHealth;}
int Orc::getOrcAttack() { return orcAttack; }
int Orc::getOrcDefense() { return orcDefense; }
int Orc::getOrcSpeed() { return orcSpeed; }