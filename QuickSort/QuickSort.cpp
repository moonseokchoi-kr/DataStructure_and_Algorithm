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

void QuickSort::randomizeQuickSort(vector<int>& v,int p, int r)
{
	if (p < r)
	{
		int q = randomizePartition(v, p, r);
		randomizeQuickSort(v, p, q - 1);
		randomizeQuickSort(v, q + 1, r);
	}
	
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

int QuickSort::randomizePartition(vector<int>& v, int p, int r)
{
	random_device rd1;
	mt19937_64 gen(rd1());

	uniform_int_distribution<__int32>dist1(p, r);

	int i = dist1(gen);
	int tmp = v[i];
	v[i] = v[r];
	v[r] = tmp;

	return Partition(v, p, r);
}



void QuickSort::makeTestCase(vector<int>& v)
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

void QuickSort::printAnswer(vector<int> v)
{
	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}