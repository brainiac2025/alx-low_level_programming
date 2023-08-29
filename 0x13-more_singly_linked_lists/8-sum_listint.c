#include "lists.h"

/**
 * sum_listint - function that return the number of elements in a linked
 * @head: the node
 * Return: sum of data in the node
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
