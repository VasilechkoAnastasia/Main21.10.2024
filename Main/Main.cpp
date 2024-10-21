#include <iostream>
#include "Forwardlist.h"
using namespace std;

int main()
{
	Forwardlist list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	list.print();
	return 0;
}
