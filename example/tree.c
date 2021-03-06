#include <stdio.h>
#include <stdlib.h>

/// Structure de données dynamique permettant de relier des entiers
struct Node
{
	int n;
	struct Node * next;
	struct Node * prev;
};
typedef struct Node Node;

/// Initialise le premier noeud de la liste
Node * initializeList(int value)
{
	Node * list = malloc(sizeof(Node));
	list->next = NULL;
	list->n = value;
	return list;
}

/// Finalise la liste, en désallouant les structures de données dynamique la composant
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

/// Ajoute un noeud à la liste. Retourne le nouveau noeud
Node * addNode(Node * list,int value)
{
	Node * node = initializeList(value);
	while(list->next!=NULL)
		list=list->next;

	list->next = node;
	return node;
}

/// Supprime un noeud de la liste. Retourne la liste
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

/// Supprime les noeuds contenant cette valeur. Retourne la liste
Node * removeValueNode(Node * list,int value)
{

}

/// Affiche la liste
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

int main()
{
	Node * list = initializeList(1);
	Node * node1 = addNode(list,2);
	Node * node2;
	removeNode(list,node2);
	finalizeList(list);
	return 0;
}
