#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable to allocate memory for
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
