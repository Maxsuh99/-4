#pragma once
#include "software.h"
#include "user.h"

using namespace std;

class Game : public Software
{
	user Igr;
	string klass;
public:
	Game(){};
	Game(string, string, int, string, string);
	void setIgr(string, int);
	user getIgr();
	void setKlass(string);
	string getKlass();
	virtual void  print();

};