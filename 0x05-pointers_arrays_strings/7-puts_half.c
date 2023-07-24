#include "main.h"

/**
 * puts_half - function to print the last half of a string
 * @str: argument pass
 * Return: void
 */
void puts_half(char *str)
{
	int n, count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	str -= count;
	n = (count - 1) / 2;

	while (count > n)
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
