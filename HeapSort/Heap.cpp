#include "Heap.h"

/**
 * Heap()
 * 
 * Heap Class�� �⺻ ������ ȣ��� ������ ���� ���� ũ�Ⱑ 10�� ���� �����.
 */
Heap::Heap()
{
	BuildMaxHeap();
}
/**
 * Heap()
 *
 * ������ �ִ� �迭�� ������ ����� ������
 */
Heap::Heap(array<int, 11>& testcase)
{
	BuildMaxHeap(testcase);
}

Heap::~Heap()
{
}
/**
 * MaxHeapify()
 *
 * ���� �ٽ��� �ִ� ���� Ư���� �����ϴ� �޼���
 *	
 * Parameter:
 *   array<int,11>& testcase : int�� �迭�� �޾� ũ�⿡ ���� ��ġ�� ����
 *   int index : ������ġ
 *
 */
void Heap::MaxHeapify(array<int, 11>& testcase, int index)
{
	
	int l = GetLeft(index);

	int r = GetRight(index);
	//������ ���� �ʱ� ���ؼ� -1�� �ʱ�ȭ
	int largest = -1;
	//l�� �迭�� ���̺��� �۰�, ������������ Ŭ��
	if (l <= testcase.size() && (testcase[l] >= testcase[index]))
	{
		largest = l;
	}
	else
	{
		largest = index;
	}
	//r�� �迭�� ���̺��� �۰�, ����Ʈ������ ū���� ��
	if (r <= testcase.size() &&(testcase[r] > testcase[largest]))
	{
		largest = r;
	}
	//���� ���������� ũ�Ⱑ �ٸ� ũ�⺸�� �۴ٸ�
	if (largest != index)
	{
		int tmp = testcase[index];
		testcase[index] = testcase[largest];
		testcase[largest] = tmp;
		//���ȣ��
		MaxHeapify(testcase, largest);
	}
}
/**
 * BuildMaxHeap()
 *	
 * �ִ��� �����Լ�, �����������Ͽ� �迭�� ����
 */
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
/**
 * BuildMaxHeap()
 *
 * �ִ��� �����Լ�, ������ �迭�� �Է¹޾� ����
 */
void Heap::BuildMaxHeap(array<int, 11>& testcase)
{
	h = testcase;
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

int Heap::GetSize()
{
	return h.size();
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
