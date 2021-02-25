
#include "QuickSort.h"

int main()
{
	QuickSort *q = new QuickSort;

	q->printAnswer(q->v);
	q->Answer(q->v);
	q->printAnswer(q->v);

	//randomize quick sort
	

	QuickSort*q1 = new QuickSort;

	q1->printAnswer(q1->v);
	q1->randomizeQuickSort(q1->v,0,q1->v.size()-1);
	q1->printAnswer(q1->v);
}