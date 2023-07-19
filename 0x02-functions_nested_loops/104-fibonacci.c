#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 2;
	while (a <= 100)
	{
		printf("%d", a);
		c = a + b;
		a = b;
		b = c;
		if (a <= 100)
			printf(", ");
	}
	printf("\n");
	return (0);
}
