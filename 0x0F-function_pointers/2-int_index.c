#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function that was pass
 * Return: the index of the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
