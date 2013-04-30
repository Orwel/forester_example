#include <stdio.h>
#include <stdlib.h>

typedef struct node_ node;
typedef struct node_ list;

struct node_{
	int val;
	node * next;
};

list * createList(int value)
{
	list * l = (list*) malloc(sizeof(list));
	l->val = value;
	l->next = NULL;
	return l;
}

void pushValue(list *l,int value)
{
	if(l==NULL)
		return;				//Root can not be equal NULL
	while(l->next!=NULL)
		l=l->next;
	l->next = createList(value);
}

void removeList(list *l)
{
	while(l!=NULL)
	{
		node *r = l;
		l=l->next;
		free(r);
	}
}

void displayList(list *l)
{
	int i=1;
	printf("Display List \n");
	while(l!=NULL)
	{
		printf("Node %d : %d\n",i++,l->val);
		l=l->next;
	}
}

int main()
{
	printf("Hello man!!!\n");
	list * l = createList(1);
	l->next->val = 0;
	addValue(l,2);
	addValue(l,3);
	displayList(l);
	removeList(l);
	return 0;
}
