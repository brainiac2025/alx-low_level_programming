#include <unistd.h>

/**
 * putchar - function to write to console
 * @chr: the character
 * Return: the write function
 */
int putchar(char chr)
{
	return (write(1, &chr, 1));
}
