#include "main.h"
/**
 * _strcpy - function to copy string to destination
 * @dest: destination argument
 * @src: source argument
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	char *newDest;
	
	*newDest = dest;
	index = 0;
	while (*src)
	{
		dest[index] = *src;
		src++;
		index++;
	}
	*dest = '\0';
	return (newDest);
}
