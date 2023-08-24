#include "lists.h"

/**
 * free_list - function to free nodes
 * @head: the node
 * Return: void
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
