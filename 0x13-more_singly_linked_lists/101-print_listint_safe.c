#include "lists.h"

/**
 * print_listint_safe - function that print all the element of a list
 * @head: the list
 * Return: the number if nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hare = head;
	const listint_t *tortoise = head;
	size_t count = 0;
	int result;

	while (hare != NULL && hare->next != NULL)
	{
		/* move the tortoise one step*/
		tortoise = tortoise->next;
		/* move the hare two steps*/
		hare = hare->next->next;

		/* if the hare catches up to the tortoise, there's a loop*/
		if (hare == tortoise)
			exit(98);
	}
	/* if no loop detected, print the list*/
	hare = head; /* reset hare to the begining*/

	while (hare != NULL)
	{
		result = printf("%d\n", hare->n);

		if (result < 0)
			exit(98);

		hare = hare->next;
		count++;
	}

	return (count);
}
