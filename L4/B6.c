#include <stdio.h>
#include <stdlib.h>
//6. Sa se realizeze un program care realizeaza suma a doua
//numerelor intr - o metoda separate de metoda main, iar aceea
//metoda returneaza un pointer.
int suma(int* a, int* b)
{
	int* p;
	p = *a + *b;
		return p;
}
int main() {
	int a, b;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	printf("suma este: %d", suma(&a, &b));
	return 0;
}
