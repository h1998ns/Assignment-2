#include "Menu.h"
#include "Game.h"

void Menu::runMenu()	//loop the menu section
{
	bool quit = false;
	int option;

	while (!quit)
	{
		cout << "====================================================================================================\n";
		cout << "=  ====  ====  =========  ======================================  ====  =========================  =\n";
		cout << "=  ====  ====  =========  ======================================  ====  =========================  =\n";
		cout << "=  ====  ====  =========  ======================================  ====  =========================  =\n";
		cout << "=  ====  ====  ===   ===  ===   ====   ===  =  = ====   ========  ====  ===   ===  =   ====   ===  =\n";
		cout << "=   ==    ==  ===  =  ==  ==  =  ==     ==        ==  =  =======        ==  =  ==    =  ==     ==  =\n";
		cout << "==  ==    ==  ===     ==  ==  =====  =  ==  =  =  ==     =======  ====  ==     ==  =======  =  ==  =\n";
		cout << "==  ==    ==  ===  =====  ==  =====  =  ==  =  =  ==  ==========  ====  ==  =====  =======  =  =====\n";
		cout << "===    ==    ====  =  ==  ==  =  ==  =  ==  =  =  ==  =  =======  ====  ==  =  ==  =======  =  ==  =\n";
		cout << "====  ====  ======   ===  ===   ====   ===  =  =  ===   ========  ====  ===   ===  ========   ===  =\n";
		cout << "====================================================================================================\n\n\n\n\n";
		cout << "============================================== M E N U =============================================\n";
		cout << "_____                                                                                          _____\n";
		cout << "(   )                                 The Dungeon Escaping RPG                                 (   )\n";
		cout << " |||                                                                                            ||| \n";
		cout << " |||                                   PRESS 1 : Instructions                                   ||| \n";
		cout << " |||                                   PRESS 2 : Start Game                                     ||| \n";
		cout << " |||                                   PRESS 3 : Leaderboard                                    ||| \n";
		cout << " |||                                   PRESS 4 : Quit Game                                      ||| \n";
		cout << "(___)                                                                                          (___)\n";
		cout << "====================================================================================================\n\n\n\n\n";

		cout << "What would you like to choose: ";
		cin >> option;

		if (option == 1)
			displayInstruction();
		else if (option == 2)
			startGame();
		else if (option == 3)
			displayLeaderboard();
		else if (option == 4)
		{
			cout << "Thanks for playing the game!\n";
			quit = true;
		}
		else
			cout << "Invalid option!";
	}
}

void Menu::displayInstruction()	//show the instruction
{
	system("cls");		//clear the menu
	cout << "=========================================== INSTRUCTIONS ===========================================\n";
	cout << "_____                                                                                          _____\n";
	cout << "(   )                                 The Dungeon Escaping RPG                                 (   )\n";
	cout << " |||                                                                                            ||| \n";
	cout << " |||     1. Name your Hero.                                                                     ||| \n";
	cout << " |||     2. Travel through the dungeon where you will encounter different things.               ||| \n";
	cout << " |||     3. Reach the Gate to escape the dungeon, however, you will need to retrieve a key      ||| \n";
	cout << " |||        beforehand.                                                                         ||| \n";
	cout << " |||     4. Once you have opened the Gate, there is a high chance you will encounter the Orc    ||| \n";
	cout << " |||        (Boss fight) there. Be extra prepared!                                              ||| \n";
	cout << " |||     5. Slain as many monsters as you can to level up and gain points.                      ||| \n";
	cout << " |||     6. Save as many prisoners as you can to strengthen up and gain points.                 ||| \n";
	cout << " |||     7. Try not to get killed, as your accumulated points will be cut in half.              ||| \n";
	cout << " |||     8. Get as many points as you can.                                                      ||| \n";
	cout << " |||     9. Good luck Hero!                                                                     ||| \n";
	cout << "(___)                                                                                          (___)\n";
	cout << "====================================================================================================\n";
	system("pause");	//allow users to finish reading on their own
	system("cls");		//clear the instructions when finished reading
}

void Menu::startGame()	//run background story & ask name & start playing from Game.cpp
{
	Game game;
	game.playStory();
	game.askName();
	game.playGame();
}

void Menu::displayLeaderboard()	//extract from external file
{
	cout << "Show from external file\n";
	//--LEADERBOARD

}