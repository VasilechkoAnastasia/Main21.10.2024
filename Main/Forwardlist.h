#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node() : value (0), next(nullptr)
	{}
	Node(int value) 
		: value(value), next(nullptr)
	{}

};

class Forwardlist
{
private:
	Node* head;
	Node* tale;
public:
	Forwardlist()
		:head(nullptr), tale(nullptr)
	{}
	void push_back(int value);
	void print();
};

