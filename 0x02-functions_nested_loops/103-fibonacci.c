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
	int count;

	a = 1;
	b = 1;
	count = 1;
	while (count <= 100)
	{
		printf("%d", b);
		c = a + b;
		a = b;
		b = c;
		count++;
		if (count != 100)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
