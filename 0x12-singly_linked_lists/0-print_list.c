#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all the elements of a list_t list
 * @h: pointer the node pass
 * Return: the count of node
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
