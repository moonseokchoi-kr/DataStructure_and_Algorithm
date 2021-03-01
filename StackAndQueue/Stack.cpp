#include "Stack.h"

Stack::Stack()
{
	
	makeTestCase(GetVectorPointer());
	top = GetVectorPointer().size() - 1;
}

Stack::~Stack()
{
}

bool Stack::IsEmpty()
{
	if (top == 1)
	{
		return true;
	}
	return false;
}

void Stack::Push(int value)
{
	top += 1;
	GetVectorPointer().push_back(value);
}

int Stack::Pop()
{
	if (IsEmpty())
		return -1;
	else 
	{	
		int tmp = GetVectorPointer().at(top);
		GetVectorPointer().pop_back();
		top -= 1;

		return tmp;
	}
}
