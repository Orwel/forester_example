#include "list.h"

///////////////////////////////////////////////////////////////////////////////
Node * initializeList(int value)
{
	Node * list = malloc(sizeof(Node));
	list->next = NULL;
	list->n = value;
	return list;
}

///////////////////////////////////////////////////////////////////////////////
void finalizeList(Node * list)
{
	Node * next;
	while(list!=NULL)
	{		
		next = list->next;
		free(list);
		list = next;
	}
}

///////////////////////////////////////////////////////////////////////////////
Node * addNode(Node * list,int value)
{
	if(list == NULL)
		return initializeList(value);

	Node * node = initializeList(value);
	while(list->next!=NULL)
		list=list->next;

	list->next = node;
	return node;
}

///////////////////////////////////////////////////////////////////////////////
Node * removeNode(Node * list,Node * node)
{
	if(list==node)
	{
		list = list->next;
	}
	else
	{
		Node *prev = list;
		while(prev->next!=node)
		{
			prev=prev->next;
		}
		prev->next = node->next;
	}
	free(node);
	return list;
}

///////////////////////////////////////////////////////////////////////////////
Node * removeValueNode(Node * list,int value)
{

}

///////////////////////////////////////////////////////////////////////////////
void DisplayList(Node * list)
{
	if(list==NULL)
	{
		printf("List Empty \n");
		return;
	}
	printf("Begin:");
	for(;list!=NULL;list=list->next)
	{
		printf("->%d",list->n);
	}
	printf("\n");
}
