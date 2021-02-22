#include "Heap.h"

/**
 * Heap()
 * 
 * Heap Class의 기본 생성자 호출시 랜던한 값을 가진 크기가 10인 힙을 만든다.
 */
Heap::Heap()
{
	BuildMaxHeap();
}
/**
 * Heap()
 *
 * 기존에 있는 배열을 힙으로 만드는 생성자
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
 * 힙의 핵심인 최대 힙의 특성을 유지하는 메서드
 *	
 * Parameter:
 *   array<int,11>& testcase : int형 배열을 받아 크기에 따라 위치를 변경
 *   int index : 시작위치
 *
 */
void Heap::MaxHeapify(array<int, 11>& testcase, int index)
{
	
	int l = GetLeft(index);

	int r = GetRight(index);
	//영향을 주지 않기 위해서 -1로 초기화
	int largest = -1;
	//l이 배열의 길이보다 작고, 시작지점보다 클때
	if (l <= testcase.size() && (testcase[l] >= testcase[index]))
	{
		largest = l;
	}
	else
	{
		largest = index;
	}
	//r이 배열의 길이보다 작고, 서브트리에서 큰값과 비교
	if (r <= testcase.size() &&(testcase[r] > testcase[largest]))
	{
		largest = r;
	}
	//만약 시작지점의 크기가 다른 크기보다 작다면
	if (largest != index)
	{
		int tmp = testcase[index];
		testcase[index] = testcase[largest];
		testcase[largest] = tmp;
		//재귀호출
		MaxHeapify(testcase, largest);
	}
}
/**
 * BuildMaxHeap()
 *	
 * 최대힙 생성함수, 랜덤생성을하여 배열을 만듬
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
 * 최대힙 생성함수, 기존의 배열을 입력받아 만듬
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
