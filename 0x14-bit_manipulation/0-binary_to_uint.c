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
	unsigned int base = 1;
	int binarylen = getlen(b) - 1;

	if (b == NULL)
		return (0);
	while (binarylen >= 0)
	{
		if (b[binarylen] == '1')
		{
			myDecimal += base;
		}
		if (b[binarylen] != '1' && b[binarylen] != '0')
			return (0);
		binarylen--;
		base *= 2;
	}
	return (myDecimal);
}

