
#include "VectorHeap.h"

VectorHeap::VectorHeap()
{
	BuildMaxHeap();
}

VectorHeap::VectorHeap(vector<int>& testcase)
{
	h = testcase;
	BuildMaxHeap(h);
}

VectorHeap::~VectorHeap()
{
}

void VectorHeap::HeapSort()
{
	for (int i = h.size() - 1; i > 1; i-- )
	{
		int tmp = h[i];
		h[i] = h[1];
		h[1] = tmp;

		size -= 1;
		MaxHeapify(h, 1);
	}
}

int VectorHeap::GetParent(int index)
{
	return index/2;
}

int VectorHeap::GetRight(int index)
{
	int right = 2 * index + 1;
	if (right > size)
	{
		return size;
	}
	return right;
	
}

int VectorHeap::GetLeft(int index)
{
	int left = 2 * index;
	if (left > size)
	{
		return size;
	}
	return left;
}

int VectorHeap::GetSize()
{
	return size;
}

void VectorHeap::printArray()
{
	for (int i = 1; i < h.size(); i++)
	{
		cout << h[i];
		cout << " ";
	}
	cout << endl;
}


int VectorHeap::Maximum()
{
	return h[1];
}

int VectorHeap::ExtractMax()
{
	if (size < 1)
	{
		cout << "Heap Underflow" << endl;
		return -1;
	}
	int max = h[1];
	h[1] = h[size];
	size -= 1;
	MaxHeapify(h, 1);
	return max;
}

void VectorHeap::InsertKey(int index, int key)
{
	size += 1;
	h.push_back(numeric_limits<int>::min());
	IncreaseKey(size, key);
}

void VectorHeap::MaxHeapify(vector<int>& testcase, int index)
{
	int l = GetLeft(index);
	int r = GetRight(index);
	int largest = -1;
	if (l <= size && (testcase[l] >= testcase[index]))
	{
		largest = l;
	}
	else
		largest = index;

	if (r <= size && (testcase[r] > testcase[largest]))
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

void VectorHeap::BuildMaxHeap()
{
	h.assign(1, 0);
	mt19937_64 rng1(110);
	uniform_int_distribution<__int64> dist(1, 100);
	for (int i = 1; i <11; i++)
	{
		h.push_back(dist(rng1));
	}
	size = h.size() - 1;
	cout << "Before make Max heap" << endl;
	printArray();
	for (int i = size / 2; i > 0; i--)
	{
		MaxHeapify(h, i);
	}
}

void VectorHeap::BuildMaxHeap(vector<int>& testcase)
{
	for (int i = size / 2; i > 0; i-- )
	{
		MaxHeapify(h, i);
	}
}

void VectorHeap::IncreaseKey(int index, int key)
{
	if (key < h[index])
	{
		cout << "new key is smaller than original key" << endl;
		return;
	}
	h[index] = key;
	while (index > 1 && (h[GetParent(index)] < h[index]))
	{
		int tmp = h[index];
		h[index] = h[GetParent(index)];
		h[GetParent(index)] = tmp;

		index = GetParent(index);
	}
}
