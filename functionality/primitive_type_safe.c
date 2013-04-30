#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct T { int n; }* p_int;
        p_int = malloc(sizeof(*p_int));
	p_int->n = 10;
	free(p_int);
	return 0;
}
