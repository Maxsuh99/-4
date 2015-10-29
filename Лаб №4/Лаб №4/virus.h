#pragma once
#include "software.h"
#include "user.h"

class Virus : public Software
{
	user Igr;

public:
	Virus(){};
	Virus(string, int, string, string);
	void setIgr(string, int);
	user getIgr();
	virtual void  print();
};