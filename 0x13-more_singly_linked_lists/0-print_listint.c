#include "lists.h"

/**
 * print_listint - function that print all the element of a list
 * @h: the list
 * Return: the number if nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
