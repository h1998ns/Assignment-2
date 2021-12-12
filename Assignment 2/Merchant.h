#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <time.h>		//for time() method
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files

using namespace std;

#ifndef MERCHANT_H
#define MERCHANT_H

class Merchant
{
public:
	void sellSword();
	void sellArmor();
	void sellShield();
	void sellFullPotion();
};

#endif