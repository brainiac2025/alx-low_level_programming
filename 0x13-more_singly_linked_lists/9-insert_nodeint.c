#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert node at a given index
 * @head: the node to be pass
 * @idx: the index to find for insertion
 * @n: the data to insert
 * Return: the index or NULL if not found
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *previous = NULL;

	if (idx == 0)
	{
		listint_t *newNode = createNode(n);

		if (newNode == NULL)
			return (NULL);
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}


	while (temp != NULL)
	{
		if (count == idx)
		{
			listint_t *newNode = createNode(n);

			if (newNode == NULL)
				return (NULL);
			newNode->next = temp;
			previous->next = newNode;
			return (newNode);
		}
		count++;
		previous = temp;
		temp = temp->next;
	}
	return (NULL);
}
