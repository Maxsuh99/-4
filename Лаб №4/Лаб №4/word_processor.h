#pragma once;
#include "software.h"
#include "user.h"

class WordProcessor :public Software
{
	user Igr;
	string klass;
public:
	WordProcessor(){};
	WordProcessor(string, string, int, string, string);
	void setIgr(string, int);
	user getIgr();
	void setKlass(string);
	string getKlass();
	virtual void  print();
};
