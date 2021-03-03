#pragma once
class Node
{
public:
	Node(int key);
	~Node();

public:
	int key;
	Node* prev;
	Node* next;
};

