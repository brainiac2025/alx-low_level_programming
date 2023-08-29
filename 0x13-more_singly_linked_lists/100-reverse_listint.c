#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: the node to reverse
 * Return: pointer to the reverse node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
