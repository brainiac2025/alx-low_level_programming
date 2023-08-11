#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function to simulate realloc
 * @ptr: the pointer to memory previously allocated
 * @old_size: old size of the previous memory
 * @new_size: the new size
 * Return:void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int size, i;
	char *tempNew, *tempOld;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	newptr = malloc(new_size);

	if (!newptr)
		return (NULL);
	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	tempNew = (char *)newptr;
	tempOld = (char *)ptr;

	for (i = 0; i < size; i++)
	{
		*((char *)(tempNew + i)) = *((char *)(tempOld + i));
	}
	free(ptr);
	return (newptr);
}
