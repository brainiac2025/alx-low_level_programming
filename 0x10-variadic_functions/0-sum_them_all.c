#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum number of argument pass
 * @n: number of argument
 * Return: the sumof all argument
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result, i;
	va_list argument;

	result = 0;
	if (n == 0)
		return (0);

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(argument, unsigned int);
	}

	va_end(argument);

	return (result);
}
