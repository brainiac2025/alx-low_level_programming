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

	index = 0;
	while (*src != '\0')
	{
		dest[index] = *src;
		src++;
		index++;
	}
	dest[index++]= '\0';
	return (dest);
}
