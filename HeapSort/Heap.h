#pragma once

#include<array>
#include<random>
#include<iostream>
using namespace std;
class Heap
{
public:
	Heap();
	Heap(array<int, 11>& testcase);
	~Heap();
	
	void HeapSort();
	int GetParent(int index);
	int GetRight(int index);
	int GetLeft(int rignt);
	int GetSize();
	void printArray();
private:
	void MaxHeapify(array<int,11>& testcase, int index);
	void BuildMaxHeap();
	void BuildMaxHeap(array<int, 11>& testcase);
private:
	//11개를 만드는 이유 첫번째 0번인덱스는 더미값
	array<int, 11> h{ {0,0,0,0,0,0,0,0,0,0,0} };
	int size = h.size()-1;
};

