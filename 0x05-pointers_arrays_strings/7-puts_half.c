#include "main.h"

/**
 * puts_half - function to print the last half of a string
 * @str: argument pass
 * Return: void
 */
void puts_half(char *str)
{
	int count;
	char *start = str;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	str = start + (count - 1) / 2 + 1;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
