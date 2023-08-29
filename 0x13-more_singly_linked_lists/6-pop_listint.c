#include "lists.h"

/**
 * pop_listint - function to pop node from list
 * @head: the node
 * Return: the node data and
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
