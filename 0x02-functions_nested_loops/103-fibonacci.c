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
	b = 1;
	while (b <= 100)
	{
		printf("%d ,", b);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
