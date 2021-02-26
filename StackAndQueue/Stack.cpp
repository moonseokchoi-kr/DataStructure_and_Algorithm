#include "Stack.h"

Stack::Stack()
{
	v.assign(1, 0);
	top = 1;
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
	v.push_back(value);
}

int Stack::Pop()
{
	if (IsEmpty())
		return -1;
	else 
	{
		v.pop_back();
		top -= 1;

	}
}

void Stack::makeTestCase(vector<int>& v)
{
	v.assign(1, 0);
	random_device rd;
	mt19937_64 rng1(rd());
	uniform_int_distribution<__int32> dist(1, 100);

	for (int i = 1; i < 11; i++)
	{
		v.push_back(dist(rng1));
	}
}


void Stack::printAnswer(vector<int> v)
{
	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}