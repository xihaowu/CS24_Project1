//string.cpp
//XiHao Wu and Christopher Lianides
#include "string.h"


int main() {


	
	cout<<"Please enter the fully parenthesized expression with empty spaces"<<endl;
	string str;
	getline(cin, str);
	

	

	expression ex(str);

	cout<<ex.infixstring()<<endl;
	cout<<ex.prefixstring()<<endl;
	cout<<ex.postfixstring()<<endl;

	return 0;
}

