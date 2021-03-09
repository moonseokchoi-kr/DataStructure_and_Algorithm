// LinkedList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "LinkedList.h"
#include "Collection.h"
#include <string>
int main()
{
	LinkedList* list = new LinkedList();
	vector <int> v;

	makeTestCase(v);

	for (int i = 1; i < v.size(); i++)
	{
		list->Insert(i);
	}
	
	while (list->Get() != nullptr)
	{
		cout << to_string(list->Get()->key) + " " ;
		list->GetNext();
	}
	cout << endl;
	list->goFirst();
	list->Delete(4);

	while (list->Get() != nullptr)
	{
		cout << to_string(list->Get()->key) + " ";
		list->GetNext();
	}

	LinkedList* circleList = new LinkedList();
	for (int i = 1; i < v.size(); i++)
	{
		circleList->CircleInsert(i);
	}

	while (circleList->Get() != circleList->nil)
	{
		cout << to_string(circleList->Get()->key) + " ";
		circleList->GetNext();
	}
	cout << endl;
	circleList->Delete(3);

	while (circleList->Get() != circleList->nil)
	{
		cout << to_string(circleList->Get()->key) + " ";
		circleList->GetNext();
	}



}
void makeTestCase(vector<int>& v)
{
	v.assign(1, 0);
	random_device rd;
	mt19937_64 rng1(rd());
	uniform_int_distribution<__int32> dist(1, 100);

	for (int i = 1; i < 11; i++)
	{
		v.push_back(dist(rng1));
	}
}


