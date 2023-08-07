#include <stdio.h>
#include <stdlib.h>

/**
 * len - function that check length
 * @str: the string to return the length
 * Return: the len
 */
int len(char *str)
{
	int index, len;

	index = 0;
	while (str[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * str_concat - function that return pointer to a newly allocated
 * space in memory of a concatenated string
 * @s1: the first string
 * @s2: second string
 * Return: pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	int index, len1, len2, count;
	char *newStr;

	len1 = len(s1);
	len2 = len(s2);
	count = 0;
	index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newStr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (!newStr)
		return ('\0');

	while (s1[index] != '\0')
	{
		newStr[index] = s1[index];
		index++;
	}
	while (s2[count] != '\0')
	{
		newStr[index] = s2[count];
		count++;
		index++;
	}
	newStr[index] = '\0';
	return (newStr);
	free(newStr);
}
