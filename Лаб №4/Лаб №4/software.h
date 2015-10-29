#pragma once;
#include <string>
#include"ABC.h"
using namespace std;

class Software :public ABC {
	string stoimost;
	string developer;
public:
	Software() {};
	Software(string, string);
	void setStoimost(string);
	string getStoimost();
	void setdeveloper(string);
	string getdeveloper();
	virtual void print();
	void add();
};
