#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
	nil = new Node();
	nil->key = std::numeric_limits<int>::min();
	nil->next = head;
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
		x = x->prev;
	}
	return x;
}

Node * LinkedList::CircleSearch(int k)
{
	Node* x = nil->next;
	while ( x != nil && x->key == k)
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

void LinkedList::CircleInsert(int k)
{
	Node * x = new Node();
	if (head != nullptr)
	{
		x->key = k;
		x->next = nil->next;
		nil->next->prev = x;
		nil->next = x;
		x->prev = nil;
	}
	else 
	{
		head = x;
		x->next = nil;
		//x->prev = nil;
		nil->next = head;
		//nil->prev = head;
	}
	
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

void LinkedList::CircleDelete(int k)
{
	Node * x = CircleSearch(k);
	x->next->prev = x->prev;
	x->prev->next = x->next;
}

void LinkedList::goFirst()
{
	cur = Search(1);
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


