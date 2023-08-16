#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function as a parameter
 * @array: the array
 * @size: size of array
 * @action: the function pass
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
