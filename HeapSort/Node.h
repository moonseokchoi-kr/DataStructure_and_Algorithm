#pragma once
class Node
{
public:
	Node(int value);
	~Node();
public:
	int GetLeft(int i);
	int GetRight(int i);
	int GetParent(int i);
public:
	int value;


};

