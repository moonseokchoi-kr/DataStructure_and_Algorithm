#pragma once

#include <vector>
#include <random>
#include <iostream>
using namespace std;
class QuickSort
{
public:
	QuickSort();
	~QuickSort();

public:
	virtual void Answer(vector<int>& v);
	void randomizeQuickSort(vector<int>& v, int p, int r);
	void printAnswer(vector<int> v);
private:
	void makeTestCase(vector<int>& v);
private:
	int Partition(vector<int>& v, int p, int r);
	void quickSort(vector<int>& v, int p, int r);
	int randomizePartition(vector<int>&v, int p, int r);

public:
	vector <int> v;
};