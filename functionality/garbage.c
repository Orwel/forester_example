#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct T { int n; }* pmi;
	pmi = malloc(sizeof(*pmi));
	pmi->n = 10;
	return 0;
}
