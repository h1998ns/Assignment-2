#include "Encounter.h"

void Encounter::encounterLoot()
{
	int randomLoot;
	randomLoot = rand() % 10 + 1;

	if (randomLoot <= 2)
		player.setHeroAttack() += 3;
	else if (randomLoot <= 4)
		player.setHeroDefense() += 3;
	else if (randomLoot <= 6)
		player.setHeroSpeed() += 3;
	else if (randomLoot <= 8)
		bag.setFullPotion()++;
	else if (randomLoot <= 10)
		bag.setCoins() += 5;
}

void Encounter::encounterMonster()
{
	int randomLevel;
	randomLevel = rand() % 10 + player.getHeroLevel();		//generate a number (+/- 5) based on hero’s level

	monster.setMonsterRandomLevel();

	while (monster.monsterCurrentHealth != 0 || player.heroCurrentHealth != 0)
	{
		//--battle begins, turn based, whoever has higher speed can act first
	}

}

void Encounter::encounterPrisoner()
{
	player.rescuedPrisoners++;
	player.heroAttack++;
	player.points++;
}

void Encounter::encounterTrap()
{
	int randomDamage;
	randomDamage = rand() % player.heroMaxHealth;	//range: 0(dodge) to maxHp

	if (randomDamage == 0)
		cout << "You lucky son of a gun! You have just dodged a deadly trap in this dungeon!\n\n";
	else
		player.heroCurrentHealth -= randomDamage;
}

void Encounter::encounterMerchant()
{
	//--show merchant details
}

void Encounter::encounterKey()
{
	bag.key == true;
}

void Encounter::encounterGate()
{
	//--ask if player wants to open the gate, if yes then "open", no then go back to dungeon

	int randomBoss;
	randomBoss = rand() % 10 + 1;

	if (randomBoss <= 2)
	{
		//--boss fight skipped, straight to winning page
	}
	else
	{
		//--boss fight
	}
}