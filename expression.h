//expression.h
//XiHao Wu and Christopher Lianides
#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "list.h"


class expression {

public:
	expression(string input);
	string infixstring();
	string prefixstring();
	string postfixstring();	

private:
	list* exp;

};

#endif