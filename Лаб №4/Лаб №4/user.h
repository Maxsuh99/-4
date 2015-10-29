#pragma once
#include <string>
using namespace std;

class user {
	string name;
	int vosrast;

public:
	user(string, int);
	user();
	void setName(string);
	string getName();
	void setVosrast(int);
	int getVosrast();
	virtual void print();
};