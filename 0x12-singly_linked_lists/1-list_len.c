#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to print all the elements of a list_t list
 * @h: pointer the node pass
 * Return: the count of node
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
