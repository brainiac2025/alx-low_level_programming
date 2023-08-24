#include "lists.h"
/**
 * add_node_end - function to add node at the begining of a list
 * @head: head of the node
 * @str: string to be added
 * Return: pointer to the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (NULL);

	current->str = strdup(str);
	current->len = strlen(str);

	if (current->str == NULL)
		return (NULL);

	current->next = NULL;

	if (*head == NULL)
		*head = current;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = current;
	}
	return (current);
}
