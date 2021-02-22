#include "Heap.h"

Heap::Heap()
{
	BuildMaxHeap();
}

Heap::Heap(array<int, 11>& testcase)
{
	BuildMaxHeap(testcase);
}

Heap::~Heap()
{
}

void Heap::MaxHeapify(array<int, 11>& testcase, int index)
{
	int l = GetLeft(index);
	int r = GetRight(index);
	int largest = -1;
	if (l <= testcase.size() && (testcase[l] >= testcase[index]))
	{
		largest = l;
	}
	else
	{
		largest = index;
	}

	if (r <= testcase.size() &&(testcase[r] > testcase[largest]))
	{
		largest = r;
	}
	if (largest != index)
	{
		int tmp = testcase[index];
		testcase[index] = testcase[largest];
		testcase[largest] = tmp;

		MaxHeapify(testcase, largest);
	}
}

void Heap::BuildMaxHeap()
{
	mt19937_64 rng1(110);
	uniform_int_distribution<__int64> dist(1, 100);
	for (int i = 1; i < h.size(); i++)
	{
		h[i] = dist(rng1);
	}
	cout << "Before make Max heap" << endl;
	printArray();
	for (int i = h.size() / 2; i>0; i--)
	{
		MaxHeapify(h, i);
	}
}

void Heap::BuildMaxHeap(array<int, 11>& testcase)
{
	for (int i = h.size() / 2; i > 0; i++)
	{
		MaxHeapify(h, i);
	}
}

void Heap::HeapSort()
{
}

int Heap::GetParent(int index)
{
	return index/2;
}

int Heap::GetLeft(int index)
{
	int left = 2 * index;
	if (left < h.size())
	{
		return left;
	}
	else
	{
		return h.size() - 1;
	}
}

int Heap::GetSize(array<int,11> testcase)
{
	return testcase.size();
}

void Heap::printArray()
{
	for (int i = 1; i < h.size(); i++)
	{
		cout << h[i];
		cout << " ";
	}
	cout << endl;
}

int Heap::GetRight(int index)
{
	int right = 2 * index + 1;
	if (right < h.size())
	{
		return right;
	}
	else
	{
		return h.size() - 1;
	}
}
