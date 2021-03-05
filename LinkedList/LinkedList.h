#pragma once
#include <limits>
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
	Node* CircleSearch(int k);
	void Insert(int k);
	void CircleInsert(int k);
	void Delete(int k);
	void CircleDelete(int k);
	void goFirst();
	Node* GetNext();
	Node* GetPrev();
	Node* Get();
	Node* nil;
private:
	Node* cur;
	Node* head;
	
};

