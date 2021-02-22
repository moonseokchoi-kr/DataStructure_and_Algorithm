// DataStructureAndAlgorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include "InsertSort.h"

int main()
{
	array<int,5> testCase = { 5,2,4,7,10 };
	printArray(testCase);

	InsertSort(testCase);

	printArray(testCase);

	return 0;
}


void InsertSort(array<int,5>& testCase)
{
	for (int j =  1; j < testCase.size(); j++)
	{
		key = testCase[j];
		i = j - 1;
		while (i > -1 && testCase[i] > key)
		{
			testCase[i + 1] = testCase[i];
			i -= 1;
		}
		testCase[i + 1] = key;
	}
}

void printArray(const array<int, 5>& testCase)
{
	for (int i = 0; i < testCase.size(); i++)
	{
		cout << testCase[i];
		cout << " ";
	}
	cout << endl;
}
