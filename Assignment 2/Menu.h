#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef MENU_H
#define MENU_H

class Menu
{
public:
	void runMenu();					//loop the menu section
	void displayInstruction();		//show the instruction
	void startGame();				//run background story & ask name & start playing from Game.cpp
	void displayLeaderboard();		//extract from external file
};

#endif