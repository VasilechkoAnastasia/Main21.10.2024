#include "Forwardlist.h"
#include <iostream>
using namespace std;

void Forwardlist::push_back(int value)
{
	Node* new_node = new Node(value);
	if (!head)
	{
		head = new_node;
		if (tale)
		{
			tale->next = new_node;
		}
	}
	tale = new_node;
}

void Forwardlist::print()
{
	Node* current = head;
	while (current) 
	{
		cout << current-> value << " ";
		current = current->next;
	}
	cout << endl;
}
