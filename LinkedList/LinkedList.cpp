#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
	cur = head;
}

LinkedList::~LinkedList()
{
}

Node * LinkedList::Search(int k)
{
	Node * x = head;
	while (x != nullptr && x->key != k)
	{
		x = x->next;
	}
	return x;
}

void LinkedList::Insert(int k)
{
	Node *x = new Node();
	x->key = k;
	x->prev = head;
	if (head != nullptr)
		head->next = x;
	head = x;
	if(cur == nullptr)
		cur = head;
	x->next = nullptr;
}

void LinkedList::Delete(int k)
{
	Node * x = Search(k);
	if (x->prev != nullptr)
	{
		x->prev->next = x->next;
	}
	else
		head = x->next;
	if (x->next != nullptr )
		x->next->prev = x->prev;
}

Node * LinkedList::GetNext()
{
	Node* next = cur->next;
	cur = next;
	return next;
}

Node * LinkedList::GetPrev()
{
	Node* prev = cur->prev;
	cur = prev;
	return prev;
}

Node* LinkedList::Get()
{
	return cur;
}
