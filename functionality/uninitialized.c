#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct T { int n; }* pmi;
	pmi = malloc(sizeof(*pmi));
	int n = pmi->n;
	free(pmi);
	return 0;
}
