#include <unistd.h>

/**
 * _putchar - Function that write character
 * * output by passing the addrees of variable pass as argument
 * @output: parameter for the function
 * Return: 0 for success other number for fail
 */
int _putchar(char output)
{
	return (write(1, &output, 1));
}
