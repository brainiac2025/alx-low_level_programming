#include "lists.h"

/**
 * free_listint - function to free nodes in list
 * @head: the node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
