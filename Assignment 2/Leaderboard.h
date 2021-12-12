#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <time.h>		//for time() method
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef LEADERBOARD_H
#define LEADERBOARD_H

class Leaderboard
{
public:
	void setFirstPlace();
	void setSecondPlace();
	void setThirdPlace();
};

#endif