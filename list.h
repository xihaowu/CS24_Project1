//list.h
//XiHao Wu and Christopher Lianides
#ifndef LIST_H
#define LIST_H
#include "node.h"


class list {

public:
	//constructor
	list(string input);
	//creator
void create_list();

string print_infix_list();
string print_postfix_list();
string print_prefix_list();


private:
	Node * head;
	Node * current;
	string str;
};


#endif 