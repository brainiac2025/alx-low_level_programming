#include <unistd.h>

/**
 * _putchar - print function
 *
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
