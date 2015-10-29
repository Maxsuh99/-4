#include <iostream>
#include "ABC.h"
ABC* ABC::head = NULL;

void ABC::show()
{
	ABC *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}
