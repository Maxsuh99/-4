#include "software.h"
#include "iostream"
using namespace std;

Software::Software(string sum, string dev)
{
	stoimost = sum;
	developer = dev;
}

void Software::setStoimost(string str)
{
	stoimost = str;
}
string Software::getStoimost()
{
	return stoimost;
}

void Software::setdeveloper(string str)
{
	developer = str;
}
string Software::getdeveloper()
{
	return developer;
}

void Software::print()
{
	cout << "Разработчик:\t" << getdeveloper() << "\n";
	cout << "Стоимость ПО:\t" << getStoimost() << "\n";

}


void Software::add()
{
	if (!head) {
		head = this;
		this->next = NULL;
	}
	else
	{
		ABC *p = head;
		if (p->next == NULL)
		{
			p->next = this;
			this->next = NULL;
		}
		else {
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}