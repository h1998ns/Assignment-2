#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef GAME_H
#define GAME_H

class Game
{
private:
	string heroName;
	
public:
	Game();

	string getName();
	
	void playStory();			//display the background story
	void askName();				//ask hero name from player
	void playGame();			//play the game using actions
};

#endif