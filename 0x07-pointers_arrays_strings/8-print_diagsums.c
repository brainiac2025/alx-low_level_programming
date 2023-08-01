#include <stdio.h>
/**
 * print_diagsums - function to print diagonal of sum
 * @a: point to array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	long firstdiag, secondiag;
	int i;

	firstdiag = 0;
	secondiag = 0;
	i = 0;
	while (i < size)
	{
		firstdiag += a[i * size + i];
		secondiag += a[(i + 1) * size - (i + 1)];
		i++;
	}
	printf("%ld, %ld\n", firstdiag, secondiag);
}
