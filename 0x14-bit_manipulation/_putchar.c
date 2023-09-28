#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function to write to console
 * @chr: the character
 * Return: the write function
 */
int _putchar(char chr)
{
	return (write(1, &chr, 1));
}

