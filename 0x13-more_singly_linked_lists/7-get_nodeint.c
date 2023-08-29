#include "lists.h"

/**
 * get_nodeint_at_index - function to return the node at particular index
 * @head: the node to be pass
 * @index: the index to find
 * Return: the index or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
