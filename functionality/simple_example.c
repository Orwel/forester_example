#include <stdio.h>

struct my_int{
	int val;
};

typedef struct my_int my_int;

struct my_float{
	float val;
};

typedef struct my_float my_float;


int main()
{
	printf("Hello man!!!");
	my_float mf;
	my_int mi;
	my_float * pmf;
	my_int * pmi;
	pmi = &mi;
	pmi = &mf;
	return 0;
}
