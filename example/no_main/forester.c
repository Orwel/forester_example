#include "list.c"

int main()
{
	Node * list = initializeList(1);
	Node * second = addNode(list,2);
	Node * third  = addNode(list,3);
	Node * fourth = addNode(list,4);
	DisplayList(list);
	finalizeList(list);
	return 0;
}
