#include "node.h"

Node::Node(char variable = 'x'){


}

Node::Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL){

}

Node::Node(int val = 0){

}

Node::~Node(){
    if()        
   	delete operand1;
	delete operand2;
}
      
Node::string print_infix() const{
	if(operand1->next==VARIABLE){

	}

}

Node::string print_prefix() const{

}
string print_postfix() const{

}
string int_to_string() const;
char print_operator() const;

