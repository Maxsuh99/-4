#include "software.h"
#include "virus.h"
int main()
{
	setlocale(LC_CTYPE, "Russian");
	Software t("a", "b"), t1("1", "2"), *tt;
	Virus vir("125", 4, "b", "a"); /*1-2 пользователь 3-4 програм обеспечение*/
	tt = &vir;/*запис указ в адрес*/
	tt->add();/*добавление*/
	t.add();
	t1.add();
	tt->add();
	t1.add();
	ABC::show();/*выводит*/

	return 0;
}

