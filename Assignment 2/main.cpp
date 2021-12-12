/*
This is the work of solely Huggins Cheng only.
Started on 18/11/2021.

Unfortunately, it is a half-completed, full of error program.
There are many reasons that I couldn’t complete it on time.
But I will accept the outcome if that means I will fail the subject again.
*/


#include <iostream>
#include <string>
#include <stdlib.h>		//random function (rand)
#include <time.h>		//for time() method
#include <Windows.h>	//Sleep(1000) -> 1 second delay
#include <fstream>		//in/out from files
#include "Menu.h"

using namespace std;

int main()
{
	srand(time(NULL));	//to have random seed

	Menu menu;
	menu.runMenu();

	system("pause");
	return 0;
}