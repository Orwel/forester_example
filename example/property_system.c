#include <stdio.h>
#include <stdlib.h>
#include "linux_list.h"

int main()
{
	Node * list = initializeList(1);
	Node * node1 = addNode(list,2);
	Node * node2;
	removeNode(list,node2);
	finalizeList(list);
	return 0;
}
