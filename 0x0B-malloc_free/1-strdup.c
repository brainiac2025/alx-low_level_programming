#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that return pointer to a newly allocated
 * space in memory
 * @str: the string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int index, len;
	char *newStr;

	index = 0;
	if (!str)
		return ('\0');

	while (str[index] != '\0')
	{
		len++;
		index++;
	}
	index = 0;
	newStr = (char *)malloc((len + 1) * sizeof(char));

	if (!newStr)
		return ('\0');

	while (str[index] != '\0')
	{
		newStr[index] = str[index];
		index++;
	}
	return (newStr);
	free(newStr);
}
