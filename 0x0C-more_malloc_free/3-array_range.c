#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function to allocate memory to array using malloc style
 * @min: minimum to print to
 * @max: maximum to print to
 * Return: memory range
 */
void *array_range(int min, int max)
{
	int i, total;
	int *memory;

	total = (max - min) + 1;
	if (min > max)
		return (NULL);

	memory = malloc(sizeof(int) * total);

	if (memory == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		*((int *)(memory + (i - min))) = i;
	}
	return (memory);
}
