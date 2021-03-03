#pragma once
#include "Node.h"
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	Node* Search(int k);
	void Insert(Node x);
	void Delete(Node x);
private:
	Node nil;
};

