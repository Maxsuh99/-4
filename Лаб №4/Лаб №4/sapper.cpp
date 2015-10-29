#include "iostream"
#include "sapper.h"

using namespace std;

Sapper::Sapper(string res, string klass, string name, int vosrast, string stoimost, string developer) :Game(klass, name, vosrast, stoimost, developer)
{
	result = res;
}

void Sapper::setResult(string rest)
{
	result = rest;
}

string Sapper::getResult()
{
	return result;
}

void Sapper::print()
{
	Game::print();
	std::cout << "\tÑàï¸ð:\n";
	std::cout << "Ðåçóëüòàò:" << result << "\n";

}
