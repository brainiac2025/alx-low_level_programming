#include "main.h"
/**
 * _puts - function to prints string followed by a new line
 * @str: argument taken
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
