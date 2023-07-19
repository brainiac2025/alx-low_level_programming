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
	int sum;

	a = 1;
	b = 1;
	sum = 0;
	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
