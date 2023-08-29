#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete node at a given index
 * @head: the node to be pass
 * @index: the index to find for deletion
 * Return: 1 if its success -1 otherwiser
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);


	while (temp != NULL)
	{
		if (count == index)
		{
			if (previous == NULL)
				*head = temp->next;
			else
				previous->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		previous = temp;
		temp = temp->next;
	}
	return (-1);
}
