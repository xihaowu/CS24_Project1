//expression.cpp
//XiHao Wu and Christopher Lianides
#include "expression.h"

expression::expression(string inputlist) {
	exp = new list(inputlist);
	exp->create_list();
	
} 

string expression::infixstring(){
	
    return exp->print_infix_list();

}

string expression::prefixstring(){
    return exp->print_prefix_list();
}

string expression::postfixstring(){
    return exp->print_postfix_list();
}