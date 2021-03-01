#pragma once

#include<vector>
#include<iostream>
#include<random>
using namespace std;
class Collection
{
public:
	Collection();
	~Collection();
	void makeTestCase(vector<int>& v);
	void printAnswer();
	vector<int>& GetVectorPointer();
private:
	vector<int> v;
};

