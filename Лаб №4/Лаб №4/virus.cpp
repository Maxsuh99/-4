#include "virus.h"
#include "Software.h"
#include "iostream"
using namespace std;



Virus::Virus(string name, int vosrast, string stoimost, string developer) :Software(stoimost, developer)
{
	
	Igr.setName(name);
	Igr.setVosrast(vosrast);
}

void Virus::setIgr(string name, int vosrast)
{
	user::user(name, vosrast);
}

user Virus::getIgr()
{
	return user();
}




void Virus::print()
{
	Software::print();
	std::cout << "Вирус: Trojn" << "\n";
	Igr.print();

}
