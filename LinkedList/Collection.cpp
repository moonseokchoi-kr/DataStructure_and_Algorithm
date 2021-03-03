#include "Collection.h"

Collection::Collection()
{
}

Collection::~Collection()
{
}

void Collection::makeTestCase(vector<int>& v)
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

void Collection::printAnswer()
{
	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}

vector<int>& Collection::GetVectorPointer()
{
	return v;
}
