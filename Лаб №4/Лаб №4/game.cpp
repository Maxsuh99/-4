#include "game.h"
#include "Software.h"
#include "iostream"
using namespace std;


Game::Game(string kl, string name, int vosrast, string stoimost, string developer) :Software(stoimost, developer)
{
	klass = kl;
	Igr.setName(name);
	Igr.setVosrast(vosrast);
}

void Game::setIgr(string name, int vosrast)
{
	user::user(name, vosrast);
}

user Game::getIgr()
{
	return user();
}

void Game::setKlass(string kl)
{
	klass = kl;
}

string Game::getKlass()
{
	return klass;
}

void Game::print()
{
	Software::print();
	std::cout << "Игра:\t" << "\n";
	Igr.print();
	std::cout << "Класс игры:\t" << getKlass() << "\n";
}
