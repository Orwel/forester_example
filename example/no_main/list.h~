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
Node * initializeList(int value);

/// Finalise la liste, en désallouant les structures de données dynamique la composant
void finalizeList(Node * list);

/// Ajoute un noeud à la liste. Retourne le nouveau noeud
Node * addNode(Node * list,int value);

/// Supprime un noeud de la liste. Retourne la liste
Node * removeNode(Node * list,Node * node);

/// Affiche la liste
void DisplayList(Node * list);
