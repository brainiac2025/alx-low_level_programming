#include "main.h"

/**
 * getlen - function to get length of string
 * @chr: the string
 * Return: the length
 */
unsigned int getlen(const char *chr)
{
	unsigned int index = 0;

	while (chr[index] != '\0')
	{
		index++;
	}
	return (index);
}
/**
 * binary_to_uint - function that convert binary number to an unsigned int
 * @b: pointer to the charcter as number
 * Return: the equivalent decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int myDecimal = 0;
	int index;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		myDecimal = 2 * myDecimal + (b[index] - '0');
	}

	return (myDecimal);
}


