#include "main.h"
/**
 * ischeck- function to check for digit
 * @c: argument
 * Return: 1 for success 0 otherwise
 */
int ischeck(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
/**
 * _atoi - function that convert string to an integer
 * @s: argument
 * Return: result
 */
int _atoi(char *s)
{
	int sign;
	int output;
	int index;
	int number;

	sign = 1;
	number = 0;
	output = 0;
	index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index = 1;
	}
	else if (s[0] == '+')
	{
		index = 1;
	}

	while (s[index] != '\0')
	{
		if (ischeck(s[index]))
		{
			output = output * 10 + (s[index] - '0');
			number = 1;
			index++;
		}
		else
		{
			if (number)
			{
				return (output * sign);
				number = 0;
			}
			index++;
		}
	}
	return (output * sign);
}
