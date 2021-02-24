// ProrityQueue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "VectorHeap.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	VectorHeap* vh = new VectorHeap();

	vh->printArray();

	//vh->HeapSort();

	//vh->printArray();

	//우선순위 큐함수들 이용
	
	cout << "Priority Queue\n" << endl;
	cout<<"MaxValue: "+to_string(vh->Maximum())<<endl;



	cout << "Extract Max: " + to_string(vh->ExtractMax()) << endl;

	cout << "New MaxValue: " + to_string(vh->Maximum()) << endl;

	
	
}

