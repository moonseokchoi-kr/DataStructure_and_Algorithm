// HeapSort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Heap.h"
int main()
{
	Heap *heap = new Heap();
	//최대힙 출력
	heap->printArray();

	//힙정렬진행
	heap->HeapSort();

	//결과출력
	heap->printArray();
}
