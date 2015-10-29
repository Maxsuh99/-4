#include "user.h"
#include <iostream>
user::user(string n, int v)
{
	name = n;
	vosrast = v;
}
user::user()
{
	name = "";
	vosrast = 0;
}
void user::setName(string str)
{
	name = str;
}
string user::getName()
{
	return name;
}
void user::setVosrast(int vos)
{
	vosrast = vos;
}
int user::getVosrast()
{
	return vosrast;
}
void user::print()
{
	std::cout << "Пользователь:\n";
	std::cout << "Имя:\t" << getName() << "\n";
	std::cout << "Возраст:\t" << getVosrast() << "\n";
}