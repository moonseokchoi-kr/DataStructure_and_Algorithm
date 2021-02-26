#pragma once
#include <vector>
#include <iostream>
#include <random>
using namespace std;
class Stack
{
public:
	Stack();
	~Stack();
	bool IsEmpty();
	void Push(int value);
	int Pop();
	void makeTestCase(vector<int>& v);
	void printAnswer(vector<int> v);
private:
	int top;
	vector<int> v;
};

