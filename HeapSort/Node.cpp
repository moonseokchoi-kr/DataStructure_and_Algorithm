#include "Node.h"

Node::Node(int value)
{
	this->value = value;
}

Node::~Node()
{
}

int Node::GetLeft(int i)
{
	return 2*i;
}

int Node::GetRight(int i)
{
	return 2*i+1;
}

int Node::GetParent(int i)
{
	if (i % 2 != 1)
	{
		return i / 2;
	}
	else
	{
		return i / 2 + 1;
	}
}
