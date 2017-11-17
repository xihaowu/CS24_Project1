//list.cpp
//XiHao Wu and Christopher Lianides
#include "list.h"
//constructor
list::list(string input) {
	head = NULL;
	str = input;
}

string list::print_postfix_list() {
	return head->print_postfix();
}
string list::print_prefix_list() {
	return head->print_prefix();
}

string list::print_infix_list() {
	return head->print_infix();
}

//creator
void list::create_list() {

	head = new Node(PLUS,NULL,NULL);
	head->setparent(head);
	head->setnode_t(EXPRESSION);
	current = head;

	for(int i = 1; i<str.length(); i++) {
		//
		if (str[i] == '(') {
			Node *p = new Node(PLUS,NULL,NULL);
			p->setparent(current);
			p->setnode_t(EXPRESSION);

			if (current->getoperand1() == NULL) {
				current->setoperand1(p);
			} else {
				
				current->setoperand2(p);
			
			}
			current = p;
		// if the cursor is pointing to the operator
		} else if (str[i] == '+') {
			current->setdata_op(PLUS);
		} else if (str[i] == '-') {
			current->setdata_op(MINUS);
		} else if (str[i] == '*') {
			current->setdata_op(MULT);
		} else if (str[i] == '/') {
			current->setdata_op(DIVIDE);

		// if the cursor is pointing to the variabe
		} else if (str[i] == 'x') {
			Node* p = new Node('x');
			p->setnode_t(VARIABLE);
			current->setoperand1(p);

		// if the cursor is pointing to the constant
		} else if (str[i] == '0'||str[i] == '1'||str[i] == '2'||
				   str[i] == '3'||str[i] == '4'||str[i] == '5'||
				   str[i] == '6'||str[i] == '7'||str[i] == '8'||
				   str[i] == '9') {
			int a = str[i] - '0';
			Node* p = new Node(a);
			p->setnode_t(INTEGER);
			current->setoperand2(p);

		// if the cursor is pointing to the right parenthesis
		} else if (str[i] == ')') {
			current = current->getparent();
		}
			    
	}

}