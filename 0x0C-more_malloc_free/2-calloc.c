#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function to allocate memory to array using malloc style
 * @nmemb: parameter to calculate size
 * @size: sze
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	void *memory;
	char *changeM;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(total);

	if (memory == NULL)
		return (NULL);
	changeM = (char *)memory;

	for (i = 0; i < total; i++)
	{
		*((char *)(changeM + i)) = 0;
	}
	return (memory);
}

