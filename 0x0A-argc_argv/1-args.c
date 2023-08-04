#include <stdio.h>

/**
 * main - function to print number of argument pass
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)),
		char *argv[] __attribute__((unused)))
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
