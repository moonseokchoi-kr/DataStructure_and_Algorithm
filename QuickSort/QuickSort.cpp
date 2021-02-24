#include "QuickSort.h"

QuickSort::QuickSort()
{
	makeTestCase(v);
}

QuickSort::~QuickSort()
{
}

void QuickSort::Answer(vector<int>& v)
{
	quickSort(v, 1, v.size()-1);
}

int QuickSort::Partition(vector<int>& v, int p, int r)
{
	int x = v[r];
	int i = p - 1;

	for (int j = p; j < r; j++)
	{
		if (v[j] <= x)
		{
			i++;
			int tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
		}
	}
	int tmp = v[i+1];
	v[i+1] = v[r];
	v[r] = tmp;
	
	return i + 1;
	
}

void QuickSort::quickSort(vector<int>& v, int p, int r)
{	
	int q = -1;
	if (p < r)
	{
		q = Partition(v, p, r);
		quickSort(v, p, q - 1);
		quickSort(v, q + 1, r);
	}
}



void QuickSort::makeTestCase(vector<int>& v)
{
	v.assign(1, 0);
	mt19937_64 rng1(9408);
	uniform_int_distribution<__int32> dist(1, 100);

	for (int i = 1; i < 11; i++)
	{
		v.push_back(dist(rng1));
	}
}

void QuickSort::printAnswer(vector<int> v)
{
	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}