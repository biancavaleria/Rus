#include <stdio.h>
#include <stdlib.h>
//5. Sa se realizeze un program care sa prezinte diferenta dintre
//urmatoarele, incrementarea / decrementarea valorii pointerului,
//precum si incrementarea / decrementarea pointerului care ia
//adresa index - ului “0” a unui vector oarecare.
int main() {
	int n, * p, * v, i, * x;

	p = (int*)malloc(sizeof(int));
	x = (int*)malloc(sizeof(int));

		printf("dati nr de elemente: "); scanf("%d", &n);

	v = (int*)malloc(n * sizeof(int));

		printf("p="); scanf("%d", p);
	(*p)++;
		printf("incrementare:%d \n", *p);
	(*p)--;
		printf("decrementare: %d \n", *p);

	for (i = 0; i < n; i++)
	{
		scanf("%d", (v + i));
	}
	x = v;
		printf("%p\n", x);
	(*x++);
		printf("incrementare:%p \n", x);
	(*x--);
		printf("decrementare: %d \n", x);
	return 0;
}
