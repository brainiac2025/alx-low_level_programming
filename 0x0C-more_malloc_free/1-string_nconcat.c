#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - function to check len of string
 * @str: the string
 * Return: the length
 */
unsigned int str_len(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * n_less - to compute when n is lesser than s2_len
 * @s1: string first
 * @s2: string second
 * @s1_len: string 1
 * @newString: string 2
 * @n: number of byte
 * @index: index of byte
 * Return: pointer to new string
 */

void n_less(unsigned int s1_len, char *s1, char *s2, char *newString, unsigned
		int n, int index)
{
	unsigned int i;

	for (i = 0; i < s1_len; i++)
	{
		index++;
		newString[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		newString[index] = s2[i];
		index++;
	}
	newString[index] = '\0';
}

/**
 * string_nconcat - function to concatenate string
 * @s1: destination
 * @s2: source
 * @n: number of byte to copy
 * Return: copied string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, index, i;
	char *newString;

	s1_len = 0;
	s2_len = 0;

	if (s1 != NULL)
		s1_len = str_len(s1);

	if (s2 != NULL)
		s2_len = str_len(s2);

	if (n < s2_len)
	{
		index = 0;
		newString = malloc(s1_len + n + 1);
		if (newString == NULL)
			return (NULL);
		n_less(s1_len, s1, s2, newString, n, index);
	}
	else
	{
		index = 0;
		newString = malloc(s1_len + s2_len + 1);
		if (newString == NULL)
			return (NULL);
		for (i = 0; i < s1_len; i++)
		{
			index++;
			newString[i] = s1[i];
		}
		for (i = 0; i < s2_len; i++)
		{
			newString[index] = s2[i];
			index++;
		}
		newString[index] = '\0';
	}
	return (newString);
}
