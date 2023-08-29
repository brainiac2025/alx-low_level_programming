#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the new node where the loops starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp = head;

	if (!head)
		return (NULL);
	while (current && temp && temp->next)
	{
		temp = temp->next->next;
		current = current->next;
		if (temp == current)
		{
			current = head;
			while (current != temp)
			{
				current = current->next;
				temp = temp->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
