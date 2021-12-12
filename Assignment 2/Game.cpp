#include "Game.h"
#include "Hero.h"
#include "Bag.h"
#include "Encounter.h"

Game::Game()
{
	heroName = "John Doe";
}

string Game::getName() { return heroName; }

void Game::playStory()		//display the background story
{
	system("cls");
	cout << "Once upon a time, there was chaos.\n";
	cout << "Monsters and Santan were roaming in the realm, ruling everything!\n\n";
	Sleep(3000);
	cout << "Luckily the Legendary Hero rise and defeated all the filthiness monsters.\n";
	cout << "And peace was restored.\n\n";
	Sleep(3000);
	cout << "However, one day the Santan strikes back at the Hero!\n";
	cout << "Santan and his army found the Hero alone and cornered him!\n\n";
	Sleep(3000);
	cout << "Hero fought hard but he was no match for an army of monsters.\n";
	cout << "He ...\n";
	cout << "Has been defeated!\n\n";
	Sleep(3000);
	cout << "Santan said, \"He made my life miserable.\"\n";
	cout << "\"Take him to the dungeons and have him try the taste of HELL!\"\n\n";
	Sleep(3000);
	cout << "However, little does he know ...\n";
	Sleep(1500);
	cout << "The Hero will escape the dungeon, and defeat him once again!\n";
	system("pause");
	system("cls");
}

void Game::askName()	//ask hero name from player
{
	cout << "Hero! What would you prefer to be called?\n";
	cout << "I would like to be called: ";
	cin >> heroName;
	cout << "\n\n\n";
	Hero player;
	cout << "This is you! Hero " << heroName << "!\n";
	player.displayStatus();		//show the hero's stats for the first time
	cout << "\n\n\n";
	Bag bag;
	cout << "And this is what you have got in your inventory.\n";
	bag.displayBag();		//show the hero's inventory for the first time
}

void Game::playGame()	//play the game using actions
{
	//recieve action from player
	//if player choose "walk" then pull a random encounter
	//if player choose other options then pull the other corresponding actions
	//end loop if player's hp = 0
	while (player.heroCurrentHealth != 0)
	{
		Encounter encounter;
		char action;

		cout << "What do you wish to do?\nTo walk, press (w);\nTo see the bag, press (b);\nTo check status, press (s);\nTo purchase from the merchant, press (m).\n";
		cin >> action;

		switch (action)
		{
		case 'B': case 'b':		//--show hero's bag
			break;
		case 'S': case 's':		//--show hero's current status
			break;
		case 'M': case 'm':		//--show merchant ('s product)
			break;
		case 'W': case 'w':		//--pick a random event
			int randomEncounter;
			randomEncounter = rand() % 10 + 1;

			if (randomEncounter <= 2)
				//--this is where you see the loot
				break;
			else if (randomEncounter <= 4)
				//--this is where you see the monster
				break;
			else if (randomEncounter <= 6)
				//--this is where you see the prisoner
				break;
			else if (randomEncounter <= 8)
				//--this is where you see the trap
				break;
			else if (randomEncounter <= 9)
				if (bag.key != true)
				{
					bag.key == true;
					cout << "You have found a key! It is used to open the dungeon gate! And it is the only ticket to get out of here!\n\n";
				}
				else
				{
					//--this is where you see the gate
				}
				break;
			else if (randomEncounter <= 10)
			{
				cout << "You lucky son of a gun! You managed to avoid any danger in this vast dungeon!\n\n";
				break;
			}
			break;
		default:
			cout << "Sorry Hero! Please insert a vaild action!";
			break;
		}	//end of switch
	}	//end of while
}