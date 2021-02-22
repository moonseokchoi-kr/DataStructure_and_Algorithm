#pragma once
#include"Node.h"
#include<array>
using namespace std;
class Heap
{
public:
	Heap();
	~Heap();
	void BuildMaxHeap();
	void HeapSort();
	int GetLeft(int index);
	int GetRight(int index);
	int GetLeft(int rignt);
	int GetSize();
private:
	void MaxHeapify();

private:
	int size;
};

