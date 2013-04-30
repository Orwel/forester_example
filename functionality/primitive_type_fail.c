#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * integer = malloc(sizeof(int));
	free(integer);
	return 0;
}
