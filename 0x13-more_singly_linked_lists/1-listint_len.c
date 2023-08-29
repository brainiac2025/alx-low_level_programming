#include "lists.h"

/**
 * listint_len - function that return the number of elements in a linked
 * @h: the node
 * Return: number of node in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
