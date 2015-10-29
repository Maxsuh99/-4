#pragma once/*абстр. б. класс*/

class ABC {
protected:
	static ABC *head;/*хранится и не изменяется*/
public:

	ABC *next;
	virtual void add() = 0;
	static void show();/*изменять только тут*/
	virtual void print() = 0;
};