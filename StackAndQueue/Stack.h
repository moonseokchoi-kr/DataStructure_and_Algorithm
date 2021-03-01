#pragma once
#include "Collection.h"
using namespace std;
class Stack : public Collection
{
public:
	Stack();
	~Stack();
	bool IsEmpty();
	void Push(int value);
	int Pop();
private:
	int top;
	//vector<int> v;
};

