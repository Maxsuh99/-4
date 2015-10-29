#pragma once;
#include "word_processor.h"

class Word : public WordProcessor
{
	string slovo;
public:
	Word(string, string, string, int, string, string);
	void setSlovo(string);
	string getSlovo();
	void print();
};

