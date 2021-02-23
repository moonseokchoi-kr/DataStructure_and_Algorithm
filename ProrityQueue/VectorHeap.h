#pragma once
#include <vector>
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
private:
	void MaxHeapify();
	void BuildMaxHeap();
	void BuildMaxHeap();
private:
	vector<int> h;
	int size;
};

