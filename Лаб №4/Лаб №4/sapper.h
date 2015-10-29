#pragma once
#include "game.h"
#include <iostream>
using namespace std;
class Sapper : public Game
{
	string result;

public:
	Sapper(){};

	Sapper(string, string, string, int, string, string);
	void  setResult(string);
	string getResult();
	void print();
};