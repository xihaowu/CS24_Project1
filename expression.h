#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <string>
#include <cstdlib>
#include <iostream>


class expression {

public:
	string infixstring();
	string prefixstring();
	string postfixstring();	

};

#endif