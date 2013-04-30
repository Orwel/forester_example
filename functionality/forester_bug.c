#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct T { int n; }* pmi;
	malloc(sizeof(*pmi));
	pmi = NULL;
	free(pmi);
	return 0;
}
