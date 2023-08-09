#include <stdio.h>
#include <stdlib.h>

/**
 * space - check for space
 * @str: the string
 * Return: if contain space
 */
int space(char *str)
{
	int is_space, i;

	is_space = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			is_space = 0;
			break;
		}
	}
	return (is_space);
}
/**
 * len - get the length of the array
 * @str: the string
 * Return: the length of the string
 */
int len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * wordl - calculate wordlength
 * @str: the string
 * Return: the wordlength
 */
int wordl(char *str)
{
	int length, wordlen, i;

	wordlen = 0;
	length = len(str);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ')
		{
			wordlen++;
		}
	}
	wordlen++;
	return (wordlen);
}
/**
 * split - split the string
 * @str: the string
 * @wordlen: the wordlen
 * @length: length of the total string
 * @newStr: pointer to array
 * Return: void
 */
char **split(char *str, int wordlen, int length, char **newStr)
{
	int i, j, index, numlen, wordstart, nextedspace;

	index = 0;
	nextedspace = 1;
	for (i = 0; i < wordlen; i++)
	{
		numlen = 0;
		nextedspace = 1;
		while ((index < length) && (str[index] == ' '))
		{
			index++;
			nextedspace = 1;
		}

		wordstart = index;

		while ((index < length) && (str[index] != ' '))
		{
			nextedspace = 0;
			index++;
			numlen++;
		}

		if (nextedspace)
			continue;

		newStr[i] = malloc(sizeof(char) * (numlen + 1));

		if (newStr[i] == NULL)
			return (NULL);

		for (j = 0; j < numlen; j++)
		{
			newStr[i][j] = str[wordstart + j];
		}
		newStr[i][numlen] = '\0';
	}
	newStr[i] = NULL;
	return (newStr);
}

/**
 * strtow - function that splits a string into words
 * @str: the string to split
 * Return: pointer to the string
 */
char **strtow(char *str)
{
	int wordlen, length;
	char **newStr;

	length = len(str);
	wordlen = wordl(str);

	if (space(str))
		return (NULL);

	newStr = malloc(sizeof(char *) * wordlen);
	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	return (split(str, wordlen, length, newStr));
}
