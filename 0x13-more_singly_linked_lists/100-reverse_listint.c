#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: the node to reverse
 * Return: pointer to the reverse node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		listint_t *temp = current->next;

		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;
	return (prev);
}
