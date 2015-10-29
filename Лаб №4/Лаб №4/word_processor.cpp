#include "word_processor.h"
#include "Software.h"
#include "iostream"
using namespace std;


WordProcessor::WordProcessor(string kl, string name, int vosrast, string stoimost, string developer) : Software(stoimost, developer)
{
	klass = kl;
	Igr.setName(name);
	Igr.setVosrast(vosrast);
}

void WordProcessor::setIgr(string name, int vosrast)
{
	user::user(name, vosrast);
}

user WordProcessor::getIgr()
{
	return user();
}

void WordProcessor::setKlass(string kl)
{
	klass = kl;
}

string WordProcessor::getKlass()
{
	return klass;
}

void WordProcessor::print()
{
	Software::print();
	std::cout << "Тестовый процессор:\t" << "\n";
	Igr.print();
	std::cout << "Класс процессора:\t" << getKlass() << "\n";
}
