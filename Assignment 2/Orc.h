#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <time.h>		//for time() method
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef ORC_H
#define ORC_H

class Orc
{
private:
	int orcHealth;
	int orcAttack;
	int orcDefense;
	int orcSpeed;

public:
	Orc();

	void setOrcHealth(int);
	void setOrcAttack(int);
	void setOrcDefense(int);
	void setOrcSpeed(int);

	int getOrcHealth();
	int getOrcAttack();
	int getOrcDefense();
	int getOrcSpeed();
};

#endif