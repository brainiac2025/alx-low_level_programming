#include "main.h"
/**
 * _strlen - function that return the size of a string
 * @s: take a single argument
 * Return: the length of argument passed
 */
int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}
