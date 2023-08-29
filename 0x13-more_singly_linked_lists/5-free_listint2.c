#include "lists.h"

/**
 * free_listint2 - function to free nodes in list
 * @head: the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
