#include<stdio.h>

int main()
{
	int p = 1, a, b = 0, s, c = 0, x = 0;

	printf("a="); scanf("%d", &a);
	b = a;
	while (a)
	{
		c = c + b;
		a--;
	}

	while (c)
	{
		x = x + p * (c % 2);
		c = c / 2;
		p = p * 10;
	}
	printf("%d", x);


	return 0;

}