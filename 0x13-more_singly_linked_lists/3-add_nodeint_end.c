#include "lists.h"

/**
 * createNode - fucntion to create node
 * @data: the data of the node
 * Return: pointer to the new node
 */
listint_t *createNode(int data)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = data;
	newnode->next = NULL;

	return (newnode);
}

/**
 * add_nodeint_end - function to add node at the begining
 * @head: the node
 * @n: the data
 * Return: pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mynode = createNode(n);

	if (mynode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = mynode;
	}
	else
	{
		listint_t *currentNode = *head;

		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = mynode;
	}
	return (mynode);
}
