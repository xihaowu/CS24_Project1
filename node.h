#ifndef NODE_H
#define NODE_H

using namespace std;

enum node_type{EXPRESSION, VARIABLE, INTEGER};
enum operator_type{PLUS, MINUS, MULT, DIVIDE};

union data_type {
    operator_type op;
    char var;
    int val;
};

class Node {
	public:
		// Constructor
        Node(char var = 'x');
        Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL);
        Node(int val = 0);
        // Destructor
        ~Node();
      
        string print_infix() const;
        string print_prefix() const;
        string print_postfix() const;
        string int_to_string() const;
        char print_operator() const;


    private:
        node_type node_t;
        data_type data;
        Node* operand1;
        Node* operand2;
};

#endif