#pragma once

typedef struct Node
{
	int key;
	Node* prev;
	Node* next;
};
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	Node* Search(int k);
	void Insert(int k);
	void Delete(int k);
	Node* GetNext();
	Node* GetPrev();
	Node* Get();
private:
	Node* cur;
	Node* head;
};

