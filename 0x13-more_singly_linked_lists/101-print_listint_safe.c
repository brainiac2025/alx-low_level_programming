#include "lists.h"

/**
 * looped_listint_len - function that print all the element of a list
 * @head: the list
 * Return: the number if nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hare;
	const listint_t *tortoise;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
			}
			return (count);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

