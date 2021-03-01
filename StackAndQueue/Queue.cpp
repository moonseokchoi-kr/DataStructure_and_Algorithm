#include "Queue.h"

Queue::Queue()
{
	makeTestCase(GetVectorPointer());
	length = GetVectorPointer().size()-1;
	head = 1;
}

Queue::~Queue()
{
}

int Queue::Dequeue()
{
	int x = GetVectorPointer().at(head);
	if (head == length)
	{
		head == 1;
	}
	else
	{
		GetVectorPointer().pop_back();
		head += 1;
	}
	return x;
}

void Queue::Enqueue(int value)
{
	GetVectorPointer().push_back(value);
	if (length == GetVectorPointer().size())
		length = 1;
	else length += 1;
}
