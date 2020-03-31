#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
/*4. Sa se realizeze o implementare de stiva FARA a ne folosii
variabile globale iar TOATE variabilele trebuiesc sa fie
pointeri. Stiva este de numere intregi. Se va introduce in
stiva 7 numere de tip intreg. - Sunt necesare toate metodele
(de verificat plin / gol / peek / push / pop)*/

int plin(int* stack, int* top)
{
	if (*top == MAX_SIZE - 1)
		return 1;
	else
		return 0;
}

int gol(int* stack, int* top)
{

	if (*top == -1)
		return 1;
	else
		return 0;

}

int varf(int* stack, int* top)
{
	return *(stack + *top);
}

void push(int* stack, int* top, int* x)
{
	if (plin(stack, top))
		printf("stiva este plina\n");
	else
	{
		++(*top);
		*(stack + *top) = *x;
	}
}

void pop(int* stack, int* top)
{
	if (gol(stack, top))
		printf("stiva este goala\n");
	else
		--(*top);
}

void afisare(int* stack, int* top)
{
	int i;
	for (i = 0; i <= *top; i++)
	{
		printf("%d ", *(stack + i));
	}
	printf("\n");
}

int main()
{
	int* stack, * top, * opt, * x;
	stack = (int*)malloc(MAX_SIZE * sizeof(int));
	top = (int*)malloc(sizeof(int));
	x = (int*)malloc(sizeof(int));
	opt = (int*)malloc(sizeof(int));
	*top = -1;
	do{
		printf("\n1.plin\n");
		printf("2.gol\n");
		printf("3.varf\n");
		printf("4.push\n");
		printf("5.pop\n");
		printf("6.afisare\n");
		printf("0.Exit\n");
		printf("optiunea dvs:"); scanf("%d", opt);
		switch (*opt)
		{
		case 1:
			if (plin(stack, top))
				printf("stiva este plina\n");
			else
				printf("este loc\n");
			break;
		case 2:
			if (gol(stack, top))
				printf("stiva este goala\n");
			else
				printf("stiva se poate folosi\n");
			break;
		case 3:
			printf("varful este:%d\n", varf(stack, top));
			break;
		case 4:
			printf("valoarea este:"); scanf("%d", x);
			push(stack, top, x);
			break;
		case 5:
			pop(stack, top);
			break;
		case 6:
			afisare(stack, top);
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("optiune gresita \n");
			break;
		}
	} while (1);

	system("pause");
	return 0;
}