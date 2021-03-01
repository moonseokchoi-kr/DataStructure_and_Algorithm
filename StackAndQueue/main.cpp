#include <string>
#include "Stack.h"
#include "Queue.h"
int main()
{
	Stack * s = new Stack;

	cout << "Stack" << endl;

	s->printAnswer();

	s->Push(80);

	s->printAnswer();

	cout << "Last Value: " + std::to_string(s->Pop()) << endl;

	s->printAnswer();
	
	cout << "*********************************" << endl;

	cout << "\n Queue" << endl;

	Queue * q = new Queue;
	
	q->printAnswer();
	
	q->Enqueue(90);

	q->printAnswer();

	cout << "First Value: " + std::to_string(q->Dequeue()) << endl;

	q->printAnswer();

};
