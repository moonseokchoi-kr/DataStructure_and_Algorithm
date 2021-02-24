#pragma once

#include "Algorithm.h"
class QuickSort
{
public:
	QuickSort();
	~QuickSort();

public:
	virtual void Answer(vector<int>& v);
	void printAnswer(vector<int> v);
private:
	void makeTestCase(vector<int>& v);
private:
	int Partition(vector<int>& v, int p, int r);
	void quickSort(vector<int>& v, int p, int r);
	void exchange(int i, int j);

public:
	vector <int> v;
};