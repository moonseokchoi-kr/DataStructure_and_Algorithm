#include <iostream>
#include <string>
#include "Stack.h"
int main()
{
	Stack * s = new Stack;

	s->printAnswer();

	s->Push(80);

	s->printAnswer();

	cout <<"Last Value: "+std::to_string(s->Pop()) << endl;
	

};
