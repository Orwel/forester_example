#include <stdio.h>
#include <stdlib.h>


struct T { int n; };
typedef struct T T;

T * foe(T * t)
{
	return t;
}

int main()
{
	T t;
	foe(&t);
	return 0;
}
