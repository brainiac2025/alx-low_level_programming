#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print array
 * @a: parameter first
 * @n: second parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count <= n - 1)
	{
		printf("%d", a[count]);
		count++;
		if (count < n)
			printf(", ");
	}
	printf("\n");
}
