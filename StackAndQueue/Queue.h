#pragma once
#include "Collection.h"
class Queue : public Collection
{
public:
	Queue();
	~Queue();
	int Dequeue();
	void Enqueue(int value);
private:
	int head;
	int length;
};

