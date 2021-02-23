#pragma once
#include <vector>
#include <random>
#include <iostream>
using namespace std;
class VectorHeap
{
public:
	VectorHeap();
	VectorHeap(vector<int>& testcase);
	~VectorHeap();

	void HeapSort();
	int GetParent(int index);
	int GetRight(int index);
	int GetLeft(int index);
	int GetSize();
	void printArray();
	vector<int> GetHeap();
	//priority queue function, please use this function after use heapsort
	
	int Maximum();
	int ExtractMax();
	void InsertKey(int index, int key);
private:
	void MaxHeapify(vector<int>& testcase, int index);
	void BuildMaxHeap();
	void BuildMaxHeap(vector<int>& testcase);
	void IncreaseKey(int index, int key);
private:
	vector<int> h;
	int size ;
};

