#include "main.h"

/**
 * _puts - function to print
 * @str: the string to print
 * Return: the string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
