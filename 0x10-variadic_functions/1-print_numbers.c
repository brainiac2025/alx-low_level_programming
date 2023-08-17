#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers followed by new line
 * @separator: seperator after number
 * @n: number of argument
 * Return: all number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list argument;

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(argument, unsigned int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
