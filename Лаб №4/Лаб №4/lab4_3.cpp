#include "software.h"
#include "virus.h"
int main()
{
	setlocale(LC_CTYPE, "Russian");
	Software t("a", "b"), t1("1", "2"), *tt;
	Virus vir("125", 4, "b", "a"); /*1-2 ������������ 3-4 ������� �����������*/
	tt = &vir;/*����� ���� � �����*/
	tt->add();/*����������*/
	t.add();
	t1.add();
	tt->add();
	t1.add();
	ABC::show();/*�������*/

	return 0;
}

